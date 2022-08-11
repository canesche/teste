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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int priority; int seq_num; int frag_num; } ;
struct TYPE_5__ {TYPE_1__ attrib; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
union recv_frame {TYPE_3__ u; } ;
typedef  int /*<<< orphan*/  u8 ;
typedef  scalar_t__ u16 ;
struct stainfo_rxcache {scalar_t__* tid_rxseq; } ;
typedef  int sint ;

/* Variables and functions */
 int _FAIL ; 
 int _SUCCESS ; 

__attribute__((used)) static sint recv_decache(union recv_frame *precv_frame, u8 bretry,
		  struct stainfo_rxcache *prxcache)
{
	sint tid = precv_frame->u.hdr.attrib.priority;
	u16 seq_ctrl = ((precv_frame->u.hdr.attrib.seq_num & 0xffff) << 4) |
			(precv_frame->u.hdr.attrib.frag_num & 0xf);

	if (tid > 15)
		return _FAIL;
	if (seq_ctrl == prxcache->tid_rxseq[tid])
		return _FAIL;
	prxcache->tid_rxseq[tid] = seq_ctrl;
	return _SUCCESS;
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
          int bretry = 100;
          int _len_precv_frame0 = 1;
          union recv_frame * precv_frame = (union recv_frame *) malloc(_len_precv_frame0*sizeof(union recv_frame));
          for(int _i0 = 0; _i0 < _len_precv_frame0; _i0++) {
            precv_frame[_i0] = 0;
          }
          int _len_prxcache0 = 1;
          struct stainfo_rxcache * prxcache = (struct stainfo_rxcache *) malloc(_len_prxcache0*sizeof(struct stainfo_rxcache));
          for(int _i0 = 0; _i0 < _len_prxcache0; _i0++) {
              int _len_prxcache__i0__tid_rxseq0 = 1;
          prxcache[_i0].tid_rxseq = (long *) malloc(_len_prxcache__i0__tid_rxseq0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_prxcache__i0__tid_rxseq0; _j0++) {
            prxcache[_i0].tid_rxseq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = recv_decache(precv_frame,bretry,prxcache);
          printf("%d\n", benchRet); 
          free(precv_frame);
          for(int _aux = 0; _aux < _len_prxcache0; _aux++) {
          free(prxcache[_aux].tid_rxseq);
          }
          free(prxcache);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bretry = 255;
          int _len_precv_frame0 = 65025;
          union recv_frame * precv_frame = (union recv_frame *) malloc(_len_precv_frame0*sizeof(union recv_frame));
          for(int _i0 = 0; _i0 < _len_precv_frame0; _i0++) {
            precv_frame[_i0] = 0;
          }
          int _len_prxcache0 = 65025;
          struct stainfo_rxcache * prxcache = (struct stainfo_rxcache *) malloc(_len_prxcache0*sizeof(struct stainfo_rxcache));
          for(int _i0 = 0; _i0 < _len_prxcache0; _i0++) {
              int _len_prxcache__i0__tid_rxseq0 = 1;
          prxcache[_i0].tid_rxseq = (long *) malloc(_len_prxcache__i0__tid_rxseq0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_prxcache__i0__tid_rxseq0; _j0++) {
            prxcache[_i0].tid_rxseq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = recv_decache(precv_frame,bretry,prxcache);
          printf("%d\n", benchRet); 
          free(precv_frame);
          for(int _aux = 0; _aux < _len_prxcache0; _aux++) {
          free(prxcache[_aux].tid_rxseq);
          }
          free(prxcache);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bretry = 10;
          int _len_precv_frame0 = 100;
          union recv_frame * precv_frame = (union recv_frame *) malloc(_len_precv_frame0*sizeof(union recv_frame));
          for(int _i0 = 0; _i0 < _len_precv_frame0; _i0++) {
            precv_frame[_i0] = 0;
          }
          int _len_prxcache0 = 100;
          struct stainfo_rxcache * prxcache = (struct stainfo_rxcache *) malloc(_len_prxcache0*sizeof(struct stainfo_rxcache));
          for(int _i0 = 0; _i0 < _len_prxcache0; _i0++) {
              int _len_prxcache__i0__tid_rxseq0 = 1;
          prxcache[_i0].tid_rxseq = (long *) malloc(_len_prxcache__i0__tid_rxseq0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_prxcache__i0__tid_rxseq0; _j0++) {
            prxcache[_i0].tid_rxseq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = recv_decache(precv_frame,bretry,prxcache);
          printf("%d\n", benchRet); 
          free(precv_frame);
          for(int _aux = 0; _aux < _len_prxcache0; _aux++) {
          free(prxcache[_aux].tid_rxseq);
          }
          free(prxcache);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
