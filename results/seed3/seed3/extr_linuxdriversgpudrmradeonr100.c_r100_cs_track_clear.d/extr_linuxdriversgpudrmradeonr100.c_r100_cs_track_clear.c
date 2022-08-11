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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct radeon_device {scalar_t__ family; } ;
struct TYPE_10__ {int pitch; int cpp; scalar_t__ offset; int /*<<< orphan*/ * robj; } ;
struct TYPE_8__ {int /*<<< orphan*/ * robj; } ;
struct r100_cs_track {int cb_dirty; int zb_dirty; int tex_dirty; int aa_dirty; int num_cb; int num_texture; int maxy; int separate_cube; int aaresolve; int z_enabled; int vtx_size; int immd_dwords; int num_arrays; int max_indx; TYPE_6__* textures; TYPE_5__* arrays; TYPE_4__ zb; TYPE_3__* cb; TYPE_2__ aa; } ;
struct TYPE_12__ {int pitch; int width; int height; int width_11; int height_11; int num_levels; int tex_coord_type; int txdepth; int cpp; int enabled; int lookup_disable; int roundup_w; int roundup_h; TYPE_1__* cube_info; int /*<<< orphan*/ * robj; int /*<<< orphan*/  compress_format; } ;
struct TYPE_11__ {int esize; int /*<<< orphan*/ * robj; } ;
struct TYPE_9__ {int pitch; int cpp; scalar_t__ offset; int /*<<< orphan*/ * robj; } ;
struct TYPE_7__ {int width; int height; scalar_t__ offset; int /*<<< orphan*/ * robj; } ;

/* Variables and functions */
 scalar_t__ CHIP_R300 ; 
 scalar_t__ CHIP_RS200 ; 
 int /*<<< orphan*/  R100_TRACK_COMP_NONE ; 

