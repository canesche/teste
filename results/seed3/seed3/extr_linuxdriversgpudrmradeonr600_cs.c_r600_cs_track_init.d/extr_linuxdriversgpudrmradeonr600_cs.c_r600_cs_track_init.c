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
struct r600_cs_track {int* cb_color_view; int* cb_color_bo_offset; int* cb_color_bo_mc; int* cb_color_frag_offset; int* cb_color_tile_offset; int* cb_color_mask; int is_resolve; int nsamples; int log_nsamples; int cb_target_mask; int cb_shader_mask; int cb_dirty; int db_bo_mc; int db_depth_info; int db_depth_view; int db_depth_size; int db_depth_control; int db_dirty; int htile_offset; int* vgt_strmout_bo_offset; int* vgt_strmout_bo_mc; int streamout_dirty; int sx_misc_kill_all_prims; int /*<<< orphan*/ ** vgt_strmout_bo; scalar_t__* vgt_strmout_size; scalar_t__ htile_surface; int /*<<< orphan*/ * htile_bo; scalar_t__ db_depth_size_idx; int /*<<< orphan*/ * db_bo; int /*<<< orphan*/ ** cb_color_tile_bo; int /*<<< orphan*/ ** cb_color_frag_bo; int /*<<< orphan*/ ** cb_color_bo; scalar_t__* cb_color_info; scalar_t__* cb_color_size_idx; scalar_t__* cb_color_size; scalar_t__* cb_color_base_last; int /*<<< orphan*/  sq_config; } ;

/* Variables and functions */
 int /*<<< orphan*/  DX9_CONSTS ; 

