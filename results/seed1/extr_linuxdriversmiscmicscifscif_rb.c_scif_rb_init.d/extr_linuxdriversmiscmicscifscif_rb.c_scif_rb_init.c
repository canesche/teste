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
typedef  void* u32 ;
struct scif_rb {int size; void** read_ptr; void** write_ptr; void* current_write_offset; void* current_read_offset; void* rb_base; } ;

/* Variables and functions */

void scif_rb_init(struct scif_rb *rb, u32 *read_ptr, u32 *write_ptr,
		  void *rb_base, u8 size)
{
	rb->rb_base = rb_base;
	rb->size = (1 << size);
	rb->read_ptr = read_ptr;
	rb->write_ptr = write_ptr;
	rb->current_read_offset = *read_ptr;
	rb->current_write_offset = *write_ptr;
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
          int size = 100;
          int _len_rb0 = 1;
          struct scif_rb * rb = (struct scif_rb *) malloc(_len_rb0*sizeof(struct scif_rb));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
            rb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rb__i0__read_ptr0 = 1;
          rb[_i0].read_ptr = (void **) malloc(_len_rb__i0__read_ptr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_rb__i0__read_ptr0; _j0++) {
          }
          int _len_rb__i0__write_ptr0 = 1;
          rb[_i0].write_ptr = (void **) malloc(_len_rb__i0__write_ptr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_rb__i0__write_ptr0; _j0++) {
          }
          }
          int _len_read_ptr0 = 1;
          void ** read_ptr = (void **) malloc(_len_read_ptr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_read_ptr0; _i0++) {
          }
          int _len_write_ptr0 = 1;
          void ** write_ptr = (void **) malloc(_len_write_ptr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_write_ptr0; _i0++) {
          }
          void * rb_base;
          scif_rb_init(rb,read_ptr,write_ptr,rb_base,size);
          free(rb);
          for(int i1 = 0; i1 < _len_read_ptr0; i1++) {
            int _len_read_ptr1 = 1;
              }
          free(read_ptr);
          for(int i1 = 0; i1 < _len_write_ptr0; i1++) {
            int _len_write_ptr1 = 1;
              }
          free(write_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_rb0 = 65025;
          struct scif_rb * rb = (struct scif_rb *) malloc(_len_rb0*sizeof(struct scif_rb));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
            rb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rb__i0__read_ptr0 = 1;
          rb[_i0].read_ptr = (void **) malloc(_len_rb__i0__read_ptr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_rb__i0__read_ptr0; _j0++) {
          }
          int _len_rb__i0__write_ptr0 = 1;
          rb[_i0].write_ptr = (void **) malloc(_len_rb__i0__write_ptr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_rb__i0__write_ptr0; _j0++) {
          }
          }
          int _len_read_ptr0 = 65025;
          void ** read_ptr = (void **) malloc(_len_read_ptr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_read_ptr0; _i0++) {
          }
          int _len_write_ptr0 = 65025;
          void ** write_ptr = (void **) malloc(_len_write_ptr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_write_ptr0; _i0++) {
          }
          void * rb_base;
          scif_rb_init(rb,read_ptr,write_ptr,rb_base,size);
          free(rb);
          for(int i1 = 0; i1 < _len_read_ptr0; i1++) {
            int _len_read_ptr1 = 1;
              }
          free(read_ptr);
          for(int i1 = 0; i1 < _len_write_ptr0; i1++) {
            int _len_write_ptr1 = 1;
              }
          free(write_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_rb0 = 100;
          struct scif_rb * rb = (struct scif_rb *) malloc(_len_rb0*sizeof(struct scif_rb));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
            rb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rb__i0__read_ptr0 = 1;
          rb[_i0].read_ptr = (void **) malloc(_len_rb__i0__read_ptr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_rb__i0__read_ptr0; _j0++) {
          }
          int _len_rb__i0__write_ptr0 = 1;
          rb[_i0].write_ptr = (void **) malloc(_len_rb__i0__write_ptr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_rb__i0__write_ptr0; _j0++) {
          }
          }
          int _len_read_ptr0 = 100;
          void ** read_ptr = (void **) malloc(_len_read_ptr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_read_ptr0; _i0++) {
          }
          int _len_write_ptr0 = 100;
          void ** write_ptr = (void **) malloc(_len_write_ptr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_write_ptr0; _i0++) {
          }
          void * rb_base;
          scif_rb_init(rb,read_ptr,write_ptr,rb_base,size);
          free(rb);
          for(int i1 = 0; i1 < _len_read_ptr0; i1++) {
            int _len_read_ptr1 = 1;
              }
          free(read_ptr);
          for(int i1 = 0; i1 < _len_write_ptr0; i1++) {
            int _len_write_ptr1 = 1;
              }
          free(write_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
