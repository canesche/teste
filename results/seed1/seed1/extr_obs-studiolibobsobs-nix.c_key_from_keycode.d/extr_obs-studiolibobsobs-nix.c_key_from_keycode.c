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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ xcb_keycode_t ;
struct TYPE_4__ {size_t num; scalar_t__* array; } ;
struct keycode_list {TYPE_1__ list; } ;
typedef  int /*<<< orphan*/  obs_key_t ;
struct TYPE_5__ {struct keycode_list* keycodes; } ;
typedef  TYPE_2__ obs_hotkeys_platform_t ;

/* Variables and functions */
 size_t OBS_KEY_LAST_VALUE ; 
 int /*<<< orphan*/  OBS_KEY_NONE ; 

__attribute__((used)) static obs_key_t key_from_keycode(obs_hotkeys_platform_t *context,
		xcb_keycode_t code)
{
	for (size_t i = 0; i < OBS_KEY_LAST_VALUE; i++) {
		struct keycode_list *codes = &context->keycodes[i];

		for (size_t j = 0; j < codes->list.num; j++) {
			if (codes->list.array[j] == code) {
				return (obs_key_t)i;
			}
		}
	}

	return OBS_KEY_NONE;
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
          long code = 100;
          int _len_context0 = 1;
          struct TYPE_5__ * context = (struct TYPE_5__ *) malloc(_len_context0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__keycodes0 = 1;
          context[_i0].keycodes = (struct keycode_list *) malloc(_len_context__i0__keycodes0*sizeof(struct keycode_list));
          for(int _j0 = 0; _j0 < _len_context__i0__keycodes0; _j0++) {
            context[_i0].keycodes->list.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__keycodes_list_array0 = 1;
          context[_i0].keycodes->list.array = (long *) malloc(_len_context__i0__keycodes_list_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_context__i0__keycodes_list_array0; _j0++) {
            context[_i0].keycodes->list.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = key_from_keycode(context,code);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].keycodes);
          }
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          long code = 255;
          int _len_context0 = 65025;
          struct TYPE_5__ * context = (struct TYPE_5__ *) malloc(_len_context0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__keycodes0 = 1;
          context[_i0].keycodes = (struct keycode_list *) malloc(_len_context__i0__keycodes0*sizeof(struct keycode_list));
          for(int _j0 = 0; _j0 < _len_context__i0__keycodes0; _j0++) {
            context[_i0].keycodes->list.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__keycodes_list_array0 = 1;
          context[_i0].keycodes->list.array = (long *) malloc(_len_context__i0__keycodes_list_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_context__i0__keycodes_list_array0; _j0++) {
            context[_i0].keycodes->list.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = key_from_keycode(context,code);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].keycodes);
          }
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long code = 10;
          int _len_context0 = 100;
          struct TYPE_5__ * context = (struct TYPE_5__ *) malloc(_len_context0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__keycodes0 = 1;
          context[_i0].keycodes = (struct keycode_list *) malloc(_len_context__i0__keycodes0*sizeof(struct keycode_list));
          for(int _j0 = 0; _j0 < _len_context__i0__keycodes0; _j0++) {
            context[_i0].keycodes->list.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__keycodes_list_array0 = 1;
          context[_i0].keycodes->list.array = (long *) malloc(_len_context__i0__keycodes_list_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_context__i0__keycodes_list_array0; _j0++) {
            context[_i0].keycodes->list.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = key_from_keycode(context,code);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].keycodes);
          }
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
