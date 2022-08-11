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
struct percpu_buffer_node {int dummy; } ;
struct percpu_buffer {TYPE_1__* c; } ;
struct TYPE_2__ {intptr_t offset; struct percpu_buffer_node** array; } ;

/* Variables and functions */

struct percpu_buffer_node *__percpu_buffer_pop(struct percpu_buffer *buffer,
					       int cpu)
{
	struct percpu_buffer_node *head;
	intptr_t offset;

	offset = buffer->c[cpu].offset;
	if (offset == 0)
		return NULL;
	head = buffer->c[cpu].array[offset - 1];
	buffer->c[cpu].offset = offset - 1;
	return head;
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
          int cpu = 100;
          int _len_buffer0 = 1;
          struct percpu_buffer * buffer = (struct percpu_buffer *) malloc(_len_buffer0*sizeof(struct percpu_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__c0 = 1;
          buffer[_i0].c = (struct TYPE_2__ *) malloc(_len_buffer__i0__c0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buffer__i0__c0; _j0++) {
            buffer[_i0].c->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__c_array0 = 1;
          buffer[_i0].c->array = (struct percpu_buffer_node **) malloc(_len_buffer__i0__c_array0*sizeof(struct percpu_buffer_node *));
          for(int _j0 = 0; _j0 < _len_buffer__i0__c_array0; _j0++) {
            int _len_buffer__i0__c_array1 = 1;
            buffer[_i0].c->array[_j0] = (struct percpu_buffer_node *) malloc(_len_buffer__i0__c_array1*sizeof(struct percpu_buffer_node));
            for(int _j1 = 0; _j1 < _len_buffer__i0__c_array1; _j1++) {
              buffer[_i0].c->array[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct percpu_buffer_node * benchRet = __percpu_buffer_pop(buffer,cpu);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].c);
          }
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cpu = 255;
          int _len_buffer0 = 65025;
          struct percpu_buffer * buffer = (struct percpu_buffer *) malloc(_len_buffer0*sizeof(struct percpu_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__c0 = 1;
          buffer[_i0].c = (struct TYPE_2__ *) malloc(_len_buffer__i0__c0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buffer__i0__c0; _j0++) {
            buffer[_i0].c->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__c_array0 = 1;
          buffer[_i0].c->array = (struct percpu_buffer_node **) malloc(_len_buffer__i0__c_array0*sizeof(struct percpu_buffer_node *));
          for(int _j0 = 0; _j0 < _len_buffer__i0__c_array0; _j0++) {
            int _len_buffer__i0__c_array1 = 1;
            buffer[_i0].c->array[_j0] = (struct percpu_buffer_node *) malloc(_len_buffer__i0__c_array1*sizeof(struct percpu_buffer_node));
            for(int _j1 = 0; _j1 < _len_buffer__i0__c_array1; _j1++) {
              buffer[_i0].c->array[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct percpu_buffer_node * benchRet = __percpu_buffer_pop(buffer,cpu);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].c);
          }
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cpu = 10;
          int _len_buffer0 = 100;
          struct percpu_buffer * buffer = (struct percpu_buffer *) malloc(_len_buffer0*sizeof(struct percpu_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__c0 = 1;
          buffer[_i0].c = (struct TYPE_2__ *) malloc(_len_buffer__i0__c0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buffer__i0__c0; _j0++) {
            buffer[_i0].c->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__c_array0 = 1;
          buffer[_i0].c->array = (struct percpu_buffer_node **) malloc(_len_buffer__i0__c_array0*sizeof(struct percpu_buffer_node *));
          for(int _j0 = 0; _j0 < _len_buffer__i0__c_array0; _j0++) {
            int _len_buffer__i0__c_array1 = 1;
            buffer[_i0].c->array[_j0] = (struct percpu_buffer_node *) malloc(_len_buffer__i0__c_array1*sizeof(struct percpu_buffer_node));
            for(int _j1 = 0; _j1 < _len_buffer__i0__c_array1; _j1++) {
              buffer[_i0].c->array[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct percpu_buffer_node * benchRet = __percpu_buffer_pop(buffer,cpu);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].c);
          }
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
