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
struct hdac_bus {TYPE_1__* audio_component; } ;
struct drm_audio_component_audio_ops {int dummy; } ;
struct TYPE_2__ {struct drm_audio_component_audio_ops const* audio_ops; } ;

/* Variables and functions */
 int ENODEV ; 

int snd_hdac_acomp_register_notifier(struct hdac_bus *bus,
				    const struct drm_audio_component_audio_ops *aops)
{
	if (!bus->audio_component)
		return -ENODEV;

	bus->audio_component->audio_ops = aops;
	return 0;
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
          int _len_bus0 = 1;
          struct hdac_bus * bus = (struct hdac_bus *) malloc(_len_bus0*sizeof(struct hdac_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
              int _len_bus__i0__audio_component0 = 1;
          bus[_i0].audio_component = (struct TYPE_2__ *) malloc(_len_bus__i0__audio_component0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bus__i0__audio_component0; _j0++) {
              int _len_bus__i0__audio_component_audio_ops0 = 1;
          bus[_i0].audio_component->audio_ops = (const struct drm_audio_component_audio_ops *) malloc(_len_bus__i0__audio_component_audio_ops0*sizeof(const struct drm_audio_component_audio_ops));
          for(int _j0 = 0; _j0 < _len_bus__i0__audio_component_audio_ops0; _j0++) {
              }
          }
          }
          int _len_aops0 = 1;
          const struct drm_audio_component_audio_ops * aops = (const struct drm_audio_component_audio_ops *) malloc(_len_aops0*sizeof(const struct drm_audio_component_audio_ops));
          for(int _i0 = 0; _i0 < _len_aops0; _i0++) {
              }
          int benchRet = snd_hdac_acomp_register_notifier(bus,aops);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].audio_component);
          }
          free(bus);
          free(aops);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bus0 = 65025;
          struct hdac_bus * bus = (struct hdac_bus *) malloc(_len_bus0*sizeof(struct hdac_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
              int _len_bus__i0__audio_component0 = 1;
          bus[_i0].audio_component = (struct TYPE_2__ *) malloc(_len_bus__i0__audio_component0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bus__i0__audio_component0; _j0++) {
              int _len_bus__i0__audio_component_audio_ops0 = 1;
          bus[_i0].audio_component->audio_ops = (const struct drm_audio_component_audio_ops *) malloc(_len_bus__i0__audio_component_audio_ops0*sizeof(const struct drm_audio_component_audio_ops));
          for(int _j0 = 0; _j0 < _len_bus__i0__audio_component_audio_ops0; _j0++) {
              }
          }
          }
          int _len_aops0 = 65025;
          const struct drm_audio_component_audio_ops * aops = (const struct drm_audio_component_audio_ops *) malloc(_len_aops0*sizeof(const struct drm_audio_component_audio_ops));
          for(int _i0 = 0; _i0 < _len_aops0; _i0++) {
              }
          int benchRet = snd_hdac_acomp_register_notifier(bus,aops);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].audio_component);
          }
          free(bus);
          free(aops);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bus0 = 100;
          struct hdac_bus * bus = (struct hdac_bus *) malloc(_len_bus0*sizeof(struct hdac_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
              int _len_bus__i0__audio_component0 = 1;
          bus[_i0].audio_component = (struct TYPE_2__ *) malloc(_len_bus__i0__audio_component0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bus__i0__audio_component0; _j0++) {
              int _len_bus__i0__audio_component_audio_ops0 = 1;
          bus[_i0].audio_component->audio_ops = (const struct drm_audio_component_audio_ops *) malloc(_len_bus__i0__audio_component_audio_ops0*sizeof(const struct drm_audio_component_audio_ops));
          for(int _j0 = 0; _j0 < _len_bus__i0__audio_component_audio_ops0; _j0++) {
              }
          }
          }
          int _len_aops0 = 100;
          const struct drm_audio_component_audio_ops * aops = (const struct drm_audio_component_audio_ops *) malloc(_len_aops0*sizeof(const struct drm_audio_component_audio_ops));
          for(int _i0 = 0; _i0 < _len_aops0; _i0++) {
              }
          int benchRet = snd_hdac_acomp_register_notifier(bus,aops);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].audio_component);
          }
          free(bus);
          free(aops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
