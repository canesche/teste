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
struct msix_entry {int dummy; } ;
struct mic_irq_info {int num_vectors; struct msix_entry* msix_entries; int /*<<< orphan*/ * mic_msi_map; } ;
struct mic_device {struct mic_irq_info irq_info; } ;

/* Variables and functions */

__attribute__((used)) static struct msix_entry *mic_get_available_vector(struct mic_device *mdev)
{
	int i;
	struct mic_irq_info *info = &mdev->irq_info;

	for (i = 0; i < info->num_vectors; i++)
		if (!info->mic_msi_map[i])
			return &info->msix_entries[i];
	return NULL;
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
          int _len_mdev0 = 1;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].irq_info.num_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdev__i0__irq_info_msix_entries0 = 1;
          mdev[_i0].irq_info.msix_entries = (struct msix_entry *) malloc(_len_mdev__i0__irq_info_msix_entries0*sizeof(struct msix_entry));
          for(int _j0 = 0; _j0 < _len_mdev__i0__irq_info_msix_entries0; _j0++) {
            mdev[_i0].irq_info.msix_entries->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__irq_info_mic_msi_map0 = 1;
          mdev[_i0].irq_info.mic_msi_map = (int *) malloc(_len_mdev__i0__irq_info_mic_msi_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__irq_info_mic_msi_map0; _j0++) {
            mdev[_i0].irq_info.mic_msi_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct msix_entry * benchRet = mic_get_available_vector(mdev);
          printf("%d\n", (*benchRet).dummy);
          free(mdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mdev0 = 65025;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].irq_info.num_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdev__i0__irq_info_msix_entries0 = 1;
          mdev[_i0].irq_info.msix_entries = (struct msix_entry *) malloc(_len_mdev__i0__irq_info_msix_entries0*sizeof(struct msix_entry));
          for(int _j0 = 0; _j0 < _len_mdev__i0__irq_info_msix_entries0; _j0++) {
            mdev[_i0].irq_info.msix_entries->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__irq_info_mic_msi_map0 = 1;
          mdev[_i0].irq_info.mic_msi_map = (int *) malloc(_len_mdev__i0__irq_info_mic_msi_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__irq_info_mic_msi_map0; _j0++) {
            mdev[_i0].irq_info.mic_msi_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct msix_entry * benchRet = mic_get_available_vector(mdev);
          printf("%d\n", (*benchRet).dummy);
          free(mdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mdev0 = 100;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].irq_info.num_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdev__i0__irq_info_msix_entries0 = 1;
          mdev[_i0].irq_info.msix_entries = (struct msix_entry *) malloc(_len_mdev__i0__irq_info_msix_entries0*sizeof(struct msix_entry));
          for(int _j0 = 0; _j0 < _len_mdev__i0__irq_info_msix_entries0; _j0++) {
            mdev[_i0].irq_info.msix_entries->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__irq_info_mic_msi_map0 = 1;
          mdev[_i0].irq_info.mic_msi_map = (int *) malloc(_len_mdev__i0__irq_info_mic_msi_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__irq_info_mic_msi_map0; _j0++) {
            mdev[_i0].irq_info.mic_msi_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct msix_entry * benchRet = mic_get_available_vector(mdev);
          printf("%d\n", (*benchRet).dummy);
          free(mdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
