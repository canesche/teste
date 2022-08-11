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
typedef  int uint ;
struct kone_device {int actual_profile; TYPE_1__* profiles; int /*<<< orphan*/  actual_dpi; } ;
struct TYPE_2__ {int /*<<< orphan*/  startup_dpi; } ;

/* Variables and functions */

__attribute__((used)) static void kone_profile_activated(struct kone_device *kone, uint new_profile)
{
	kone->actual_profile = new_profile;
	kone->actual_dpi = kone->profiles[new_profile - 1].startup_dpi;
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
          int new_profile = 100;
          int _len_kone0 = 1;
          struct kone_device * kone = (struct kone_device *) malloc(_len_kone0*sizeof(struct kone_device));
          for(int _i0 = 0; _i0 < _len_kone0; _i0++) {
            kone[_i0].actual_profile = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kone__i0__profiles0 = 1;
          kone[_i0].profiles = (struct TYPE_2__ *) malloc(_len_kone__i0__profiles0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_kone__i0__profiles0; _j0++) {
            kone[_i0].profiles->startup_dpi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kone[_i0].actual_dpi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kone_profile_activated(kone,new_profile);
          for(int _aux = 0; _aux < _len_kone0; _aux++) {
          free(kone[_aux].profiles);
          }
          free(kone);
        
        break;
    }
    // big-arr
    case 1:
    {
          int new_profile = 255;
          int _len_kone0 = 65025;
          struct kone_device * kone = (struct kone_device *) malloc(_len_kone0*sizeof(struct kone_device));
          for(int _i0 = 0; _i0 < _len_kone0; _i0++) {
            kone[_i0].actual_profile = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kone__i0__profiles0 = 1;
          kone[_i0].profiles = (struct TYPE_2__ *) malloc(_len_kone__i0__profiles0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_kone__i0__profiles0; _j0++) {
            kone[_i0].profiles->startup_dpi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kone[_i0].actual_dpi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kone_profile_activated(kone,new_profile);
          for(int _aux = 0; _aux < _len_kone0; _aux++) {
          free(kone[_aux].profiles);
          }
          free(kone);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int new_profile = 10;
          int _len_kone0 = 100;
          struct kone_device * kone = (struct kone_device *) malloc(_len_kone0*sizeof(struct kone_device));
          for(int _i0 = 0; _i0 < _len_kone0; _i0++) {
            kone[_i0].actual_profile = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kone__i0__profiles0 = 1;
          kone[_i0].profiles = (struct TYPE_2__ *) malloc(_len_kone__i0__profiles0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_kone__i0__profiles0; _j0++) {
            kone[_i0].profiles->startup_dpi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kone[_i0].actual_dpi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kone_profile_activated(kone,new_profile);
          for(int _aux = 0; _aux < _len_kone0; _aux++) {
          free(kone[_aux].profiles);
          }
          free(kone);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
