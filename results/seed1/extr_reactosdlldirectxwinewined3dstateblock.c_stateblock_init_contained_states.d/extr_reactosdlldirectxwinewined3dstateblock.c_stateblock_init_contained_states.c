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
struct TYPE_11__ {int* renderState; int* transform; unsigned int vertexShaderConstantsI; unsigned int vertexShaderConstantsB; unsigned int pixelShaderConstantsI; unsigned int pixelShaderConstantsB; int* textureState; int* samplerState; scalar_t__* ps_consts_f; scalar_t__* vs_consts_f; } ;
struct wined3d_stateblock {unsigned int* contained_render_states; size_t num_contained_render_states; unsigned int* contained_transform_states; size_t num_contained_transform_states; unsigned int* contained_vs_consts_f; size_t num_contained_vs_consts_f; unsigned int* contained_vs_consts_i; size_t num_contained_vs_consts_i; unsigned int* contained_vs_consts_b; size_t num_contained_vs_consts_b; unsigned int* contained_ps_consts_f; size_t num_contained_ps_consts_f; unsigned int* contained_ps_consts_i; size_t num_contained_ps_consts_i; unsigned int* contained_ps_consts_b; size_t num_contained_ps_consts_b; size_t num_contained_tss_states; size_t num_contained_sampler_states; TYPE_6__* contained_sampler_states; TYPE_5__ changed; TYPE_4__* contained_tss_states; TYPE_2__* device; } ;
struct TYPE_9__ {unsigned int vs_uniform_count; unsigned int ps_uniform_count; } ;
struct wined3d_d3d_info {TYPE_3__ limits; } ;
struct TYPE_12__ {unsigned int stage; unsigned int state; } ;
struct TYPE_10__ {unsigned int stage; unsigned int state; } ;
struct TYPE_8__ {TYPE_1__* adapter; } ;
struct TYPE_7__ {struct wined3d_d3d_info d3d_info; } ;
typedef  int DWORD ;

/* Variables and functions */
 unsigned int HIGHEST_TRANSFORMSTATE ; 
 unsigned int MAX_COMBINED_SAMPLERS ; 
 unsigned int MAX_TEXTURES ; 
 unsigned int WINED3D_MAX_CONSTS_B ; 
 unsigned int WINED3D_MAX_CONSTS_I ; 
 unsigned int WINEHIGHEST_RENDER_STATE ; 

