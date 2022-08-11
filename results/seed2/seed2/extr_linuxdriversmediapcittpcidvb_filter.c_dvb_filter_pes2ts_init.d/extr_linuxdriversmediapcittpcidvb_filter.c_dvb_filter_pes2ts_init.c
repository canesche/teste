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
struct dvb_filter_pes2ts {unsigned char* buf; void* priv; int /*<<< orphan*/ * cb; scalar_t__ cc; } ;
typedef  int /*<<< orphan*/  dvb_filter_pes2ts_cb_t ;

/* Variables and functions */

void dvb_filter_pes2ts_init(struct dvb_filter_pes2ts *p2ts, unsigned short pid,
			    dvb_filter_pes2ts_cb_t *cb, void *priv)
{
	unsigned char *buf=p2ts->buf;

	buf[0]=0x47;
	buf[1]=(pid>>8);
	buf[2]=pid&0xff;
	p2ts->cc=0;
	p2ts->cb=cb;
	p2ts->priv=priv;
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
          unsigned short pid = 100;
          int _len_p2ts0 = 1;
          struct dvb_filter_pes2ts * p2ts = (struct dvb_filter_pes2ts *) malloc(_len_p2ts0*sizeof(struct dvb_filter_pes2ts));
          for(int _i0 = 0; _i0 < _len_p2ts0; _i0++) {
              int _len_p2ts__i0__buf0 = 1;
          p2ts[_i0].buf = (unsigned char *) malloc(_len_p2ts__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_p2ts__i0__buf0; _j0++) {
            p2ts[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p2ts__i0__cb0 = 1;
          p2ts[_i0].cb = (int *) malloc(_len_p2ts__i0__cb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p2ts__i0__cb0; _j0++) {
            p2ts[_i0].cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p2ts[_i0].cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 1;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * priv;
          dvb_filter_pes2ts_init(p2ts,pid,cb,priv);
          for(int _aux = 0; _aux < _len_p2ts0; _aux++) {
          free(p2ts[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_p2ts0; _aux++) {
          free(p2ts[_aux].cb);
          }
          free(p2ts);
          free(cb);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short pid = 255;
          int _len_p2ts0 = 65025;
          struct dvb_filter_pes2ts * p2ts = (struct dvb_filter_pes2ts *) malloc(_len_p2ts0*sizeof(struct dvb_filter_pes2ts));
          for(int _i0 = 0; _i0 < _len_p2ts0; _i0++) {
              int _len_p2ts__i0__buf0 = 1;
          p2ts[_i0].buf = (unsigned char *) malloc(_len_p2ts__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_p2ts__i0__buf0; _j0++) {
            p2ts[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p2ts__i0__cb0 = 1;
          p2ts[_i0].cb = (int *) malloc(_len_p2ts__i0__cb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p2ts__i0__cb0; _j0++) {
            p2ts[_i0].cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p2ts[_i0].cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 65025;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * priv;
          dvb_filter_pes2ts_init(p2ts,pid,cb,priv);
          for(int _aux = 0; _aux < _len_p2ts0; _aux++) {
          free(p2ts[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_p2ts0; _aux++) {
          free(p2ts[_aux].cb);
          }
          free(p2ts);
          free(cb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short pid = 10;
          int _len_p2ts0 = 100;
          struct dvb_filter_pes2ts * p2ts = (struct dvb_filter_pes2ts *) malloc(_len_p2ts0*sizeof(struct dvb_filter_pes2ts));
          for(int _i0 = 0; _i0 < _len_p2ts0; _i0++) {
              int _len_p2ts__i0__buf0 = 1;
          p2ts[_i0].buf = (unsigned char *) malloc(_len_p2ts__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_p2ts__i0__buf0; _j0++) {
            p2ts[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p2ts__i0__cb0 = 1;
          p2ts[_i0].cb = (int *) malloc(_len_p2ts__i0__cb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p2ts__i0__cb0; _j0++) {
            p2ts[_i0].cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p2ts[_i0].cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 100;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * priv;
          dvb_filter_pes2ts_init(p2ts,pid,cb,priv);
          for(int _aux = 0; _aux < _len_p2ts0; _aux++) {
          free(p2ts[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_p2ts0; _aux++) {
          free(p2ts[_aux].cb);
          }
          free(p2ts);
          free(cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
