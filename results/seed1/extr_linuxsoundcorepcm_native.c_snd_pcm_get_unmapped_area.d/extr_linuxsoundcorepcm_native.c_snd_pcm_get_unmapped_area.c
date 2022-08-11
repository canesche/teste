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
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; scalar_t__ control; scalar_t__ status; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct file {struct snd_pcm_file* private_data; } ;

/* Variables and functions */
 unsigned long PAGE_SHIFT ; 
#define  SNDRV_PCM_MMAP_OFFSET_CONTROL 129 
#define  SNDRV_PCM_MMAP_OFFSET_STATUS 128 

__attribute__((used)) static unsigned long snd_pcm_get_unmapped_area(struct file *file,
					       unsigned long addr,
					       unsigned long len,
					       unsigned long pgoff,
					       unsigned long flags)
{
	struct snd_pcm_file *pcm_file = file->private_data;
	struct snd_pcm_substream *substream = pcm_file->substream;
	struct snd_pcm_runtime *runtime = substream->runtime;
	unsigned long offset = pgoff << PAGE_SHIFT;

	switch (offset) {
	case SNDRV_PCM_MMAP_OFFSET_STATUS:
		return (unsigned long)runtime->status;
	case SNDRV_PCM_MMAP_OFFSET_CONTROL:
		return (unsigned long)runtime->control;
	default:
		return (unsigned long)runtime->dma_area + offset;
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
          unsigned long addr = 100;
          unsigned long len = 100;
          unsigned long pgoff = 100;
          unsigned long flags = 100;
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct snd_pcm_file *) malloc(_len_file__i0__private_data0*sizeof(struct snd_pcm_file));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
              int _len_file__i0__private_data_substream0 = 1;
          file[_i0].private_data->substream = (struct snd_pcm_substream *) malloc(_len_file__i0__private_data_substream0*sizeof(struct snd_pcm_substream));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data_substream0; _j0++) {
              int _len_file__i0__private_data_substream_runtime0 = 1;
          file[_i0].private_data->substream->runtime = (struct snd_pcm_runtime *) malloc(_len_file__i0__private_data_substream_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data_substream_runtime0; _j0++) {
            file[_i0].private_data->substream->runtime->dma_area = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->substream->runtime->control = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->substream->runtime->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          unsigned long benchRet = snd_pcm_get_unmapped_area(file,addr,len,pgoff,flags);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long addr = 255;
          unsigned long len = 255;
          unsigned long pgoff = 255;
          unsigned long flags = 255;
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct snd_pcm_file *) malloc(_len_file__i0__private_data0*sizeof(struct snd_pcm_file));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
              int _len_file__i0__private_data_substream0 = 1;
          file[_i0].private_data->substream = (struct snd_pcm_substream *) malloc(_len_file__i0__private_data_substream0*sizeof(struct snd_pcm_substream));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data_substream0; _j0++) {
              int _len_file__i0__private_data_substream_runtime0 = 1;
          file[_i0].private_data->substream->runtime = (struct snd_pcm_runtime *) malloc(_len_file__i0__private_data_substream_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data_substream_runtime0; _j0++) {
            file[_i0].private_data->substream->runtime->dma_area = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->substream->runtime->control = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->substream->runtime->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          unsigned long benchRet = snd_pcm_get_unmapped_area(file,addr,len,pgoff,flags);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long addr = 10;
          unsigned long len = 10;
          unsigned long pgoff = 10;
          unsigned long flags = 10;
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct snd_pcm_file *) malloc(_len_file__i0__private_data0*sizeof(struct snd_pcm_file));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
              int _len_file__i0__private_data_substream0 = 1;
          file[_i0].private_data->substream = (struct snd_pcm_substream *) malloc(_len_file__i0__private_data_substream0*sizeof(struct snd_pcm_substream));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data_substream0; _j0++) {
              int _len_file__i0__private_data_substream_runtime0 = 1;
          file[_i0].private_data->substream->runtime = (struct snd_pcm_runtime *) malloc(_len_file__i0__private_data_substream_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data_substream_runtime0; _j0++) {
            file[_i0].private_data->substream->runtime->dma_area = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->substream->runtime->control = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->substream->runtime->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          unsigned long benchRet = snd_pcm_get_unmapped_area(file,addr,len,pgoff,flags);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
