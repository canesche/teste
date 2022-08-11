// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int uint32_t ;
struct php_crypt_extended_data {int* en_keysl; int* en_keysr; int* de_keysl; int* de_keysr; int saltbits; } ;

/* Variables and functions */
 int** fp_maskl ; 
 int** fp_maskr ; 
 int** ip_maskl ; 
 int** ip_maskr ; 
 size_t** m_sbox ; 
 int** psbox ; 

__attribute__((used)) static int
do_des(uint32_t l_in, uint32_t r_in, uint32_t *l_out, uint32_t *r_out,
	int count, struct php_crypt_extended_data *data)
{
	/*
	 *	l_in, r_in, l_out, and r_out are in pseudo-"big-endian" format.
	 */
	uint32_t	l, r, *kl, *kr, *kl1, *kr1;
	uint32_t	f, r48l, r48r, saltbits;
	int	round;

	if (count == 0) {
		return(1);
	} else if (count > 0) {
		/*
		 * Encrypting
		 */
		kl1 = data->en_keysl;
		kr1 = data->en_keysr;
	} else {
		/*
		 * Decrypting
		 */
		count = -count;
		kl1 = data->de_keysl;
		kr1 = data->de_keysr;
	}

	/*
	 *	Do initial permutation (IP).
	 */
	l = ip_maskl[0][l_in >> 24]
	  | ip_maskl[1][(l_in >> 16) & 0xff]
	  | ip_maskl[2][(l_in >> 8) & 0xff]
	  | ip_maskl[3][l_in & 0xff]
	  | ip_maskl[4][r_in >> 24]
	  | ip_maskl[5][(r_in >> 16) & 0xff]
	  | ip_maskl[6][(r_in >> 8) & 0xff]
	  | ip_maskl[7][r_in & 0xff];
	r = ip_maskr[0][l_in >> 24]
	  | ip_maskr[1][(l_in >> 16) & 0xff]
	  | ip_maskr[2][(l_in >> 8) & 0xff]
	  | ip_maskr[3][l_in & 0xff]
	  | ip_maskr[4][r_in >> 24]
	  | ip_maskr[5][(r_in >> 16) & 0xff]
	  | ip_maskr[6][(r_in >> 8) & 0xff]
	  | ip_maskr[7][r_in & 0xff];

	saltbits = data->saltbits;
	while (count--) {
		/*
		 * Do each round.
		 */
		kl = kl1;
		kr = kr1;
		round = 16;
		while (round--) {
			/*
			 * Expand R to 48 bits (simulate the E-box).
			 */
			r48l	= ((r & 0x00000001) << 23)
				| ((r & 0xf8000000) >> 9)
				| ((r & 0x1f800000) >> 11)
				| ((r & 0x01f80000) >> 13)
				| ((r & 0x001f8000) >> 15);

			r48r	= ((r & 0x0001f800) << 7)
				| ((r & 0x00001f80) << 5)
				| ((r & 0x000001f8) << 3)
				| ((r & 0x0000001f) << 1)
				| ((r & 0x80000000) >> 31);
			/*
			 * Do salting for crypt() and friends, and
			 * XOR with the permuted key.
			 */
			f = (r48l ^ r48r) & saltbits;
			r48l ^= f ^ *kl++;
			r48r ^= f ^ *kr++;
			/*
			 * Do sbox lookups (which shrink it back to 32 bits)
			 * and do the pbox permutation at the same time.
			 */
			f = psbox[0][m_sbox[0][r48l >> 12]]
			  | psbox[1][m_sbox[1][r48l & 0xfff]]
			  | psbox[2][m_sbox[2][r48r >> 12]]
			  | psbox[3][m_sbox[3][r48r & 0xfff]];
			/*
			 * Now that we've permuted things, complete f().
			 */
			f ^= l;
			l = r;
			r = f;
		}
		r = l;
		l = f;
	}
	/*
	 * Do final permutation (inverse of IP).
	 */
	*l_out	= fp_maskl[0][l >> 24]
		| fp_maskl[1][(l >> 16) & 0xff]
		| fp_maskl[2][(l >> 8) & 0xff]
		| fp_maskl[3][l & 0xff]
		| fp_maskl[4][r >> 24]
		| fp_maskl[5][(r >> 16) & 0xff]
		| fp_maskl[6][(r >> 8) & 0xff]
		| fp_maskl[7][r & 0xff];
	*r_out	= fp_maskr[0][l >> 24]
		| fp_maskr[1][(l >> 16) & 0xff]
		| fp_maskr[2][(l >> 8) & 0xff]
		| fp_maskr[3][l & 0xff]
		| fp_maskr[4][r >> 24]
		| fp_maskr[5][(r >> 16) & 0xff]
		| fp_maskr[6][(r >> 8) & 0xff]
		| fp_maskr[7][r & 0xff];
	return(0);
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int l_in = 100;
          int r_in = 100;
          int count = 100;
          int _len_l_out0 = 1;
          int * l_out = (int *) malloc(_len_l_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_l_out0; _i0++) {
            l_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_out0 = 1;
          int * r_out = (int *) malloc(_len_r_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r_out0; _i0++) {
            r_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct php_crypt_extended_data * data = (struct php_crypt_extended_data *) malloc(_len_data0*sizeof(struct php_crypt_extended_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__en_keysl0 = 1;
          data[_i0].en_keysl = (int *) malloc(_len_data__i0__en_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysl0; _j0++) {
            data[_i0].en_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__en_keysr0 = 1;
          data[_i0].en_keysr = (int *) malloc(_len_data__i0__en_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysr0; _j0++) {
            data[_i0].en_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__de_keysl0 = 1;
          data[_i0].de_keysl = (int *) malloc(_len_data__i0__de_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysl0; _j0++) {
            data[_i0].de_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__de_keysr0 = 1;
          data[_i0].de_keysr = (int *) malloc(_len_data__i0__de_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysr0; _j0++) {
            data[_i0].de_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        data[_i0].saltbits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = do_des(l_in,r_in,l_out,r_out,count,data);
          printf("%d\n", benchRet); 
          free(l_out);
          free(r_out);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysr);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysr);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int l_in = 255;
          int r_in = 255;
          int count = 255;
          int _len_l_out0 = 65025;
          int * l_out = (int *) malloc(_len_l_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_l_out0; _i0++) {
            l_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_out0 = 65025;
          int * r_out = (int *) malloc(_len_r_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r_out0; _i0++) {
            r_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          struct php_crypt_extended_data * data = (struct php_crypt_extended_data *) malloc(_len_data0*sizeof(struct php_crypt_extended_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__en_keysl0 = 1;
          data[_i0].en_keysl = (int *) malloc(_len_data__i0__en_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysl0; _j0++) {
            data[_i0].en_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__en_keysr0 = 1;
          data[_i0].en_keysr = (int *) malloc(_len_data__i0__en_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysr0; _j0++) {
            data[_i0].en_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__de_keysl0 = 1;
          data[_i0].de_keysl = (int *) malloc(_len_data__i0__de_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysl0; _j0++) {
            data[_i0].de_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__de_keysr0 = 1;
          data[_i0].de_keysr = (int *) malloc(_len_data__i0__de_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysr0; _j0++) {
            data[_i0].de_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        data[_i0].saltbits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = do_des(l_in,r_in,l_out,r_out,count,data);
          printf("%d\n", benchRet); 
          free(l_out);
          free(r_out);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysr);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysr);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int l_in = 10;
          int r_in = 10;
          int count = 10;
          int _len_l_out0 = 100;
          int * l_out = (int *) malloc(_len_l_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_l_out0; _i0++) {
            l_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_out0 = 100;
          int * r_out = (int *) malloc(_len_r_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r_out0; _i0++) {
            r_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          struct php_crypt_extended_data * data = (struct php_crypt_extended_data *) malloc(_len_data0*sizeof(struct php_crypt_extended_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__en_keysl0 = 1;
          data[_i0].en_keysl = (int *) malloc(_len_data__i0__en_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysl0; _j0++) {
            data[_i0].en_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__en_keysr0 = 1;
          data[_i0].en_keysr = (int *) malloc(_len_data__i0__en_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysr0; _j0++) {
            data[_i0].en_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__de_keysl0 = 1;
          data[_i0].de_keysl = (int *) malloc(_len_data__i0__de_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysl0; _j0++) {
            data[_i0].de_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__de_keysr0 = 1;
          data[_i0].de_keysr = (int *) malloc(_len_data__i0__de_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysr0; _j0++) {
            data[_i0].de_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        data[_i0].saltbits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = do_des(l_in,r_in,l_out,r_out,count,data);
          printf("%d\n", benchRet); 
          free(l_out);
          free(r_out);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysr);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysr);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
