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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* pages; int pages_amount; int page_size; int end; scalar_t__ pos; int /*<<< orphan*/ * buf; scalar_t__ error; } ;
typedef  TYPE_1__ R_STREAM_FILE ;
typedef  int /*<<< orphan*/  RBuffer ;

/* Variables and functions */

int init_r_stream_file(R_STREAM_FILE *stream_file, RBuffer *buf, int *pages, int pages_amount, int size, int page_size) {
	stream_file->error = 0;
	stream_file->buf = buf;
	stream_file->pages = pages;
	stream_file->pages_amount = pages_amount;
	stream_file->page_size = page_size;
	if (size == -1) {
		stream_file->end = pages_amount * page_size;
	} else {
		stream_file->end = size;
	}
	stream_file->pos = 0;
	return 1;
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
          int pages_amount = 100;
          int size = 100;
          int page_size = 100;
          int _len_stream_file0 = 1;
          struct TYPE_3__ * stream_file = (struct TYPE_3__ *) malloc(_len_stream_file0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream_file0; _i0++) {
              int _len_stream_file__i0__pages0 = 1;
          stream_file[_i0].pages = (int *) malloc(_len_stream_file__i0__pages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stream_file__i0__pages0; _j0++) {
            stream_file[_i0].pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream_file[_i0].pages_amount = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].page_size = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream_file__i0__buf0 = 1;
          stream_file[_i0].buf = (int *) malloc(_len_stream_file__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stream_file__i0__buf0; _j0++) {
            stream_file[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream_file[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pages0 = 1;
          int * pages = (int *) malloc(_len_pages0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            pages[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = init_r_stream_file(stream_file,buf,pages,pages_amount,size,page_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream_file0; _aux++) {
          free(stream_file[_aux].pages);
          }
          for(int _aux = 0; _aux < _len_stream_file0; _aux++) {
          free(stream_file[_aux].buf);
          }
          free(stream_file);
          free(buf);
          free(pages);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pages_amount = 255;
          int size = 255;
          int page_size = 255;
          int _len_stream_file0 = 65025;
          struct TYPE_3__ * stream_file = (struct TYPE_3__ *) malloc(_len_stream_file0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream_file0; _i0++) {
              int _len_stream_file__i0__pages0 = 1;
          stream_file[_i0].pages = (int *) malloc(_len_stream_file__i0__pages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stream_file__i0__pages0; _j0++) {
            stream_file[_i0].pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream_file[_i0].pages_amount = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].page_size = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream_file__i0__buf0 = 1;
          stream_file[_i0].buf = (int *) malloc(_len_stream_file__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stream_file__i0__buf0; _j0++) {
            stream_file[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream_file[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pages0 = 65025;
          int * pages = (int *) malloc(_len_pages0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            pages[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = init_r_stream_file(stream_file,buf,pages,pages_amount,size,page_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream_file0; _aux++) {
          free(stream_file[_aux].pages);
          }
          for(int _aux = 0; _aux < _len_stream_file0; _aux++) {
          free(stream_file[_aux].buf);
          }
          free(stream_file);
          free(buf);
          free(pages);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pages_amount = 10;
          int size = 10;
          int page_size = 10;
          int _len_stream_file0 = 100;
          struct TYPE_3__ * stream_file = (struct TYPE_3__ *) malloc(_len_stream_file0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream_file0; _i0++) {
              int _len_stream_file__i0__pages0 = 1;
          stream_file[_i0].pages = (int *) malloc(_len_stream_file__i0__pages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stream_file__i0__pages0; _j0++) {
            stream_file[_i0].pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream_file[_i0].pages_amount = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].page_size = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream_file__i0__buf0 = 1;
          stream_file[_i0].buf = (int *) malloc(_len_stream_file__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stream_file__i0__buf0; _j0++) {
            stream_file[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream_file[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pages0 = 100;
          int * pages = (int *) malloc(_len_pages0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            pages[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = init_r_stream_file(stream_file,buf,pages,pages_amount,size,page_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream_file0; _aux++) {
          free(stream_file[_aux].pages);
          }
          for(int _aux = 0; _aux < _len_stream_file0; _aux++) {
          free(stream_file[_aux].buf);
          }
          free(stream_file);
          free(buf);
          free(pages);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
