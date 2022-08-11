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
struct TYPE_3__ {unsigned int* exp; int* log; } ;
typedef  TYPE_1__ rs_gf256 ;

/* Variables and functions */

void rs_gf256_init(rs_gf256 *_gf,unsigned _ppoly){
  unsigned p;
  int      i;
  /*Initialize the table of powers of a primtive root, alpha=0x02.*/
  p=1;
  for(i=0;i<256;i++){
    _gf->exp[i]=_gf->exp[i+255]=p;
    p=((p<<1)^(-(p>>7)&_ppoly))&0xFF;
  }
  /*Invert the table to recover the logs.*/
  for(i=0;i<255;i++)_gf->log[_gf->exp[i]]=i;
  /*Note that we rely on the fact that _gf->log[0]=0 below.*/
  _gf->log[0]=0;
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
          unsigned int _ppoly = 100;
          int _len__gf0 = 1;
          struct TYPE_3__ * _gf = (struct TYPE_3__ *) malloc(_len__gf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__gf0; _i0++) {
              int _len__gf__i0__exp0 = 1;
          _gf[_i0].exp = (unsigned int *) malloc(_len__gf__i0__exp0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len__gf__i0__exp0; _j0++) {
            _gf[_i0].exp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__gf__i0__log0 = 1;
          _gf[_i0].log = (int *) malloc(_len__gf__i0__log0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__gf__i0__log0; _j0++) {
            _gf[_i0].log[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rs_gf256_init(_gf,_ppoly);
          for(int _aux = 0; _aux < _len__gf0; _aux++) {
          free(_gf[_aux].exp);
          }
          for(int _aux = 0; _aux < _len__gf0; _aux++) {
          free(_gf[_aux].log);
          }
          free(_gf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int _ppoly = 255;
          int _len__gf0 = 65025;
          struct TYPE_3__ * _gf = (struct TYPE_3__ *) malloc(_len__gf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__gf0; _i0++) {
              int _len__gf__i0__exp0 = 1;
          _gf[_i0].exp = (unsigned int *) malloc(_len__gf__i0__exp0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len__gf__i0__exp0; _j0++) {
            _gf[_i0].exp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__gf__i0__log0 = 1;
          _gf[_i0].log = (int *) malloc(_len__gf__i0__log0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__gf__i0__log0; _j0++) {
            _gf[_i0].log[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rs_gf256_init(_gf,_ppoly);
          for(int _aux = 0; _aux < _len__gf0; _aux++) {
          free(_gf[_aux].exp);
          }
          for(int _aux = 0; _aux < _len__gf0; _aux++) {
          free(_gf[_aux].log);
          }
          free(_gf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int _ppoly = 10;
          int _len__gf0 = 100;
          struct TYPE_3__ * _gf = (struct TYPE_3__ *) malloc(_len__gf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__gf0; _i0++) {
              int _len__gf__i0__exp0 = 1;
          _gf[_i0].exp = (unsigned int *) malloc(_len__gf__i0__exp0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len__gf__i0__exp0; _j0++) {
            _gf[_i0].exp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__gf__i0__log0 = 1;
          _gf[_i0].log = (int *) malloc(_len__gf__i0__log0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__gf__i0__log0; _j0++) {
            _gf[_i0].log[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rs_gf256_init(_gf,_ppoly);
          for(int _aux = 0; _aux < _len__gf0; _aux++) {
          free(_gf[_aux].exp);
          }
          for(int _aux = 0; _aux < _len__gf0; _aux++) {
          free(_gf[_aux].log);
          }
          free(_gf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
