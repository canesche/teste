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
struct evergreen_cs_track {int* cb_color_bo_offset; int* cb_color_view; int* cb_color_slice; int cb_target_mask; int cb_shader_mask; int cb_dirty; int db_depth_slice; int db_depth_view; int db_depth_size; int db_depth_control; int db_z_info; int db_z_read_offset; int db_z_write_offset; int db_s_info; int db_s_read_offset; int db_s_write_offset; int db_dirty; int htile_offset; int* vgt_strmout_bo_offset; int streamout_dirty; int sx_misc_kill_all_prims; int /*<<< orphan*/ ** vgt_strmout_bo; scalar_t__* vgt_strmout_size; scalar_t__ htile_surface; int /*<<< orphan*/ * htile_bo; int /*<<< orphan*/ * db_s_write_bo; int /*<<< orphan*/ * db_s_read_bo; int /*<<< orphan*/ * db_z_write_bo; int /*<<< orphan*/ * db_z_read_bo; scalar_t__* cb_color_slice_idx; scalar_t__* cb_color_pitch; scalar_t__* cb_color_info; int /*<<< orphan*/ ** cb_color_bo; scalar_t__* cb_color_fmask_slice; scalar_t__* cb_color_cmask_slice; int /*<<< orphan*/ ** cb_color_cmask_bo; int /*<<< orphan*/ ** cb_color_fmask_bo; } ;

/* Variables and functions */

