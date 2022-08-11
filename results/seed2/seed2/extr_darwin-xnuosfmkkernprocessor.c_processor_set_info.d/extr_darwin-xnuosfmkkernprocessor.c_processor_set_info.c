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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ processor_set_t ;
typedef  scalar_t__ processor_set_info_t ;
typedef  TYPE_1__* processor_set_basic_info_t ;
typedef  TYPE_2__* policy_timeshare_limit_t ;
typedef  TYPE_3__* policy_timeshare_base_t ;
typedef  TYPE_4__* policy_rr_limit_t ;
typedef  TYPE_5__* policy_rr_base_t ;
typedef  TYPE_6__* policy_fifo_limit_t ;
typedef  TYPE_7__* policy_fifo_base_t ;
typedef  scalar_t__ mach_msg_type_number_t ;
typedef  int /*<<< orphan*/  kern_return_t ;
typedef  int /*<<< orphan*/ * host_t ;
struct TYPE_14__ {void* base_priority; } ;
struct TYPE_13__ {void* max_priority; } ;
struct TYPE_12__ {int quantum; void* base_priority; } ;
struct TYPE_11__ {void* max_priority; } ;
struct TYPE_10__ {void* base_priority; } ;
struct TYPE_9__ {void* max_priority; } ;
struct TYPE_8__ {int default_policy; int /*<<< orphan*/  processor_count; } ;

/* Variables and functions */
 void* BASEPRI_DEFAULT ; 
 int /*<<< orphan*/ * HOST_NULL ; 
 int /*<<< orphan*/  KERN_FAILURE ; 
 int /*<<< orphan*/  KERN_INVALID_ARGUMENT ; 
 int /*<<< orphan*/  KERN_SUCCESS ; 
 void* MAXPRI_KERNEL ; 
 int POLICY_FIFO ; 
 scalar_t__ POLICY_FIFO_BASE_COUNT ; 
 scalar_t__ POLICY_FIFO_LIMIT_COUNT ; 
 int POLICY_RR ; 
 scalar_t__ POLICY_RR_BASE_COUNT ; 
 scalar_t__ POLICY_RR_LIMIT_COUNT ; 
 int POLICY_TIMESHARE ; 
 scalar_t__ POLICY_TIMESHARE_BASE_COUNT ; 
 scalar_t__ POLICY_TIMESHARE_LIMIT_COUNT ; 
 int PROCESSOR_SET_BASIC_INFO ; 
 scalar_t__ PROCESSOR_SET_BASIC_INFO_COUNT ; 
 int PROCESSOR_SET_ENABLED_POLICIES ; 
 int PROCESSOR_SET_FIFO_DEFAULT ; 
 int PROCESSOR_SET_FIFO_LIMITS ; 
 scalar_t__ PROCESSOR_SET_NULL ; 
 int PROCESSOR_SET_RR_DEFAULT ; 
 int PROCESSOR_SET_RR_LIMITS ; 
 int PROCESSOR_SET_TIMESHARE_DEFAULT ; 
 int PROCESSOR_SET_TIMESHARE_LIMITS ; 
 int /*<<< orphan*/  processor_avail_count ; 
 int /*<<< orphan*/  realhost ; 

