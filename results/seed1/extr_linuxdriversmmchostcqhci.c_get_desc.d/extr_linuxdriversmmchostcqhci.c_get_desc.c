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
typedef  int u8 ;
struct cqhci_host {int* desc_base; int slot_sz; } ;

/* Variables and functions */

__attribute__((used)) static inline u8 *get_desc(struct cqhci_host *cq_host, u8 tag)
{
	return cq_host->desc_base + (tag * cq_host->slot_sz);
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
          int tag = 100;
          int _len_cq_host0 = 1;
          struct cqhci_host * cq_host = (struct cqhci_host *) malloc(_len_cq_host0*sizeof(struct cqhci_host));
          for(int _i0 = 0; _i0 < _len_cq_host0; _i0++) {
              int _len_cq_host__i0__desc_base0 = 1;
          cq_host[_i0].desc_base = (int *) malloc(_len_cq_host__i0__desc_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cq_host__i0__desc_base0; _j0++) {
            cq_host[_i0].desc_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cq_host[_i0].slot_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_desc(cq_host,tag);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_cq_host0; _aux++) {
          free(cq_host[_aux].desc_base);
          }
          free(cq_host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tag = 255;
          int _len_cq_host0 = 65025;
          struct cqhci_host * cq_host = (struct cqhci_host *) malloc(_len_cq_host0*sizeof(struct cqhci_host));
          for(int _i0 = 0; _i0 < _len_cq_host0; _i0++) {
              int _len_cq_host__i0__desc_base0 = 1;
          cq_host[_i0].desc_base = (int *) malloc(_len_cq_host__i0__desc_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cq_host__i0__desc_base0; _j0++) {
            cq_host[_i0].desc_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cq_host[_i0].slot_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_desc(cq_host,tag);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_cq_host0; _aux++) {
          free(cq_host[_aux].desc_base);
          }
          free(cq_host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tag = 10;
          int _len_cq_host0 = 100;
          struct cqhci_host * cq_host = (struct cqhci_host *) malloc(_len_cq_host0*sizeof(struct cqhci_host));
          for(int _i0 = 0; _i0 < _len_cq_host0; _i0++) {
              int _len_cq_host__i0__desc_base0 = 1;
          cq_host[_i0].desc_base = (int *) malloc(_len_cq_host__i0__desc_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cq_host__i0__desc_base0; _j0++) {
            cq_host[_i0].desc_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cq_host[_i0].slot_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_desc(cq_host,tag);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_cq_host0; _aux++) {
          free(cq_host[_aux].desc_base);
          }
          free(cq_host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
