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
typedef  scalar_t__ u_char ;
struct php_crypt_extended_data {int old_rawkey0; int old_rawkey1; int* de_keysl; int* en_keysl; int* de_keysr; int* en_keysr; } ;

/* Variables and functions */
 int** comp_maskl ; 
 int** comp_maskr ; 
 int** key_perm_maskl ; 
 int** key_perm_maskr ; 
 scalar_t__* key_shifts ; 

__attribute__((used)) static int
des_setkey(const char *key, struct php_crypt_extended_data *data)
{
	uint32_t	k0, k1, rawkey0, rawkey1;
	int	shifts, round;

	rawkey0 =
		(uint32_t)(u_char)key[3] |
		((uint32_t)(u_char)key[2] << 8) |
		((uint32_t)(u_char)key[1] << 16) |
		((uint32_t)(u_char)key[0] << 24);
	rawkey1 =
		(uint32_t)(u_char)key[7] |
		((uint32_t)(u_char)key[6] << 8) |
		((uint32_t)(u_char)key[5] << 16) |
		((uint32_t)(u_char)key[4] << 24);

	if ((rawkey0 | rawkey1)
	    && rawkey0 == data->old_rawkey0
	    && rawkey1 == data->old_rawkey1) {
		/*
		 * Already setup for this key.
		 * This optimisation fails on a zero key (which is weak and
		 * has bad parity anyway) in order to simplify the starting
		 * conditions.
		 */
		return(0);
	}
	data->old_rawkey0 = rawkey0;
	data->old_rawkey1 = rawkey1;

	/*
	 *	Do key permutation and split into two 28-bit subkeys.
	 */
	k0 = key_perm_maskl[0][rawkey0 >> 25]
	   | key_perm_maskl[1][(rawkey0 >> 17) & 0x7f]
	   | key_perm_maskl[2][(rawkey0 >> 9) & 0x7f]
	   | key_perm_maskl[3][(rawkey0 >> 1) & 0x7f]
	   | key_perm_maskl[4][rawkey1 >> 25]
	   | key_perm_maskl[5][(rawkey1 >> 17) & 0x7f]
	   | key_perm_maskl[6][(rawkey1 >> 9) & 0x7f]
	   | key_perm_maskl[7][(rawkey1 >> 1) & 0x7f];
	k1 = key_perm_maskr[0][rawkey0 >> 25]
	   | key_perm_maskr[1][(rawkey0 >> 17) & 0x7f]
	   | key_perm_maskr[2][(rawkey0 >> 9) & 0x7f]
	   | key_perm_maskr[3][(rawkey0 >> 1) & 0x7f]
	   | key_perm_maskr[4][rawkey1 >> 25]
	   | key_perm_maskr[5][(rawkey1 >> 17) & 0x7f]
	   | key_perm_maskr[6][(rawkey1 >> 9) & 0x7f]
	   | key_perm_maskr[7][(rawkey1 >> 1) & 0x7f];
	/*
	 *	Rotate subkeys and do compression permutation.
	 */
	shifts = 0;
	for (round = 0; round < 16; round++) {
		uint32_t	t0, t1;

		shifts += key_shifts[round];

		t0 = (k0 << shifts) | (k0 >> (28 - shifts));
		t1 = (k1 << shifts) | (k1 >> (28 - shifts));

		data->de_keysl[15 - round] =
		data->en_keysl[round] = comp_maskl[0][(t0 >> 21) & 0x7f]
				| comp_maskl[1][(t0 >> 14) & 0x7f]
				| comp_maskl[2][(t0 >> 7) & 0x7f]
				| comp_maskl[3][t0 & 0x7f]
				| comp_maskl[4][(t1 >> 21) & 0x7f]
				| comp_maskl[5][(t1 >> 14) & 0x7f]
				| comp_maskl[6][(t1 >> 7) & 0x7f]
				| comp_maskl[7][t1 & 0x7f];

		data->de_keysr[15 - round] =
		data->en_keysr[round] = comp_maskr[0][(t0 >> 21) & 0x7f]
				| comp_maskr[1][(t0 >> 14) & 0x7f]
				| comp_maskr[2][(t0 >> 7) & 0x7f]
				| comp_maskr[3][t0 & 0x7f]
				| comp_maskr[4][(t1 >> 21) & 0x7f]
				| comp_maskr[5][(t1 >> 14) & 0x7f]
				| comp_maskr[6][(t1 >> 7) & 0x7f]
				| comp_maskr[7][t1 & 0x7f];
	}
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
          int _len_key0 = 1;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct php_crypt_extended_data * data = (struct php_crypt_extended_data *) malloc(_len_data0*sizeof(struct php_crypt_extended_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].old_rawkey0 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].old_rawkey1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__de_keysl0 = 1;
          data[_i0].de_keysl = (int *) malloc(_len_data__i0__de_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysl0; _j0++) {
            data[_i0].de_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__en_keysl0 = 1;
          data[_i0].en_keysl = (int *) malloc(_len_data__i0__en_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysl0; _j0++) {
            data[_i0].en_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__de_keysr0 = 1;
          data[_i0].de_keysr = (int *) malloc(_len_data__i0__de_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysr0; _j0++) {
            data[_i0].de_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__en_keysr0 = 1;
          data[_i0].en_keysr = (int *) malloc(_len_data__i0__en_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysr0; _j0++) {
            data[_i0].en_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = des_setkey(key,data);
          printf("%d\n", benchRet); 
          free(key);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysr);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysr);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_key0 = 65025;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          struct php_crypt_extended_data * data = (struct php_crypt_extended_data *) malloc(_len_data0*sizeof(struct php_crypt_extended_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].old_rawkey0 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].old_rawkey1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__de_keysl0 = 1;
          data[_i0].de_keysl = (int *) malloc(_len_data__i0__de_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysl0; _j0++) {
            data[_i0].de_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__en_keysl0 = 1;
          data[_i0].en_keysl = (int *) malloc(_len_data__i0__en_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysl0; _j0++) {
            data[_i0].en_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__de_keysr0 = 1;
          data[_i0].de_keysr = (int *) malloc(_len_data__i0__de_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysr0; _j0++) {
            data[_i0].de_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__en_keysr0 = 1;
          data[_i0].en_keysr = (int *) malloc(_len_data__i0__en_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysr0; _j0++) {
            data[_i0].en_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = des_setkey(key,data);
          printf("%d\n", benchRet); 
          free(key);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysr);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysr);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_key0 = 100;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          struct php_crypt_extended_data * data = (struct php_crypt_extended_data *) malloc(_len_data0*sizeof(struct php_crypt_extended_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].old_rawkey0 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].old_rawkey1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__de_keysl0 = 1;
          data[_i0].de_keysl = (int *) malloc(_len_data__i0__de_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysl0; _j0++) {
            data[_i0].de_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__en_keysl0 = 1;
          data[_i0].en_keysl = (int *) malloc(_len_data__i0__en_keysl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysl0; _j0++) {
            data[_i0].en_keysl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__de_keysr0 = 1;
          data[_i0].de_keysr = (int *) malloc(_len_data__i0__de_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__de_keysr0; _j0++) {
            data[_i0].de_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__en_keysr0 = 1;
          data[_i0].en_keysr = (int *) malloc(_len_data__i0__en_keysr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__en_keysr0; _j0++) {
            data[_i0].en_keysr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = des_setkey(key,data);
          printf("%d\n", benchRet); 
          free(key);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysl);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].de_keysr);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].en_keysr);
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
