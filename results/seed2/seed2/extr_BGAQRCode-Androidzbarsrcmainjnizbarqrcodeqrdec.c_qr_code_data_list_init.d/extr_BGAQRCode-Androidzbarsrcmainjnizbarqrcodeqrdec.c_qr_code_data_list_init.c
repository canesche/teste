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
struct TYPE_3__ {scalar_t__ cqrdata; scalar_t__ nqrdata; int /*<<< orphan*/ * qrdata; } ;
typedef  TYPE_1__ qr_code_data_list ;

/* Variables and functions */

void qr_code_data_list_init(qr_code_data_list *_qrlist){
  _qrlist->qrdata=NULL;
  _qrlist->nqrdata=_qrlist->cqrdata=0;
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
          int _len__qrlist0 = 1;
          struct TYPE_3__ * _qrlist = (struct TYPE_3__ *) malloc(_len__qrlist0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__qrlist0; _i0++) {
            _qrlist[_i0].cqrdata = ((-2 * (next_i()%2)) + 1) * next_i();
        _qrlist[_i0].nqrdata = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__qrlist__i0__qrdata0 = 1;
          _qrlist[_i0].qrdata = (int *) malloc(_len__qrlist__i0__qrdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__qrlist__i0__qrdata0; _j0++) {
            _qrlist[_i0].qrdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qr_code_data_list_init(_qrlist);
          for(int _aux = 0; _aux < _len__qrlist0; _aux++) {
          free(_qrlist[_aux].qrdata);
          }
          free(_qrlist);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len__qrlist0 = 65025;
          struct TYPE_3__ * _qrlist = (struct TYPE_3__ *) malloc(_len__qrlist0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__qrlist0; _i0++) {
            _qrlist[_i0].cqrdata = ((-2 * (next_i()%2)) + 1) * next_i();
        _qrlist[_i0].nqrdata = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__qrlist__i0__qrdata0 = 1;
          _qrlist[_i0].qrdata = (int *) malloc(_len__qrlist__i0__qrdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__qrlist__i0__qrdata0; _j0++) {
            _qrlist[_i0].qrdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qr_code_data_list_init(_qrlist);
          for(int _aux = 0; _aux < _len__qrlist0; _aux++) {
          free(_qrlist[_aux].qrdata);
          }
          free(_qrlist);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len__qrlist0 = 100;
          struct TYPE_3__ * _qrlist = (struct TYPE_3__ *) malloc(_len__qrlist0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__qrlist0; _i0++) {
            _qrlist[_i0].cqrdata = ((-2 * (next_i()%2)) + 1) * next_i();
        _qrlist[_i0].nqrdata = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__qrlist__i0__qrdata0 = 1;
          _qrlist[_i0].qrdata = (int *) malloc(_len__qrlist__i0__qrdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__qrlist__i0__qrdata0; _j0++) {
            _qrlist[_i0].qrdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qr_code_data_list_init(_qrlist);
          for(int _aux = 0; _aux < _len__qrlist0; _aux++) {
          free(_qrlist[_aux].qrdata);
          }
          free(_qrlist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