kern_return_t
processor_set_info(
	processor_set_t		pset,
	int			flavor,
	host_t			*host,
	processor_set_info_t	info,
	mach_msg_type_number_t	*count)
{
	if (pset == PROCESSOR_SET_NULL)
		return(KERN_INVALID_ARGUMENT);

	if (flavor == PROCESSOR_SET_BASIC_INFO) {
		processor_set_basic_info_t	basic_info;

		if (*count < PROCESSOR_SET_BASIC_INFO_COUNT)
			return(KERN_FAILURE);

		basic_info = (processor_set_basic_info_t) info;
		basic_info->processor_count = processor_avail_count;
		basic_info->default_policy = POLICY_TIMESHARE;

		*count = PROCESSOR_SET_BASIC_INFO_COUNT;
		*host = &realhost;
		return(KERN_SUCCESS);
	}
	else if (flavor == PROCESSOR_SET_TIMESHARE_DEFAULT) {
		policy_timeshare_base_t	ts_base;

		if (*count < POLICY_TIMESHARE_BASE_COUNT)
			return(KERN_FAILURE);

		ts_base = (policy_timeshare_base_t) info;
		ts_base->base_priority = BASEPRI_DEFAULT;

		*count = POLICY_TIMESHARE_BASE_COUNT;
		*host = &realhost;
		return(KERN_SUCCESS);
	}
	else if (flavor == PROCESSOR_SET_FIFO_DEFAULT) {
		policy_fifo_base_t		fifo_base;

		if (*count < POLICY_FIFO_BASE_COUNT)
			return(KERN_FAILURE);

		fifo_base = (policy_fifo_base_t) info;
		fifo_base->base_priority = BASEPRI_DEFAULT;

		*count = POLICY_FIFO_BASE_COUNT;
		*host = &realhost;
		return(KERN_SUCCESS);
	}
	else if (flavor == PROCESSOR_SET_RR_DEFAULT) {
		policy_rr_base_t		rr_base;

		if (*count < POLICY_RR_BASE_COUNT)
			return(KERN_FAILURE);

		rr_base = (policy_rr_base_t) info;
		rr_base->base_priority = BASEPRI_DEFAULT;
		rr_base->quantum = 1;

		*count = POLICY_RR_BASE_COUNT;
		*host = &realhost;
		return(KERN_SUCCESS);
	}
	else if (flavor == PROCESSOR_SET_TIMESHARE_LIMITS) {
		policy_timeshare_limit_t	ts_limit;

		if (*count < POLICY_TIMESHARE_LIMIT_COUNT)
			return(KERN_FAILURE);

		ts_limit = (policy_timeshare_limit_t) info;
		ts_limit->max_priority = MAXPRI_KERNEL;

		*count = POLICY_TIMESHARE_LIMIT_COUNT;
		*host = &realhost;
		return(KERN_SUCCESS);
	}
	else if (flavor == PROCESSOR_SET_FIFO_LIMITS) {
		policy_fifo_limit_t		fifo_limit;

		if (*count < POLICY_FIFO_LIMIT_COUNT)
			return(KERN_FAILURE);

		fifo_limit = (policy_fifo_limit_t) info;
		fifo_limit->max_priority = MAXPRI_KERNEL;

		*count = POLICY_FIFO_LIMIT_COUNT;
		*host = &realhost;
		return(KERN_SUCCESS);
	}
	else if (flavor == PROCESSOR_SET_RR_LIMITS) {
		policy_rr_limit_t		rr_limit;

		if (*count < POLICY_RR_LIMIT_COUNT)
			return(KERN_FAILURE);

		rr_limit = (policy_rr_limit_t) info;
		rr_limit->max_priority = MAXPRI_KERNEL;

		*count = POLICY_RR_LIMIT_COUNT;
		*host = &realhost;
		return(KERN_SUCCESS);
	}
	else if (flavor == PROCESSOR_SET_ENABLED_POLICIES) {
		int				*enabled;

		if (*count < (sizeof(*enabled)/sizeof(int)))
			return(KERN_FAILURE);

		enabled = (int *) info;
		*enabled = POLICY_TIMESHARE | POLICY_RR | POLICY_FIFO;

		*count = sizeof(*enabled)/sizeof(int);
		*host = &realhost;
		return(KERN_SUCCESS);
	}


	*host = HOST_NULL;
	return(KERN_INVALID_ARGUMENT);
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
          long pset = 100;
          int flavor = 100;
          long info = 100;
          int _len_host0 = 1;
          int ** host = (int **) malloc(_len_host0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            int _len_host1 = 1;
            host[_i0] = (int *) malloc(_len_host1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_host1; _i1++) {
              host[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_count0 = 1;
          long * count = (long *) malloc(_len_count0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = processor_set_info(pset,flavor,host,info,count);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_host0; i1++) {
            int _len_host1 = 1;
              free(host[i1]);
          }
          free(host);
          free(count);
        
        break;
    }
    // big-arr
    case 1:
    {
          long pset = 255;
          int flavor = 255;
          long info = 255;
          int _len_host0 = 65025;
          int ** host = (int **) malloc(_len_host0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            int _len_host1 = 1;
            host[_i0] = (int *) malloc(_len_host1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_host1; _i1++) {
              host[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_count0 = 65025;
          long * count = (long *) malloc(_len_count0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = processor_set_info(pset,flavor,host,info,count);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_host0; i1++) {
            int _len_host1 = 1;
              free(host[i1]);
          }
          free(host);
          free(count);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long pset = 10;
          int flavor = 10;
          long info = 10;
          int _len_host0 = 100;
          int ** host = (int **) malloc(_len_host0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            int _len_host1 = 1;
            host[_i0] = (int *) malloc(_len_host1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_host1; _i1++) {
              host[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_count0 = 100;
          long * count = (long *) malloc(_len_count0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = processor_set_info(pset,flavor,host,info,count);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_host0; i1++) {
            int _len_host1 = 1;
              free(host[i1]);
          }
          free(host);
          free(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
