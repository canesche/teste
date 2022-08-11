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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct blkfront_ring_info {unsigned long shadow_free; TYPE_4__* shadow; } ;
struct TYPE_5__ {unsigned long id; } ;
struct TYPE_6__ {TYPE_1__ rw; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {int /*<<< orphan*/ * request; TYPE_3__ req; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int add_id_to_freelist(struct blkfront_ring_info *rinfo,
			      unsigned long id)
{
	if (rinfo->shadow[id].req.u.rw.id != id)
		return -EINVAL;
	if (rinfo->shadow[id].request == NULL)
		return -EINVAL;
	rinfo->shadow[id].req.u.rw.id  = rinfo->shadow_free;
	rinfo->shadow[id].request = NULL;
	rinfo->shadow_free = id;
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
          unsigned long id = 100;
          int _len_rinfo0 = 1;
          struct blkfront_ring_info * rinfo = (struct blkfront_ring_info *) malloc(_len_rinfo0*sizeof(struct blkfront_ring_info));
          for(int _i0 = 0; _i0 < _len_rinfo0; _i0++) {
            rinfo[_i0].shadow_free = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rinfo__i0__shadow0 = 1;
          rinfo[_i0].shadow = (struct TYPE_8__ *) malloc(_len_rinfo__i0__shadow0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rinfo__i0__shadow0; _j0++) {
              int _len_rinfo__i0__shadow_request0 = 1;
          rinfo[_i0].shadow->request = (int *) malloc(_len_rinfo__i0__shadow_request0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rinfo__i0__shadow_request0; _j0++) {
            rinfo[_i0].shadow->request[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rinfo[_i0].shadow->req.u.rw.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = add_id_to_freelist(rinfo,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rinfo0; _aux++) {
          free(rinfo[_aux].shadow);
          }
          free(rinfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long id = 255;
          int _len_rinfo0 = 65025;
          struct blkfront_ring_info * rinfo = (struct blkfront_ring_info *) malloc(_len_rinfo0*sizeof(struct blkfront_ring_info));
          for(int _i0 = 0; _i0 < _len_rinfo0; _i0++) {
            rinfo[_i0].shadow_free = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rinfo__i0__shadow0 = 1;
          rinfo[_i0].shadow = (struct TYPE_8__ *) malloc(_len_rinfo__i0__shadow0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rinfo__i0__shadow0; _j0++) {
              int _len_rinfo__i0__shadow_request0 = 1;
          rinfo[_i0].shadow->request = (int *) malloc(_len_rinfo__i0__shadow_request0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rinfo__i0__shadow_request0; _j0++) {
            rinfo[_i0].shadow->request[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rinfo[_i0].shadow->req.u.rw.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = add_id_to_freelist(rinfo,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rinfo0; _aux++) {
          free(rinfo[_aux].shadow);
          }
          free(rinfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long id = 10;
          int _len_rinfo0 = 100;
          struct blkfront_ring_info * rinfo = (struct blkfront_ring_info *) malloc(_len_rinfo0*sizeof(struct blkfront_ring_info));
          for(int _i0 = 0; _i0 < _len_rinfo0; _i0++) {
            rinfo[_i0].shadow_free = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rinfo__i0__shadow0 = 1;
          rinfo[_i0].shadow = (struct TYPE_8__ *) malloc(_len_rinfo__i0__shadow0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rinfo__i0__shadow0; _j0++) {
              int _len_rinfo__i0__shadow_request0 = 1;
          rinfo[_i0].shadow->request = (int *) malloc(_len_rinfo__i0__shadow_request0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rinfo__i0__shadow_request0; _j0++) {
            rinfo[_i0].shadow->request[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rinfo[_i0].shadow->req.u.rw.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = add_id_to_freelist(rinfo,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rinfo0; _aux++) {
          free(rinfo[_aux].shadow);
          }
          free(rinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
