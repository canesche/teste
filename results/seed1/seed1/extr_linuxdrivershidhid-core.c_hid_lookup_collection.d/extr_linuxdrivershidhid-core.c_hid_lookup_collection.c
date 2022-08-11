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
struct hid_parser {int collection_stack_ptr; unsigned int* collection_stack; TYPE_1__* device; } ;
struct hid_collection {unsigned int type; int usage; } ;
struct TYPE_2__ {struct hid_collection* collection; } ;

/* Variables and functions */

__attribute__((used)) static unsigned hid_lookup_collection(struct hid_parser *parser, unsigned type)
{
	struct hid_collection *collection = parser->device->collection;
	int n;

	for (n = parser->collection_stack_ptr - 1; n >= 0; n--) {
		unsigned index = parser->collection_stack[n];
		if (collection[index].type == type)
			return collection[index].usage;
	}
	return 0; /* we know nothing about this usage type */
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
          unsigned int type = 100;
          int _len_parser0 = 1;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].collection_stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_parser__i0__collection_stack0 = 1;
          parser[_i0].collection_stack = (unsigned int *) malloc(_len_parser__i0__collection_stack0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_parser__i0__collection_stack0; _j0++) {
            parser[_i0].collection_stack[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parser__i0__device0 = 1;
          parser[_i0].device = (struct TYPE_2__ *) malloc(_len_parser__i0__device0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_parser__i0__device0; _j0++) {
              int _len_parser__i0__device_collection0 = 1;
          parser[_i0].device->collection = (struct hid_collection *) malloc(_len_parser__i0__device_collection0*sizeof(struct hid_collection));
          for(int _j0 = 0; _j0 < _len_parser__i0__device_collection0; _j0++) {
            parser[_i0].device->collection->type = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].device->collection->usage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = hid_lookup_collection(parser,type);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].collection_stack);
          }
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].device);
          }
          free(parser);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int type = 255;
          int _len_parser0 = 65025;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].collection_stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_parser__i0__collection_stack0 = 1;
          parser[_i0].collection_stack = (unsigned int *) malloc(_len_parser__i0__collection_stack0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_parser__i0__collection_stack0; _j0++) {
            parser[_i0].collection_stack[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parser__i0__device0 = 1;
          parser[_i0].device = (struct TYPE_2__ *) malloc(_len_parser__i0__device0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_parser__i0__device0; _j0++) {
              int _len_parser__i0__device_collection0 = 1;
          parser[_i0].device->collection = (struct hid_collection *) malloc(_len_parser__i0__device_collection0*sizeof(struct hid_collection));
          for(int _j0 = 0; _j0 < _len_parser__i0__device_collection0; _j0++) {
            parser[_i0].device->collection->type = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].device->collection->usage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = hid_lookup_collection(parser,type);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].collection_stack);
          }
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].device);
          }
          free(parser);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int type = 10;
          int _len_parser0 = 100;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].collection_stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_parser__i0__collection_stack0 = 1;
          parser[_i0].collection_stack = (unsigned int *) malloc(_len_parser__i0__collection_stack0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_parser__i0__collection_stack0; _j0++) {
            parser[_i0].collection_stack[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parser__i0__device0 = 1;
          parser[_i0].device = (struct TYPE_2__ *) malloc(_len_parser__i0__device0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_parser__i0__device0; _j0++) {
              int _len_parser__i0__device_collection0 = 1;
          parser[_i0].device->collection = (struct hid_collection *) malloc(_len_parser__i0__device_collection0*sizeof(struct hid_collection));
          for(int _j0 = 0; _j0 < _len_parser__i0__device_collection0; _j0++) {
            parser[_i0].device->collection->type = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].device->collection->usage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = hid_lookup_collection(parser,type);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].collection_stack);
          }
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].device);
          }
          free(parser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
