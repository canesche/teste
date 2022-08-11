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
struct iio_buffer {struct attribute const** attrs; } ;
struct attribute {int dummy; } ;

/* Variables and functions */

void iio_buffer_set_attrs(struct iio_buffer *buffer,
			 const struct attribute **attrs)
{
	buffer->attrs = attrs;
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
          int _len_buffer0 = 1;
          struct iio_buffer * buffer = (struct iio_buffer *) malloc(_len_buffer0*sizeof(struct iio_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__attrs0 = 1;
          buffer[_i0].attrs = (const struct attribute **) malloc(_len_buffer__i0__attrs0*sizeof(const struct attribute *));
          for(int _j0 = 0; _j0 < _len_buffer__i0__attrs0; _j0++) {
            int _len_buffer__i0__attrs1 = 1;
            buffer[_i0].attrs[_j0] = (const struct attribute *) malloc(_len_buffer__i0__attrs1*sizeof(const struct attribute));
            for(int _j1 = 0; _j1 < _len_buffer__i0__attrs1; _j1++) {
                  }
          }
          }
          int _len_attrs0 = 1;
          const struct attribute ** attrs = (const struct attribute **) malloc(_len_attrs0*sizeof(const struct attribute *));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
            int _len_attrs1 = 1;
            attrs[_i0] = (const struct attribute *) malloc(_len_attrs1*sizeof(const struct attribute));
            for(int _i1 = 0; _i1 < _len_attrs1; _i1++) {
                  }
          }
          iio_buffer_set_attrs(buffer,attrs);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(*(buffer[_aux].attrs));
        free(buffer[_aux].attrs);
          }
          free(buffer);
          for(int i1 = 0; i1 < _len_attrs0; i1++) {
            int _len_attrs1 = 1;
              free(attrs[i1]);
          }
          free(attrs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buffer0 = 65025;
          struct iio_buffer * buffer = (struct iio_buffer *) malloc(_len_buffer0*sizeof(struct iio_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__attrs0 = 1;
          buffer[_i0].attrs = (const struct attribute **) malloc(_len_buffer__i0__attrs0*sizeof(const struct attribute *));
          for(int _j0 = 0; _j0 < _len_buffer__i0__attrs0; _j0++) {
            int _len_buffer__i0__attrs1 = 1;
            buffer[_i0].attrs[_j0] = (const struct attribute *) malloc(_len_buffer__i0__attrs1*sizeof(const struct attribute));
            for(int _j1 = 0; _j1 < _len_buffer__i0__attrs1; _j1++) {
                  }
          }
          }
          int _len_attrs0 = 65025;
          const struct attribute ** attrs = (const struct attribute **) malloc(_len_attrs0*sizeof(const struct attribute *));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
            int _len_attrs1 = 1;
            attrs[_i0] = (const struct attribute *) malloc(_len_attrs1*sizeof(const struct attribute));
            for(int _i1 = 0; _i1 < _len_attrs1; _i1++) {
                  }
          }
          iio_buffer_set_attrs(buffer,attrs);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(*(buffer[_aux].attrs));
        free(buffer[_aux].attrs);
          }
          free(buffer);
          for(int i1 = 0; i1 < _len_attrs0; i1++) {
            int _len_attrs1 = 1;
              free(attrs[i1]);
          }
          free(attrs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buffer0 = 100;
          struct iio_buffer * buffer = (struct iio_buffer *) malloc(_len_buffer0*sizeof(struct iio_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__attrs0 = 1;
          buffer[_i0].attrs = (const struct attribute **) malloc(_len_buffer__i0__attrs0*sizeof(const struct attribute *));
          for(int _j0 = 0; _j0 < _len_buffer__i0__attrs0; _j0++) {
            int _len_buffer__i0__attrs1 = 1;
            buffer[_i0].attrs[_j0] = (const struct attribute *) malloc(_len_buffer__i0__attrs1*sizeof(const struct attribute));
            for(int _j1 = 0; _j1 < _len_buffer__i0__attrs1; _j1++) {
                  }
          }
          }
          int _len_attrs0 = 100;
          const struct attribute ** attrs = (const struct attribute **) malloc(_len_attrs0*sizeof(const struct attribute *));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
            int _len_attrs1 = 1;
            attrs[_i0] = (const struct attribute *) malloc(_len_attrs1*sizeof(const struct attribute));
            for(int _i1 = 0; _i1 < _len_attrs1; _i1++) {
                  }
          }
          iio_buffer_set_attrs(buffer,attrs);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(*(buffer[_aux].attrs));
        free(buffer[_aux].attrs);
          }
          free(buffer);
          for(int i1 = 0; i1 < _len_attrs0; i1++) {
            int _len_attrs1 = 1;
              free(attrs[i1]);
          }
          free(attrs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
