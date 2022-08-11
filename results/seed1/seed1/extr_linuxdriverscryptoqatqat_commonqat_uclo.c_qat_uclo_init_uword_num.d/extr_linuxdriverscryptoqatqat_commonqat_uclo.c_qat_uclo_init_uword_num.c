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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct icp_qat_uclo_objhandle {int uimage_num; struct icp_qat_uclo_encapme* ae_uimage; } ;
struct icp_qat_uclo_encapme {TYPE_1__* page; scalar_t__ uwords_num; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_2__ {scalar_t__ micro_words_num; scalar_t__ beg_addr_p; } ;

/* Variables and functions */

__attribute__((used)) static void qat_uclo_init_uword_num(struct icp_qat_fw_loader_handle *handle)
{
	struct icp_qat_uclo_objhandle *obj_handle = handle->obj_handle;
	struct icp_qat_uclo_encapme *image;
	int a;

	for (a = 0; a < obj_handle->uimage_num; a++) {
		image = &obj_handle->ae_uimage[a];
		image->uwords_num = image->page->beg_addr_p +
					image->page->micro_words_num;
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
          int _len_handle0 = 1;
          struct icp_qat_fw_loader_handle * handle = (struct icp_qat_fw_loader_handle *) malloc(_len_handle0*sizeof(struct icp_qat_fw_loader_handle));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
              int _len_handle__i0__obj_handle0 = 1;
          handle[_i0].obj_handle = (struct icp_qat_uclo_objhandle *) malloc(_len_handle__i0__obj_handle0*sizeof(struct icp_qat_uclo_objhandle));
          for(int _j0 = 0; _j0 < _len_handle__i0__obj_handle0; _j0++) {
            handle[_i0].obj_handle->uimage_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handle__i0__obj_handle_ae_uimage0 = 1;
          handle[_i0].obj_handle->ae_uimage = (struct icp_qat_uclo_encapme *) malloc(_len_handle__i0__obj_handle_ae_uimage0*sizeof(struct icp_qat_uclo_encapme));
          for(int _j0 = 0; _j0 < _len_handle__i0__obj_handle_ae_uimage0; _j0++) {
              int _len_handle__i0__obj_handle_ae_uimage_page0 = 1;
          handle[_i0].obj_handle->ae_uimage->page = (struct TYPE_2__ *) malloc(_len_handle__i0__obj_handle_ae_uimage_page0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_handle__i0__obj_handle_ae_uimage_page0; _j0++) {
            handle[_i0].obj_handle->ae_uimage->page->micro_words_num = ((-2 * (next_i()%2)) + 1) * next_i();
        handle[_i0].obj_handle->ae_uimage->page->beg_addr_p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        handle[_i0].obj_handle->ae_uimage->uwords_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qat_uclo_init_uword_num(handle);
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].obj_handle);
          }
          free(handle);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_handle0 = 65025;
          struct icp_qat_fw_loader_handle * handle = (struct icp_qat_fw_loader_handle *) malloc(_len_handle0*sizeof(struct icp_qat_fw_loader_handle));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
              int _len_handle__i0__obj_handle0 = 1;
          handle[_i0].obj_handle = (struct icp_qat_uclo_objhandle *) malloc(_len_handle__i0__obj_handle0*sizeof(struct icp_qat_uclo_objhandle));
          for(int _j0 = 0; _j0 < _len_handle__i0__obj_handle0; _j0++) {
            handle[_i0].obj_handle->uimage_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handle__i0__obj_handle_ae_uimage0 = 1;
          handle[_i0].obj_handle->ae_uimage = (struct icp_qat_uclo_encapme *) malloc(_len_handle__i0__obj_handle_ae_uimage0*sizeof(struct icp_qat_uclo_encapme));
          for(int _j0 = 0; _j0 < _len_handle__i0__obj_handle_ae_uimage0; _j0++) {
              int _len_handle__i0__obj_handle_ae_uimage_page0 = 1;
          handle[_i0].obj_handle->ae_uimage->page = (struct TYPE_2__ *) malloc(_len_handle__i0__obj_handle_ae_uimage_page0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_handle__i0__obj_handle_ae_uimage_page0; _j0++) {
            handle[_i0].obj_handle->ae_uimage->page->micro_words_num = ((-2 * (next_i()%2)) + 1) * next_i();
        handle[_i0].obj_handle->ae_uimage->page->beg_addr_p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        handle[_i0].obj_handle->ae_uimage->uwords_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qat_uclo_init_uword_num(handle);
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].obj_handle);
          }
          free(handle);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_handle0 = 100;
          struct icp_qat_fw_loader_handle * handle = (struct icp_qat_fw_loader_handle *) malloc(_len_handle0*sizeof(struct icp_qat_fw_loader_handle));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
              int _len_handle__i0__obj_handle0 = 1;
          handle[_i0].obj_handle = (struct icp_qat_uclo_objhandle *) malloc(_len_handle__i0__obj_handle0*sizeof(struct icp_qat_uclo_objhandle));
          for(int _j0 = 0; _j0 < _len_handle__i0__obj_handle0; _j0++) {
            handle[_i0].obj_handle->uimage_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handle__i0__obj_handle_ae_uimage0 = 1;
          handle[_i0].obj_handle->ae_uimage = (struct icp_qat_uclo_encapme *) malloc(_len_handle__i0__obj_handle_ae_uimage0*sizeof(struct icp_qat_uclo_encapme));
          for(int _j0 = 0; _j0 < _len_handle__i0__obj_handle_ae_uimage0; _j0++) {
              int _len_handle__i0__obj_handle_ae_uimage_page0 = 1;
          handle[_i0].obj_handle->ae_uimage->page = (struct TYPE_2__ *) malloc(_len_handle__i0__obj_handle_ae_uimage_page0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_handle__i0__obj_handle_ae_uimage_page0; _j0++) {
            handle[_i0].obj_handle->ae_uimage->page->micro_words_num = ((-2 * (next_i()%2)) + 1) * next_i();
        handle[_i0].obj_handle->ae_uimage->page->beg_addr_p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        handle[_i0].obj_handle->ae_uimage->uwords_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qat_uclo_init_uword_num(handle);
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].obj_handle);
          }
          free(handle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
