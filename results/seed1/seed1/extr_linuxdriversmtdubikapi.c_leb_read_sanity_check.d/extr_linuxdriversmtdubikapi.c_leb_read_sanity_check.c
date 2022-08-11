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
struct ubi_volume_desc {struct ubi_volume* vol; } ;
struct ubi_volume {int vol_id; int used_ebs; int usable_leb_size; scalar_t__ vol_type; int last_eb_bytes; scalar_t__ upd_marker; struct ubi_device* ubi; } ;
struct ubi_device {int vtbl_slots; } ;

/* Variables and functions */
 int EBADF ; 
 int EINVAL ; 
 scalar_t__ UBI_STATIC_VOLUME ; 

__attribute__((used)) static int leb_read_sanity_check(struct ubi_volume_desc *desc, int lnum,
				 int offset, int len)
{
	struct ubi_volume *vol = desc->vol;
	struct ubi_device *ubi = vol->ubi;
	int vol_id = vol->vol_id;

	if (vol_id < 0 || vol_id >= ubi->vtbl_slots || lnum < 0 ||
	    lnum >= vol->used_ebs || offset < 0 || len < 0 ||
	    offset + len > vol->usable_leb_size)
		return -EINVAL;

	if (vol->vol_type == UBI_STATIC_VOLUME) {
		if (vol->used_ebs == 0)
			/* Empty static UBI volume */
			return 0;
		if (lnum == vol->used_ebs - 1 &&
		    offset + len > vol->last_eb_bytes)
			return -EINVAL;
	}

	if (vol->upd_marker)
		return -EBADF;

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
          int lnum = 100;
          int offset = 100;
          int len = 100;
          int _len_desc0 = 1;
          struct ubi_volume_desc * desc = (struct ubi_volume_desc *) malloc(_len_desc0*sizeof(struct ubi_volume_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__vol0 = 1;
          desc[_i0].vol = (struct ubi_volume *) malloc(_len_desc__i0__vol0*sizeof(struct ubi_volume));
          for(int _j0 = 0; _j0 < _len_desc__i0__vol0; _j0++) {
            desc[_i0].vol->vol_id = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->used_ebs = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->usable_leb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->vol_type = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->last_eb_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->upd_marker = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__vol_ubi0 = 1;
          desc[_i0].vol->ubi = (struct ubi_device *) malloc(_len_desc__i0__vol_ubi0*sizeof(struct ubi_device));
          for(int _j0 = 0; _j0 < _len_desc__i0__vol_ubi0; _j0++) {
            desc[_i0].vol->ubi->vtbl_slots = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = leb_read_sanity_check(desc,lnum,offset,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].vol);
          }
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lnum = 255;
          int offset = 255;
          int len = 255;
          int _len_desc0 = 65025;
          struct ubi_volume_desc * desc = (struct ubi_volume_desc *) malloc(_len_desc0*sizeof(struct ubi_volume_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__vol0 = 1;
          desc[_i0].vol = (struct ubi_volume *) malloc(_len_desc__i0__vol0*sizeof(struct ubi_volume));
          for(int _j0 = 0; _j0 < _len_desc__i0__vol0; _j0++) {
            desc[_i0].vol->vol_id = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->used_ebs = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->usable_leb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->vol_type = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->last_eb_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->upd_marker = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__vol_ubi0 = 1;
          desc[_i0].vol->ubi = (struct ubi_device *) malloc(_len_desc__i0__vol_ubi0*sizeof(struct ubi_device));
          for(int _j0 = 0; _j0 < _len_desc__i0__vol_ubi0; _j0++) {
            desc[_i0].vol->ubi->vtbl_slots = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = leb_read_sanity_check(desc,lnum,offset,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].vol);
          }
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lnum = 10;
          int offset = 10;
          int len = 10;
          int _len_desc0 = 100;
          struct ubi_volume_desc * desc = (struct ubi_volume_desc *) malloc(_len_desc0*sizeof(struct ubi_volume_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__vol0 = 1;
          desc[_i0].vol = (struct ubi_volume *) malloc(_len_desc__i0__vol0*sizeof(struct ubi_volume));
          for(int _j0 = 0; _j0 < _len_desc__i0__vol0; _j0++) {
            desc[_i0].vol->vol_id = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->used_ebs = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->usable_leb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->vol_type = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->last_eb_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].vol->upd_marker = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__vol_ubi0 = 1;
          desc[_i0].vol->ubi = (struct ubi_device *) malloc(_len_desc__i0__vol_ubi0*sizeof(struct ubi_device));
          for(int _j0 = 0; _j0 < _len_desc__i0__vol_ubi0; _j0++) {
            desc[_i0].vol->ubi->vtbl_slots = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = leb_read_sanity_check(desc,lnum,offset,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].vol);
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