void stateblock_init_contained_states(struct wined3d_stateblock *stateblock)
{
    const struct wined3d_d3d_info *d3d_info = &stateblock->device->adapter->d3d_info;
    unsigned int i, j;

    for (i = 0; i <= WINEHIGHEST_RENDER_STATE >> 5; ++i)
    {
        DWORD map = stateblock->changed.renderState[i];
        for (j = 0; map; map >>= 1, ++j)
        {
            if (!(map & 1)) continue;

            stateblock->contained_render_states[stateblock->num_contained_render_states] = (i << 5) | j;
            ++stateblock->num_contained_render_states;
        }
    }

    for (i = 0; i <= HIGHEST_TRANSFORMSTATE >> 5; ++i)
    {
        DWORD map = stateblock->changed.transform[i];
        for (j = 0; map; map >>= 1, ++j)
        {
            if (!(map & 1)) continue;

            stateblock->contained_transform_states[stateblock->num_contained_transform_states] = (i << 5) | j;
            ++stateblock->num_contained_transform_states;
        }
    }

    for (i = 0; i < d3d_info->limits.vs_uniform_count; ++i)
    {
        if (stateblock->changed.vs_consts_f[i])
        {
            stateblock->contained_vs_consts_f[stateblock->num_contained_vs_consts_f] = i;
            ++stateblock->num_contained_vs_consts_f;
        }
    }

    for (i = 0; i < WINED3D_MAX_CONSTS_I; ++i)
    {
        if (stateblock->changed.vertexShaderConstantsI & (1u << i))
        {
            stateblock->contained_vs_consts_i[stateblock->num_contained_vs_consts_i] = i;
            ++stateblock->num_contained_vs_consts_i;
        }
    }

    for (i = 0; i < WINED3D_MAX_CONSTS_B; ++i)
    {
        if (stateblock->changed.vertexShaderConstantsB & (1u << i))
        {
            stateblock->contained_vs_consts_b[stateblock->num_contained_vs_consts_b] = i;
            ++stateblock->num_contained_vs_consts_b;
        }
    }

    for (i = 0; i < d3d_info->limits.ps_uniform_count; ++i)
    {
        if (stateblock->changed.ps_consts_f[i])
        {
            stateblock->contained_ps_consts_f[stateblock->num_contained_ps_consts_f] = i;
            ++stateblock->num_contained_ps_consts_f;
        }
    }

    for (i = 0; i < WINED3D_MAX_CONSTS_I; ++i)
    {
        if (stateblock->changed.pixelShaderConstantsI & (1u << i))
        {
            stateblock->contained_ps_consts_i[stateblock->num_contained_ps_consts_i] = i;
            ++stateblock->num_contained_ps_consts_i;
        }
    }

    for (i = 0; i < WINED3D_MAX_CONSTS_B; ++i)
    {
        if (stateblock->changed.pixelShaderConstantsB & (1u << i))
        {
            stateblock->contained_ps_consts_b[stateblock->num_contained_ps_consts_b] = i;
            ++stateblock->num_contained_ps_consts_b;
        }
    }

    for (i = 0; i < MAX_TEXTURES; ++i)
    {
        DWORD map = stateblock->changed.textureState[i];

        for(j = 0; map; map >>= 1, ++j)
        {
            if (!(map & 1)) continue;

            stateblock->contained_tss_states[stateblock->num_contained_tss_states].stage = i;
            stateblock->contained_tss_states[stateblock->num_contained_tss_states].state = j;
            ++stateblock->num_contained_tss_states;
        }
    }

    for (i = 0; i < MAX_COMBINED_SAMPLERS; ++i)
    {
        DWORD map = stateblock->changed.samplerState[i];

        for (j = 0; map; map >>= 1, ++j)
        {
            if (!(map & 1)) continue;

            stateblock->contained_sampler_states[stateblock->num_contained_sampler_states].stage = i;
            stateblock->contained_sampler_states[stateblock->num_contained_sampler_states].state = j;
            ++stateblock->num_contained_sampler_states;
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
          int _len_stateblock0 = 1;
          struct wined3d_stateblock * stateblock = (struct wined3d_stateblock *) malloc(_len_stateblock0*sizeof(struct wined3d_stateblock));
          for(int _i0 = 0; _i0 < _len_stateblock0; _i0++) {
              int _len_stateblock__i0__contained_render_states0 = 1;
          stateblock[_i0].contained_render_states = (unsigned int *) malloc(_len_stateblock__i0__contained_render_states0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_render_states0; _j0++) {
            stateblock[_i0].contained_render_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_render_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_transform_states0 = 1;
          stateblock[_i0].contained_transform_states = (unsigned int *) malloc(_len_stateblock__i0__contained_transform_states0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_transform_states0; _j0++) {
            stateblock[_i0].contained_transform_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_transform_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_vs_consts_f0 = 1;
          stateblock[_i0].contained_vs_consts_f = (unsigned int *) malloc(_len_stateblock__i0__contained_vs_consts_f0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_vs_consts_f0; _j0++) {
            stateblock[_i0].contained_vs_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_vs_consts_f = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_vs_consts_i0 = 1;
          stateblock[_i0].contained_vs_consts_i = (unsigned int *) malloc(_len_stateblock__i0__contained_vs_consts_i0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_vs_consts_i0; _j0++) {
            stateblock[_i0].contained_vs_consts_i[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_vs_consts_i = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_vs_consts_b0 = 1;
          stateblock[_i0].contained_vs_consts_b = (unsigned int *) malloc(_len_stateblock__i0__contained_vs_consts_b0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_vs_consts_b0; _j0++) {
            stateblock[_i0].contained_vs_consts_b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_vs_consts_b = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_ps_consts_f0 = 1;
          stateblock[_i0].contained_ps_consts_f = (unsigned int *) malloc(_len_stateblock__i0__contained_ps_consts_f0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_ps_consts_f0; _j0++) {
            stateblock[_i0].contained_ps_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_ps_consts_f = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_ps_consts_i0 = 1;
          stateblock[_i0].contained_ps_consts_i = (unsigned int *) malloc(_len_stateblock__i0__contained_ps_consts_i0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_ps_consts_i0; _j0++) {
            stateblock[_i0].contained_ps_consts_i[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_ps_consts_i = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_ps_consts_b0 = 1;
          stateblock[_i0].contained_ps_consts_b = (unsigned int *) malloc(_len_stateblock__i0__contained_ps_consts_b0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_ps_consts_b0; _j0++) {
            stateblock[_i0].contained_ps_consts_b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_ps_consts_b = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].num_contained_tss_states = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].num_contained_sampler_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_sampler_states0 = 1;
          stateblock[_i0].contained_sampler_states = (struct TYPE_12__ *) malloc(_len_stateblock__i0__contained_sampler_states0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_sampler_states0; _j0++) {
            stateblock[_i0].contained_sampler_states->stage = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].contained_sampler_states->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_renderState0 = 1;
          stateblock[_i0].changed.renderState = (int *) malloc(_len_stateblock__i0__changed_renderState0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_renderState0; _j0++) {
            stateblock[_i0].changed.renderState[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_transform0 = 1;
          stateblock[_i0].changed.transform = (int *) malloc(_len_stateblock__i0__changed_transform0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_transform0; _j0++) {
            stateblock[_i0].changed.transform[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].changed.vertexShaderConstantsI = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].changed.vertexShaderConstantsB = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].changed.pixelShaderConstantsI = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].changed.pixelShaderConstantsB = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__changed_textureState0 = 1;
          stateblock[_i0].changed.textureState = (int *) malloc(_len_stateblock__i0__changed_textureState0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_textureState0; _j0++) {
            stateblock[_i0].changed.textureState[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_samplerState0 = 1;
          stateblock[_i0].changed.samplerState = (int *) malloc(_len_stateblock__i0__changed_samplerState0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_samplerState0; _j0++) {
            stateblock[_i0].changed.samplerState[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_ps_consts_f0 = 1;
          stateblock[_i0].changed.ps_consts_f = (long *) malloc(_len_stateblock__i0__changed_ps_consts_f0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_ps_consts_f0; _j0++) {
            stateblock[_i0].changed.ps_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_vs_consts_f0 = 1;
          stateblock[_i0].changed.vs_consts_f = (long *) malloc(_len_stateblock__i0__changed_vs_consts_f0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_vs_consts_f0; _j0++) {
            stateblock[_i0].changed.vs_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__contained_tss_states0 = 1;
          stateblock[_i0].contained_tss_states = (struct TYPE_10__ *) malloc(_len_stateblock__i0__contained_tss_states0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_tss_states0; _j0++) {
            stateblock[_i0].contained_tss_states->stage = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].contained_tss_states->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__device0 = 1;
          stateblock[_i0].device = (struct TYPE_8__ *) malloc(_len_stateblock__i0__device0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__device0; _j0++) {
              int _len_stateblock__i0__device_adapter0 = 1;
          stateblock[_i0].device->adapter = (struct TYPE_7__ *) malloc(_len_stateblock__i0__device_adapter0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__device_adapter0; _j0++) {
            stateblock[_i0].device->adapter->d3d_info.limits.vs_uniform_count = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].device->adapter->d3d_info.limits.ps_uniform_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          stateblock_init_contained_states(stateblock);
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_render_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_transform_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_vs_consts_f);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_vs_consts_i);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_vs_consts_b);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_ps_consts_f);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_ps_consts_i);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_ps_consts_b);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_sampler_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_tss_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].device);
          }
          free(stateblock);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stateblock0 = 65025;
          struct wined3d_stateblock * stateblock = (struct wined3d_stateblock *) malloc(_len_stateblock0*sizeof(struct wined3d_stateblock));
          for(int _i0 = 0; _i0 < _len_stateblock0; _i0++) {
              int _len_stateblock__i0__contained_render_states0 = 1;
          stateblock[_i0].contained_render_states = (unsigned int *) malloc(_len_stateblock__i0__contained_render_states0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_render_states0; _j0++) {
            stateblock[_i0].contained_render_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_render_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_transform_states0 = 1;
          stateblock[_i0].contained_transform_states = (unsigned int *) malloc(_len_stateblock__i0__contained_transform_states0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_transform_states0; _j0++) {
            stateblock[_i0].contained_transform_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_transform_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_vs_consts_f0 = 1;
          stateblock[_i0].contained_vs_consts_f = (unsigned int *) malloc(_len_stateblock__i0__contained_vs_consts_f0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_vs_consts_f0; _j0++) {
            stateblock[_i0].contained_vs_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_vs_consts_f = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_vs_consts_i0 = 1;
          stateblock[_i0].contained_vs_consts_i = (unsigned int *) malloc(_len_stateblock__i0__contained_vs_consts_i0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_vs_consts_i0; _j0++) {
            stateblock[_i0].contained_vs_consts_i[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_vs_consts_i = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_vs_consts_b0 = 1;
          stateblock[_i0].contained_vs_consts_b = (unsigned int *) malloc(_len_stateblock__i0__contained_vs_consts_b0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_vs_consts_b0; _j0++) {
            stateblock[_i0].contained_vs_consts_b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_vs_consts_b = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_ps_consts_f0 = 1;
          stateblock[_i0].contained_ps_consts_f = (unsigned int *) malloc(_len_stateblock__i0__contained_ps_consts_f0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_ps_consts_f0; _j0++) {
            stateblock[_i0].contained_ps_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_ps_consts_f = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_ps_consts_i0 = 1;
          stateblock[_i0].contained_ps_consts_i = (unsigned int *) malloc(_len_stateblock__i0__contained_ps_consts_i0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_ps_consts_i0; _j0++) {
            stateblock[_i0].contained_ps_consts_i[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_ps_consts_i = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_ps_consts_b0 = 1;
          stateblock[_i0].contained_ps_consts_b = (unsigned int *) malloc(_len_stateblock__i0__contained_ps_consts_b0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_ps_consts_b0; _j0++) {
            stateblock[_i0].contained_ps_consts_b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_ps_consts_b = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].num_contained_tss_states = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].num_contained_sampler_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_sampler_states0 = 1;
          stateblock[_i0].contained_sampler_states = (struct TYPE_12__ *) malloc(_len_stateblock__i0__contained_sampler_states0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_sampler_states0; _j0++) {
            stateblock[_i0].contained_sampler_states->stage = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].contained_sampler_states->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_renderState0 = 1;
          stateblock[_i0].changed.renderState = (int *) malloc(_len_stateblock__i0__changed_renderState0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_renderState0; _j0++) {
            stateblock[_i0].changed.renderState[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_transform0 = 1;
          stateblock[_i0].changed.transform = (int *) malloc(_len_stateblock__i0__changed_transform0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_transform0; _j0++) {
            stateblock[_i0].changed.transform[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].changed.vertexShaderConstantsI = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].changed.vertexShaderConstantsB = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].changed.pixelShaderConstantsI = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].changed.pixelShaderConstantsB = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__changed_textureState0 = 1;
          stateblock[_i0].changed.textureState = (int *) malloc(_len_stateblock__i0__changed_textureState0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_textureState0; _j0++) {
            stateblock[_i0].changed.textureState[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_samplerState0 = 1;
          stateblock[_i0].changed.samplerState = (int *) malloc(_len_stateblock__i0__changed_samplerState0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_samplerState0; _j0++) {
            stateblock[_i0].changed.samplerState[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_ps_consts_f0 = 1;
          stateblock[_i0].changed.ps_consts_f = (long *) malloc(_len_stateblock__i0__changed_ps_consts_f0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_ps_consts_f0; _j0++) {
            stateblock[_i0].changed.ps_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_vs_consts_f0 = 1;
          stateblock[_i0].changed.vs_consts_f = (long *) malloc(_len_stateblock__i0__changed_vs_consts_f0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_vs_consts_f0; _j0++) {
            stateblock[_i0].changed.vs_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__contained_tss_states0 = 1;
          stateblock[_i0].contained_tss_states = (struct TYPE_10__ *) malloc(_len_stateblock__i0__contained_tss_states0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_tss_states0; _j0++) {
            stateblock[_i0].contained_tss_states->stage = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].contained_tss_states->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__device0 = 1;
          stateblock[_i0].device = (struct TYPE_8__ *) malloc(_len_stateblock__i0__device0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__device0; _j0++) {
              int _len_stateblock__i0__device_adapter0 = 1;
          stateblock[_i0].device->adapter = (struct TYPE_7__ *) malloc(_len_stateblock__i0__device_adapter0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__device_adapter0; _j0++) {
            stateblock[_i0].device->adapter->d3d_info.limits.vs_uniform_count = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].device->adapter->d3d_info.limits.ps_uniform_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          stateblock_init_contained_states(stateblock);
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_render_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_transform_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_vs_consts_f);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_vs_consts_i);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_vs_consts_b);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_ps_consts_f);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_ps_consts_i);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_ps_consts_b);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_sampler_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_tss_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].device);
          }
          free(stateblock);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stateblock0 = 100;
          struct wined3d_stateblock * stateblock = (struct wined3d_stateblock *) malloc(_len_stateblock0*sizeof(struct wined3d_stateblock));
          for(int _i0 = 0; _i0 < _len_stateblock0; _i0++) {
              int _len_stateblock__i0__contained_render_states0 = 1;
          stateblock[_i0].contained_render_states = (unsigned int *) malloc(_len_stateblock__i0__contained_render_states0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_render_states0; _j0++) {
            stateblock[_i0].contained_render_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_render_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_transform_states0 = 1;
          stateblock[_i0].contained_transform_states = (unsigned int *) malloc(_len_stateblock__i0__contained_transform_states0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_transform_states0; _j0++) {
            stateblock[_i0].contained_transform_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_transform_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_vs_consts_f0 = 1;
          stateblock[_i0].contained_vs_consts_f = (unsigned int *) malloc(_len_stateblock__i0__contained_vs_consts_f0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_vs_consts_f0; _j0++) {
            stateblock[_i0].contained_vs_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_vs_consts_f = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_vs_consts_i0 = 1;
          stateblock[_i0].contained_vs_consts_i = (unsigned int *) malloc(_len_stateblock__i0__contained_vs_consts_i0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_vs_consts_i0; _j0++) {
            stateblock[_i0].contained_vs_consts_i[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_vs_consts_i = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_vs_consts_b0 = 1;
          stateblock[_i0].contained_vs_consts_b = (unsigned int *) malloc(_len_stateblock__i0__contained_vs_consts_b0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_vs_consts_b0; _j0++) {
            stateblock[_i0].contained_vs_consts_b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_vs_consts_b = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_ps_consts_f0 = 1;
          stateblock[_i0].contained_ps_consts_f = (unsigned int *) malloc(_len_stateblock__i0__contained_ps_consts_f0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_ps_consts_f0; _j0++) {
            stateblock[_i0].contained_ps_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_ps_consts_f = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_ps_consts_i0 = 1;
          stateblock[_i0].contained_ps_consts_i = (unsigned int *) malloc(_len_stateblock__i0__contained_ps_consts_i0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_ps_consts_i0; _j0++) {
            stateblock[_i0].contained_ps_consts_i[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_ps_consts_i = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_ps_consts_b0 = 1;
          stateblock[_i0].contained_ps_consts_b = (unsigned int *) malloc(_len_stateblock__i0__contained_ps_consts_b0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_ps_consts_b0; _j0++) {
            stateblock[_i0].contained_ps_consts_b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].num_contained_ps_consts_b = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].num_contained_tss_states = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].num_contained_sampler_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__contained_sampler_states0 = 1;
          stateblock[_i0].contained_sampler_states = (struct TYPE_12__ *) malloc(_len_stateblock__i0__contained_sampler_states0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_sampler_states0; _j0++) {
            stateblock[_i0].contained_sampler_states->stage = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].contained_sampler_states->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_renderState0 = 1;
          stateblock[_i0].changed.renderState = (int *) malloc(_len_stateblock__i0__changed_renderState0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_renderState0; _j0++) {
            stateblock[_i0].changed.renderState[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_transform0 = 1;
          stateblock[_i0].changed.transform = (int *) malloc(_len_stateblock__i0__changed_transform0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_transform0; _j0++) {
            stateblock[_i0].changed.transform[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stateblock[_i0].changed.vertexShaderConstantsI = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].changed.vertexShaderConstantsB = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].changed.pixelShaderConstantsI = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].changed.pixelShaderConstantsB = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stateblock__i0__changed_textureState0 = 1;
          stateblock[_i0].changed.textureState = (int *) malloc(_len_stateblock__i0__changed_textureState0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_textureState0; _j0++) {
            stateblock[_i0].changed.textureState[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_samplerState0 = 1;
          stateblock[_i0].changed.samplerState = (int *) malloc(_len_stateblock__i0__changed_samplerState0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_samplerState0; _j0++) {
            stateblock[_i0].changed.samplerState[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_ps_consts_f0 = 1;
          stateblock[_i0].changed.ps_consts_f = (long *) malloc(_len_stateblock__i0__changed_ps_consts_f0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_ps_consts_f0; _j0++) {
            stateblock[_i0].changed.ps_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__changed_vs_consts_f0 = 1;
          stateblock[_i0].changed.vs_consts_f = (long *) malloc(_len_stateblock__i0__changed_vs_consts_f0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__changed_vs_consts_f0; _j0++) {
            stateblock[_i0].changed.vs_consts_f[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__contained_tss_states0 = 1;
          stateblock[_i0].contained_tss_states = (struct TYPE_10__ *) malloc(_len_stateblock__i0__contained_tss_states0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__contained_tss_states0; _j0++) {
            stateblock[_i0].contained_tss_states->stage = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].contained_tss_states->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stateblock__i0__device0 = 1;
          stateblock[_i0].device = (struct TYPE_8__ *) malloc(_len_stateblock__i0__device0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__device0; _j0++) {
              int _len_stateblock__i0__device_adapter0 = 1;
          stateblock[_i0].device->adapter = (struct TYPE_7__ *) malloc(_len_stateblock__i0__device_adapter0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stateblock__i0__device_adapter0; _j0++) {
            stateblock[_i0].device->adapter->d3d_info.limits.vs_uniform_count = ((-2 * (next_i()%2)) + 1) * next_i();
        stateblock[_i0].device->adapter->d3d_info.limits.ps_uniform_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          stateblock_init_contained_states(stateblock);
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_render_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_transform_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_vs_consts_f);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_vs_consts_i);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_vs_consts_b);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_ps_consts_f);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_ps_consts_i);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_ps_consts_b);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_sampler_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].contained_tss_states);
          }
          for(int _aux = 0; _aux < _len_stateblock0; _aux++) {
          free(stateblock[_aux].device);
          }
          free(stateblock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
