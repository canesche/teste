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
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ package; } ;
typedef  scalar_t__ u8 ;
typedef  int u32 ;

/* Variables and functions */
 scalar_t__ ACPI_SORT_ASCENDING ; 
 scalar_t__ ACPI_SORT_DESCENDING ; 

__attribute__((used)) static void
acpi_ns_sort_list(union acpi_operand_object **elements,
		  u32 count, u32 index, u8 sort_direction)
{
	union acpi_operand_object *obj_desc1;
	union acpi_operand_object *obj_desc2;
	union acpi_operand_object *temp_obj;
	u32 i;
	u32 j;

	/* Simple bubble sort */

	for (i = 1; i < count; i++) {
		for (j = (count - 1); j >= i; j--) {
			obj_desc1 = elements[j - 1]->package.elements[index];
			obj_desc2 = elements[j]->package.elements[index];

			if (((sort_direction == ACPI_SORT_ASCENDING) &&
			     (obj_desc1->integer.value >
			      obj_desc2->integer.value))
			    || ((sort_direction == ACPI_SORT_DESCENDING)
				&& (obj_desc1->integer.value <
				    obj_desc2->integer.value))) {
				temp_obj = elements[j - 1];
				elements[j - 1] = elements[j];
				elements[j] = temp_obj;
			}
		}
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
          int count = 100;
          int index = 100;
          long sort_direction = 100;
          int _len_elements0 = 1;
          union acpi_operand_object ** elements = (union acpi_operand_object **) malloc(_len_elements0*sizeof(union acpi_operand_object *));
          for(int _i0 = 0; _i0 < _len_elements0; _i0++) {
            int _len_elements1 = 1;
            elements[_i0] = (union acpi_operand_object *) malloc(_len_elements1*sizeof(union acpi_operand_object));
            for(int _i1 = 0; _i1 < _len_elements1; _i1++) {
              elements[_i0][_i1] = 0;
            }
          }
          acpi_ns_sort_list(elements,count,index,sort_direction);
          for(int i1 = 0; i1 < _len_elements0; i1++) {
            int _len_elements1 = 1;
              free(elements[i1]);
          }
          free(elements);
        
        break;
    }
    // big-arr
    case 1:
    {
          int count = 255;
          int index = 255;
          long sort_direction = 255;
          int _len_elements0 = 65025;
          union acpi_operand_object ** elements = (union acpi_operand_object **) malloc(_len_elements0*sizeof(union acpi_operand_object *));
          for(int _i0 = 0; _i0 < _len_elements0; _i0++) {
            int _len_elements1 = 1;
            elements[_i0] = (union acpi_operand_object *) malloc(_len_elements1*sizeof(union acpi_operand_object));
            for(int _i1 = 0; _i1 < _len_elements1; _i1++) {
              elements[_i0][_i1] = 0;
            }
          }
          acpi_ns_sort_list(elements,count,index,sort_direction);
          for(int i1 = 0; i1 < _len_elements0; i1++) {
            int _len_elements1 = 1;
              free(elements[i1]);
          }
          free(elements);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int count = 10;
          int index = 10;
          long sort_direction = 10;
          int _len_elements0 = 100;
          union acpi_operand_object ** elements = (union acpi_operand_object **) malloc(_len_elements0*sizeof(union acpi_operand_object *));
          for(int _i0 = 0; _i0 < _len_elements0; _i0++) {
            int _len_elements1 = 1;
            elements[_i0] = (union acpi_operand_object *) malloc(_len_elements1*sizeof(union acpi_operand_object));
            for(int _i1 = 0; _i1 < _len_elements1; _i1++) {
              elements[_i0][_i1] = 0;
            }
          }
          acpi_ns_sort_list(elements,count,index,sort_direction);
          for(int i1 = 0; i1 < _len_elements0; i1++) {
            int _len_elements1 = 1;
              free(elements[i1]);
          }
          free(elements);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
