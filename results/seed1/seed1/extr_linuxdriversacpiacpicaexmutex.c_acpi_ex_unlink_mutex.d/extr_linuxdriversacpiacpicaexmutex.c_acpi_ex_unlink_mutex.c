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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_4__* next; int /*<<< orphan*/  original_sync_level; TYPE_3__* prev; struct acpi_thread_state* owner_thread; } ;
union acpi_operand_object {TYPE_5__ mutex; } ;
struct acpi_thread_state {TYPE_4__* acquired_mutex_list; } ;
struct TYPE_6__ {TYPE_3__* prev; } ;
struct TYPE_9__ {TYPE_1__ mutex; } ;
struct TYPE_7__ {int /*<<< orphan*/  original_sync_level; TYPE_4__* next; } ;
struct TYPE_8__ {TYPE_2__ mutex; } ;

/* Variables and functions */

void acpi_ex_unlink_mutex(union acpi_operand_object *obj_desc)
{
	struct acpi_thread_state *thread = obj_desc->mutex.owner_thread;

	if (!thread) {
		return;
	}

	/* Doubly linked list */

	if (obj_desc->mutex.next) {
		(obj_desc->mutex.next)->mutex.prev = obj_desc->mutex.prev;
	}

	if (obj_desc->mutex.prev) {
		(obj_desc->mutex.prev)->mutex.next = obj_desc->mutex.next;

		/*
		 * Migrate the previous sync level associated with this mutex to
		 * the previous mutex on the list so that it may be preserved.
		 * This handles the case where several mutexes have been acquired
		 * at the same level, but are not released in opposite order.
		 */
		(obj_desc->mutex.prev)->mutex.original_sync_level =
		    obj_desc->mutex.original_sync_level;
	} else {
		thread->acquired_mutex_list = obj_desc->mutex.next;
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
          int _len_obj_desc0 = 1;
          union acpi_operand_object * obj_desc = (union acpi_operand_object *) malloc(_len_obj_desc0*sizeof(union acpi_operand_object));
          for(int _i0 = 0; _i0 < _len_obj_desc0; _i0++) {
            obj_desc[_i0] = 0;
          }
          acpi_ex_unlink_mutex(obj_desc);
          free(obj_desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_obj_desc0 = 65025;
          union acpi_operand_object * obj_desc = (union acpi_operand_object *) malloc(_len_obj_desc0*sizeof(union acpi_operand_object));
          for(int _i0 = 0; _i0 < _len_obj_desc0; _i0++) {
            obj_desc[_i0] = 0;
          }
          acpi_ex_unlink_mutex(obj_desc);
          free(obj_desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_obj_desc0 = 100;
          union acpi_operand_object * obj_desc = (union acpi_operand_object *) malloc(_len_obj_desc0*sizeof(union acpi_operand_object));
          for(int _i0 = 0; _i0 < _len_obj_desc0; _i0++) {
            obj_desc[_i0] = 0;
          }
          acpi_ex_unlink_mutex(obj_desc);
          free(obj_desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
