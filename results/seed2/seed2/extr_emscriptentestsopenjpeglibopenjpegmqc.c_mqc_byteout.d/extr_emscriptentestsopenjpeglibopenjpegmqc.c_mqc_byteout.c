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
struct TYPE_3__ {int* bp; int c; int ct; } ;
typedef  TYPE_1__ opj_mqc_t ;

/* Variables and functions */

__attribute__((used)) static void mqc_byteout(opj_mqc_t *mqc) {
	if (*mqc->bp == 0xff) {
		mqc->bp++;
		*mqc->bp = mqc->c >> 20;
		mqc->c &= 0xfffff;
		mqc->ct = 7;
	} else {
		if ((mqc->c & 0x8000000) == 0) {	/* ((mqc->c&0x8000000)==0) CHANGE */
			mqc->bp++;
			*mqc->bp = mqc->c >> 19;
			mqc->c &= 0x7ffff;
			mqc->ct = 8;
		} else {
			(*mqc->bp)++;
			if (*mqc->bp == 0xff) {
				mqc->c &= 0x7ffffff;
				mqc->bp++;
				*mqc->bp = mqc->c >> 20;
				mqc->c &= 0xfffff;
				mqc->ct = 7;
			} else {
				mqc->bp++;
				*mqc->bp = mqc->c >> 19;
				mqc->c &= 0x7ffff;
				mqc->ct = 8;
			}
		}
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
          int _len_mqc0 = 1;
          struct TYPE_3__ * mqc = (struct TYPE_3__ *) malloc(_len_mqc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mqc0; _i0++) {
              int _len_mqc__i0__bp0 = 1;
          mqc[_i0].bp = (int *) malloc(_len_mqc__i0__bp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mqc__i0__bp0; _j0++) {
            mqc[_i0].bp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mqc[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
        mqc[_i0].ct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mqc_byteout(mqc);
          for(int _aux = 0; _aux < _len_mqc0; _aux++) {
          free(mqc[_aux].bp);
          }
          free(mqc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mqc0 = 65025;
          struct TYPE_3__ * mqc = (struct TYPE_3__ *) malloc(_len_mqc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mqc0; _i0++) {
              int _len_mqc__i0__bp0 = 1;
          mqc[_i0].bp = (int *) malloc(_len_mqc__i0__bp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mqc__i0__bp0; _j0++) {
            mqc[_i0].bp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mqc[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
        mqc[_i0].ct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mqc_byteout(mqc);
          for(int _aux = 0; _aux < _len_mqc0; _aux++) {
          free(mqc[_aux].bp);
          }
          free(mqc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mqc0 = 100;
          struct TYPE_3__ * mqc = (struct TYPE_3__ *) malloc(_len_mqc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mqc0; _i0++) {
              int _len_mqc__i0__bp0 = 1;
          mqc[_i0].bp = (int *) malloc(_len_mqc__i0__bp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mqc__i0__bp0; _j0++) {
            mqc[_i0].bp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mqc[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
        mqc[_i0].ct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mqc_byteout(mqc);
          for(int _aux = 0; _aux < _len_mqc0; _aux++) {
          free(mqc[_aux].bp);
          }
          free(mqc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