void r100_cs_track_clear(struct radeon_device *rdev, struct r100_cs_track *track)
{
	unsigned i, face;

	track->cb_dirty = true;
	track->zb_dirty = true;
	track->tex_dirty = true;
	track->aa_dirty = true;

	if (rdev->family < CHIP_R300) {
		track->num_cb = 1;
		if (rdev->family <= CHIP_RS200)
			track->num_texture = 3;
		else
			track->num_texture = 6;
		track->maxy = 2048;
		track->separate_cube = 1;
	} else {
		track->num_cb = 4;
		track->num_texture = 16;
		track->maxy = 4096;
		track->separate_cube = 0;
		track->aaresolve = false;
		track->aa.robj = NULL;
	}

	for (i = 0; i < track->num_cb; i++) {
		track->cb[i].robj = NULL;
		track->cb[i].pitch = 8192;
		track->cb[i].cpp = 16;
		track->cb[i].offset = 0;
	}
	track->z_enabled = true;
	track->zb.robj = NULL;
	track->zb.pitch = 8192;
	track->zb.cpp = 4;
	track->zb.offset = 0;
	track->vtx_size = 0x7F;
	track->immd_dwords = 0xFFFFFFFFUL;
	track->num_arrays = 11;
	track->max_indx = 0x00FFFFFFUL;
	for (i = 0; i < track->num_arrays; i++) {
		track->arrays[i].robj = NULL;
		track->arrays[i].esize = 0x7F;
	}
	for (i = 0; i < track->num_texture; i++) {
		track->textures[i].compress_format = R100_TRACK_COMP_NONE;
		track->textures[i].pitch = 16536;
		track->textures[i].width = 16536;
		track->textures[i].height = 16536;
		track->textures[i].width_11 = 1 << 11;
		track->textures[i].height_11 = 1 << 11;
		track->textures[i].num_levels = 12;
		if (rdev->family <= CHIP_RS200) {
			track->textures[i].tex_coord_type = 0;
			track->textures[i].txdepth = 0;
		} else {
			track->textures[i].txdepth = 16;
			track->textures[i].tex_coord_type = 1;
		}
		track->textures[i].cpp = 64;
		track->textures[i].robj = NULL;
		/* CS IB emission code makes sure texture unit are disabled */
		track->textures[i].enabled = false;
		track->textures[i].lookup_disable = false;
		track->textures[i].roundup_w = true;
		track->textures[i].roundup_h = true;
		if (track->separate_cube)
			for (face = 0; face < 5; face++) {
				track->textures[i].cube_info[face].robj = NULL;
				track->textures[i].cube_info[face].width = 16536;
				track->textures[i].cube_info[face].height = 16536;
				track->textures[i].cube_info[face].offset = 0;
			}
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
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track0 = 1;
          struct r100_cs_track * track = (struct r100_cs_track *) malloc(_len_track0*sizeof(struct r100_cs_track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0].cb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].zb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].tex_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].aa_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].num_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].num_texture = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].maxy = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].separate_cube = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].aaresolve = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].z_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].vtx_size = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].immd_dwords = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].num_arrays = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].max_indx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__textures0 = 1;
          track[_i0].textures = (struct TYPE_12__ *) malloc(_len_track__i0__textures0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_track__i0__textures0; _j0++) {
            track[_i0].textures->pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->width = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->height = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->width_11 = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->height_11 = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->num_levels = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->tex_coord_type = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->txdepth = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->cpp = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->lookup_disable = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->roundup_w = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->roundup_h = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__textures_cube_info0 = 1;
          track[_i0].textures->cube_info = (struct TYPE_7__ *) malloc(_len_track__i0__textures_cube_info0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_track__i0__textures_cube_info0; _j0++) {
            track[_i0].textures->cube_info->width = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->cube_info->height = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->cube_info->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__textures_cube_info_robj0 = 1;
          track[_i0].textures->cube_info->robj = (int *) malloc(_len_track__i0__textures_cube_info_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__textures_cube_info_robj0; _j0++) {
            track[_i0].textures->cube_info->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_track__i0__textures_robj0 = 1;
          track[_i0].textures->robj = (int *) malloc(_len_track__i0__textures_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__textures_robj0; _j0++) {
            track[_i0].textures->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].textures->compress_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__arrays0 = 1;
          track[_i0].arrays = (struct TYPE_11__ *) malloc(_len_track__i0__arrays0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_track__i0__arrays0; _j0++) {
            track[_i0].arrays->esize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__arrays_robj0 = 1;
          track[_i0].arrays->robj = (int *) malloc(_len_track__i0__arrays_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__arrays_robj0; _j0++) {
            track[_i0].arrays->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        track[_i0].zb.pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].zb.cpp = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].zb.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__zb_robj0 = 1;
          track[_i0].zb.robj = (int *) malloc(_len_track__i0__zb_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__zb_robj0; _j0++) {
            track[_i0].zb.robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb0 = 1;
          track[_i0].cb = (struct TYPE_9__ *) malloc(_len_track__i0__cb0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_track__i0__cb0; _j0++) {
            track[_i0].cb->pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb->cpp = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__cb_robj0 = 1;
          track[_i0].cb->robj = (int *) malloc(_len_track__i0__cb_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_robj0; _j0++) {
            track[_i0].cb->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_track__i0__aa_robj0 = 1;
          track[_i0].aa.robj = (int *) malloc(_len_track__i0__aa_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__aa_robj0; _j0++) {
            track[_i0].aa.robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          r100_cs_track_clear(rdev,track);
          free(rdev);
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].textures);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].arrays);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb);
          }
          free(track);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track0 = 65025;
          struct r100_cs_track * track = (struct r100_cs_track *) malloc(_len_track0*sizeof(struct r100_cs_track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0].cb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].zb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].tex_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].aa_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].num_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].num_texture = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].maxy = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].separate_cube = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].aaresolve = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].z_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].vtx_size = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].immd_dwords = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].num_arrays = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].max_indx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__textures0 = 1;
          track[_i0].textures = (struct TYPE_12__ *) malloc(_len_track__i0__textures0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_track__i0__textures0; _j0++) {
            track[_i0].textures->pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->width = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->height = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->width_11 = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->height_11 = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->num_levels = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->tex_coord_type = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->txdepth = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->cpp = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->lookup_disable = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->roundup_w = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->roundup_h = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__textures_cube_info0 = 1;
          track[_i0].textures->cube_info = (struct TYPE_7__ *) malloc(_len_track__i0__textures_cube_info0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_track__i0__textures_cube_info0; _j0++) {
            track[_i0].textures->cube_info->width = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->cube_info->height = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->cube_info->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__textures_cube_info_robj0 = 1;
          track[_i0].textures->cube_info->robj = (int *) malloc(_len_track__i0__textures_cube_info_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__textures_cube_info_robj0; _j0++) {
            track[_i0].textures->cube_info->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_track__i0__textures_robj0 = 1;
          track[_i0].textures->robj = (int *) malloc(_len_track__i0__textures_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__textures_robj0; _j0++) {
            track[_i0].textures->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].textures->compress_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__arrays0 = 1;
          track[_i0].arrays = (struct TYPE_11__ *) malloc(_len_track__i0__arrays0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_track__i0__arrays0; _j0++) {
            track[_i0].arrays->esize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__arrays_robj0 = 1;
          track[_i0].arrays->robj = (int *) malloc(_len_track__i0__arrays_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__arrays_robj0; _j0++) {
            track[_i0].arrays->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        track[_i0].zb.pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].zb.cpp = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].zb.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__zb_robj0 = 1;
          track[_i0].zb.robj = (int *) malloc(_len_track__i0__zb_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__zb_robj0; _j0++) {
            track[_i0].zb.robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb0 = 1;
          track[_i0].cb = (struct TYPE_9__ *) malloc(_len_track__i0__cb0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_track__i0__cb0; _j0++) {
            track[_i0].cb->pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb->cpp = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__cb_robj0 = 1;
          track[_i0].cb->robj = (int *) malloc(_len_track__i0__cb_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_robj0; _j0++) {
            track[_i0].cb->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_track__i0__aa_robj0 = 1;
          track[_i0].aa.robj = (int *) malloc(_len_track__i0__aa_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__aa_robj0; _j0++) {
            track[_i0].aa.robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          r100_cs_track_clear(rdev,track);
          free(rdev);
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].textures);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].arrays);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb);
          }
          free(track);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track0 = 100;
          struct r100_cs_track * track = (struct r100_cs_track *) malloc(_len_track0*sizeof(struct r100_cs_track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0].cb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].zb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].tex_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].aa_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].num_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].num_texture = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].maxy = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].separate_cube = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].aaresolve = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].z_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].vtx_size = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].immd_dwords = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].num_arrays = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].max_indx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__textures0 = 1;
          track[_i0].textures = (struct TYPE_12__ *) malloc(_len_track__i0__textures0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_track__i0__textures0; _j0++) {
            track[_i0].textures->pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->width = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->height = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->width_11 = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->height_11 = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->num_levels = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->tex_coord_type = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->txdepth = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->cpp = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->lookup_disable = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->roundup_w = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->roundup_h = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__textures_cube_info0 = 1;
          track[_i0].textures->cube_info = (struct TYPE_7__ *) malloc(_len_track__i0__textures_cube_info0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_track__i0__textures_cube_info0; _j0++) {
            track[_i0].textures->cube_info->width = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->cube_info->height = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].textures->cube_info->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__textures_cube_info_robj0 = 1;
          track[_i0].textures->cube_info->robj = (int *) malloc(_len_track__i0__textures_cube_info_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__textures_cube_info_robj0; _j0++) {
            track[_i0].textures->cube_info->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_track__i0__textures_robj0 = 1;
          track[_i0].textures->robj = (int *) malloc(_len_track__i0__textures_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__textures_robj0; _j0++) {
            track[_i0].textures->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].textures->compress_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__arrays0 = 1;
          track[_i0].arrays = (struct TYPE_11__ *) malloc(_len_track__i0__arrays0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_track__i0__arrays0; _j0++) {
            track[_i0].arrays->esize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__arrays_robj0 = 1;
          track[_i0].arrays->robj = (int *) malloc(_len_track__i0__arrays_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__arrays_robj0; _j0++) {
            track[_i0].arrays->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        track[_i0].zb.pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].zb.cpp = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].zb.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__zb_robj0 = 1;
          track[_i0].zb.robj = (int *) malloc(_len_track__i0__zb_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__zb_robj0; _j0++) {
            track[_i0].zb.robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb0 = 1;
          track[_i0].cb = (struct TYPE_9__ *) malloc(_len_track__i0__cb0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_track__i0__cb0; _j0++) {
            track[_i0].cb->pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb->cpp = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__cb_robj0 = 1;
          track[_i0].cb->robj = (int *) malloc(_len_track__i0__cb_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_robj0; _j0++) {
            track[_i0].cb->robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_track__i0__aa_robj0 = 1;
          track[_i0].aa.robj = (int *) malloc(_len_track__i0__aa_robj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__aa_robj0; _j0++) {
            track[_i0].aa.robj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          r100_cs_track_clear(rdev,track);
          free(rdev);
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].textures);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].arrays);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb);
          }
          free(track);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
