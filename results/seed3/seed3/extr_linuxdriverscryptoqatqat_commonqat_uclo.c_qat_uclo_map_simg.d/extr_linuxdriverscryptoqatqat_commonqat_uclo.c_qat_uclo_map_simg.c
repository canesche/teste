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
struct icp_qat_suof_objhdr {int /*<<< orphan*/  img_length; } ;
struct icp_qat_suof_img_hdr {unsigned long simg_name; unsigned long appmeta_data; int /*<<< orphan*/  fw_type; int /*<<< orphan*/  ae_mask; scalar_t__ css_simg; scalar_t__ css_signature; scalar_t__ css_key; scalar_t__ css_header; scalar_t__ simg_buf; int /*<<< orphan*/  simg_len; } ;
struct icp_qat_suof_handle {scalar_t__ suof_buf; } ;
struct icp_qat_suof_chunk_hdr {scalar_t__ offset; } ;
struct icp_qat_simg_ae_mode {int /*<<< orphan*/  fw_type; int /*<<< orphan*/  appmeta_data; int /*<<< orphan*/  simg_name; int /*<<< orphan*/  ae_mask; } ;
struct icp_qat_css_hdr {int dummy; } ;

/* Variables and functions */
 scalar_t__ ICP_QAT_CSS_FWSK_EXPONENT_LEN ; 
 scalar_t__ ICP_QAT_CSS_FWSK_MODULUS_LEN ; 
 scalar_t__ ICP_QAT_CSS_SIGNATURE_LEN ; 

__attribute__((used)) static void qat_uclo_map_simg(struct icp_qat_suof_handle *suof_handle,
			      struct icp_qat_suof_img_hdr *suof_img_hdr,
			      struct icp_qat_suof_chunk_hdr *suof_chunk_hdr)
{
	struct icp_qat_simg_ae_mode *ae_mode;
	struct icp_qat_suof_objhdr *suof_objhdr;

	suof_img_hdr->simg_buf  = (suof_handle->suof_buf +
				   suof_chunk_hdr->offset +
				   sizeof(*suof_objhdr));
	suof_img_hdr->simg_len = ((struct icp_qat_suof_objhdr *)(uintptr_t)
				  (suof_handle->suof_buf +
				   suof_chunk_hdr->offset))->img_length;

	suof_img_hdr->css_header = suof_img_hdr->simg_buf;
	suof_img_hdr->css_key = (suof_img_hdr->css_header +
				 sizeof(struct icp_qat_css_hdr));
	suof_img_hdr->css_signature = suof_img_hdr->css_key +
				      ICP_QAT_CSS_FWSK_MODULUS_LEN +
				      ICP_QAT_CSS_FWSK_EXPONENT_LEN;
	suof_img_hdr->css_simg = suof_img_hdr->css_signature +
				 ICP_QAT_CSS_SIGNATURE_LEN;

