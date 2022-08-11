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
struct TYPE_2__ {union acpi_operand_object* prev; union acpi_operand_object* next; } ;
union acpi_operand_object {TYPE_1__ mutex; } ;
struct acpi_thread_state {union acpi_operand_object* acquired_mutex_list; } ;

/* Variables and functions */

__attribute__((used)) static void
acpi_ex_link_mutex(union acpi_operand_object *obj_desc,
		   struct acpi_thread_state *thread)
{
	union acpi_operand_object *list_head;

	list_head = thread->acquired_mutex_list;

	/* This object will be the first object in the list */

	obj_desc->mutex.prev = NULL;
	obj_desc->mutex.next = list_head;

	/* Update old first object to point back to this object */

	if (list_head) {
		list_head->mutex.prev = obj_desc;
	}

	/* Update list head */

	thread->acquired_mutex_list = obj_desc;
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
          int _len_thread0 = 1;
          struct acpi_thread_state * thread = (struct acpi_thread_state *) malloc(_len_thread0*sizeof(struct acpi_thread_state));
          for(int _i0 = 0; _i0 < _len_thread0; _i0++) {
              int _len_thread__i0__acquired_mutex_list0 = 1;
          thread[_i0].acquired_mutex_list = (union acpi_operand_object *) malloc(_len_thread__i0__acquired_mutex_list0*sizeof(union acpi_operand_object));
          for(int _j0 = 0; _j0 < _len_thread__i0__acquired_mutex_list0; _j0++) {
            thread[_i0].acquired_mutex_list[_j0] = 0;
          }
          }
          acpi_ex_link_mutex(obj_desc,thread);
          free(obj_desc);
          for(int _aux = 0; _aux < _len_thread0; _aux++) {
          free(thread[_aux].acquired_mutex_list);
          }
          free(thread);
        
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
          int _len_thread0 = 65025;
          struct acpi_thread_state * thread = (struct acpi_thread_state *) malloc(_len_thread0*sizeof(struct acpi_thread_state));
          for(int _i0 = 0; _i0 < _len_thread0; _i0++) {
              int _len_thread__i0__acquired_mutex_list0 = 1;
          thread[_i0].acquired_mutex_list = (union acpi_operand_object *) malloc(_len_thread__i0__acquired_mutex_list0*sizeof(union acpi_operand_object));
          for(int _j0 = 0; _j0 < _len_thread__i0__acquired_mutex_list0; _j0++) {
            thread[_i0].acquired_mutex_list[_j0] = 0;
          }
          }
          acpi_ex_link_mutex(obj_desc,thread);
          free(obj_desc);
          for(int _aux = 0; _aux < _len_thread0; _aux++) {
          free(thread[_aux].acquired_mutex_list);
          }
          free(thread);
        
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
          int _len_thread0 = 100;
          struct acpi_thread_state * thread = (struct acpi_thread_state *) malloc(_len_thread0*sizeof(struct acpi_thread_state));
          for(int _i0 = 0; _i0 < _len_thread0; _i0++) {
              int _len_thread__i0__acquired_mutex_list0 = 1;
          thread[_i0].acquired_mutex_list = (union acpi_operand_object *) malloc(_len_thread__i0__acquired_mutex_list0*sizeof(union acpi_operand_object));
          for(int _j0 = 0; _j0 < _len_thread__i0__acquired_mutex_list0; _j0++) {
            thread[_i0].acquired_mutex_list[_j0] = 0;
          }
          }
          acpi_ex_link_mutex(obj_desc,thread);
          free(obj_desc);
          for(int _aux = 0; _aux < _len_thread0; _aux++) {
          free(thread[_aux].acquired_mutex_list);
          }
          free(thread);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
