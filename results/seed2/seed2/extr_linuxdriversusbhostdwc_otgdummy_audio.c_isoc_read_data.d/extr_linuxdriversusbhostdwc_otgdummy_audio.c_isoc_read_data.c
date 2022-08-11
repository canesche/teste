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
typedef  int /*<<< orphan*/  off_t ;

/* Variables and functions */
 int RBUF_LEN ; 
 char* rbuf ; 
 int rbuf_len ; 
 int rbuf_start ; 

__attribute__((used)) static int isoc_read_data (char *page, char **start,
			   off_t off, int count,
			   int *eof, void *data)
{
	int i;
	static int c = 0;
	static int done = 0;
	static int s = 0;

/*
	printk ("\ncount: %d\n", count);
	printk ("rbuf_start: %d\n", rbuf_start);
	printk ("rbuf_len: %d\n", rbuf_len);
	printk ("off: %d\n", off);
	printk ("start: %p\n\n", *start);
*/
	if (done) {
		c = 0;
		done = 0;
		*eof = 1;
		return 0;
	}

	if (c == 0) {
		if (rbuf_len == RBUF_LEN)
			s = rbuf_start;
		else s = 0;
	}

	for (i=0; i<count && c<rbuf_len; i++, c++) {
		page[i] = rbuf[(c+s) % RBUF_LEN];
	}
	*start = page;

	if (c >= rbuf_len) {
		*eof = 1;
		done = 1;
	}


	return i;
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
          int off = 100;
          int count = 100;
          int _len_page0 = 1;
          char * page = (char *) malloc(_len_page0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start0 = 1;
          char ** start = (char **) malloc(_len_start0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            int _len_start1 = 1;
            start[_i0] = (char *) malloc(_len_start1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_start1; _i1++) {
              start[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_eof0 = 1;
          int * eof = (int *) malloc(_len_eof0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_eof0; _i0++) {
            eof[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = isoc_read_data(page,start,off,count,eof,data);
          printf("%d\n", benchRet); 
          free(page);
          for(int i1 = 0; i1 < _len_start0; i1++) {
            int _len_start1 = 1;
              free(start[i1]);
          }
          free(start);
          free(eof);
        
        break;
    }
    // big-arr
    case 1:
    {
          int off = 255;
          int count = 255;
          int _len_page0 = 65025;
          char * page = (char *) malloc(_len_page0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start0 = 65025;
          char ** start = (char **) malloc(_len_start0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            int _len_start1 = 1;
            start[_i0] = (char *) malloc(_len_start1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_start1; _i1++) {
              start[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_eof0 = 65025;
          int * eof = (int *) malloc(_len_eof0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_eof0; _i0++) {
            eof[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = isoc_read_data(page,start,off,count,eof,data);
          printf("%d\n", benchRet); 
          free(page);
          for(int i1 = 0; i1 < _len_start0; i1++) {
            int _len_start1 = 1;
              free(start[i1]);
          }
          free(start);
          free(eof);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int off = 10;
          int count = 10;
          int _len_page0 = 100;
          char * page = (char *) malloc(_len_page0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start0 = 100;
          char ** start = (char **) malloc(_len_start0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            int _len_start1 = 1;
            start[_i0] = (char *) malloc(_len_start1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_start1; _i1++) {
              start[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_eof0 = 100;
          int * eof = (int *) malloc(_len_eof0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_eof0; _i0++) {
            eof[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = isoc_read_data(page,start,off,count,eof,data);
          printf("%d\n", benchRet); 
          free(page);
          for(int i1 = 0; i1 < _len_start0; i1++) {
            int _len_start1 = 1;
              free(start[i1]);
          }
          free(start);
          free(eof);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
