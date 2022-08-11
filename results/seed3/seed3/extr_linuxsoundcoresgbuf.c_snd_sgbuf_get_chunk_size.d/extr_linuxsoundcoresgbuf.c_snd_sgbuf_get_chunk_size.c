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
struct snd_sg_buf {TYPE_1__* table; } ;
struct snd_dma_buffer {struct snd_sg_buf* private_data; } ;
struct TYPE_2__ {unsigned int addr; } ;

/* Variables and functions */
 unsigned int PAGE_SHIFT ; 

unsigned int snd_sgbuf_get_chunk_size(struct snd_dma_buffer *dmab,
				      unsigned int ofs, unsigned int size)
{
	struct snd_sg_buf *sg = dmab->private_data;
	unsigned int start, end, pg;

	start = ofs >> PAGE_SHIFT;
	end = (ofs + size - 1) >> PAGE_SHIFT;
	/* check page continuity */
	pg = sg->table[start].addr >> PAGE_SHIFT;
	for (;;) {
		start++;
		if (start > end)
			break;
		pg++;
		if ((sg->table[start].addr >> PAGE_SHIFT) != pg)
			return (start << PAGE_SHIFT) - ofs;
	}
	/* ok, all on continuous pages */
	return size;
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
          unsigned int ofs = 100;
          unsigned int size = 100;
          int _len_dmab0 = 1;
          struct snd_dma_buffer * dmab = (struct snd_dma_buffer *) malloc(_len_dmab0*sizeof(struct snd_dma_buffer));
          for(int _i0 = 0; _i0 < _len_dmab0; _i0++) {
              int _len_dmab__i0__private_data0 = 1;
          dmab[_i0].private_data = (struct snd_sg_buf *) malloc(_len_dmab__i0__private_data0*sizeof(struct snd_sg_buf));
          for(int _j0 = 0; _j0 < _len_dmab__i0__private_data0; _j0++) {
              int _len_dmab__i0__private_data_table0 = 1;
          dmab[_i0].private_data->table = (struct TYPE_2__ *) malloc(_len_dmab__i0__private_data_table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dmab__i0__private_data_table0; _j0++) {
            dmab[_i0].private_data->table->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = snd_sgbuf_get_chunk_size(dmab,ofs,size);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dmab0; _aux++) {
          free(dmab[_aux].private_data);
          }
          free(dmab);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int ofs = 255;
          unsigned int size = 255;
          int _len_dmab0 = 65025;
          struct snd_dma_buffer * dmab = (struct snd_dma_buffer *) malloc(_len_dmab0*sizeof(struct snd_dma_buffer));
          for(int _i0 = 0; _i0 < _len_dmab0; _i0++) {
              int _len_dmab__i0__private_data0 = 1;
          dmab[_i0].private_data = (struct snd_sg_buf *) malloc(_len_dmab__i0__private_data0*sizeof(struct snd_sg_buf));
          for(int _j0 = 0; _j0 < _len_dmab__i0__private_data0; _j0++) {
              int _len_dmab__i0__private_data_table0 = 1;
          dmab[_i0].private_data->table = (struct TYPE_2__ *) malloc(_len_dmab__i0__private_data_table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dmab__i0__private_data_table0; _j0++) {
            dmab[_i0].private_data->table->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = snd_sgbuf_get_chunk_size(dmab,ofs,size);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dmab0; _aux++) {
          free(dmab[_aux].private_data);
          }
          free(dmab);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int ofs = 10;
          unsigned int size = 10;
          int _len_dmab0 = 100;
          struct snd_dma_buffer * dmab = (struct snd_dma_buffer *) malloc(_len_dmab0*sizeof(struct snd_dma_buffer));
          for(int _i0 = 0; _i0 < _len_dmab0; _i0++) {
              int _len_dmab__i0__private_data0 = 1;
          dmab[_i0].private_data = (struct snd_sg_buf *) malloc(_len_dmab__i0__private_data0*sizeof(struct snd_sg_buf));
          for(int _j0 = 0; _j0 < _len_dmab__i0__private_data0; _j0++) {
              int _len_dmab__i0__private_data_table0 = 1;
          dmab[_i0].private_data->table = (struct TYPE_2__ *) malloc(_len_dmab__i0__private_data_table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dmab__i0__private_data_table0; _j0++) {
            dmab[_i0].private_data->table->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = snd_sgbuf_get_chunk_size(dmab,ofs,size);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dmab0; _aux++) {
          free(dmab[_aux].private_data);
          }
          free(dmab);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
