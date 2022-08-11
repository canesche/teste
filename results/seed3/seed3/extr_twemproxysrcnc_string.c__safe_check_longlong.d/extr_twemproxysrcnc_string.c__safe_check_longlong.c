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
typedef  int /*<<< orphan*/  int64_t ;
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static const char *
_safe_check_longlong(const char *fmt, int32_t * have_longlong)
{
    *have_longlong = false;
    if (*fmt == 'l') {
        fmt++;
        if (*fmt != 'l') {
            *have_longlong = (sizeof(long) == sizeof(int64_t));
        } else {
            fmt++;
            *have_longlong = true;
        }
    }
    return fmt;
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
          int _len_fmt0 = 1;
          const char * fmt = (const char *) malloc(_len_fmt0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_have_longlong0 = 1;
          int * have_longlong = (int *) malloc(_len_have_longlong0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_have_longlong0; _i0++) {
            have_longlong[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = _safe_check_longlong(fmt,have_longlong);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(fmt);
          free(have_longlong);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fmt0 = 65025;
          const char * fmt = (const char *) malloc(_len_fmt0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_have_longlong0 = 65025;
          int * have_longlong = (int *) malloc(_len_have_longlong0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_have_longlong0; _i0++) {
            have_longlong[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = _safe_check_longlong(fmt,have_longlong);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(fmt);
          free(have_longlong);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fmt0 = 100;
          const char * fmt = (const char *) malloc(_len_fmt0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_have_longlong0 = 100;
          int * have_longlong = (int *) malloc(_len_have_longlong0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_have_longlong0; _i0++) {
            have_longlong[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = _safe_check_longlong(fmt,have_longlong);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(fmt);
          free(have_longlong);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
