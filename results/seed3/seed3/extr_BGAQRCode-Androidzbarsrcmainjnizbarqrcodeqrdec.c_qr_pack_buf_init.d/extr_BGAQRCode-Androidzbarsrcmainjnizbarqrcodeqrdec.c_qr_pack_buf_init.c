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
struct TYPE_3__ {unsigned char const* buf; int storage; scalar_t__ endbit; scalar_t__ endbyte; } ;
typedef  TYPE_1__ qr_pack_buf ;

/* Variables and functions */

__attribute__((used)) static void qr_pack_buf_init(qr_pack_buf *_b,
 const unsigned char *_data,int _ndata){
  _b->buf=_data;
  _b->storage=_ndata;
  _b->endbyte=_b->endbit=0;
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
          int _ndata = 100;
          int _len__b0 = 1;
          struct TYPE_3__ * _b = (struct TYPE_3__ *) malloc(_len__b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__b0; _i0++) {
              int _len__b__i0__buf0 = 1;
          _b[_i0].buf = (const unsigned char *) malloc(_len__b__i0__buf0*sizeof(const unsigned char));
          for(int _j0 = 0; _j0 < _len__b__i0__buf0; _j0++) {
            _b[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        _b[_i0].storage = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].endbit = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].endbyte = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__data0 = 1;
          const unsigned char * _data = (const unsigned char *) malloc(_len__data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len__data0; _i0++) {
            _data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qr_pack_buf_init(_b,_data,_ndata);
          for(int _aux = 0; _aux < _len__b0; _aux++) {
          free(_b[_aux].buf);
          }
          free(_b);
          free(_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _ndata = 255;
          int _len__b0 = 65025;
          struct TYPE_3__ * _b = (struct TYPE_3__ *) malloc(_len__b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__b0; _i0++) {
              int _len__b__i0__buf0 = 1;
          _b[_i0].buf = (const unsigned char *) malloc(_len__b__i0__buf0*sizeof(const unsigned char));
          for(int _j0 = 0; _j0 < _len__b__i0__buf0; _j0++) {
            _b[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        _b[_i0].storage = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].endbit = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].endbyte = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__data0 = 65025;
          const unsigned char * _data = (const unsigned char *) malloc(_len__data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len__data0; _i0++) {
            _data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qr_pack_buf_init(_b,_data,_ndata);
          for(int _aux = 0; _aux < _len__b0; _aux++) {
          free(_b[_aux].buf);
          }
          free(_b);
          free(_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _ndata = 10;
          int _len__b0 = 100;
          struct TYPE_3__ * _b = (struct TYPE_3__ *) malloc(_len__b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__b0; _i0++) {
              int _len__b__i0__buf0 = 1;
          _b[_i0].buf = (const unsigned char *) malloc(_len__b__i0__buf0*sizeof(const unsigned char));
          for(int _j0 = 0; _j0 < _len__b__i0__buf0; _j0++) {
            _b[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        _b[_i0].storage = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].endbit = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].endbyte = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__data0 = 100;
          const unsigned char * _data = (const unsigned char *) malloc(_len__data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len__data0; _i0++) {
            _data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qr_pack_buf_init(_b,_data,_ndata);
          for(int _aux = 0; _aux < _len__b0; _aux++) {
          free(_b[_aux].buf);
          }
          free(_b);
          free(_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
