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
typedef  void* u8 ;
typedef  scalar_t__ u32 ;
struct ioat_raw_descriptor {scalar_t__* field; } ;
struct ioat_pq_descriptor {void** coef; } ;
struct ioat_pq16a_descriptor {void** coef; } ;
typedef  scalar_t__ dma_addr_t ;

/* Variables and functions */
 size_t* pq16_idx_to_desc ; 
 size_t* pq16_idx_to_field ; 

__attribute__((used)) static void pq16_set_src(struct ioat_raw_descriptor *desc[3],
			dma_addr_t addr, u32 offset, u8 coef, unsigned idx)
{
	struct ioat_pq_descriptor *pq = (struct ioat_pq_descriptor *)desc[0];
	struct ioat_pq16a_descriptor *pq16 =
		(struct ioat_pq16a_descriptor *)desc[1];
	struct ioat_raw_descriptor *raw = desc[pq16_idx_to_desc[idx]];

	raw->field[pq16_idx_to_field[idx]] = addr + offset;

	if (idx < 8)
		pq->coef[idx] = coef;
	else
		pq16->coef[idx - 8] = coef;
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
          long addr = 100;
          long offset = 100;
          unsigned int idx = 100;
          int _len_desc0 = 3;
          struct ioat_raw_descriptor ** desc = (struct ioat_raw_descriptor **) malloc(_len_desc0*sizeof(struct ioat_raw_descriptor *));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            int _len_desc1 = 1;
            desc[_i0] = (struct ioat_raw_descriptor *) malloc(_len_desc1*sizeof(struct ioat_raw_descriptor));
            for(int _i1 = 0; _i1 < _len_desc1; _i1++) {
                int _len_desc__i0___i1__field0 = 1;
          desc[_i0][_i1].field = (long *) malloc(_len_desc__i0___i1__field0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_desc__i0___i1__field0; _j0++) {
            desc[_i0][_i1].field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          void * coef;
          pq16_set_src(desc,addr,offset,coef,idx);
          for(int i1 = 0; i1 < _len_desc0; i1++) {
            int _len_desc1 = 1;
              for(int _aux = 0; _aux < _len_desc1; _aux++) {
          free(desc[_aux].field);
          }
          free(desc[i1]);
          }
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          long addr = 255;
          long offset = 255;
          unsigned int idx = 255;
          int _len_desc0 = 65025;
          struct ioat_raw_descriptor ** desc = (struct ioat_raw_descriptor **) malloc(_len_desc0*sizeof(struct ioat_raw_descriptor *));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            int _len_desc1 = 1;
            desc[_i0] = (struct ioat_raw_descriptor *) malloc(_len_desc1*sizeof(struct ioat_raw_descriptor));
            for(int _i1 = 0; _i1 < _len_desc1; _i1++) {
                int _len_desc__i0___i1__field0 = 1;
          desc[_i0][_i1].field = (long *) malloc(_len_desc__i0___i1__field0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_desc__i0___i1__field0; _j0++) {
            desc[_i0][_i1].field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          void * coef;
          pq16_set_src(desc,addr,offset,coef,idx);
          for(int i1 = 0; i1 < _len_desc0; i1++) {
            int _len_desc1 = 1;
              for(int _aux = 0; _aux < _len_desc1; _aux++) {
          free(desc[_aux].field);
          }
          free(desc[i1]);
          }
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long addr = 10;
          long offset = 10;
          unsigned int idx = 10;
          int _len_desc0 = 100;
          struct ioat_raw_descriptor ** desc = (struct ioat_raw_descriptor **) malloc(_len_desc0*sizeof(struct ioat_raw_descriptor *));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            int _len_desc1 = 1;
            desc[_i0] = (struct ioat_raw_descriptor *) malloc(_len_desc1*sizeof(struct ioat_raw_descriptor));
            for(int _i1 = 0; _i1 < _len_desc1; _i1++) {
                int _len_desc__i0___i1__field0 = 1;
          desc[_i0][_i1].field = (long *) malloc(_len_desc__i0___i1__field0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_desc__i0___i1__field0; _j0++) {
            desc[_i0][_i1].field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          void * coef;
          pq16_set_src(desc,addr,offset,coef,idx);
          for(int i1 = 0; i1 < _len_desc0; i1++) {
            int _len_desc1 = 1;
              for(int _aux = 0; _aux < _len_desc1; _aux++) {
          free(desc[_aux].field);
          }
          free(desc[i1]);
          }
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
