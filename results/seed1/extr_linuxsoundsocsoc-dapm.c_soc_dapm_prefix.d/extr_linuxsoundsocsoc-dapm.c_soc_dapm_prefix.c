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
struct snd_soc_dapm_context {TYPE_1__* component; } ;
struct TYPE_2__ {char const* name_prefix; } ;

/* Variables and functions */

__attribute__((used)) static const char *soc_dapm_prefix(struct snd_soc_dapm_context *dapm)
{
	if (!dapm->component)
		return NULL;
	return dapm->component->name_prefix;
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
          int _len_dapm0 = 1;
          struct snd_soc_dapm_context * dapm = (struct snd_soc_dapm_context *) malloc(_len_dapm0*sizeof(struct snd_soc_dapm_context));
          for(int _i0 = 0; _i0 < _len_dapm0; _i0++) {
              int _len_dapm__i0__component0 = 1;
          dapm[_i0].component = (struct TYPE_2__ *) malloc(_len_dapm__i0__component0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dapm__i0__component0; _j0++) {
              int _len_dapm__i0__component_name_prefix0 = 1;
          dapm[_i0].component->name_prefix = (const char *) malloc(_len_dapm__i0__component_name_prefix0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_dapm__i0__component_name_prefix0; _j0++) {
            dapm[_i0].component->name_prefix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = soc_dapm_prefix(dapm);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_dapm0; _aux++) {
          free(dapm[_aux].component);
          }
          free(dapm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dapm0 = 65025;
          struct snd_soc_dapm_context * dapm = (struct snd_soc_dapm_context *) malloc(_len_dapm0*sizeof(struct snd_soc_dapm_context));
          for(int _i0 = 0; _i0 < _len_dapm0; _i0++) {
              int _len_dapm__i0__component0 = 1;
          dapm[_i0].component = (struct TYPE_2__ *) malloc(_len_dapm__i0__component0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dapm__i0__component0; _j0++) {
              int _len_dapm__i0__component_name_prefix0 = 1;
          dapm[_i0].component->name_prefix = (const char *) malloc(_len_dapm__i0__component_name_prefix0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_dapm__i0__component_name_prefix0; _j0++) {
            dapm[_i0].component->name_prefix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = soc_dapm_prefix(dapm);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_dapm0; _aux++) {
          free(dapm[_aux].component);
          }
          free(dapm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dapm0 = 100;
          struct snd_soc_dapm_context * dapm = (struct snd_soc_dapm_context *) malloc(_len_dapm0*sizeof(struct snd_soc_dapm_context));
          for(int _i0 = 0; _i0 < _len_dapm0; _i0++) {
              int _len_dapm__i0__component0 = 1;
          dapm[_i0].component = (struct TYPE_2__ *) malloc(_len_dapm__i0__component0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dapm__i0__component0; _j0++) {
              int _len_dapm__i0__component_name_prefix0 = 1;
          dapm[_i0].component->name_prefix = (const char *) malloc(_len_dapm__i0__component_name_prefix0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_dapm__i0__component_name_prefix0; _j0++) {
            dapm[_i0].component->name_prefix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = soc_dapm_prefix(dapm);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_dapm0; _aux++) {
          free(dapm[_aux].component);
          }
          free(dapm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
