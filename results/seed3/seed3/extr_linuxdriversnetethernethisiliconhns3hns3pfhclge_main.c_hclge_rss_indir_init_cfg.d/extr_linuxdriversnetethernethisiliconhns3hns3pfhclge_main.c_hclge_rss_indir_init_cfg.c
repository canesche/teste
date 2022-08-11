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
struct hclge_vport {int* rss_indirection_tbl; int alloc_rss_size; } ;
struct hclge_dev {int num_vmdq_vport; struct hclge_vport* vport; } ;

/* Variables and functions */
 int HCLGE_RSS_IND_TBL_SIZE ; 

void hclge_rss_indir_init_cfg(struct hclge_dev *hdev)
{
	struct hclge_vport *vport = hdev->vport;
	int i, j;

	for (j = 0; j < hdev->num_vmdq_vport + 1; j++) {
		for (i = 0; i < HCLGE_RSS_IND_TBL_SIZE; i++)
			vport[j].rss_indirection_tbl[i] =
				i % vport[j].alloc_rss_size;
	}
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
          int _len_hdev0 = 1;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].num_vmdq_vport = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__vport0 = 1;
          hdev[_i0].vport = (struct hclge_vport *) malloc(_len_hdev__i0__vport0*sizeof(struct hclge_vport));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport0; _j0++) {
              int _len_hdev__i0__vport_rss_indirection_tbl0 = 1;
          hdev[_i0].vport->rss_indirection_tbl = (int *) malloc(_len_hdev__i0__vport_rss_indirection_tbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport_rss_indirection_tbl0; _j0++) {
            hdev[_i0].vport->rss_indirection_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].vport->alloc_rss_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hclge_rss_indir_init_cfg(hdev);
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].vport);
          }
          free(hdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdev0 = 65025;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].num_vmdq_vport = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__vport0 = 1;
          hdev[_i0].vport = (struct hclge_vport *) malloc(_len_hdev__i0__vport0*sizeof(struct hclge_vport));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport0; _j0++) {
              int _len_hdev__i0__vport_rss_indirection_tbl0 = 1;
          hdev[_i0].vport->rss_indirection_tbl = (int *) malloc(_len_hdev__i0__vport_rss_indirection_tbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport_rss_indirection_tbl0; _j0++) {
            hdev[_i0].vport->rss_indirection_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].vport->alloc_rss_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hclge_rss_indir_init_cfg(hdev);
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].vport);
          }
          free(hdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdev0 = 100;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].num_vmdq_vport = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__vport0 = 1;
          hdev[_i0].vport = (struct hclge_vport *) malloc(_len_hdev__i0__vport0*sizeof(struct hclge_vport));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport0; _j0++) {
              int _len_hdev__i0__vport_rss_indirection_tbl0 = 1;
          hdev[_i0].vport->rss_indirection_tbl = (int *) malloc(_len_hdev__i0__vport_rss_indirection_tbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport_rss_indirection_tbl0; _j0++) {
            hdev[_i0].vport->rss_indirection_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].vport->alloc_rss_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hclge_rss_indir_init_cfg(hdev);
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].vport);
          }
          free(hdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
