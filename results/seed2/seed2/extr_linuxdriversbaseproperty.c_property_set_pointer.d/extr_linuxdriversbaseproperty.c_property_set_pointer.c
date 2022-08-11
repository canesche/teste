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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u64 ;
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_4__ {void const* str; int /*<<< orphan*/  u64_data; int /*<<< orphan*/  u32_data; int /*<<< orphan*/  u16_data; int /*<<< orphan*/  u8_data; } ;
struct TYPE_3__ {void const* str; void const* u64_data; void const* u32_data; void const* u16_data; void const* u8_data; } ;
struct property_entry {int type; TYPE_2__ value; TYPE_1__ pointer; int /*<<< orphan*/  is_array; } ;

/* Variables and functions */
#define  DEV_PROP_STRING 132 
#define  DEV_PROP_U16 131 
#define  DEV_PROP_U32 130 
#define  DEV_PROP_U64 129 
#define  DEV_PROP_U8 128 

__attribute__((used)) static void property_set_pointer(struct property_entry *prop, const void *pointer)
{
	switch (prop->type) {
	case DEV_PROP_U8:
		if (prop->is_array)
			prop->pointer.u8_data = pointer;
		else
			prop->value.u8_data = *((u8 *)pointer);
		break;
	case DEV_PROP_U16:
		if (prop->is_array)
			prop->pointer.u16_data = pointer;
		else
			prop->value.u16_data = *((u16 *)pointer);
		break;
	case DEV_PROP_U32:
		if (prop->is_array)
			prop->pointer.u32_data = pointer;
		else
			prop->value.u32_data = *((u32 *)pointer);
		break;
	case DEV_PROP_U64:
		if (prop->is_array)
			prop->pointer.u64_data = pointer;
		else
			prop->value.u64_data = *((u64 *)pointer);
		break;
	case DEV_PROP_STRING:
		if (prop->is_array)
			prop->pointer.str = pointer;
		else
			prop->value.str = pointer;
		break;
	default:
		break;
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
          int _len_prop0 = 1;
          struct property_entry * prop = (struct property_entry *) malloc(_len_prop0*sizeof(struct property_entry));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
            prop[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prop__i0__value_str0 = 1;
          prop[_i0].value.str = (const void *) malloc(_len_prop__i0__value_str0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__value_str0; _j0++) {
            prop[_i0].value.str[_j0] = 0;
          }
        prop[_i0].value.u64_data = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].value.u32_data = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].value.u16_data = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].value.u8_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prop__i0__pointer_str0 = 1;
          prop[_i0].pointer.str = (const void *) malloc(_len_prop__i0__pointer_str0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_str0; _j0++) {
            prop[_i0].pointer.str[_j0] = 0;
          }
          int _len_prop__i0__pointer_u64_data0 = 1;
          prop[_i0].pointer.u64_data = (const void *) malloc(_len_prop__i0__pointer_u64_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u64_data0; _j0++) {
            prop[_i0].pointer.u64_data[_j0] = 0;
          }
          int _len_prop__i0__pointer_u32_data0 = 1;
          prop[_i0].pointer.u32_data = (const void *) malloc(_len_prop__i0__pointer_u32_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u32_data0; _j0++) {
            prop[_i0].pointer.u32_data[_j0] = 0;
          }
          int _len_prop__i0__pointer_u16_data0 = 1;
          prop[_i0].pointer.u16_data = (const void *) malloc(_len_prop__i0__pointer_u16_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u16_data0; _j0++) {
            prop[_i0].pointer.u16_data[_j0] = 0;
          }
          int _len_prop__i0__pointer_u8_data0 = 1;
          prop[_i0].pointer.u8_data = (const void *) malloc(_len_prop__i0__pointer_u8_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u8_data0; _j0++) {
            prop[_i0].pointer.u8_data[_j0] = 0;
          }
        prop[_i0].is_array = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pointer0 = 1;
          const void * pointer = (const void *) malloc(_len_pointer0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pointer0; _i0++) {
            pointer[_i0] = 0;
          }
          property_set_pointer(prop,pointer);
          free(prop);
          free(pointer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_prop0 = 65025;
          struct property_entry * prop = (struct property_entry *) malloc(_len_prop0*sizeof(struct property_entry));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
            prop[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prop__i0__value_str0 = 1;
          prop[_i0].value.str = (const void *) malloc(_len_prop__i0__value_str0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__value_str0; _j0++) {
            prop[_i0].value.str[_j0] = 0;
          }
        prop[_i0].value.u64_data = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].value.u32_data = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].value.u16_data = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].value.u8_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prop__i0__pointer_str0 = 1;
          prop[_i0].pointer.str = (const void *) malloc(_len_prop__i0__pointer_str0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_str0; _j0++) {
            prop[_i0].pointer.str[_j0] = 0;
          }
          int _len_prop__i0__pointer_u64_data0 = 1;
          prop[_i0].pointer.u64_data = (const void *) malloc(_len_prop__i0__pointer_u64_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u64_data0; _j0++) {
            prop[_i0].pointer.u64_data[_j0] = 0;
          }
          int _len_prop__i0__pointer_u32_data0 = 1;
          prop[_i0].pointer.u32_data = (const void *) malloc(_len_prop__i0__pointer_u32_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u32_data0; _j0++) {
            prop[_i0].pointer.u32_data[_j0] = 0;
          }
          int _len_prop__i0__pointer_u16_data0 = 1;
          prop[_i0].pointer.u16_data = (const void *) malloc(_len_prop__i0__pointer_u16_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u16_data0; _j0++) {
            prop[_i0].pointer.u16_data[_j0] = 0;
          }
          int _len_prop__i0__pointer_u8_data0 = 1;
          prop[_i0].pointer.u8_data = (const void *) malloc(_len_prop__i0__pointer_u8_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u8_data0; _j0++) {
            prop[_i0].pointer.u8_data[_j0] = 0;
          }
        prop[_i0].is_array = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pointer0 = 65025;
          const void * pointer = (const void *) malloc(_len_pointer0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pointer0; _i0++) {
            pointer[_i0] = 0;
          }
          property_set_pointer(prop,pointer);
          free(prop);
          free(pointer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_prop0 = 100;
          struct property_entry * prop = (struct property_entry *) malloc(_len_prop0*sizeof(struct property_entry));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
            prop[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prop__i0__value_str0 = 1;
          prop[_i0].value.str = (const void *) malloc(_len_prop__i0__value_str0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__value_str0; _j0++) {
            prop[_i0].value.str[_j0] = 0;
          }
        prop[_i0].value.u64_data = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].value.u32_data = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].value.u16_data = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].value.u8_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prop__i0__pointer_str0 = 1;
          prop[_i0].pointer.str = (const void *) malloc(_len_prop__i0__pointer_str0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_str0; _j0++) {
            prop[_i0].pointer.str[_j0] = 0;
          }
          int _len_prop__i0__pointer_u64_data0 = 1;
          prop[_i0].pointer.u64_data = (const void *) malloc(_len_prop__i0__pointer_u64_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u64_data0; _j0++) {
            prop[_i0].pointer.u64_data[_j0] = 0;
          }
          int _len_prop__i0__pointer_u32_data0 = 1;
          prop[_i0].pointer.u32_data = (const void *) malloc(_len_prop__i0__pointer_u32_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u32_data0; _j0++) {
            prop[_i0].pointer.u32_data[_j0] = 0;
          }
          int _len_prop__i0__pointer_u16_data0 = 1;
          prop[_i0].pointer.u16_data = (const void *) malloc(_len_prop__i0__pointer_u16_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u16_data0; _j0++) {
            prop[_i0].pointer.u16_data[_j0] = 0;
          }
          int _len_prop__i0__pointer_u8_data0 = 1;
          prop[_i0].pointer.u8_data = (const void *) malloc(_len_prop__i0__pointer_u8_data0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_prop__i0__pointer_u8_data0; _j0++) {
            prop[_i0].pointer.u8_data[_j0] = 0;
          }
        prop[_i0].is_array = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pointer0 = 100;
          const void * pointer = (const void *) malloc(_len_pointer0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pointer0; _i0++) {
            pointer[_i0] = 0;
          }
          property_set_pointer(prop,pointer);
          free(prop);
          free(pointer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
