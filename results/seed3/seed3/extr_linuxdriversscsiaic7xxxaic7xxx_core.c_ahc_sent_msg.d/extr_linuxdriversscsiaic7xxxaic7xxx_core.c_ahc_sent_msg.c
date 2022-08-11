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
typedef  size_t u_int ;
struct ahc_softc {size_t msgout_len; scalar_t__* msgout_buf; size_t msgout_index; } ;
typedef  scalar_t__ ahc_msgtype ;

/* Variables and functions */
 scalar_t__ AHCMSG_1B ; 
 scalar_t__ AHCMSG_EXT ; 
 int FALSE ; 
 scalar_t__ MSG_EXTENDED ; 
 scalar_t__ MSG_IGN_WIDE_RESIDUE ; 
 scalar_t__ MSG_SIMPLE_TASK ; 
 int TRUE ; 

__attribute__((used)) static int
ahc_sent_msg(struct ahc_softc *ahc, ahc_msgtype type, u_int msgval, int full)
{
	int found;
	u_int index;

	found = FALSE;
	index = 0;

	while (index < ahc->msgout_len) {
		if (ahc->msgout_buf[index] == MSG_EXTENDED) {
			u_int end_index;

			end_index = index + 1 + ahc->msgout_buf[index + 1];
			if (ahc->msgout_buf[index+2] == msgval
			 && type == AHCMSG_EXT) {

				if (full) {
					if (ahc->msgout_index > end_index)
						found = TRUE;
				} else if (ahc->msgout_index > index)
					found = TRUE;
			}
			index = end_index;
		} else if (ahc->msgout_buf[index] >= MSG_SIMPLE_TASK
			&& ahc->msgout_buf[index] <= MSG_IGN_WIDE_RESIDUE) {

			/* Skip tag type and tag id or residue param*/
			index += 2;
		} else {
			/* Single byte message */
			if (type == AHCMSG_1B
			 && ahc->msgout_buf[index] == msgval
			 && ahc->msgout_index > index)
				found = TRUE;
			index++;
		}

		if (found)
			break;
	}
	return (found);
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
          long type = 100;
          unsigned long msgval = 100;
          int full = 100;
          int _len_ahc0 = 1;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
            ahc[_i0].msgout_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ahc__i0__msgout_buf0 = 1;
          ahc[_i0].msgout_buf = (long *) malloc(_len_ahc__i0__msgout_buf0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ahc__i0__msgout_buf0; _j0++) {
            ahc[_i0].msgout_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ahc[_i0].msgout_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ahc_sent_msg(ahc,type,msgval,full);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ahc0; _aux++) {
          free(ahc[_aux].msgout_buf);
          }
          free(ahc);
        
        break;
    }
    // big-arr
    case 1:
    {
          long type = 255;
          unsigned long msgval = 255;
          int full = 255;
          int _len_ahc0 = 65025;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
            ahc[_i0].msgout_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ahc__i0__msgout_buf0 = 1;
          ahc[_i0].msgout_buf = (long *) malloc(_len_ahc__i0__msgout_buf0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ahc__i0__msgout_buf0; _j0++) {
            ahc[_i0].msgout_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ahc[_i0].msgout_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ahc_sent_msg(ahc,type,msgval,full);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ahc0; _aux++) {
          free(ahc[_aux].msgout_buf);
          }
          free(ahc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long type = 10;
          unsigned long msgval = 10;
          int full = 10;
          int _len_ahc0 = 100;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
            ahc[_i0].msgout_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ahc__i0__msgout_buf0 = 1;
          ahc[_i0].msgout_buf = (long *) malloc(_len_ahc__i0__msgout_buf0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ahc__i0__msgout_buf0; _j0++) {
            ahc[_i0].msgout_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ahc[_i0].msgout_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ahc_sent_msg(ahc,type,msgval,full);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ahc0; _aux++) {
          free(ahc[_aux].msgout_buf);
          }
          free(ahc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
