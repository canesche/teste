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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32 ;
struct TYPE_6__ {TYPE_2__* array; } ;
struct sci_unsolicited_frame_control {TYPE_3__ buffers; } ;
typedef  enum sci_status { ____Placeholder_sci_status } sci_status ;
struct TYPE_5__ {TYPE_1__* header; } ;
struct TYPE_4__ {int /*<<< orphan*/  data; } ;

/* Variables and functions */
 int SCI_FAILURE_INVALID_PARAMETER_VALUE ; 
 int SCI_SUCCESS ; 
 size_t SCU_MAX_UNSOLICITED_FRAMES ; 

enum sci_status sci_unsolicited_frame_control_get_header(struct sci_unsolicited_frame_control *uf_control,
							 u32 frame_index,
							 void **frame_header)
{
	if (frame_index < SCU_MAX_UNSOLICITED_FRAMES) {
		/* Skip the first word in the frame since this is a controll word used
		 * by the hardware.
		 */
		*frame_header = &uf_control->buffers.array[frame_index].header->data;

		return SCI_SUCCESS;
	}

	return SCI_FAILURE_INVALID_PARAMETER_VALUE;
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
          unsigned long frame_index = 100;
          int _len_uf_control0 = 1;
          struct sci_unsolicited_frame_control * uf_control = (struct sci_unsolicited_frame_control *) malloc(_len_uf_control0*sizeof(struct sci_unsolicited_frame_control));
          for(int _i0 = 0; _i0 < _len_uf_control0; _i0++) {
              int _len_uf_control__i0__buffers_array0 = 1;
          uf_control[_i0].buffers.array = (struct TYPE_5__ *) malloc(_len_uf_control__i0__buffers_array0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_uf_control__i0__buffers_array0; _j0++) {
              int _len_uf_control__i0__buffers_array_header0 = 1;
          uf_control[_i0].buffers.array->header = (struct TYPE_4__ *) malloc(_len_uf_control__i0__buffers_array_header0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_uf_control__i0__buffers_array_header0; _j0++) {
            uf_control[_i0].buffers.array->header->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_frame_header0 = 1;
          void ** frame_header = (void **) malloc(_len_frame_header0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_frame_header0; _i0++) {
          }
          enum sci_status benchRet = sci_unsolicited_frame_control_get_header(uf_control,frame_index,frame_header);
          free(uf_control);
          for(int i1 = 0; i1 < _len_frame_header0; i1++) {
            int _len_frame_header1 = 1;
              }
          free(frame_header);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long frame_index = 255;
          int _len_uf_control0 = 65025;
          struct sci_unsolicited_frame_control * uf_control = (struct sci_unsolicited_frame_control *) malloc(_len_uf_control0*sizeof(struct sci_unsolicited_frame_control));
          for(int _i0 = 0; _i0 < _len_uf_control0; _i0++) {
              int _len_uf_control__i0__buffers_array0 = 1;
          uf_control[_i0].buffers.array = (struct TYPE_5__ *) malloc(_len_uf_control__i0__buffers_array0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_uf_control__i0__buffers_array0; _j0++) {
              int _len_uf_control__i0__buffers_array_header0 = 1;
          uf_control[_i0].buffers.array->header = (struct TYPE_4__ *) malloc(_len_uf_control__i0__buffers_array_header0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_uf_control__i0__buffers_array_header0; _j0++) {
            uf_control[_i0].buffers.array->header->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_frame_header0 = 65025;
          void ** frame_header = (void **) malloc(_len_frame_header0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_frame_header0; _i0++) {
          }
          enum sci_status benchRet = sci_unsolicited_frame_control_get_header(uf_control,frame_index,frame_header);
          free(uf_control);
          for(int i1 = 0; i1 < _len_frame_header0; i1++) {
            int _len_frame_header1 = 1;
              }
          free(frame_header);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long frame_index = 10;
          int _len_uf_control0 = 100;
          struct sci_unsolicited_frame_control * uf_control = (struct sci_unsolicited_frame_control *) malloc(_len_uf_control0*sizeof(struct sci_unsolicited_frame_control));
          for(int _i0 = 0; _i0 < _len_uf_control0; _i0++) {
              int _len_uf_control__i0__buffers_array0 = 1;
          uf_control[_i0].buffers.array = (struct TYPE_5__ *) malloc(_len_uf_control__i0__buffers_array0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_uf_control__i0__buffers_array0; _j0++) {
              int _len_uf_control__i0__buffers_array_header0 = 1;
          uf_control[_i0].buffers.array->header = (struct TYPE_4__ *) malloc(_len_uf_control__i0__buffers_array_header0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_uf_control__i0__buffers_array_header0; _j0++) {
            uf_control[_i0].buffers.array->header->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_frame_header0 = 100;
          void ** frame_header = (void **) malloc(_len_frame_header0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_frame_header0; _i0++) {
          }
          enum sci_status benchRet = sci_unsolicited_frame_control_get_header(uf_control,frame_index,frame_header);
          free(uf_control);
          for(int i1 = 0; i1 < _len_frame_header0; i1++) {
            int _len_frame_header1 = 1;
              }
          free(frame_header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
