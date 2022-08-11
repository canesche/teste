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
struct pid_stat {scalar_t__ sortlist; } ;
typedef  size_t pid_t ;

/* Variables and functions */
 struct pid_stat** all_pids ; 

__attribute__((used)) static int compar_pid(const void *pid1, const void *pid2) {

    struct pid_stat *p1 = all_pids[*((pid_t *)pid1)];
    struct pid_stat *p2 = all_pids[*((pid_t *)pid2)];

    if(p1->sortlist > p2->sortlist)
        return -1;
    else
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
          int _len_pid10 = 1;
          const void * pid1 = (const void *) malloc(_len_pid10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pid10; _i0++) {
            pid1[_i0] = 0;
          }
          int _len_pid20 = 1;
          const void * pid2 = (const void *) malloc(_len_pid20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pid20; _i0++) {
            pid2[_i0] = 0;
          }
          int benchRet = compar_pid(pid1,pid2);
          printf("%d\n", benchRet); 
          free(pid1);
          free(pid2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pid10 = 65025;
          const void * pid1 = (const void *) malloc(_len_pid10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pid10; _i0++) {
            pid1[_i0] = 0;
          }
          int _len_pid20 = 65025;
          const void * pid2 = (const void *) malloc(_len_pid20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pid20; _i0++) {
            pid2[_i0] = 0;
          }
          int benchRet = compar_pid(pid1,pid2);
          printf("%d\n", benchRet); 
          free(pid1);
          free(pid2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pid10 = 100;
          const void * pid1 = (const void *) malloc(_len_pid10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pid10; _i0++) {
            pid1[_i0] = 0;
          }
          int _len_pid20 = 100;
          const void * pid2 = (const void *) malloc(_len_pid20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pid20; _i0++) {
            pid2[_i0] = 0;
          }
          int benchRet = compar_pid(pid1,pid2);
          printf("%d\n", benchRet); 
          free(pid1);
          free(pid2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
