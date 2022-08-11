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
typedef  int u8 ;
struct uvc_control_mapping {int offset; } ;
typedef  int /*<<< orphan*/  s8 ;
typedef  int const s32 ;

/* Variables and functions */
#define  UVC_GET_CUR 132 
#define  UVC_GET_DEF 131 
#define  UVC_GET_MAX 130 
#define  UVC_GET_MIN 129 
#define  UVC_GET_RES 128 

__attribute__((used)) static s32 uvc_ctrl_get_rel_speed(struct uvc_control_mapping *mapping,
	u8 query, const u8 *data)
{
	unsigned int first = mapping->offset / 8;
	s8 rel = (s8)data[first];

	switch (query) {
	case UVC_GET_CUR:
		return (rel == 0) ? 0 : (rel > 0 ? data[first+1]
						 : -data[first+1]);
	case UVC_GET_MIN:
		return -data[first+1];
	case UVC_GET_MAX:
	case UVC_GET_RES:
	case UVC_GET_DEF:
	default:
		return data[first+1];
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
          int query = 100;
          int _len_mapping0 = 1;
          struct uvc_control_mapping * mapping = (struct uvc_control_mapping *) malloc(_len_mapping0*sizeof(struct uvc_control_mapping));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
            mapping[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int benchRet = uvc_ctrl_get_rel_speed(mapping,query,data);
          printf("%d\n", benchRet); 
          free(mapping);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int query = 255;
          int _len_mapping0 = 65025;
          struct uvc_control_mapping * mapping = (struct uvc_control_mapping *) malloc(_len_mapping0*sizeof(struct uvc_control_mapping));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
            mapping[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int benchRet = uvc_ctrl_get_rel_speed(mapping,query,data);
          printf("%d\n", benchRet); 
          free(mapping);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int query = 10;
          int _len_mapping0 = 100;
          struct uvc_control_mapping * mapping = (struct uvc_control_mapping *) malloc(_len_mapping0*sizeof(struct uvc_control_mapping));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
            mapping[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int benchRet = uvc_ctrl_get_rel_speed(mapping,query,data);
          printf("%d\n", benchRet); 
          free(mapping);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