__attribute__((used)) static void evergreen_cs_track_init(struct evergreen_cs_track *track)
{
	int i;

	for (i = 0; i < 8; i++) {
		track->cb_color_fmask_bo[i] = NULL;
		track->cb_color_cmask_bo[i] = NULL;
		track->cb_color_cmask_slice[i] = 0;
		track->cb_color_fmask_slice[i] = 0;
	}

	for (i = 0; i < 12; i++) {
		track->cb_color_bo[i] = NULL;
		track->cb_color_bo_offset[i] = 0xFFFFFFFF;
		track->cb_color_info[i] = 0;
		track->cb_color_view[i] = 0xFFFFFFFF;
		track->cb_color_pitch[i] = 0;
		track->cb_color_slice[i] = 0xfffffff;
		track->cb_color_slice_idx[i] = 0;
	}
	track->cb_target_mask = 0xFFFFFFFF;
	track->cb_shader_mask = 0xFFFFFFFF;
	track->cb_dirty = true;

	track->db_depth_slice = 0xffffffff;
	track->db_depth_view = 0xFFFFC000;
	track->db_depth_size = 0xFFFFFFFF;
	track->db_depth_control = 0xFFFFFFFF;
	track->db_z_info = 0xFFFFFFFF;
	track->db_z_read_offset = 0xFFFFFFFF;
	track->db_z_write_offset = 0xFFFFFFFF;
	track->db_z_read_bo = NULL;
	track->db_z_write_bo = NULL;
	track->db_s_info = 0xFFFFFFFF;
	track->db_s_read_offset = 0xFFFFFFFF;
	track->db_s_write_offset = 0xFFFFFFFF;
	track->db_s_read_bo = NULL;
	track->db_s_write_bo = NULL;
	track->db_dirty = true;
	track->htile_bo = NULL;
	track->htile_offset = 0xFFFFFFFF;
	track->htile_surface = 0;

	for (i = 0; i < 4; i++) {
		track->vgt_strmout_size[i] = 0;
		track->vgt_strmout_bo[i] = NULL;
		track->vgt_strmout_bo_offset[i] = 0xFFFFFFFF;
	}
	track->streamout_dirty = true;
	track->sx_misc_kill_all_prims = false;
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
          int _len_track0 = 1;
          struct evergreen_cs_track * track = (struct evergreen_cs_track *) malloc(_len_track0*sizeof(struct evergreen_cs_track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
              int _len_track__i0__cb_color_bo_offset0 = 1;
          track[_i0].cb_color_bo_offset = (int *) malloc(_len_track__i0__cb_color_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo_offset0; _j0++) {
            track[_i0].cb_color_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_view0 = 1;
          track[_i0].cb_color_view = (int *) malloc(_len_track__i0__cb_color_view0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_view0; _j0++) {
            track[_i0].cb_color_view[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_slice0 = 1;
          track[_i0].cb_color_slice = (int *) malloc(_len_track__i0__cb_color_slice0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_slice0; _j0++) {
            track[_i0].cb_color_slice[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].cb_target_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_shader_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_slice = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_view = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_size = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_control = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_z_info = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_z_read_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_z_write_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_s_info = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_s_read_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_s_write_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].htile_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__vgt_strmout_bo_offset0 = 1;
          track[_i0].vgt_strmout_bo_offset = (int *) malloc(_len_track__i0__vgt_strmout_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo_offset0; _j0++) {
            track[_i0].vgt_strmout_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].streamout_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].sx_misc_kill_all_prims = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__vgt_strmout_bo0 = 1;
          track[_i0].vgt_strmout_bo = (int **) malloc(_len_track__i0__vgt_strmout_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo0; _j0++) {
            int _len_track__i0__vgt_strmout_bo1 = 1;
            track[_i0].vgt_strmout_bo[_j0] = (int *) malloc(_len_track__i0__vgt_strmout_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__vgt_strmout_bo1; _j1++) {
              track[_i0].vgt_strmout_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__vgt_strmout_size0 = 1;
          track[_i0].vgt_strmout_size = (long *) malloc(_len_track__i0__vgt_strmout_size0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_size0; _j0++) {
            track[_i0].vgt_strmout_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].htile_surface = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__htile_bo0 = 1;
          track[_i0].htile_bo = (int *) malloc(_len_track__i0__htile_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__htile_bo0; _j0++) {
            track[_i0].htile_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_s_write_bo0 = 1;
          track[_i0].db_s_write_bo = (int *) malloc(_len_track__i0__db_s_write_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_s_write_bo0; _j0++) {
            track[_i0].db_s_write_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_s_read_bo0 = 1;
          track[_i0].db_s_read_bo = (int *) malloc(_len_track__i0__db_s_read_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_s_read_bo0; _j0++) {
            track[_i0].db_s_read_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_z_write_bo0 = 1;
          track[_i0].db_z_write_bo = (int *) malloc(_len_track__i0__db_z_write_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_z_write_bo0; _j0++) {
            track[_i0].db_z_write_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_z_read_bo0 = 1;
          track[_i0].db_z_read_bo = (int *) malloc(_len_track__i0__db_z_read_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_z_read_bo0; _j0++) {
            track[_i0].db_z_read_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_slice_idx0 = 1;
          track[_i0].cb_color_slice_idx = (long *) malloc(_len_track__i0__cb_color_slice_idx0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_slice_idx0; _j0++) {
            track[_i0].cb_color_slice_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_pitch0 = 1;
          track[_i0].cb_color_pitch = (long *) malloc(_len_track__i0__cb_color_pitch0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_pitch0; _j0++) {
            track[_i0].cb_color_pitch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_info0 = 1;
          track[_i0].cb_color_info = (long *) malloc(_len_track__i0__cb_color_info0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_info0; _j0++) {
            track[_i0].cb_color_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_bo0 = 1;
          track[_i0].cb_color_bo = (int **) malloc(_len_track__i0__cb_color_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo0; _j0++) {
            int _len_track__i0__cb_color_bo1 = 1;
            track[_i0].cb_color_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_bo1; _j1++) {
              track[_i0].cb_color_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__cb_color_fmask_slice0 = 1;
          track[_i0].cb_color_fmask_slice = (long *) malloc(_len_track__i0__cb_color_fmask_slice0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_fmask_slice0; _j0++) {
            track[_i0].cb_color_fmask_slice[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_cmask_slice0 = 1;
          track[_i0].cb_color_cmask_slice = (long *) malloc(_len_track__i0__cb_color_cmask_slice0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_cmask_slice0; _j0++) {
            track[_i0].cb_color_cmask_slice[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_cmask_bo0 = 1;
          track[_i0].cb_color_cmask_bo = (int **) malloc(_len_track__i0__cb_color_cmask_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_cmask_bo0; _j0++) {
            int _len_track__i0__cb_color_cmask_bo1 = 1;
            track[_i0].cb_color_cmask_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_cmask_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_cmask_bo1; _j1++) {
              track[_i0].cb_color_cmask_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__cb_color_fmask_bo0 = 1;
          track[_i0].cb_color_fmask_bo = (int **) malloc(_len_track__i0__cb_color_fmask_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_fmask_bo0; _j0++) {
            int _len_track__i0__cb_color_fmask_bo1 = 1;
            track[_i0].cb_color_fmask_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_fmask_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_fmask_bo1; _j1++) {
              track[_i0].cb_color_fmask_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          evergreen_cs_track_init(track);
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_view);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_slice);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].vgt_strmout_bo));
        free(track[_aux].vgt_strmout_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_size);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].htile_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_s_write_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_s_read_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_z_write_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_z_read_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_slice_idx);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_pitch);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_info);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_bo));
        free(track[_aux].cb_color_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_fmask_slice);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_cmask_slice);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_cmask_bo));
        free(track[_aux].cb_color_cmask_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_fmask_bo));
        free(track[_aux].cb_color_fmask_bo);
          }
          free(track);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_track0 = 65025;
          struct evergreen_cs_track * track = (struct evergreen_cs_track *) malloc(_len_track0*sizeof(struct evergreen_cs_track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
              int _len_track__i0__cb_color_bo_offset0 = 1;
          track[_i0].cb_color_bo_offset = (int *) malloc(_len_track__i0__cb_color_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo_offset0; _j0++) {
            track[_i0].cb_color_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_view0 = 1;
          track[_i0].cb_color_view = (int *) malloc(_len_track__i0__cb_color_view0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_view0; _j0++) {
            track[_i0].cb_color_view[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_slice0 = 1;
          track[_i0].cb_color_slice = (int *) malloc(_len_track__i0__cb_color_slice0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_slice0; _j0++) {
            track[_i0].cb_color_slice[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].cb_target_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_shader_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_slice = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_view = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_size = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_control = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_z_info = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_z_read_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_z_write_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_s_info = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_s_read_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_s_write_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].htile_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__vgt_strmout_bo_offset0 = 1;
          track[_i0].vgt_strmout_bo_offset = (int *) malloc(_len_track__i0__vgt_strmout_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo_offset0; _j0++) {
            track[_i0].vgt_strmout_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].streamout_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].sx_misc_kill_all_prims = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__vgt_strmout_bo0 = 1;
          track[_i0].vgt_strmout_bo = (int **) malloc(_len_track__i0__vgt_strmout_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo0; _j0++) {
            int _len_track__i0__vgt_strmout_bo1 = 1;
            track[_i0].vgt_strmout_bo[_j0] = (int *) malloc(_len_track__i0__vgt_strmout_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__vgt_strmout_bo1; _j1++) {
              track[_i0].vgt_strmout_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__vgt_strmout_size0 = 1;
          track[_i0].vgt_strmout_size = (long *) malloc(_len_track__i0__vgt_strmout_size0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_size0; _j0++) {
            track[_i0].vgt_strmout_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].htile_surface = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__htile_bo0 = 1;
          track[_i0].htile_bo = (int *) malloc(_len_track__i0__htile_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__htile_bo0; _j0++) {
            track[_i0].htile_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_s_write_bo0 = 1;
          track[_i0].db_s_write_bo = (int *) malloc(_len_track__i0__db_s_write_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_s_write_bo0; _j0++) {
            track[_i0].db_s_write_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_s_read_bo0 = 1;
          track[_i0].db_s_read_bo = (int *) malloc(_len_track__i0__db_s_read_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_s_read_bo0; _j0++) {
            track[_i0].db_s_read_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_z_write_bo0 = 1;
          track[_i0].db_z_write_bo = (int *) malloc(_len_track__i0__db_z_write_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_z_write_bo0; _j0++) {
            track[_i0].db_z_write_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_z_read_bo0 = 1;
          track[_i0].db_z_read_bo = (int *) malloc(_len_track__i0__db_z_read_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_z_read_bo0; _j0++) {
            track[_i0].db_z_read_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_slice_idx0 = 1;
          track[_i0].cb_color_slice_idx = (long *) malloc(_len_track__i0__cb_color_slice_idx0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_slice_idx0; _j0++) {
            track[_i0].cb_color_slice_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_pitch0 = 1;
          track[_i0].cb_color_pitch = (long *) malloc(_len_track__i0__cb_color_pitch0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_pitch0; _j0++) {
            track[_i0].cb_color_pitch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_info0 = 1;
          track[_i0].cb_color_info = (long *) malloc(_len_track__i0__cb_color_info0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_info0; _j0++) {
            track[_i0].cb_color_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_bo0 = 1;
          track[_i0].cb_color_bo = (int **) malloc(_len_track__i0__cb_color_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo0; _j0++) {
            int _len_track__i0__cb_color_bo1 = 1;
            track[_i0].cb_color_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_bo1; _j1++) {
              track[_i0].cb_color_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__cb_color_fmask_slice0 = 1;
          track[_i0].cb_color_fmask_slice = (long *) malloc(_len_track__i0__cb_color_fmask_slice0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_fmask_slice0; _j0++) {
            track[_i0].cb_color_fmask_slice[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_cmask_slice0 = 1;
          track[_i0].cb_color_cmask_slice = (long *) malloc(_len_track__i0__cb_color_cmask_slice0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_cmask_slice0; _j0++) {
            track[_i0].cb_color_cmask_slice[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_cmask_bo0 = 1;
          track[_i0].cb_color_cmask_bo = (int **) malloc(_len_track__i0__cb_color_cmask_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_cmask_bo0; _j0++) {
            int _len_track__i0__cb_color_cmask_bo1 = 1;
            track[_i0].cb_color_cmask_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_cmask_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_cmask_bo1; _j1++) {
              track[_i0].cb_color_cmask_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__cb_color_fmask_bo0 = 1;
          track[_i0].cb_color_fmask_bo = (int **) malloc(_len_track__i0__cb_color_fmask_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_fmask_bo0; _j0++) {
            int _len_track__i0__cb_color_fmask_bo1 = 1;
            track[_i0].cb_color_fmask_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_fmask_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_fmask_bo1; _j1++) {
              track[_i0].cb_color_fmask_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          evergreen_cs_track_init(track);
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_view);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_slice);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].vgt_strmout_bo));
        free(track[_aux].vgt_strmout_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_size);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].htile_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_s_write_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_s_read_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_z_write_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_z_read_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_slice_idx);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_pitch);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_info);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_bo));
        free(track[_aux].cb_color_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_fmask_slice);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_cmask_slice);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_cmask_bo));
        free(track[_aux].cb_color_cmask_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_fmask_bo));
        free(track[_aux].cb_color_fmask_bo);
          }
          free(track);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_track0 = 100;
          struct evergreen_cs_track * track = (struct evergreen_cs_track *) malloc(_len_track0*sizeof(struct evergreen_cs_track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
              int _len_track__i0__cb_color_bo_offset0 = 1;
          track[_i0].cb_color_bo_offset = (int *) malloc(_len_track__i0__cb_color_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo_offset0; _j0++) {
            track[_i0].cb_color_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_view0 = 1;
          track[_i0].cb_color_view = (int *) malloc(_len_track__i0__cb_color_view0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_view0; _j0++) {
            track[_i0].cb_color_view[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_slice0 = 1;
          track[_i0].cb_color_slice = (int *) malloc(_len_track__i0__cb_color_slice0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_slice0; _j0++) {
            track[_i0].cb_color_slice[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].cb_target_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_shader_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_slice = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_view = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_size = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_control = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_z_info = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_z_read_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_z_write_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_s_info = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_s_read_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_s_write_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].htile_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__vgt_strmout_bo_offset0 = 1;
          track[_i0].vgt_strmout_bo_offset = (int *) malloc(_len_track__i0__vgt_strmout_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo_offset0; _j0++) {
            track[_i0].vgt_strmout_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].streamout_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].sx_misc_kill_all_prims = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__vgt_strmout_bo0 = 1;
          track[_i0].vgt_strmout_bo = (int **) malloc(_len_track__i0__vgt_strmout_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo0; _j0++) {
            int _len_track__i0__vgt_strmout_bo1 = 1;
            track[_i0].vgt_strmout_bo[_j0] = (int *) malloc(_len_track__i0__vgt_strmout_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__vgt_strmout_bo1; _j1++) {
              track[_i0].vgt_strmout_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__vgt_strmout_size0 = 1;
          track[_i0].vgt_strmout_size = (long *) malloc(_len_track__i0__vgt_strmout_size0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_size0; _j0++) {
            track[_i0].vgt_strmout_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].htile_surface = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__htile_bo0 = 1;
          track[_i0].htile_bo = (int *) malloc(_len_track__i0__htile_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__htile_bo0; _j0++) {
            track[_i0].htile_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_s_write_bo0 = 1;
          track[_i0].db_s_write_bo = (int *) malloc(_len_track__i0__db_s_write_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_s_write_bo0; _j0++) {
            track[_i0].db_s_write_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_s_read_bo0 = 1;
          track[_i0].db_s_read_bo = (int *) malloc(_len_track__i0__db_s_read_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_s_read_bo0; _j0++) {
            track[_i0].db_s_read_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_z_write_bo0 = 1;
          track[_i0].db_z_write_bo = (int *) malloc(_len_track__i0__db_z_write_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_z_write_bo0; _j0++) {
            track[_i0].db_z_write_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__db_z_read_bo0 = 1;
          track[_i0].db_z_read_bo = (int *) malloc(_len_track__i0__db_z_read_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_z_read_bo0; _j0++) {
            track[_i0].db_z_read_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_slice_idx0 = 1;
          track[_i0].cb_color_slice_idx = (long *) malloc(_len_track__i0__cb_color_slice_idx0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_slice_idx0; _j0++) {
            track[_i0].cb_color_slice_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_pitch0 = 1;
          track[_i0].cb_color_pitch = (long *) malloc(_len_track__i0__cb_color_pitch0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_pitch0; _j0++) {
            track[_i0].cb_color_pitch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_info0 = 1;
          track[_i0].cb_color_info = (long *) malloc(_len_track__i0__cb_color_info0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_info0; _j0++) {
            track[_i0].cb_color_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_bo0 = 1;
          track[_i0].cb_color_bo = (int **) malloc(_len_track__i0__cb_color_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo0; _j0++) {
            int _len_track__i0__cb_color_bo1 = 1;
            track[_i0].cb_color_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_bo1; _j1++) {
              track[_i0].cb_color_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__cb_color_fmask_slice0 = 1;
          track[_i0].cb_color_fmask_slice = (long *) malloc(_len_track__i0__cb_color_fmask_slice0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_fmask_slice0; _j0++) {
            track[_i0].cb_color_fmask_slice[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_cmask_slice0 = 1;
          track[_i0].cb_color_cmask_slice = (long *) malloc(_len_track__i0__cb_color_cmask_slice0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_cmask_slice0; _j0++) {
            track[_i0].cb_color_cmask_slice[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_cmask_bo0 = 1;
          track[_i0].cb_color_cmask_bo = (int **) malloc(_len_track__i0__cb_color_cmask_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_cmask_bo0; _j0++) {
            int _len_track__i0__cb_color_cmask_bo1 = 1;
            track[_i0].cb_color_cmask_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_cmask_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_cmask_bo1; _j1++) {
              track[_i0].cb_color_cmask_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__cb_color_fmask_bo0 = 1;
          track[_i0].cb_color_fmask_bo = (int **) malloc(_len_track__i0__cb_color_fmask_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_fmask_bo0; _j0++) {
            int _len_track__i0__cb_color_fmask_bo1 = 1;
            track[_i0].cb_color_fmask_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_fmask_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_fmask_bo1; _j1++) {
              track[_i0].cb_color_fmask_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          evergreen_cs_track_init(track);
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_view);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_slice);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].vgt_strmout_bo));
        free(track[_aux].vgt_strmout_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_size);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].htile_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_s_write_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_s_read_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_z_write_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].db_z_read_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_slice_idx);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_pitch);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_info);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_bo));
        free(track[_aux].cb_color_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_fmask_slice);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_cmask_slice);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_cmask_bo));
        free(track[_aux].cb_color_cmask_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_fmask_bo));
        free(track[_aux].cb_color_fmask_bo);
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
