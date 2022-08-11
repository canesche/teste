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
struct tm {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;

/* Variables and functions */

__attribute__((used)) static int tm_is_lessthan(struct tm *x, struct tm *y)
{
#define CMP(f)                                                                                                                     \
    if (x->f < y->f)                                                                                                               \
        return 1;                                                                                                                  \
    else if (x->f > y->f)                                                                                                          \
        return 0;
    CMP(tm_year);
    CMP(tm_mon);
    CMP(tm_mday);
    CMP(tm_hour);
    CMP(tm_min);
    CMP(tm_sec);
    return 0;
#undef CMP
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
          int _len_x0 = 1;
          struct tm * x = (struct tm *) malloc(_len_x0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          struct tm * y = (struct tm *) malloc(_len_y0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tm_is_lessthan(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_x0 = 65025;
          struct tm * x = (struct tm *) malloc(_len_x0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 65025;
          struct tm * y = (struct tm *) malloc(_len_y0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tm_is_lessthan(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_x0 = 100;
          struct tm * x = (struct tm *) malloc(_len_x0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 100;
          struct tm * y = (struct tm *) malloc(_len_y0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tm_is_lessthan(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
