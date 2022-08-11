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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct nvkm_msgqueue {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
init_gen_cmdline(struct nvkm_msgqueue *queue, void *buf)
{
	struct {
		u32 reserved;
		u32 freq_hz;
		u32 trace_size;
		u32 trace_dma_base;
		u16 trace_dma_base1;
		u8 trace_dma_offset;
		u32 trace_dma_idx;
		bool secure_mode;
		bool raise_priv_sec;
		struct {
			u32 dma_base;
			u16 dma_base1;
			u8 dma_offset;
			u16 fb_size;
			u8 dma_idx;
		} gc6_ctx;
		u8 pad;
	} *args = buf;

	args->secure_mode = 1;
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
          int _len_queue0 = 1;
          struct nvkm_msgqueue * queue = (struct nvkm_msgqueue *) malloc(_len_queue0*sizeof(struct nvkm_msgqueue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * buf;
          init_gen_cmdline(queue,buf);
          free(queue);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_queue0 = 65025;
          struct nvkm_msgqueue * queue = (struct nvkm_msgqueue *) malloc(_len_queue0*sizeof(struct nvkm_msgqueue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * buf;
          init_gen_cmdline(queue,buf);
          free(queue);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_queue0 = 100;
          struct nvkm_msgqueue * queue = (struct nvkm_msgqueue *) malloc(_len_queue0*sizeof(struct nvkm_msgqueue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * buf;
          init_gen_cmdline(queue,buf);
          free(queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
