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
struct target {int system_wide; int per_thread; int /*<<< orphan*/ * cpu_list; int /*<<< orphan*/ * uid_str; scalar_t__ tid; scalar_t__ pid; } ;
typedef  enum target_errno { ____Placeholder_target_errno } target_errno ;

/* Variables and functions */
 int TARGET_ERRNO__PID_OVERRIDE_CPU ; 
 int TARGET_ERRNO__PID_OVERRIDE_SYSTEM ; 
 int TARGET_ERRNO__PID_OVERRIDE_UID ; 
 int TARGET_ERRNO__SUCCESS ; 
 int TARGET_ERRNO__SYSTEM_OVERRIDE_THREAD ; 
 int TARGET_ERRNO__UID_OVERRIDE_CPU ; 
 int TARGET_ERRNO__UID_OVERRIDE_SYSTEM ; 

enum target_errno target__validate(struct target *target)
{
	enum target_errno ret = TARGET_ERRNO__SUCCESS;

	if (target->pid)
		target->tid = target->pid;

	/* CPU and PID are mutually exclusive */
	if (target->tid && target->cpu_list) {
		target->cpu_list = NULL;
		if (ret == TARGET_ERRNO__SUCCESS)
			ret = TARGET_ERRNO__PID_OVERRIDE_CPU;
	}

	/* UID and PID are mutually exclusive */
	if (target->tid && target->uid_str) {
		target->uid_str = NULL;
		if (ret == TARGET_ERRNO__SUCCESS)
			ret = TARGET_ERRNO__PID_OVERRIDE_UID;
	}

	/* UID and CPU are mutually exclusive */
	if (target->uid_str && target->cpu_list) {
		target->cpu_list = NULL;
		if (ret == TARGET_ERRNO__SUCCESS)
			ret = TARGET_ERRNO__UID_OVERRIDE_CPU;
	}

	/* PID and SYSTEM are mutually exclusive */
	if (target->tid && target->system_wide) {
		target->system_wide = false;
		if (ret == TARGET_ERRNO__SUCCESS)
			ret = TARGET_ERRNO__PID_OVERRIDE_SYSTEM;
	}

	/* UID and SYSTEM are mutually exclusive */
	if (target->uid_str && target->system_wide) {
		target->system_wide = false;
		if (ret == TARGET_ERRNO__SUCCESS)
			ret = TARGET_ERRNO__UID_OVERRIDE_SYSTEM;
	}

	/* THREAD and SYSTEM/CPU are mutually exclusive */
	if (target->per_thread && (target->system_wide || target->cpu_list)) {
		target->per_thread = false;
		if (ret == TARGET_ERRNO__SUCCESS)
			ret = TARGET_ERRNO__SYSTEM_OVERRIDE_THREAD;
	}

	return ret;
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
          int _len_target0 = 1;
          struct target * target = (struct target *) malloc(_len_target0*sizeof(struct target));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0].system_wide = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].per_thread = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_target__i0__cpu_list0 = 1;
          target[_i0].cpu_list = (int *) malloc(_len_target__i0__cpu_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_target__i0__cpu_list0; _j0++) {
            target[_i0].cpu_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target__i0__uid_str0 = 1;
          target[_i0].uid_str = (int *) malloc(_len_target__i0__uid_str0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_target__i0__uid_str0; _j0++) {
            target[_i0].uid_str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        target[_i0].tid = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum target_errno benchRet = target__validate(target);
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].cpu_list);
          }
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].uid_str);
          }
          free(target);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_target0 = 65025;
          struct target * target = (struct target *) malloc(_len_target0*sizeof(struct target));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0].system_wide = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].per_thread = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_target__i0__cpu_list0 = 1;
          target[_i0].cpu_list = (int *) malloc(_len_target__i0__cpu_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_target__i0__cpu_list0; _j0++) {
            target[_i0].cpu_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target__i0__uid_str0 = 1;
          target[_i0].uid_str = (int *) malloc(_len_target__i0__uid_str0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_target__i0__uid_str0; _j0++) {
            target[_i0].uid_str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        target[_i0].tid = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum target_errno benchRet = target__validate(target);
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].cpu_list);
          }
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].uid_str);
          }
          free(target);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_target0 = 100;
          struct target * target = (struct target *) malloc(_len_target0*sizeof(struct target));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0].system_wide = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].per_thread = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_target__i0__cpu_list0 = 1;
          target[_i0].cpu_list = (int *) malloc(_len_target__i0__cpu_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_target__i0__cpu_list0; _j0++) {
            target[_i0].cpu_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target__i0__uid_str0 = 1;
          target[_i0].uid_str = (int *) malloc(_len_target__i0__uid_str0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_target__i0__uid_str0; _j0++) {
            target[_i0].uid_str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        target[_i0].tid = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum target_errno benchRet = target__validate(target);
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].cpu_list);
          }
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].uid_str);
          }
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
