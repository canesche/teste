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

/* Variables and functions */

void __assert_func(const char *file, int line, const char *func, const char *expr)
{
  while (1)
    ;
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
          int line = 100;
          int _len_file0 = 1;
          const char * file = (const char *) malloc(_len_file0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func0 = 1;
          const char * func = (const char *) malloc(_len_func0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_expr0 = 1;
          const char * expr = (const char *) malloc(_len_expr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_expr0; _i0++) {
            expr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __assert_func(file,line,func,expr);
          free(file);
          free(func);
          free(expr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int line = 255;
          int _len_file0 = 65025;
          const char * file = (const char *) malloc(_len_file0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func0 = 65025;
          const char * func = (const char *) malloc(_len_func0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_expr0 = 65025;
          const char * expr = (const char *) malloc(_len_expr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_expr0; _i0++) {
            expr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __assert_func(file,line,func,expr);
          free(file);
          free(func);
          free(expr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int line = 10;
          int _len_file0 = 100;
          const char * file = (const char *) malloc(_len_file0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func0 = 100;
          const char * func = (const char *) malloc(_len_func0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_expr0 = 100;
          const char * expr = (const char *) malloc(_len_expr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_expr0; _i0++) {
            expr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __assert_func(file,line,func,expr);
          free(file);
          free(func);
          free(expr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
