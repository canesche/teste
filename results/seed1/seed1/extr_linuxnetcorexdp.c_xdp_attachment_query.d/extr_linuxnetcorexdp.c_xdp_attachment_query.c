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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct xdp_attachment_info {int /*<<< orphan*/  flags; TYPE_2__* prog; } ;
struct netdev_bpf {int /*<<< orphan*/  prog_flags; int /*<<< orphan*/  prog_id; } ;
struct TYPE_4__ {TYPE_1__* aux; } ;
struct TYPE_3__ {int /*<<< orphan*/  id; } ;

/* Variables and functions */

int xdp_attachment_query(struct xdp_attachment_info *info,
			 struct netdev_bpf *bpf)
{
	bpf->prog_id = info->prog ? info->prog->aux->id : 0;
	bpf->prog_flags = info->prog ? info->flags : 0;
	return 0;
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
          int _len_info0 = 1;
          struct xdp_attachment_info * info = (struct xdp_attachment_info *) malloc(_len_info0*sizeof(struct xdp_attachment_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__prog0 = 1;
          info[_i0].prog = (struct TYPE_4__ *) malloc(_len_info__i0__prog0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_info__i0__prog0; _j0++) {
              int _len_info__i0__prog_aux0 = 1;
          info[_i0].prog->aux = (struct TYPE_3__ *) malloc(_len_info__i0__prog_aux0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__prog_aux0; _j0++) {
            info[_i0].prog->aux->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bpf0 = 1;
          struct netdev_bpf * bpf = (struct netdev_bpf *) malloc(_len_bpf0*sizeof(struct netdev_bpf));
          for(int _i0 = 0; _i0 < _len_bpf0; _i0++) {
            bpf[_i0].prog_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bpf[_i0].prog_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xdp_attachment_query(info,bpf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].prog);
          }
          free(info);
          free(bpf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct xdp_attachment_info * info = (struct xdp_attachment_info *) malloc(_len_info0*sizeof(struct xdp_attachment_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__prog0 = 1;
          info[_i0].prog = (struct TYPE_4__ *) malloc(_len_info__i0__prog0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_info__i0__prog0; _j0++) {
              int _len_info__i0__prog_aux0 = 1;
          info[_i0].prog->aux = (struct TYPE_3__ *) malloc(_len_info__i0__prog_aux0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__prog_aux0; _j0++) {
            info[_i0].prog->aux->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bpf0 = 65025;
          struct netdev_bpf * bpf = (struct netdev_bpf *) malloc(_len_bpf0*sizeof(struct netdev_bpf));
          for(int _i0 = 0; _i0 < _len_bpf0; _i0++) {
            bpf[_i0].prog_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bpf[_i0].prog_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xdp_attachment_query(info,bpf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].prog);
          }
          free(info);
          free(bpf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct xdp_attachment_info * info = (struct xdp_attachment_info *) malloc(_len_info0*sizeof(struct xdp_attachment_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__prog0 = 1;
          info[_i0].prog = (struct TYPE_4__ *) malloc(_len_info__i0__prog0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_info__i0__prog0; _j0++) {
              int _len_info__i0__prog_aux0 = 1;
          info[_i0].prog->aux = (struct TYPE_3__ *) malloc(_len_info__i0__prog_aux0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__prog_aux0; _j0++) {
            info[_i0].prog->aux->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bpf0 = 100;
          struct netdev_bpf * bpf = (struct netdev_bpf *) malloc(_len_bpf0*sizeof(struct netdev_bpf));
          for(int _i0 = 0; _i0 < _len_bpf0; _i0++) {
            bpf[_i0].prog_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bpf[_i0].prog_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xdp_attachment_query(info,bpf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].prog);
          }
          free(info);
          free(bpf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
