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
struct TYPE_3__ {int serv; int dglen; int max; int cbyte; int* dmend_r; scalar_t__ namelen; int /*<<< orphan*/  const* dgram; int /*<<< orphan*/  qu; int /*<<< orphan*/  ads; } ;
typedef  TYPE_1__ findlabel_state ;
typedef  int /*<<< orphan*/  byte ;
typedef  int /*<<< orphan*/  adns_state ;
typedef  int /*<<< orphan*/  adns_query ;

/* Variables and functions */

void adns__findlabel_start(findlabel_state *fls, adns_state ads,
			   int serv, adns_query qu,
			   const byte *dgram, int dglen, int max,
			   int dmbegin, int *dmend_rlater) {
  fls->ads= ads;
  fls->qu= qu;
  fls->serv= serv;
  fls->dgram= dgram;
  fls->dglen= dglen;
  fls->max= max;
  fls->cbyte= dmbegin;
  fls->namelen= 0;
  fls->dmend_r= dmend_rlater;
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
          int ads = 100;
          int serv = 100;
          int qu = 100;
          int dglen = 100;
          int max = 100;
          int dmbegin = 100;
          int _len_fls0 = 1;
          struct TYPE_3__ * fls = (struct TYPE_3__ *) malloc(_len_fls0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fls0; _i0++) {
            fls[_i0].serv = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].dglen = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].cbyte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fls__i0__dmend_r0 = 1;
          fls[_i0].dmend_r = (int *) malloc(_len_fls__i0__dmend_r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fls__i0__dmend_r0; _j0++) {
            fls[_i0].dmend_r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fls[_i0].namelen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fls__i0__dgram0 = 1;
          fls[_i0].dgram = (const int *) malloc(_len_fls__i0__dgram0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_fls__i0__dgram0; _j0++) {
            fls[_i0].dgram[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fls[_i0].qu = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].ads = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dgram0 = 1;
          const int * dgram = (const int *) malloc(_len_dgram0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_dgram0; _i0++) {
            dgram[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dmend_rlater0 = 1;
          int * dmend_rlater = (int *) malloc(_len_dmend_rlater0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dmend_rlater0; _i0++) {
            dmend_rlater[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adns__findlabel_start(fls,ads,serv,qu,dgram,dglen,max,dmbegin,dmend_rlater);
          for(int _aux = 0; _aux < _len_fls0; _aux++) {
          free(fls[_aux].dmend_r);
          }
          for(int _aux = 0; _aux < _len_fls0; _aux++) {
          free(fls[_aux].dgram);
          }
          free(fls);
          free(dgram);
          free(dmend_rlater);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ads = 255;
          int serv = 255;
          int qu = 255;
          int dglen = 255;
          int max = 255;
          int dmbegin = 255;
          int _len_fls0 = 65025;
          struct TYPE_3__ * fls = (struct TYPE_3__ *) malloc(_len_fls0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fls0; _i0++) {
            fls[_i0].serv = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].dglen = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].cbyte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fls__i0__dmend_r0 = 1;
          fls[_i0].dmend_r = (int *) malloc(_len_fls__i0__dmend_r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fls__i0__dmend_r0; _j0++) {
            fls[_i0].dmend_r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fls[_i0].namelen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fls__i0__dgram0 = 1;
          fls[_i0].dgram = (const int *) malloc(_len_fls__i0__dgram0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_fls__i0__dgram0; _j0++) {
            fls[_i0].dgram[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fls[_i0].qu = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].ads = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dgram0 = 65025;
          const int * dgram = (const int *) malloc(_len_dgram0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_dgram0; _i0++) {
            dgram[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dmend_rlater0 = 65025;
          int * dmend_rlater = (int *) malloc(_len_dmend_rlater0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dmend_rlater0; _i0++) {
            dmend_rlater[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adns__findlabel_start(fls,ads,serv,qu,dgram,dglen,max,dmbegin,dmend_rlater);
          for(int _aux = 0; _aux < _len_fls0; _aux++) {
          free(fls[_aux].dmend_r);
          }
          for(int _aux = 0; _aux < _len_fls0; _aux++) {
          free(fls[_aux].dgram);
          }
          free(fls);
          free(dgram);
          free(dmend_rlater);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ads = 10;
          int serv = 10;
          int qu = 10;
          int dglen = 10;
          int max = 10;
          int dmbegin = 10;
          int _len_fls0 = 100;
          struct TYPE_3__ * fls = (struct TYPE_3__ *) malloc(_len_fls0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fls0; _i0++) {
            fls[_i0].serv = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].dglen = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].cbyte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fls__i0__dmend_r0 = 1;
          fls[_i0].dmend_r = (int *) malloc(_len_fls__i0__dmend_r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fls__i0__dmend_r0; _j0++) {
            fls[_i0].dmend_r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fls[_i0].namelen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fls__i0__dgram0 = 1;
          fls[_i0].dgram = (const int *) malloc(_len_fls__i0__dgram0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_fls__i0__dgram0; _j0++) {
            fls[_i0].dgram[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fls[_i0].qu = ((-2 * (next_i()%2)) + 1) * next_i();
        fls[_i0].ads = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dgram0 = 100;
          const int * dgram = (const int *) malloc(_len_dgram0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_dgram0; _i0++) {
            dgram[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dmend_rlater0 = 100;
          int * dmend_rlater = (int *) malloc(_len_dmend_rlater0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dmend_rlater0; _i0++) {
            dmend_rlater[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adns__findlabel_start(fls,ads,serv,qu,dgram,dglen,max,dmbegin,dmend_rlater);
          for(int _aux = 0; _aux < _len_fls0; _aux++) {
          free(fls[_aux].dmend_r);
          }
          for(int _aux = 0; _aux < _len_fls0; _aux++) {
          free(fls[_aux].dgram);
          }
          free(fls);
          free(dgram);
          free(dmend_rlater);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
