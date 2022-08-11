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
struct TYPE_3__ {unsigned char* chksum; unsigned char* buf; } ;
typedef  TYPE_1__ md2_state ;

/* Variables and functions */
 int* PI_SUBST ; 

__attribute__((used)) static void md2_update_chksum(md2_state *md2)
{
   int j;
   unsigned char L;
   L = md2->chksum[15];
   for (j = 0; j < 16; j++) {

/* caution, the RFC says its "C[j] = S[M[i*16+j] xor L]" but the reference source code [and test vectors] say 
   otherwise.
*/
       L = (md2->chksum[j] ^= PI_SUBST[(int)(md2->buf[j] ^ L)] & 255);
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
          int _len_md20 = 1;
          struct TYPE_3__ * md2 = (struct TYPE_3__ *) malloc(_len_md20*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_md20; _i0++) {
              int _len_md2__i0__chksum0 = 1;
          md2[_i0].chksum = (unsigned char *) malloc(_len_md2__i0__chksum0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_md2__i0__chksum0; _j0++) {
            md2[_i0].chksum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_md2__i0__buf0 = 1;
          md2[_i0].buf = (unsigned char *) malloc(_len_md2__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_md2__i0__buf0; _j0++) {
            md2[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          md2_update_chksum(md2);
          for(int _aux = 0; _aux < _len_md20; _aux++) {
          free(md2[_aux].chksum);
          }
          for(int _aux = 0; _aux < _len_md20; _aux++) {
          free(md2[_aux].buf);
          }
          free(md2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_md20 = 65025;
          struct TYPE_3__ * md2 = (struct TYPE_3__ *) malloc(_len_md20*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_md20; _i0++) {
              int _len_md2__i0__chksum0 = 1;
          md2[_i0].chksum = (unsigned char *) malloc(_len_md2__i0__chksum0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_md2__i0__chksum0; _j0++) {
            md2[_i0].chksum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_md2__i0__buf0 = 1;
          md2[_i0].buf = (unsigned char *) malloc(_len_md2__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_md2__i0__buf0; _j0++) {
            md2[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          md2_update_chksum(md2);
          for(int _aux = 0; _aux < _len_md20; _aux++) {
          free(md2[_aux].chksum);
          }
          for(int _aux = 0; _aux < _len_md20; _aux++) {
          free(md2[_aux].buf);
          }
          free(md2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_md20 = 100;
          struct TYPE_3__ * md2 = (struct TYPE_3__ *) malloc(_len_md20*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_md20; _i0++) {
              int _len_md2__i0__chksum0 = 1;
          md2[_i0].chksum = (unsigned char *) malloc(_len_md2__i0__chksum0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_md2__i0__chksum0; _j0++) {
            md2[_i0].chksum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_md2__i0__buf0 = 1;
          md2[_i0].buf = (unsigned char *) malloc(_len_md2__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_md2__i0__buf0; _j0++) {
            md2[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          md2_update_chksum(md2);
          for(int _aux = 0; _aux < _len_md20; _aux++) {
          free(md2[_aux].chksum);
          }
          for(int _aux = 0; _aux < _len_md20; _aux++) {
          free(md2[_aux].buf);
          }
          free(md2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