__attribute__((used)) static void r600_cs_track_init(struct r600_cs_track *track)
{
	int i;

	/* assume DX9 mode */
	track->sq_config = DX9_CONSTS;
	for (i = 0; i < 8; i++) {
		track->cb_color_base_last[i] = 0;
		track->cb_color_size[i] = 0;
		track->cb_color_size_idx[i] = 0;
		track->cb_color_info[i] = 0;
		track->cb_color_view[i] = 0xFFFFFFFF;
		track->cb_color_bo[i] = NULL;
		track->cb_color_bo_offset[i] = 0xFFFFFFFF;
		track->cb_color_bo_mc[i] = 0xFFFFFFFF;
		track->cb_color_frag_bo[i] = NULL;
		track->cb_color_frag_offset[i] = 0xFFFFFFFF;
		track->cb_color_tile_bo[i] = NULL;
		track->cb_color_tile_offset[i] = 0xFFFFFFFF;
		track->cb_color_mask[i] = 0xFFFFFFFF;
	}
	track->is_resolve = false;
	track->nsamples = 16;
	track->log_nsamples = 4;
	track->cb_target_mask = 0xFFFFFFFF;
	track->cb_shader_mask = 0xFFFFFFFF;
	track->cb_dirty = true;
	track->db_bo = NULL;
	track->db_bo_mc = 0xFFFFFFFF;
	/* assume the biggest format and that htile is enabled */
	track->db_depth_info = 7 | (1 << 25);
	track->db_depth_view = 0xFFFFC000;
	track->db_depth_size = 0xFFFFFFFF;
	track->db_depth_size_idx = 0;
	track->db_depth_control = 0xFFFFFFFF;
	track->db_dirty = true;
	track->htile_bo = NULL;
	track->htile_offset = 0xFFFFFFFF;
	track->htile_surface = 0;

	for (i = 0; i < 4; i++) {
		track->vgt_strmout_size[i] = 0;
		track->vgt_strmout_bo[i] = NULL;
		track->vgt_strmout_bo_offset[i] = 0xFFFFFFFF;
		track->vgt_strmout_bo_mc[i] = 0xFFFFFFFF;
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
          struct r600_cs_track * track = (struct r600_cs_track *) malloc(_len_track0*sizeof(struct r600_cs_track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
              int _len_track__i0__cb_color_view0 = 1;
          track[_i0].cb_color_view = (int *) malloc(_len_track__i0__cb_color_view0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_view0; _j0++) {
            track[_i0].cb_color_view[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_bo_offset0 = 1;
          track[_i0].cb_color_bo_offset = (int *) malloc(_len_track__i0__cb_color_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo_offset0; _j0++) {
            track[_i0].cb_color_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_bo_mc0 = 1;
          track[_i0].cb_color_bo_mc = (int *) malloc(_len_track__i0__cb_color_bo_mc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo_mc0; _j0++) {
            track[_i0].cb_color_bo_mc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_frag_offset0 = 1;
          track[_i0].cb_color_frag_offset = (int *) malloc(_len_track__i0__cb_color_frag_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_frag_offset0; _j0++) {
            track[_i0].cb_color_frag_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_tile_offset0 = 1;
          track[_i0].cb_color_tile_offset = (int *) malloc(_len_track__i0__cb_color_tile_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_tile_offset0; _j0++) {
            track[_i0].cb_color_tile_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_mask0 = 1;
          track[_i0].cb_color_mask = (int *) malloc(_len_track__i0__cb_color_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_mask0; _j0++) {
            track[_i0].cb_color_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].is_resolve = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].nsamples = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].log_nsamples = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_target_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_shader_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_bo_mc = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_info = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_view = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_size = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_control = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].htile_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__vgt_strmout_bo_offset0 = 1;
          track[_i0].vgt_strmout_bo_offset = (int *) malloc(_len_track__i0__vgt_strmout_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo_offset0; _j0++) {
            track[_i0].vgt_strmout_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__vgt_strmout_bo_mc0 = 1;
          track[_i0].vgt_strmout_bo_mc = (int *) malloc(_len_track__i0__vgt_strmout_bo_mc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo_mc0; _j0++) {
            track[_i0].vgt_strmout_bo_mc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
        track[_i0].db_depth_size_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__db_bo0 = 1;
          track[_i0].db_bo = (int *) malloc(_len_track__i0__db_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_bo0; _j0++) {
            track[_i0].db_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_tile_bo0 = 1;
          track[_i0].cb_color_tile_bo = (int **) malloc(_len_track__i0__cb_color_tile_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_tile_bo0; _j0++) {
            int _len_track__i0__cb_color_tile_bo1 = 1;
            track[_i0].cb_color_tile_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_tile_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_tile_bo1; _j1++) {
              track[_i0].cb_color_tile_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__cb_color_frag_bo0 = 1;
          track[_i0].cb_color_frag_bo = (int **) malloc(_len_track__i0__cb_color_frag_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_frag_bo0; _j0++) {
            int _len_track__i0__cb_color_frag_bo1 = 1;
            track[_i0].cb_color_frag_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_frag_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_frag_bo1; _j1++) {
              track[_i0].cb_color_frag_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
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
          int _len_track__i0__cb_color_info0 = 1;
          track[_i0].cb_color_info = (long *) malloc(_len_track__i0__cb_color_info0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_info0; _j0++) {
            track[_i0].cb_color_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_size_idx0 = 1;
          track[_i0].cb_color_size_idx = (long *) malloc(_len_track__i0__cb_color_size_idx0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_size_idx0; _j0++) {
            track[_i0].cb_color_size_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_size0 = 1;
          track[_i0].cb_color_size = (long *) malloc(_len_track__i0__cb_color_size0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_size0; _j0++) {
            track[_i0].cb_color_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_base_last0 = 1;
          track[_i0].cb_color_base_last = (long *) malloc(_len_track__i0__cb_color_base_last0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_base_last0; _j0++) {
            track[_i0].cb_color_base_last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].sq_config = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          r600_cs_track_init(track);
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_view);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_bo_mc);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_frag_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_tile_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_mask);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_bo_mc);
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
          free(track[_aux].db_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_tile_bo));
        free(track[_aux].cb_color_tile_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_frag_bo));
        free(track[_aux].cb_color_frag_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_bo));
        free(track[_aux].cb_color_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_info);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_size_idx);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_size);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_base_last);
          }
          free(track);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_track0 = 65025;
          struct r600_cs_track * track = (struct r600_cs_track *) malloc(_len_track0*sizeof(struct r600_cs_track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
              int _len_track__i0__cb_color_view0 = 1;
          track[_i0].cb_color_view = (int *) malloc(_len_track__i0__cb_color_view0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_view0; _j0++) {
            track[_i0].cb_color_view[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_bo_offset0 = 1;
          track[_i0].cb_color_bo_offset = (int *) malloc(_len_track__i0__cb_color_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo_offset0; _j0++) {
            track[_i0].cb_color_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_bo_mc0 = 1;
          track[_i0].cb_color_bo_mc = (int *) malloc(_len_track__i0__cb_color_bo_mc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo_mc0; _j0++) {
            track[_i0].cb_color_bo_mc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_frag_offset0 = 1;
          track[_i0].cb_color_frag_offset = (int *) malloc(_len_track__i0__cb_color_frag_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_frag_offset0; _j0++) {
            track[_i0].cb_color_frag_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_tile_offset0 = 1;
          track[_i0].cb_color_tile_offset = (int *) malloc(_len_track__i0__cb_color_tile_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_tile_offset0; _j0++) {
            track[_i0].cb_color_tile_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_mask0 = 1;
          track[_i0].cb_color_mask = (int *) malloc(_len_track__i0__cb_color_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_mask0; _j0++) {
            track[_i0].cb_color_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].is_resolve = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].nsamples = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].log_nsamples = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_target_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_shader_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_bo_mc = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_info = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_view = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_size = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_control = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].htile_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__vgt_strmout_bo_offset0 = 1;
          track[_i0].vgt_strmout_bo_offset = (int *) malloc(_len_track__i0__vgt_strmout_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo_offset0; _j0++) {
            track[_i0].vgt_strmout_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__vgt_strmout_bo_mc0 = 1;
          track[_i0].vgt_strmout_bo_mc = (int *) malloc(_len_track__i0__vgt_strmout_bo_mc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo_mc0; _j0++) {
            track[_i0].vgt_strmout_bo_mc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
        track[_i0].db_depth_size_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__db_bo0 = 1;
          track[_i0].db_bo = (int *) malloc(_len_track__i0__db_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_bo0; _j0++) {
            track[_i0].db_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_tile_bo0 = 1;
          track[_i0].cb_color_tile_bo = (int **) malloc(_len_track__i0__cb_color_tile_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_tile_bo0; _j0++) {
            int _len_track__i0__cb_color_tile_bo1 = 1;
            track[_i0].cb_color_tile_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_tile_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_tile_bo1; _j1++) {
              track[_i0].cb_color_tile_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__cb_color_frag_bo0 = 1;
          track[_i0].cb_color_frag_bo = (int **) malloc(_len_track__i0__cb_color_frag_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_frag_bo0; _j0++) {
            int _len_track__i0__cb_color_frag_bo1 = 1;
            track[_i0].cb_color_frag_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_frag_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_frag_bo1; _j1++) {
              track[_i0].cb_color_frag_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
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
          int _len_track__i0__cb_color_info0 = 1;
          track[_i0].cb_color_info = (long *) malloc(_len_track__i0__cb_color_info0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_info0; _j0++) {
            track[_i0].cb_color_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_size_idx0 = 1;
          track[_i0].cb_color_size_idx = (long *) malloc(_len_track__i0__cb_color_size_idx0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_size_idx0; _j0++) {
            track[_i0].cb_color_size_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_size0 = 1;
          track[_i0].cb_color_size = (long *) malloc(_len_track__i0__cb_color_size0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_size0; _j0++) {
            track[_i0].cb_color_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_base_last0 = 1;
          track[_i0].cb_color_base_last = (long *) malloc(_len_track__i0__cb_color_base_last0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_base_last0; _j0++) {
            track[_i0].cb_color_base_last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].sq_config = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          r600_cs_track_init(track);
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_view);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_bo_mc);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_frag_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_tile_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_mask);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_bo_mc);
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
          free(track[_aux].db_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_tile_bo));
        free(track[_aux].cb_color_tile_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_frag_bo));
        free(track[_aux].cb_color_frag_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_bo));
        free(track[_aux].cb_color_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_info);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_size_idx);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_size);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_base_last);
          }
          free(track);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_track0 = 100;
          struct r600_cs_track * track = (struct r600_cs_track *) malloc(_len_track0*sizeof(struct r600_cs_track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
              int _len_track__i0__cb_color_view0 = 1;
          track[_i0].cb_color_view = (int *) malloc(_len_track__i0__cb_color_view0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_view0; _j0++) {
            track[_i0].cb_color_view[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_bo_offset0 = 1;
          track[_i0].cb_color_bo_offset = (int *) malloc(_len_track__i0__cb_color_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo_offset0; _j0++) {
            track[_i0].cb_color_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_bo_mc0 = 1;
          track[_i0].cb_color_bo_mc = (int *) malloc(_len_track__i0__cb_color_bo_mc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_bo_mc0; _j0++) {
            track[_i0].cb_color_bo_mc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_frag_offset0 = 1;
          track[_i0].cb_color_frag_offset = (int *) malloc(_len_track__i0__cb_color_frag_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_frag_offset0; _j0++) {
            track[_i0].cb_color_frag_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_tile_offset0 = 1;
          track[_i0].cb_color_tile_offset = (int *) malloc(_len_track__i0__cb_color_tile_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_tile_offset0; _j0++) {
            track[_i0].cb_color_tile_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_mask0 = 1;
          track[_i0].cb_color_mask = (int *) malloc(_len_track__i0__cb_color_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_mask0; _j0++) {
            track[_i0].cb_color_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].is_resolve = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].nsamples = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].log_nsamples = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_target_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_shader_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].cb_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_bo_mc = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_info = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_view = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_size = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_depth_control = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].db_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].htile_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__vgt_strmout_bo_offset0 = 1;
          track[_i0].vgt_strmout_bo_offset = (int *) malloc(_len_track__i0__vgt_strmout_bo_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo_offset0; _j0++) {
            track[_i0].vgt_strmout_bo_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__vgt_strmout_bo_mc0 = 1;
          track[_i0].vgt_strmout_bo_mc = (int *) malloc(_len_track__i0__vgt_strmout_bo_mc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__vgt_strmout_bo_mc0; _j0++) {
            track[_i0].vgt_strmout_bo_mc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
        track[_i0].db_depth_size_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_track__i0__db_bo0 = 1;
          track[_i0].db_bo = (int *) malloc(_len_track__i0__db_bo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_track__i0__db_bo0; _j0++) {
            track[_i0].db_bo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_tile_bo0 = 1;
          track[_i0].cb_color_tile_bo = (int **) malloc(_len_track__i0__cb_color_tile_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_tile_bo0; _j0++) {
            int _len_track__i0__cb_color_tile_bo1 = 1;
            track[_i0].cb_color_tile_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_tile_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_tile_bo1; _j1++) {
              track[_i0].cb_color_tile_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_track__i0__cb_color_frag_bo0 = 1;
          track[_i0].cb_color_frag_bo = (int **) malloc(_len_track__i0__cb_color_frag_bo0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_frag_bo0; _j0++) {
            int _len_track__i0__cb_color_frag_bo1 = 1;
            track[_i0].cb_color_frag_bo[_j0] = (int *) malloc(_len_track__i0__cb_color_frag_bo1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_track__i0__cb_color_frag_bo1; _j1++) {
              track[_i0].cb_color_frag_bo[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
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
          int _len_track__i0__cb_color_info0 = 1;
          track[_i0].cb_color_info = (long *) malloc(_len_track__i0__cb_color_info0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_info0; _j0++) {
            track[_i0].cb_color_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_size_idx0 = 1;
          track[_i0].cb_color_size_idx = (long *) malloc(_len_track__i0__cb_color_size_idx0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_size_idx0; _j0++) {
            track[_i0].cb_color_size_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_size0 = 1;
          track[_i0].cb_color_size = (long *) malloc(_len_track__i0__cb_color_size0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_size0; _j0++) {
            track[_i0].cb_color_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_track__i0__cb_color_base_last0 = 1;
          track[_i0].cb_color_base_last = (long *) malloc(_len_track__i0__cb_color_base_last0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_track__i0__cb_color_base_last0; _j0++) {
            track[_i0].cb_color_base_last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        track[_i0].sq_config = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          r600_cs_track_init(track);
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_view);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_bo_mc);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_frag_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_tile_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_mask);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_bo_offset);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].vgt_strmout_bo_mc);
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
          free(track[_aux].db_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_tile_bo));
        free(track[_aux].cb_color_tile_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_frag_bo));
        free(track[_aux].cb_color_frag_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(*(track[_aux].cb_color_bo));
        free(track[_aux].cb_color_bo);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_info);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_size_idx);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_size);
          }
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].cb_color_base_last);
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
