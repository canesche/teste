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
 scalar_t__ dump_log_pos ; 
 scalar_t__ dump_timestamp ; 
 int /*<<< orphan*/  fprintf (int /*<<< orphan*/ ,char*,int) ; 
 int log_cur_pos () ; 
 int now ; 
 int /*<<< orphan*/  stdout ; 

inline void dump_line_header (void) {
  if (dump_log_pos) { fprintf (stdout, "%lld\t",  log_cur_pos()); }
  if (dump_timestamp) { fprintf (stdout, "%d\t", now); }
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
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_char0 = 1;
          * char = (*) malloc(_len_char0*sizeof());
          for(int _i0 = 0; _i0 < _len_char0; _i0++) {
            char[_i0] = 0;
          }
          int benchRet = fprintf(int,char,int);
          printf("%d\n", benchRet); 
          free(char);
        
        break;
    }
    // big-arr
    case 1:
    {
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_char0 = 65025;
          * char = (*) malloc(_len_char0*sizeof());
          for(int _i0 = 0; _i0 < _len_char0; _i0++) {
            char[_i0] = 0;
          }
          int benchRet = fprintf(int,char,int);
          printf("%d\n", benchRet); 
          free(char);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_char0 = 100;
          * char = (*) malloc(_len_char0*sizeof());
          for(int _i0 = 0; _i0 < _len_char0; _i0++) {
            char[_i0] = 0;
          }
          int benchRet = fprintf(int,char,int);
          printf("%d\n", benchRet); 
          free(char);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
