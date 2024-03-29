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
struct snd_rawmidi_substream {int /*<<< orphan*/  append; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {size_t avail; size_t avail_min; } ;

/* Variables and functions */

__attribute__((used)) static inline int snd_rawmidi_ready_append(struct snd_rawmidi_substream *substream,
					   size_t count)
{
	struct snd_rawmidi_runtime *runtime = substream->runtime;

	return runtime->avail >= runtime->avail_min &&
	       (!substream->append || runtime->avail >= count);
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
          unsigned long count = 100;
          int _len_substream0 = 1;
          struct snd_rawmidi_substream * substream = (struct snd_rawmidi_substream *) malloc(_len_substream0*sizeof(struct snd_rawmidi_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
            substream[_i0].append = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_rawmidi_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_rawmidi_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
            substream[_i0].runtime->avail = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].runtime->avail_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_rawmidi_ready_append(substream,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
          }
          free(substream);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long count = 255;
          int _len_substream0 = 65025;
          struct snd_rawmidi_substream * substream = (struct snd_rawmidi_substream *) malloc(_len_substream0*sizeof(struct snd_rawmidi_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
            substream[_i0].append = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_rawmidi_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_rawmidi_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
            substream[_i0].runtime->avail = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].runtime->avail_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_rawmidi_ready_append(substream,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
          }
          free(substream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long count = 10;
          int _len_substream0 = 100;
          struct snd_rawmidi_substream * substream = (struct snd_rawmidi_substream *) malloc(_len_substream0*sizeof(struct snd_rawmidi_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
            substream[_i0].append = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_rawmidi_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_rawmidi_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
            substream[_i0].runtime->avail = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].runtime->avail_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_rawmidi_ready_append(substream,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
          }
          free(substream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
