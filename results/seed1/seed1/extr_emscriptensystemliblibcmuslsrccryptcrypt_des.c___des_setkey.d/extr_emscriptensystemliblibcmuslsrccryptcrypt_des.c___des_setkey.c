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
struct expanded_key {int* l; int* r; } ;

/* Variables and functions */
 int** comp_maskl0 ; 
 int** comp_maskl1 ; 
 int** comp_maskr0 ; 
 int** comp_maskr1 ; 
 int** key_perm_maskl ; 
 int** key_perm_maskr ; 
 scalar_t__* key_shifts ; 

void __des_setkey(const unsigned char *key, struct expanded_key *ekey)
{
	uint32_t k0, k1, rawkey0, rawkey1;
	unsigned int shifts, round, i, ibit;

	rawkey0 =
	    (uint32_t)key[3] |
	    ((uint32_t)key[2] << 8) |
	    ((uint32_t)key[1] << 16) |
	    ((uint32_t)key[0] << 24);
	rawkey1 =
	    (uint32_t)key[7] |
	    ((uint32_t)key[6] << 8) |
	    ((uint32_t)key[5] << 16) |
	    ((uint32_t)key[4] << 24);

	/*
	 * Do key permutation and split into two 28-bit subkeys.
	 */
	k0 = k1 = 0;
	for (i = 0, ibit = 28; i < 4; i++, ibit -= 4) {
		unsigned int j = i << 1;
		k0 |= key_perm_maskl[i][(rawkey0 >> ibit) & 0xf] |
		      key_perm_maskl[i + 4][(rawkey1 >> ibit) & 0xf];
		k1 |= key_perm_maskr[j][(rawkey0 >> ibit) & 0xf];
		ibit -= 4;
		k1 |= key_perm_maskr[j + 1][(rawkey0 >> ibit) & 0xf] |
		      key_perm_maskr[i + 8][(rawkey1 >> ibit) & 0xf];
	}

	/*
	 * Rotate subkeys and do compression permutation.
	 */
	shifts = 0;
	for (round = 0; round < 16; round++) {
		uint32_t t0, t1;
		uint32_t kl, kr;

		shifts += key_shifts[round];

		t0 = (k0 << shifts) | (k0 >> (28 - shifts));
		t1 = (k1 << shifts) | (k1 >> (28 - shifts));

		kl = kr = 0;
		ibit = 25;
		for (i = 0; i < 4; i++) {
			kl |= comp_maskl0[i][(t0 >> ibit) & 7];
			kr |= comp_maskr0[i][(t1 >> ibit) & 7];
			ibit -= 4;
			kl |= comp_maskl1[i][(t0 >> ibit) & 0xf];
			kr |= comp_maskr1[i][(t1 >> ibit) & 0xf];
			ibit -= 3;
		}
		ekey->l[round] = kl;
		ekey->r[round] = kr;
	}
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
          const unsigned char * key = (const unsigned char *) malloc(_len_key0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ekey0 = 1;
          struct expanded_key * ekey = (struct expanded_key *) malloc(_len_ekey0*sizeof(struct expanded_key));
          for(int _i0 = 0; _i0 < _len_ekey0; _i0++) {
              int _len_ekey__i0__l0 = 1;
          ekey[_i0].l = (int *) malloc(_len_ekey__i0__l0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ekey__i0__l0; _j0++) {
            ekey[_i0].l[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ekey__i0__r0 = 1;
          ekey[_i0].r = (int *) malloc(_len_ekey__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ekey__i0__r0; _j0++) {
            ekey[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          __des_setkey(key,ekey);
          free(key);
          for(int _aux = 0; _aux < _len_ekey0; _aux++) {
          free(ekey[_aux].l);
          }
          for(int _aux = 0; _aux < _len_ekey0; _aux++) {
          free(ekey[_aux].r);
          }
          free(ekey);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_key0 = 65025;
          const unsigned char * key = (const unsigned char *) malloc(_len_key0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ekey0 = 65025;
          struct expanded_key * ekey = (struct expanded_key *) malloc(_len_ekey0*sizeof(struct expanded_key));
          for(int _i0 = 0; _i0 < _len_ekey0; _i0++) {
              int _len_ekey__i0__l0 = 1;
          ekey[_i0].l = (int *) malloc(_len_ekey__i0__l0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ekey__i0__l0; _j0++) {
            ekey[_i0].l[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ekey__i0__r0 = 1;
          ekey[_i0].r = (int *) malloc(_len_ekey__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ekey__i0__r0; _j0++) {
            ekey[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          __des_setkey(key,ekey);
          free(key);
          for(int _aux = 0; _aux < _len_ekey0; _aux++) {
          free(ekey[_aux].l);
          }
          for(int _aux = 0; _aux < _len_ekey0; _aux++) {
          free(ekey[_aux].r);
          }
          free(ekey);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_key0 = 100;
          const unsigned char * key = (const unsigned char *) malloc(_len_key0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ekey0 = 100;
          struct expanded_key * ekey = (struct expanded_key *) malloc(_len_ekey0*sizeof(struct expanded_key));
          for(int _i0 = 0; _i0 < _len_ekey0; _i0++) {
              int _len_ekey__i0__l0 = 1;
          ekey[_i0].l = (int *) malloc(_len_ekey__i0__l0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ekey__i0__l0; _j0++) {
            ekey[_i0].l[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ekey__i0__r0 = 1;
          ekey[_i0].r = (int *) malloc(_len_ekey__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ekey__i0__r0; _j0++) {
            ekey[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          __des_setkey(key,ekey);
          free(key);
          for(int _aux = 0; _aux < _len_ekey0; _aux++) {
          free(ekey[_aux].l);
          }
          for(int _aux = 0; _aux < _len_ekey0; _aux++) {
          free(ekey[_aux].r);
          }
          free(ekey);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
