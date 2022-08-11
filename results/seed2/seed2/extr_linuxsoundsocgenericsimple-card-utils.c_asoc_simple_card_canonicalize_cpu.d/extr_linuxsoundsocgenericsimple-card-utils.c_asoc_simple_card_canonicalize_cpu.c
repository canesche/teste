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
struct snd_soc_dai_link {int /*<<< orphan*/ * cpu_dai_name; } ;

/* Variables and functions */

void asoc_simple_card_canonicalize_cpu(struct snd_soc_dai_link *dai_link,
				       int is_single_links)
{
	/*
	 * In soc_bind_dai_link() will check cpu name after
	 * of_node matching if dai_link has cpu_dai_name.
	 * but, it will never match if name was created by
	 * fmt_single_name() remove cpu_dai_name if cpu_args
	 * was 0. See:
	 *	fmt_single_name()
	 *	fmt_multiple_name()
	 */
	if (is_single_links)
		dai_link->cpu_dai_name = NULL;
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
          int is_single_links = 100;
          int _len_dai_link0 = 1;
          struct snd_soc_dai_link * dai_link = (struct snd_soc_dai_link *) malloc(_len_dai_link0*sizeof(struct snd_soc_dai_link));
          for(int _i0 = 0; _i0 < _len_dai_link0; _i0++) {
              int _len_dai_link__i0__cpu_dai_name0 = 1;
          dai_link[_i0].cpu_dai_name = (int *) malloc(_len_dai_link__i0__cpu_dai_name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dai_link__i0__cpu_dai_name0; _j0++) {
            dai_link[_i0].cpu_dai_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          asoc_simple_card_canonicalize_cpu(dai_link,is_single_links);
          for(int _aux = 0; _aux < _len_dai_link0; _aux++) {
          free(dai_link[_aux].cpu_dai_name);
          }
          free(dai_link);
        
        break;
    }
    // big-arr
    case 1:
    {
          int is_single_links = 255;
          int _len_dai_link0 = 65025;
          struct snd_soc_dai_link * dai_link = (struct snd_soc_dai_link *) malloc(_len_dai_link0*sizeof(struct snd_soc_dai_link));
          for(int _i0 = 0; _i0 < _len_dai_link0; _i0++) {
              int _len_dai_link__i0__cpu_dai_name0 = 1;
          dai_link[_i0].cpu_dai_name = (int *) malloc(_len_dai_link__i0__cpu_dai_name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dai_link__i0__cpu_dai_name0; _j0++) {
            dai_link[_i0].cpu_dai_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          asoc_simple_card_canonicalize_cpu(dai_link,is_single_links);
          for(int _aux = 0; _aux < _len_dai_link0; _aux++) {
          free(dai_link[_aux].cpu_dai_name);
          }
          free(dai_link);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is_single_links = 10;
          int _len_dai_link0 = 100;
          struct snd_soc_dai_link * dai_link = (struct snd_soc_dai_link *) malloc(_len_dai_link0*sizeof(struct snd_soc_dai_link));
          for(int _i0 = 0; _i0 < _len_dai_link0; _i0++) {
              int _len_dai_link__i0__cpu_dai_name0 = 1;
          dai_link[_i0].cpu_dai_name = (int *) malloc(_len_dai_link__i0__cpu_dai_name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dai_link__i0__cpu_dai_name0; _j0++) {
            dai_link[_i0].cpu_dai_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          asoc_simple_card_canonicalize_cpu(dai_link,is_single_links);
          for(int _aux = 0; _aux < _len_dai_link0; _aux++) {
          free(dai_link[_aux].cpu_dai_name);
          }
          free(dai_link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
