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
struct msgbuf {char* msg_bufc; scalar_t__ msg_bufx; scalar_t__ msg_size; } ;

/* Variables and functions */

void
log_putc_locked(struct msgbuf *mbp, char c)
{
	mbp->msg_bufc[mbp->msg_bufx++] = c;
	if (mbp->msg_bufx >= mbp->msg_size)
		mbp->msg_bufx = 0;
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
          char c = 100;
          int _len_mbp0 = 1;
          struct msgbuf * mbp = (struct msgbuf *) malloc(_len_mbp0*sizeof(struct msgbuf));
          for(int _i0 = 0; _i0 < _len_mbp0; _i0++) {
              int _len_mbp__i0__msg_bufc0 = 1;
          mbp[_i0].msg_bufc = (char *) malloc(_len_mbp__i0__msg_bufc0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_mbp__i0__msg_bufc0; _j0++) {
            mbp[_i0].msg_bufc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mbp[_i0].msg_bufx = ((-2 * (next_i()%2)) + 1) * next_i();
        mbp[_i0].msg_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          log_putc_locked(mbp,c);
          for(int _aux = 0; _aux < _len_mbp0; _aux++) {
          free(mbp[_aux].msg_bufc);
          }
          free(mbp);
        
        break;
    }
    // big-arr
    case 1:
    {
          char c = 255;
          int _len_mbp0 = 65025;
          struct msgbuf * mbp = (struct msgbuf *) malloc(_len_mbp0*sizeof(struct msgbuf));
          for(int _i0 = 0; _i0 < _len_mbp0; _i0++) {
              int _len_mbp__i0__msg_bufc0 = 1;
          mbp[_i0].msg_bufc = (char *) malloc(_len_mbp__i0__msg_bufc0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_mbp__i0__msg_bufc0; _j0++) {
            mbp[_i0].msg_bufc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mbp[_i0].msg_bufx = ((-2 * (next_i()%2)) + 1) * next_i();
        mbp[_i0].msg_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          log_putc_locked(mbp,c);
          for(int _aux = 0; _aux < _len_mbp0; _aux++) {
          free(mbp[_aux].msg_bufc);
          }
          free(mbp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char c = 10;
          int _len_mbp0 = 100;
          struct msgbuf * mbp = (struct msgbuf *) malloc(_len_mbp0*sizeof(struct msgbuf));
          for(int _i0 = 0; _i0 < _len_mbp0; _i0++) {
              int _len_mbp__i0__msg_bufc0 = 1;
          mbp[_i0].msg_bufc = (char *) malloc(_len_mbp__i0__msg_bufc0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_mbp__i0__msg_bufc0; _j0++) {
            mbp[_i0].msg_bufc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mbp[_i0].msg_bufx = ((-2 * (next_i()%2)) + 1) * next_i();
        mbp[_i0].msg_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          log_putc_locked(mbp,c);
          for(int _aux = 0; _aux < _len_mbp0; _aux++) {
          free(mbp[_aux].msg_bufc);
          }
          free(mbp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
