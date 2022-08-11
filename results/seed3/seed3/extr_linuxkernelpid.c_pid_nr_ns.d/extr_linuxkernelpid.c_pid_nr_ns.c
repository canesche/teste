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
struct upid {int /*<<< orphan*/  nr; struct pid_namespace* ns; } ;
struct pid_namespace {size_t level; } ;
struct pid {size_t level; struct upid* numbers; } ;
typedef  int /*<<< orphan*/  pid_t ;

/* Variables and functions */

pid_t pid_nr_ns(struct pid *pid, struct pid_namespace *ns)
{
	struct upid *upid;
	pid_t nr = 0;

	if (pid && ns->level <= pid->level) {
		upid = &pid->numbers[ns->level];
		if (upid->ns == ns)
			nr = upid->nr;
	}
	return nr;
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
          int _len_pid0 = 1;
          struct pid * pid = (struct pid *) malloc(_len_pid0*sizeof(struct pid));
          for(int _i0 = 0; _i0 < _len_pid0; _i0++) {
            pid[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pid__i0__numbers0 = 1;
          pid[_i0].numbers = (struct upid *) malloc(_len_pid__i0__numbers0*sizeof(struct upid));
          for(int _j0 = 0; _j0 < _len_pid__i0__numbers0; _j0++) {
            pid[_i0].numbers->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pid__i0__numbers_ns0 = 1;
          pid[_i0].numbers->ns = (struct pid_namespace *) malloc(_len_pid__i0__numbers_ns0*sizeof(struct pid_namespace));
          for(int _j0 = 0; _j0 < _len_pid__i0__numbers_ns0; _j0++) {
            pid[_i0].numbers->ns->level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ns0 = 1;
          struct pid_namespace * ns = (struct pid_namespace *) malloc(_len_ns0*sizeof(struct pid_namespace));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pid_nr_ns(pid,ns);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pid0; _aux++) {
          free(pid[_aux].numbers);
          }
          free(pid);
          free(ns);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pid0 = 65025;
          struct pid * pid = (struct pid *) malloc(_len_pid0*sizeof(struct pid));
          for(int _i0 = 0; _i0 < _len_pid0; _i0++) {
            pid[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pid__i0__numbers0 = 1;
          pid[_i0].numbers = (struct upid *) malloc(_len_pid__i0__numbers0*sizeof(struct upid));
          for(int _j0 = 0; _j0 < _len_pid__i0__numbers0; _j0++) {
            pid[_i0].numbers->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pid__i0__numbers_ns0 = 1;
          pid[_i0].numbers->ns = (struct pid_namespace *) malloc(_len_pid__i0__numbers_ns0*sizeof(struct pid_namespace));
          for(int _j0 = 0; _j0 < _len_pid__i0__numbers_ns0; _j0++) {
            pid[_i0].numbers->ns->level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ns0 = 65025;
          struct pid_namespace * ns = (struct pid_namespace *) malloc(_len_ns0*sizeof(struct pid_namespace));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pid_nr_ns(pid,ns);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pid0; _aux++) {
          free(pid[_aux].numbers);
          }
          free(pid);
          free(ns);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pid0 = 100;
          struct pid * pid = (struct pid *) malloc(_len_pid0*sizeof(struct pid));
          for(int _i0 = 0; _i0 < _len_pid0; _i0++) {
            pid[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pid__i0__numbers0 = 1;
          pid[_i0].numbers = (struct upid *) malloc(_len_pid__i0__numbers0*sizeof(struct upid));
          for(int _j0 = 0; _j0 < _len_pid__i0__numbers0; _j0++) {
            pid[_i0].numbers->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pid__i0__numbers_ns0 = 1;
          pid[_i0].numbers->ns = (struct pid_namespace *) malloc(_len_pid__i0__numbers_ns0*sizeof(struct pid_namespace));
          for(int _j0 = 0; _j0 < _len_pid__i0__numbers_ns0; _j0++) {
            pid[_i0].numbers->ns->level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ns0 = 100;
          struct pid_namespace * ns = (struct pid_namespace *) malloc(_len_ns0*sizeof(struct pid_namespace));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pid_nr_ns(pid,ns);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pid0; _aux++) {
          free(pid[_aux].numbers);
          }
          free(pid);
          free(ns);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
