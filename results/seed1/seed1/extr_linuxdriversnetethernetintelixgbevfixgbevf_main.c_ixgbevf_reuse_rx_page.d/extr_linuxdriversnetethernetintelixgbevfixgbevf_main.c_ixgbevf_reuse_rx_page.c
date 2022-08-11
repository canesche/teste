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
typedef  size_t u16 ;
struct ixgbevf_rx_buffer {int /*<<< orphan*/  pagecnt_bias; int /*<<< orphan*/  page_offset; int /*<<< orphan*/  dma; int /*<<< orphan*/  page; } ;
struct ixgbevf_ring {size_t next_to_alloc; size_t count; struct ixgbevf_rx_buffer* rx_buffer_info; } ;

/* Variables and functions */

__attribute__((used)) static void ixgbevf_reuse_rx_page(struct ixgbevf_ring *rx_ring,
				  struct ixgbevf_rx_buffer *old_buff)
{
	struct ixgbevf_rx_buffer *new_buff;
	u16 nta = rx_ring->next_to_alloc;

	new_buff = &rx_ring->rx_buffer_info[nta];

	/* update, and store next to alloc */
	nta++;
	rx_ring->next_to_alloc = (nta < rx_ring->count) ? nta : 0;

	/* transfer page from old buffer to new buffer */
	new_buff->page = old_buff->page;
	new_buff->dma = old_buff->dma;
	new_buff->page_offset = old_buff->page_offset;
	new_buff->pagecnt_bias = old_buff->pagecnt_bias;
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
          int _len_rx_ring0 = 1;
          struct ixgbevf_ring * rx_ring = (struct ixgbevf_ring *) malloc(_len_rx_ring0*sizeof(struct ixgbevf_ring));
          for(int _i0 = 0; _i0 < _len_rx_ring0; _i0++) {
            rx_ring[_i0].next_to_alloc = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rx_ring__i0__rx_buffer_info0 = 1;
          rx_ring[_i0].rx_buffer_info = (struct ixgbevf_rx_buffer *) malloc(_len_rx_ring__i0__rx_buffer_info0*sizeof(struct ixgbevf_rx_buffer));
          for(int _j0 = 0; _j0 < _len_rx_ring__i0__rx_buffer_info0; _j0++) {
            rx_ring[_i0].rx_buffer_info->pagecnt_bias = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].rx_buffer_info->page_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].rx_buffer_info->dma = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].rx_buffer_info->page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_old_buff0 = 1;
          struct ixgbevf_rx_buffer * old_buff = (struct ixgbevf_rx_buffer *) malloc(_len_old_buff0*sizeof(struct ixgbevf_rx_buffer));
          for(int _i0 = 0; _i0 < _len_old_buff0; _i0++) {
            old_buff[_i0].pagecnt_bias = ((-2 * (next_i()%2)) + 1) * next_i();
        old_buff[_i0].page_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        old_buff[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        old_buff[_i0].page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbevf_reuse_rx_page(rx_ring,old_buff);
          for(int _aux = 0; _aux < _len_rx_ring0; _aux++) {
          free(rx_ring[_aux].rx_buffer_info);
          }
          free(rx_ring);
          free(old_buff);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rx_ring0 = 65025;
          struct ixgbevf_ring * rx_ring = (struct ixgbevf_ring *) malloc(_len_rx_ring0*sizeof(struct ixgbevf_ring));
          for(int _i0 = 0; _i0 < _len_rx_ring0; _i0++) {
            rx_ring[_i0].next_to_alloc = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rx_ring__i0__rx_buffer_info0 = 1;
          rx_ring[_i0].rx_buffer_info = (struct ixgbevf_rx_buffer *) malloc(_len_rx_ring__i0__rx_buffer_info0*sizeof(struct ixgbevf_rx_buffer));
          for(int _j0 = 0; _j0 < _len_rx_ring__i0__rx_buffer_info0; _j0++) {
            rx_ring[_i0].rx_buffer_info->pagecnt_bias = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].rx_buffer_info->page_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].rx_buffer_info->dma = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].rx_buffer_info->page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_old_buff0 = 65025;
          struct ixgbevf_rx_buffer * old_buff = (struct ixgbevf_rx_buffer *) malloc(_len_old_buff0*sizeof(struct ixgbevf_rx_buffer));
          for(int _i0 = 0; _i0 < _len_old_buff0; _i0++) {
            old_buff[_i0].pagecnt_bias = ((-2 * (next_i()%2)) + 1) * next_i();
        old_buff[_i0].page_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        old_buff[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        old_buff[_i0].page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbevf_reuse_rx_page(rx_ring,old_buff);
          for(int _aux = 0; _aux < _len_rx_ring0; _aux++) {
          free(rx_ring[_aux].rx_buffer_info);
          }
          free(rx_ring);
          free(old_buff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rx_ring0 = 100;
          struct ixgbevf_ring * rx_ring = (struct ixgbevf_ring *) malloc(_len_rx_ring0*sizeof(struct ixgbevf_ring));
          for(int _i0 = 0; _i0 < _len_rx_ring0; _i0++) {
            rx_ring[_i0].next_to_alloc = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rx_ring__i0__rx_buffer_info0 = 1;
          rx_ring[_i0].rx_buffer_info = (struct ixgbevf_rx_buffer *) malloc(_len_rx_ring__i0__rx_buffer_info0*sizeof(struct ixgbevf_rx_buffer));
          for(int _j0 = 0; _j0 < _len_rx_ring__i0__rx_buffer_info0; _j0++) {
            rx_ring[_i0].rx_buffer_info->pagecnt_bias = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].rx_buffer_info->page_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].rx_buffer_info->dma = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].rx_buffer_info->page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_old_buff0 = 100;
          struct ixgbevf_rx_buffer * old_buff = (struct ixgbevf_rx_buffer *) malloc(_len_old_buff0*sizeof(struct ixgbevf_rx_buffer));
          for(int _i0 = 0; _i0 < _len_old_buff0; _i0++) {
            old_buff[_i0].pagecnt_bias = ((-2 * (next_i()%2)) + 1) * next_i();
        old_buff[_i0].page_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        old_buff[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        old_buff[_i0].page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbevf_reuse_rx_page(rx_ring,old_buff);
          for(int _aux = 0; _aux < _len_rx_ring0; _aux++) {
          free(rx_ring[_aux].rx_buffer_info);
          }
          free(rx_ring);
          free(old_buff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
