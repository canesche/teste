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
struct soc_camera_format_xlate {TYPE_1__* host_fmt; } ;
struct soc_camera_device {unsigned int num_user_formats; struct soc_camera_format_xlate const* user_formats; } ;
struct TYPE_2__ {unsigned int fourcc; } ;

/* Variables and functions */

const struct soc_camera_format_xlate *soc_camera_xlate_by_fourcc(
	struct soc_camera_device *icd, unsigned int fourcc)
{
	unsigned int i;

	for (i = 0; i < icd->num_user_formats; i++)
		if (icd->user_formats[i].host_fmt->fourcc == fourcc)
			return icd->user_formats + i;
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
          unsigned int fourcc = 100;
          int _len_icd0 = 1;
          struct soc_camera_device * icd = (struct soc_camera_device *) malloc(_len_icd0*sizeof(struct soc_camera_device));
          for(int _i0 = 0; _i0 < _len_icd0; _i0++) {
            icd[_i0].num_user_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_icd__i0__user_formats0 = 1;
          icd[_i0].user_formats = (const struct soc_camera_format_xlate *) malloc(_len_icd__i0__user_formats0*sizeof(const struct soc_camera_format_xlate));
          for(int _j0 = 0; _j0 < _len_icd__i0__user_formats0; _j0++) {
              }
          }
          const struct soc_camera_format_xlate * benchRet = soc_camera_xlate_by_fourcc(icd,fourcc);
          for(int _aux = 0; _aux < _len_icd0; _aux++) {
          free(icd[_aux].user_formats);
          }
          free(icd);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int fourcc = 255;
          int _len_icd0 = 65025;
          struct soc_camera_device * icd = (struct soc_camera_device *) malloc(_len_icd0*sizeof(struct soc_camera_device));
          for(int _i0 = 0; _i0 < _len_icd0; _i0++) {
            icd[_i0].num_user_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_icd__i0__user_formats0 = 1;
          icd[_i0].user_formats = (const struct soc_camera_format_xlate *) malloc(_len_icd__i0__user_formats0*sizeof(const struct soc_camera_format_xlate));
          for(int _j0 = 0; _j0 < _len_icd__i0__user_formats0; _j0++) {
              }
          }
          const struct soc_camera_format_xlate * benchRet = soc_camera_xlate_by_fourcc(icd,fourcc);
          for(int _aux = 0; _aux < _len_icd0; _aux++) {
          free(icd[_aux].user_formats);
          }
          free(icd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int fourcc = 10;
          int _len_icd0 = 100;
          struct soc_camera_device * icd = (struct soc_camera_device *) malloc(_len_icd0*sizeof(struct soc_camera_device));
          for(int _i0 = 0; _i0 < _len_icd0; _i0++) {
            icd[_i0].num_user_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_icd__i0__user_formats0 = 1;
          icd[_i0].user_formats = (const struct soc_camera_format_xlate *) malloc(_len_icd__i0__user_formats0*sizeof(const struct soc_camera_format_xlate));
          for(int _j0 = 0; _j0 < _len_icd__i0__user_formats0; _j0++) {
              }
          }
          const struct soc_camera_format_xlate * benchRet = soc_camera_xlate_by_fourcc(icd,fourcc);
          for(int _aux = 0; _aux < _len_icd0; _aux++) {
          free(icd[_aux].user_formats);
          }
          free(icd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
