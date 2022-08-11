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
struct TYPE_4__ {scalar_t__ type; union acpi_operand_object* next_object; } ;
struct TYPE_3__ {scalar_t__ handler; void* pointer; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ data; } ;
struct acpi_namespace_node {union acpi_operand_object* object; } ;
typedef  int /*<<< orphan*/  acpi_status ;
typedef  scalar_t__ acpi_object_handler ;

/* Variables and functions */
 scalar_t__ ACPI_TYPE_LOCAL_DATA ; 
 int /*<<< orphan*/  AE_NOT_FOUND ; 
 int /*<<< orphan*/  AE_OK ; 

acpi_status
acpi_ns_get_attached_data(struct acpi_namespace_node *node,
			  acpi_object_handler handler, void **data)
{
	union acpi_operand_object *obj_desc;

	obj_desc = node->object;
	while (obj_desc) {
		if ((obj_desc->common.type == ACPI_TYPE_LOCAL_DATA) &&
		    (obj_desc->data.handler == handler)) {
			*data = obj_desc->data.pointer;
			return (AE_OK);
		}

		obj_desc = obj_desc->common.next_object;
	}

	return (AE_NOT_FOUND);
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
          long handler = 100;
          int _len_node0 = 1;
          struct acpi_namespace_node * node = (struct acpi_namespace_node *) malloc(_len_node0*sizeof(struct acpi_namespace_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              int _len_node__i0__object0 = 1;
          node[_i0].object = (union acpi_operand_object *) malloc(_len_node__i0__object0*sizeof(union acpi_operand_object));
          for(int _j0 = 0; _j0 < _len_node__i0__object0; _j0++) {
            node[_i0].object[_j0] = 0;
          }
          }
          int _len_data0 = 1;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
          int benchRet = acpi_ns_get_attached_data(node,handler,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].object);
          }
          free(node);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          long handler = 255;
          int _len_node0 = 65025;
          struct acpi_namespace_node * node = (struct acpi_namespace_node *) malloc(_len_node0*sizeof(struct acpi_namespace_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              int _len_node__i0__object0 = 1;
          node[_i0].object = (union acpi_operand_object *) malloc(_len_node__i0__object0*sizeof(union acpi_operand_object));
          for(int _j0 = 0; _j0 < _len_node__i0__object0; _j0++) {
            node[_i0].object[_j0] = 0;
          }
          }
          int _len_data0 = 65025;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
          int benchRet = acpi_ns_get_attached_data(node,handler,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].object);
          }
          free(node);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long handler = 10;
          int _len_node0 = 100;
          struct acpi_namespace_node * node = (struct acpi_namespace_node *) malloc(_len_node0*sizeof(struct acpi_namespace_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              int _len_node__i0__object0 = 1;
          node[_i0].object = (union acpi_operand_object *) malloc(_len_node__i0__object0*sizeof(union acpi_operand_object));
          for(int _j0 = 0; _j0 < _len_node__i0__object0; _j0++) {
            node[_i0].object[_j0] = 0;
          }
          }
          int _len_data0 = 100;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
          int benchRet = acpi_ns_get_attached_data(node,handler,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].object);
          }
          free(node);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
