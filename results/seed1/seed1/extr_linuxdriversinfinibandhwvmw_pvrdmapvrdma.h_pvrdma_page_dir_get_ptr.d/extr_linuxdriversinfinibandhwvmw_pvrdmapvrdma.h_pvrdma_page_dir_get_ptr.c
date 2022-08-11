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
typedef  size_t u64 ;
struct pvrdma_page_dir {void** pages; } ;

/* Variables and functions */
 size_t PAGE_SIZE ; 

__attribute__((used)) static inline void *pvrdma_page_dir_get_ptr(struct pvrdma_page_dir *pdir,
					    u64 offset)
{
	return pdir->pages[offset / PAGE_SIZE] + (offset % PAGE_SIZE);
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
          unsigned long offset = 100;
          int _len_pdir0 = 1;
          struct pvrdma_page_dir * pdir = (struct pvrdma_page_dir *) malloc(_len_pdir0*sizeof(struct pvrdma_page_dir));
          for(int _i0 = 0; _i0 < _len_pdir0; _i0++) {
              int _len_pdir__i0__pages0 = 1;
          pdir[_i0].pages = (void **) malloc(_len_pdir__i0__pages0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_pdir__i0__pages0; _j0++) {
          }
          }
          void * benchRet = pvrdma_page_dir_get_ptr(pdir,offset);
          free(pdir);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long offset = 255;
          int _len_pdir0 = 65025;
          struct pvrdma_page_dir * pdir = (struct pvrdma_page_dir *) malloc(_len_pdir0*sizeof(struct pvrdma_page_dir));
          for(int _i0 = 0; _i0 < _len_pdir0; _i0++) {
              int _len_pdir__i0__pages0 = 1;
          pdir[_i0].pages = (void **) malloc(_len_pdir__i0__pages0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_pdir__i0__pages0; _j0++) {
          }
          }
          void * benchRet = pvrdma_page_dir_get_ptr(pdir,offset);
          free(pdir);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long offset = 10;
          int _len_pdir0 = 100;
          struct pvrdma_page_dir * pdir = (struct pvrdma_page_dir *) malloc(_len_pdir0*sizeof(struct pvrdma_page_dir));
          for(int _i0 = 0; _i0 < _len_pdir0; _i0++) {
              int _len_pdir__i0__pages0 = 1;
          pdir[_i0].pages = (void **) malloc(_len_pdir__i0__pages0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_pdir__i0__pages0; _j0++) {
          }
          }
          void * benchRet = pvrdma_page_dir_get_ptr(pdir,offset);
          free(pdir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
