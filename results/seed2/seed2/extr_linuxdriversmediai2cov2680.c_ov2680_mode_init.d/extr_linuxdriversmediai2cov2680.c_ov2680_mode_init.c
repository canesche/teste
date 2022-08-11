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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ov2680_mode_info {int dummy; } ;
struct TYPE_3__ {int numerator; int /*<<< orphan*/  denominator; } ;
struct TYPE_4__ {int width; int height; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  field; int /*<<< orphan*/  code; } ;
struct ov2680_dev {int mode_pending_changes; struct ov2680_mode_info const* current_mode; TYPE_1__ frame_interval; TYPE_2__ fmt; } ;

/* Variables and functions */
 int /*<<< orphan*/  MEDIA_BUS_FMT_SBGGR10_1X10 ; 
 int /*<<< orphan*/  OV2680_FRAME_RATE ; 
 int /*<<< orphan*/  V4L2_COLORSPACE_SRGB ; 
 int /*<<< orphan*/  V4L2_FIELD_NONE ; 
 struct ov2680_mode_info ov2680_mode_init_data ; 

__attribute__((used)) static int ov2680_mode_init(struct ov2680_dev *sensor)
{
	const struct ov2680_mode_info *init_mode;

	/* set initial mode */
	sensor->fmt.code = MEDIA_BUS_FMT_SBGGR10_1X10;
	sensor->fmt.width = 800;
	sensor->fmt.height = 600;
	sensor->fmt.field = V4L2_FIELD_NONE;
	sensor->fmt.colorspace = V4L2_COLORSPACE_SRGB;

	sensor->frame_interval.denominator = OV2680_FRAME_RATE;
	sensor->frame_interval.numerator = 1;

	init_mode = &ov2680_mode_init_data;

	sensor->current_mode = init_mode;

	sensor->mode_pending_changes = true;

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
          int _len_sensor0 = 1;
          struct ov2680_dev * sensor = (struct ov2680_dev *) malloc(_len_sensor0*sizeof(struct ov2680_dev));
          for(int _i0 = 0; _i0 < _len_sensor0; _i0++) {
            sensor[_i0].mode_pending_changes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sensor__i0__current_mode0 = 1;
          sensor[_i0].current_mode = (const struct ov2680_mode_info *) malloc(_len_sensor__i0__current_mode0*sizeof(const struct ov2680_mode_info));
          for(int _j0 = 0; _j0 < _len_sensor__i0__current_mode0; _j0++) {
              }
        sensor[_i0].frame_interval.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].frame_interval.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.field = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ov2680_mode_init(sensor);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sensor0; _aux++) {
          free(sensor[_aux].current_mode);
          }
          free(sensor);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sensor0 = 65025;
          struct ov2680_dev * sensor = (struct ov2680_dev *) malloc(_len_sensor0*sizeof(struct ov2680_dev));
          for(int _i0 = 0; _i0 < _len_sensor0; _i0++) {
            sensor[_i0].mode_pending_changes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sensor__i0__current_mode0 = 1;
          sensor[_i0].current_mode = (const struct ov2680_mode_info *) malloc(_len_sensor__i0__current_mode0*sizeof(const struct ov2680_mode_info));
          for(int _j0 = 0; _j0 < _len_sensor__i0__current_mode0; _j0++) {
              }
        sensor[_i0].frame_interval.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].frame_interval.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.field = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ov2680_mode_init(sensor);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sensor0; _aux++) {
          free(sensor[_aux].current_mode);
          }
          free(sensor);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sensor0 = 100;
          struct ov2680_dev * sensor = (struct ov2680_dev *) malloc(_len_sensor0*sizeof(struct ov2680_dev));
          for(int _i0 = 0; _i0 < _len_sensor0; _i0++) {
            sensor[_i0].mode_pending_changes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sensor__i0__current_mode0 = 1;
          sensor[_i0].current_mode = (const struct ov2680_mode_info *) malloc(_len_sensor__i0__current_mode0*sizeof(const struct ov2680_mode_info));
          for(int _j0 = 0; _j0 < _len_sensor__i0__current_mode0; _j0++) {
              }
        sensor[_i0].frame_interval.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].frame_interval.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.field = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ov2680_mode_init(sensor);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sensor0; _aux++) {
          free(sensor[_aux].current_mode);
          }
          free(sensor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
