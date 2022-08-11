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
struct icp_qat_uof_uword_block {scalar_t__ uword_offset; } ;
struct icp_qat_uof_objtable {int entry_num; } ;
struct icp_qat_uof_image {int dummy; } ;
struct icp_qat_uof_encap_obj {int beg_uof; } ;
struct icp_qat_uof_code_page {int code_area_offset; int /*<<< orphan*/  beg_addr_p; int /*<<< orphan*/  beg_addr_v; int /*<<< orphan*/  page_region; int /*<<< orphan*/  def_page; } ;
struct icp_qat_uof_code_area {scalar_t__ uword_block_tab; int /*<<< orphan*/  micro_words_num; } ;
struct icp_qat_uclo_encap_uwblock {scalar_t__ micro_words; } ;
struct icp_qat_uclo_encap_page {int uwblock_num; struct icp_qat_uclo_encap_uwblock* uwblock; int /*<<< orphan*/  micro_words_num; int /*<<< orphan*/  beg_addr_p; int /*<<< orphan*/  beg_addr_v; int /*<<< orphan*/  page_region; int /*<<< orphan*/  def_page; } ;

/* Variables and functions */

__attribute__((used)) static void qat_uclo_map_image_page(struct icp_qat_uof_encap_obj
				     *encap_uof_obj,
				     struct icp_qat_uof_image *img,
				     struct icp_qat_uclo_encap_page *page)
{
	struct icp_qat_uof_code_page *code_page;
	struct icp_qat_uof_code_area *code_area;
	struct icp_qat_uof_objtable *uword_block_tab;
	struct icp_qat_uof_uword_block *uwblock;
	int i;

	code_page = (struct icp_qat_uof_code_page *)
			((char *)img + sizeof(struct icp_qat_uof_image));
	page->def_page = code_page->def_page;
	page->page_region = code_page->page_region;
	page->beg_addr_v = code_page->beg_addr_v;
	page->beg_addr_p = code_page->beg_addr_p;
	code_area = (struct icp_qat_uof_code_area *)(encap_uof_obj->beg_uof +
						code_page->code_area_offset);
	page->micro_words_num = code_area->micro_words_num;
	uword_block_tab = (struct icp_qat_uof_objtable *)
			  (encap_uof_obj->beg_uof +
			  code_area->uword_block_tab);
	page->uwblock_num = uword_block_tab->entry_num;
	uwblock = (struct icp_qat_uof_uword_block *)((char *)uword_block_tab +
			sizeof(struct icp_qat_uof_objtable));
	page->uwblock = (struct icp_qat_uclo_encap_uwblock *)uwblock;
	for (i = 0; i < uword_block_tab->entry_num; i++)
		page->uwblock[i].micro_words =
		(uintptr_t)encap_uof_obj->beg_uof + uwblock[i].uword_offset;
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
          int _len_encap_uof_obj0 = 1;
          struct icp_qat_uof_encap_obj * encap_uof_obj = (struct icp_qat_uof_encap_obj *) malloc(_len_encap_uof_obj0*sizeof(struct icp_qat_uof_encap_obj));
          for(int _i0 = 0; _i0 < _len_encap_uof_obj0; _i0++) {
            encap_uof_obj[_i0].beg_uof = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 1;
          struct icp_qat_uof_image * img = (struct icp_qat_uof_image *) malloc(_len_img0*sizeof(struct icp_qat_uof_image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 1;
          struct icp_qat_uclo_encap_page * page = (struct icp_qat_uclo_encap_page *) malloc(_len_page0*sizeof(struct icp_qat_uclo_encap_page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].uwblock_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_page__i0__uwblock0 = 1;
          page[_i0].uwblock = (struct icp_qat_uclo_encap_uwblock *) malloc(_len_page__i0__uwblock0*sizeof(struct icp_qat_uclo_encap_uwblock));
          for(int _j0 = 0; _j0 < _len_page__i0__uwblock0; _j0++) {
            page[_i0].uwblock->micro_words = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        page[_i0].micro_words_num = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].beg_addr_p = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].beg_addr_v = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].page_region = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].def_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qat_uclo_map_image_page(encap_uof_obj,img,page);
          free(encap_uof_obj);
          free(img);
          for(int _aux = 0; _aux < _len_page0; _aux++) {
          free(page[_aux].uwblock);
          }
          free(page);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_encap_uof_obj0 = 65025;
          struct icp_qat_uof_encap_obj * encap_uof_obj = (struct icp_qat_uof_encap_obj *) malloc(_len_encap_uof_obj0*sizeof(struct icp_qat_uof_encap_obj));
          for(int _i0 = 0; _i0 < _len_encap_uof_obj0; _i0++) {
            encap_uof_obj[_i0].beg_uof = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 65025;
          struct icp_qat_uof_image * img = (struct icp_qat_uof_image *) malloc(_len_img0*sizeof(struct icp_qat_uof_image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 65025;
          struct icp_qat_uclo_encap_page * page = (struct icp_qat_uclo_encap_page *) malloc(_len_page0*sizeof(struct icp_qat_uclo_encap_page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].uwblock_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_page__i0__uwblock0 = 1;
          page[_i0].uwblock = (struct icp_qat_uclo_encap_uwblock *) malloc(_len_page__i0__uwblock0*sizeof(struct icp_qat_uclo_encap_uwblock));
          for(int _j0 = 0; _j0 < _len_page__i0__uwblock0; _j0++) {
            page[_i0].uwblock->micro_words = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        page[_i0].micro_words_num = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].beg_addr_p = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].beg_addr_v = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].page_region = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].def_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qat_uclo_map_image_page(encap_uof_obj,img,page);
          free(encap_uof_obj);
          free(img);
          for(int _aux = 0; _aux < _len_page0; _aux++) {
          free(page[_aux].uwblock);
          }
          free(page);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_encap_uof_obj0 = 100;
          struct icp_qat_uof_encap_obj * encap_uof_obj = (struct icp_qat_uof_encap_obj *) malloc(_len_encap_uof_obj0*sizeof(struct icp_qat_uof_encap_obj));
          for(int _i0 = 0; _i0 < _len_encap_uof_obj0; _i0++) {
            encap_uof_obj[_i0].beg_uof = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 100;
          struct icp_qat_uof_image * img = (struct icp_qat_uof_image *) malloc(_len_img0*sizeof(struct icp_qat_uof_image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 100;
          struct icp_qat_uclo_encap_page * page = (struct icp_qat_uclo_encap_page *) malloc(_len_page0*sizeof(struct icp_qat_uclo_encap_page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].uwblock_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_page__i0__uwblock0 = 1;
          page[_i0].uwblock = (struct icp_qat_uclo_encap_uwblock *) malloc(_len_page__i0__uwblock0*sizeof(struct icp_qat_uclo_encap_uwblock));
          for(int _j0 = 0; _j0 < _len_page__i0__uwblock0; _j0++) {
            page[_i0].uwblock->micro_words = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        page[_i0].micro_words_num = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].beg_addr_p = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].beg_addr_v = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].page_region = ((-2 * (next_i()%2)) + 1) * next_i();
        page[_i0].def_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qat_uclo_map_image_page(encap_uof_obj,img,page);
          free(encap_uof_obj);
          free(img);
          for(int _aux = 0; _aux < _len_page0; _aux++) {
          free(page[_aux].uwblock);
          }
          free(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
