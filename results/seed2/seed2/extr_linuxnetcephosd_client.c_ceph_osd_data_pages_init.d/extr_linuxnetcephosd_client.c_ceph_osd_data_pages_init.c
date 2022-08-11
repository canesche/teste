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
typedef  int /*<<< orphan*/  u64 ;
typedef  int /*<<< orphan*/  u32 ;
struct page {int dummy; } ;
struct ceph_osd_data {int pages_from_pool; int own_pages; int /*<<< orphan*/  alignment; int /*<<< orphan*/  length; struct page** pages; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  CEPH_OSD_DATA_TYPE_PAGES ; 

__attribute__((used)) static void ceph_osd_data_pages_init(struct ceph_osd_data *osd_data,
			struct page **pages, u64 length, u32 alignment,
			bool pages_from_pool, bool own_pages)
{
	osd_data->type = CEPH_OSD_DATA_TYPE_PAGES;
	osd_data->pages = pages;
	osd_data->length = length;
	osd_data->alignment = alignment;
	osd_data->pages_from_pool = pages_from_pool;
	osd_data->own_pages = own_pages;
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
          int length = 100;
          int alignment = 100;
          int pages_from_pool = 100;
          int own_pages = 100;
          int _len_osd_data0 = 1;
          struct ceph_osd_data * osd_data = (struct ceph_osd_data *) malloc(_len_osd_data0*sizeof(struct ceph_osd_data));
          for(int _i0 = 0; _i0 < _len_osd_data0; _i0++) {
            osd_data[_i0].pages_from_pool = ((-2 * (next_i()%2)) + 1) * next_i();
        osd_data[_i0].own_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        osd_data[_i0].alignment = ((-2 * (next_i()%2)) + 1) * next_i();
        osd_data[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_osd_data__i0__pages0 = 1;
          osd_data[_i0].pages = (struct page **) malloc(_len_osd_data__i0__pages0*sizeof(struct page *));
          for(int _j0 = 0; _j0 < _len_osd_data__i0__pages0; _j0++) {
            int _len_osd_data__i0__pages1 = 1;
            osd_data[_i0].pages[_j0] = (struct page *) malloc(_len_osd_data__i0__pages1*sizeof(struct page));
            for(int _j1 = 0; _j1 < _len_osd_data__i0__pages1; _j1++) {
              osd_data[_i0].pages[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        osd_data[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pages0 = 1;
          struct page ** pages = (struct page **) malloc(_len_pages0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            int _len_pages1 = 1;
            pages[_i0] = (struct page *) malloc(_len_pages1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pages1; _i1++) {
              pages[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ceph_osd_data_pages_init(osd_data,pages,length,alignment,pages_from_pool,own_pages);
          for(int _aux = 0; _aux < _len_osd_data0; _aux++) {
          free(*(osd_data[_aux].pages));
        free(osd_data[_aux].pages);
          }
          free(osd_data);
          for(int i1 = 0; i1 < _len_pages0; i1++) {
            int _len_pages1 = 1;
              free(pages[i1]);
          }
          free(pages);
        
        break;
    }
    // big-arr
    case 1:
    {
          int length = 255;
          int alignment = 255;
          int pages_from_pool = 255;
          int own_pages = 255;
          int _len_osd_data0 = 65025;
          struct ceph_osd_data * osd_data = (struct ceph_osd_data *) malloc(_len_osd_data0*sizeof(struct ceph_osd_data));
          for(int _i0 = 0; _i0 < _len_osd_data0; _i0++) {
            osd_data[_i0].pages_from_pool = ((-2 * (next_i()%2)) + 1) * next_i();
        osd_data[_i0].own_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        osd_data[_i0].alignment = ((-2 * (next_i()%2)) + 1) * next_i();
        osd_data[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_osd_data__i0__pages0 = 1;
          osd_data[_i0].pages = (struct page **) malloc(_len_osd_data__i0__pages0*sizeof(struct page *));
          for(int _j0 = 0; _j0 < _len_osd_data__i0__pages0; _j0++) {
            int _len_osd_data__i0__pages1 = 1;
            osd_data[_i0].pages[_j0] = (struct page *) malloc(_len_osd_data__i0__pages1*sizeof(struct page));
            for(int _j1 = 0; _j1 < _len_osd_data__i0__pages1; _j1++) {
              osd_data[_i0].pages[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        osd_data[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pages0 = 65025;
          struct page ** pages = (struct page **) malloc(_len_pages0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            int _len_pages1 = 1;
            pages[_i0] = (struct page *) malloc(_len_pages1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pages1; _i1++) {
              pages[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ceph_osd_data_pages_init(osd_data,pages,length,alignment,pages_from_pool,own_pages);
          for(int _aux = 0; _aux < _len_osd_data0; _aux++) {
          free(*(osd_data[_aux].pages));
        free(osd_data[_aux].pages);
          }
          free(osd_data);
          for(int i1 = 0; i1 < _len_pages0; i1++) {
            int _len_pages1 = 1;
              free(pages[i1]);
          }
          free(pages);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int length = 10;
          int alignment = 10;
          int pages_from_pool = 10;
          int own_pages = 10;
          int _len_osd_data0 = 100;
          struct ceph_osd_data * osd_data = (struct ceph_osd_data *) malloc(_len_osd_data0*sizeof(struct ceph_osd_data));
          for(int _i0 = 0; _i0 < _len_osd_data0; _i0++) {
            osd_data[_i0].pages_from_pool = ((-2 * (next_i()%2)) + 1) * next_i();
        osd_data[_i0].own_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        osd_data[_i0].alignment = ((-2 * (next_i()%2)) + 1) * next_i();
        osd_data[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_osd_data__i0__pages0 = 1;
          osd_data[_i0].pages = (struct page **) malloc(_len_osd_data__i0__pages0*sizeof(struct page *));
          for(int _j0 = 0; _j0 < _len_osd_data__i0__pages0; _j0++) {
            int _len_osd_data__i0__pages1 = 1;
            osd_data[_i0].pages[_j0] = (struct page *) malloc(_len_osd_data__i0__pages1*sizeof(struct page));
            for(int _j1 = 0; _j1 < _len_osd_data__i0__pages1; _j1++) {
              osd_data[_i0].pages[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        osd_data[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pages0 = 100;
          struct page ** pages = (struct page **) malloc(_len_pages0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            int _len_pages1 = 1;
            pages[_i0] = (struct page *) malloc(_len_pages1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pages1; _i1++) {
              pages[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ceph_osd_data_pages_init(osd_data,pages,length,alignment,pages_from_pool,own_pages);
          for(int _aux = 0; _aux < _len_osd_data0; _aux++) {
          free(*(osd_data[_aux].pages));
        free(osd_data[_aux].pages);
          }
          free(osd_data);
          for(int i1 = 0; i1 < _len_pages0; i1++) {
            int _len_pages1 = 1;
              free(pages[i1]);
          }
          free(pages);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
