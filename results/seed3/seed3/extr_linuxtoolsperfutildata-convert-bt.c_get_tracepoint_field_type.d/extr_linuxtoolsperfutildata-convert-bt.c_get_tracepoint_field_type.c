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
struct format_field {unsigned long flags; int size; } ;
struct TYPE_2__ {struct bt_ctf_field_type* u32; struct bt_ctf_field_type* u64; struct bt_ctf_field_type* s32; struct bt_ctf_field_type* s64; struct bt_ctf_field_type* u64_hex; struct bt_ctf_field_type* string; } ;
struct ctf_writer {TYPE_1__ data; } ;
struct bt_ctf_field_type {int dummy; } ;

/* Variables and functions */
 unsigned long FIELD_IS_LONG ; 
 unsigned long FIELD_IS_POINTER ; 
 unsigned long FIELD_IS_SIGNED ; 
 unsigned long FIELD_IS_STRING ; 

__attribute__((used)) static struct bt_ctf_field_type*
get_tracepoint_field_type(struct ctf_writer *cw, struct format_field *field)
{
	unsigned long flags = field->flags;

	if (flags & FIELD_IS_STRING)
		return cw->data.string;

	if (!(flags & FIELD_IS_SIGNED)) {
		/* unsigned long are mostly pointers */
		if (flags & FIELD_IS_LONG || flags & FIELD_IS_POINTER)
			return cw->data.u64_hex;
	}

	if (flags & FIELD_IS_SIGNED) {
		if (field->size == 8)
			return cw->data.s64;
		else
			return cw->data.s32;
	}

	if (field->size == 8)
		return cw->data.u64;
	else
		return cw->data.u32;
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
          int _len_cw0 = 1;
          struct ctf_writer * cw = (struct ctf_writer *) malloc(_len_cw0*sizeof(struct ctf_writer));
          for(int _i0 = 0; _i0 < _len_cw0; _i0++) {
              int _len_cw__i0__data_u320 = 1;
          cw[_i0].data.u32 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_u320*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_u320; _j0++) {
            cw[_i0].data.u32->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_u640 = 1;
          cw[_i0].data.u64 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_u640*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_u640; _j0++) {
            cw[_i0].data.u64->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_s320 = 1;
          cw[_i0].data.s32 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_s320*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_s320; _j0++) {
            cw[_i0].data.s32->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_s640 = 1;
          cw[_i0].data.s64 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_s640*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_s640; _j0++) {
            cw[_i0].data.s64->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_u64_hex0 = 1;
          cw[_i0].data.u64_hex = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_u64_hex0*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_u64_hex0; _j0++) {
            cw[_i0].data.u64_hex->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_string0 = 1;
          cw[_i0].data.string = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_string0*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_string0; _j0++) {
            cw[_i0].data.string->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_field0 = 1;
          struct format_field * field = (struct format_field *) malloc(_len_field0*sizeof(struct format_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
            field[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        field[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct bt_ctf_field_type * benchRet = get_tracepoint_field_type(cw,field);
          printf("%d\n", (*benchRet).dummy);
          free(cw);
          free(field);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cw0 = 65025;
          struct ctf_writer * cw = (struct ctf_writer *) malloc(_len_cw0*sizeof(struct ctf_writer));
          for(int _i0 = 0; _i0 < _len_cw0; _i0++) {
              int _len_cw__i0__data_u320 = 1;
          cw[_i0].data.u32 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_u320*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_u320; _j0++) {
            cw[_i0].data.u32->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_u640 = 1;
          cw[_i0].data.u64 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_u640*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_u640; _j0++) {
            cw[_i0].data.u64->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_s320 = 1;
          cw[_i0].data.s32 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_s320*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_s320; _j0++) {
            cw[_i0].data.s32->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_s640 = 1;
          cw[_i0].data.s64 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_s640*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_s640; _j0++) {
            cw[_i0].data.s64->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_u64_hex0 = 1;
          cw[_i0].data.u64_hex = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_u64_hex0*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_u64_hex0; _j0++) {
            cw[_i0].data.u64_hex->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_string0 = 1;
          cw[_i0].data.string = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_string0*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_string0; _j0++) {
            cw[_i0].data.string->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_field0 = 65025;
          struct format_field * field = (struct format_field *) malloc(_len_field0*sizeof(struct format_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
            field[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        field[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct bt_ctf_field_type * benchRet = get_tracepoint_field_type(cw,field);
          printf("%d\n", (*benchRet).dummy);
          free(cw);
          free(field);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cw0 = 100;
          struct ctf_writer * cw = (struct ctf_writer *) malloc(_len_cw0*sizeof(struct ctf_writer));
          for(int _i0 = 0; _i0 < _len_cw0; _i0++) {
              int _len_cw__i0__data_u320 = 1;
          cw[_i0].data.u32 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_u320*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_u320; _j0++) {
            cw[_i0].data.u32->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_u640 = 1;
          cw[_i0].data.u64 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_u640*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_u640; _j0++) {
            cw[_i0].data.u64->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_s320 = 1;
          cw[_i0].data.s32 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_s320*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_s320; _j0++) {
            cw[_i0].data.s32->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_s640 = 1;
          cw[_i0].data.s64 = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_s640*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_s640; _j0++) {
            cw[_i0].data.s64->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_u64_hex0 = 1;
          cw[_i0].data.u64_hex = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_u64_hex0*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_u64_hex0; _j0++) {
            cw[_i0].data.u64_hex->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cw__i0__data_string0 = 1;
          cw[_i0].data.string = (struct bt_ctf_field_type *) malloc(_len_cw__i0__data_string0*sizeof(struct bt_ctf_field_type));
          for(int _j0 = 0; _j0 < _len_cw__i0__data_string0; _j0++) {
            cw[_i0].data.string->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_field0 = 100;
          struct format_field * field = (struct format_field *) malloc(_len_field0*sizeof(struct format_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
            field[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        field[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct bt_ctf_field_type * benchRet = get_tracepoint_field_type(cw,field);
          printf("%d\n", (*benchRet).dummy);
          free(cw);
          free(field);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
