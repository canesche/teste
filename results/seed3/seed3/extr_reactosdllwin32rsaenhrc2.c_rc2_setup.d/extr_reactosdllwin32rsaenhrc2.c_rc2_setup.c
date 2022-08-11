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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned int* xkey; } ;
typedef  TYPE_1__ rc2_key ;

/* Variables and functions */
 int CRYPT_INVALID_KEYSIZE ; 
 int CRYPT_INVALID_ROUNDS ; 
 int CRYPT_OK ; 
 unsigned char* permute ; 

int rc2_setup(const unsigned char *key, int keylen, int bits, int rounds, rc2_key *rc2)
{
   unsigned *xkey = rc2->xkey;
   unsigned char tmp[128];
   unsigned T8, TM;
   int i;

   if (keylen < 5 || keylen > 128) {
      return CRYPT_INVALID_KEYSIZE;
   }

   if (rounds != 0 && rounds != 16) {
      return CRYPT_INVALID_ROUNDS;
   }

    /* Following comment is from Eric Young's rc2 code: */
    /* It has come to my attention that there are 2 versions of the RC2
     * key schedule.  One which is normal, and anther which has a hook to
     * use a reduced key length.
     * BSAFE uses the 'retarded' version.  What I previously shipped is
     * the same as specifying 1024 for the 'bits' parameter.  BSAFE uses
     * a version where the bits parameter is the same as len*8 */
    /* Seems like MS uses the 'retarded' version, too.
     * Adjust effective keylen bits */
   if (bits <= 0) bits = keylen << 3;
   if (bits > 1024) bits = 1024;
   
   for (i = 0; i < keylen; i++) {
       tmp[i] = key[i] & 255;
   }

    /* Phase 1: Expand input key to 128 bytes */
    if (keylen < 128) {
        for (i = keylen; i < 128; i++) {
            tmp[i] = permute[(tmp[i - 1] + tmp[i - keylen]) & 255];
        }
    }
    
    /* Phase 2 - reduce effective key size to "bits" */
    /*bits = keylen<<3; */
    T8   = (unsigned)(bits+7)>>3;
    TM   = (255 >> (unsigned)(7 & -bits));
    tmp[128 - T8] = permute[tmp[128 - T8] & TM];
    for (i = 127 - T8; i >= 0; i--) {
        tmp[i] = permute[tmp[i + 1] ^ tmp[i + T8]];
    }

    /* Phase 3 - copy to xkey in little-endian order */
    for (i = 0; i < 64; i++) {
        xkey[i] =  (unsigned)tmp[2*i] + ((unsigned)tmp[2*i+1] << 8);
    }        

    return CRYPT_OK;
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
          int keylen = 100;
          int bits = 100;
          int rounds = 100;
          int _len_key0 = 1;
          const unsigned char * key = (const unsigned char *) malloc(_len_key0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc20 = 1;
          struct TYPE_3__ * rc2 = (struct TYPE_3__ *) malloc(_len_rc20*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc20; _i0++) {
              int _len_rc2__i0__xkey0 = 1;
          rc2[_i0].xkey = (unsigned int *) malloc(_len_rc2__i0__xkey0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_rc2__i0__xkey0; _j0++) {
            rc2[_i0].xkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rc2_setup(key,keylen,bits,rounds,rc2);
          printf("%d\n", benchRet); 
          free(key);
          for(int _aux = 0; _aux < _len_rc20; _aux++) {
          free(rc2[_aux].xkey);
          }
          free(rc2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int keylen = 255;
          int bits = 255;
          int rounds = 255;
          int _len_key0 = 65025;
          const unsigned char * key = (const unsigned char *) malloc(_len_key0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc20 = 65025;
          struct TYPE_3__ * rc2 = (struct TYPE_3__ *) malloc(_len_rc20*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc20; _i0++) {
              int _len_rc2__i0__xkey0 = 1;
          rc2[_i0].xkey = (unsigned int *) malloc(_len_rc2__i0__xkey0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_rc2__i0__xkey0; _j0++) {
            rc2[_i0].xkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rc2_setup(key,keylen,bits,rounds,rc2);
          printf("%d\n", benchRet); 
          free(key);
          for(int _aux = 0; _aux < _len_rc20; _aux++) {
          free(rc2[_aux].xkey);
          }
          free(rc2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int keylen = 10;
          int bits = 10;
          int rounds = 10;
          int _len_key0 = 100;
          const unsigned char * key = (const unsigned char *) malloc(_len_key0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc20 = 100;
          struct TYPE_3__ * rc2 = (struct TYPE_3__ *) malloc(_len_rc20*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc20; _i0++) {
              int _len_rc2__i0__xkey0 = 1;
          rc2[_i0].xkey = (unsigned int *) malloc(_len_rc2__i0__xkey0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_rc2__i0__xkey0; _j0++) {
            rc2[_i0].xkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rc2_setup(key,keylen,bits,rounds,rc2);
          printf("%d\n", benchRet); 
          free(key);
          for(int _aux = 0; _aux < _len_rc20; _aux++) {
          free(rc2[_aux].xkey);
          }
          free(rc2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