	ae_mode = (struct icp_qat_simg_ae_mode *)(suof_img_hdr->css_simg);
	suof_img_hdr->ae_mask = ae_mode->ae_mask;
	suof_img_hdr->simg_name = (unsigned long)&ae_mode->simg_name;
	suof_img_hdr->appmeta_data = (unsigned long)&ae_mode->appmeta_data;
	suof_img_hdr->fw_type = ae_mode->fw_type;
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
          int _len_suof_handle0 = 1;
          struct icp_qat_suof_handle * suof_handle = (struct icp_qat_suof_handle *) malloc(_len_suof_handle0*sizeof(struct icp_qat_suof_handle));
          for(int _i0 = 0; _i0 < _len_suof_handle0; _i0++) {
            suof_handle[_i0].suof_buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_suof_img_hdr0 = 1;
          struct icp_qat_suof_img_hdr * suof_img_hdr = (struct icp_qat_suof_img_hdr *) malloc(_len_suof_img_hdr0*sizeof(struct icp_qat_suof_img_hdr));
          for(int _i0 = 0; _i0 < _len_suof_img_hdr0; _i0++) {
            suof_img_hdr[_i0].simg_name = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].appmeta_data = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].fw_type = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].ae_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_simg = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_signature = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_key = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_header = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].simg_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].simg_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_suof_chunk_hdr0 = 1;
          struct icp_qat_suof_chunk_hdr * suof_chunk_hdr = (struct icp_qat_suof_chunk_hdr *) malloc(_len_suof_chunk_hdr0*sizeof(struct icp_qat_suof_chunk_hdr));
          for(int _i0 = 0; _i0 < _len_suof_chunk_hdr0; _i0++) {
            suof_chunk_hdr[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qat_uclo_map_simg(suof_handle,suof_img_hdr,suof_chunk_hdr);
          free(suof_handle);
          free(suof_img_hdr);
          free(suof_chunk_hdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_suof_handle0 = 65025;
          struct icp_qat_suof_handle * suof_handle = (struct icp_qat_suof_handle *) malloc(_len_suof_handle0*sizeof(struct icp_qat_suof_handle));
          for(int _i0 = 0; _i0 < _len_suof_handle0; _i0++) {
            suof_handle[_i0].suof_buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_suof_img_hdr0 = 65025;
          struct icp_qat_suof_img_hdr * suof_img_hdr = (struct icp_qat_suof_img_hdr *) malloc(_len_suof_img_hdr0*sizeof(struct icp_qat_suof_img_hdr));
          for(int _i0 = 0; _i0 < _len_suof_img_hdr0; _i0++) {
            suof_img_hdr[_i0].simg_name = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].appmeta_data = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].fw_type = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].ae_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_simg = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_signature = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_key = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_header = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].simg_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].simg_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_suof_chunk_hdr0 = 65025;
          struct icp_qat_suof_chunk_hdr * suof_chunk_hdr = (struct icp_qat_suof_chunk_hdr *) malloc(_len_suof_chunk_hdr0*sizeof(struct icp_qat_suof_chunk_hdr));
          for(int _i0 = 0; _i0 < _len_suof_chunk_hdr0; _i0++) {
            suof_chunk_hdr[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qat_uclo_map_simg(suof_handle,suof_img_hdr,suof_chunk_hdr);
          free(suof_handle);
          free(suof_img_hdr);
          free(suof_chunk_hdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_suof_handle0 = 100;
          struct icp_qat_suof_handle * suof_handle = (struct icp_qat_suof_handle *) malloc(_len_suof_handle0*sizeof(struct icp_qat_suof_handle));
          for(int _i0 = 0; _i0 < _len_suof_handle0; _i0++) {
            suof_handle[_i0].suof_buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_suof_img_hdr0 = 100;
          struct icp_qat_suof_img_hdr * suof_img_hdr = (struct icp_qat_suof_img_hdr *) malloc(_len_suof_img_hdr0*sizeof(struct icp_qat_suof_img_hdr));
          for(int _i0 = 0; _i0 < _len_suof_img_hdr0; _i0++) {
            suof_img_hdr[_i0].simg_name = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].appmeta_data = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].fw_type = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].ae_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_simg = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_signature = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_key = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].css_header = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].simg_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        suof_img_hdr[_i0].simg_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_suof_chunk_hdr0 = 100;
          struct icp_qat_suof_chunk_hdr * suof_chunk_hdr = (struct icp_qat_suof_chunk_hdr *) malloc(_len_suof_chunk_hdr0*sizeof(struct icp_qat_suof_chunk_hdr));
          for(int _i0 = 0; _i0 < _len_suof_chunk_hdr0; _i0++) {
            suof_chunk_hdr[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qat_uclo_map_simg(suof_handle,suof_img_hdr,suof_chunk_hdr);
          free(suof_handle);
          free(suof_img_hdr);
          free(suof_chunk_hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
