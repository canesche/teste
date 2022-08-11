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
struct request_queue {int dummy; } ;
typedef  int /*<<< orphan*/  ssize_t ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 

__attribute__((used)) static ssize_t
queue_rq_affinity_store(struct request_queue *q, const char *page, size_t count)
{
	ssize_t ret = -EINVAL;
#ifdef CONFIG_SMP
	unsigned long val;

	ret = queue_var_store(&val, page, count);
	if (ret < 0)
		return ret;

	spin_lock_irq(q->queue_lock);
	if (val == 2) {
		queue_flag_set(QUEUE_FLAG_SAME_COMP, q);
		queue_flag_set(QUEUE_FLAG_SAME_FORCE, q);
	} else if (val == 1) {
		queue_flag_set(QUEUE_FLAG_SAME_COMP, q);
		queue_flag_clear(QUEUE_FLAG_SAME_FORCE, q);
	} else if (val == 0) {
		queue_flag_clear(QUEUE_FLAG_SAME_COMP, q);
		queue_flag_clear(QUEUE_FLAG_SAME_FORCE, q);
	}
	spin_unlock_irq(q->queue_lock);
#endif
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
          unsigned long count = 100;
          int _len_q0 = 1;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 1;
          const char * page = (const char *) malloc(_len_page0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = queue_rq_affinity_store(q,page,count);
          printf("%d\n", benchRet); 
          free(q);
          free(page);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long count = 255;
          int _len_q0 = 65025;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 65025;
          const char * page = (const char *) malloc(_len_page0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = queue_rq_affinity_store(q,page,count);
          printf("%d\n", benchRet); 
          free(q);
          free(page);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long count = 10;
          int _len_q0 = 100;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 100;
          const char * page = (const char *) malloc(_len_page0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = queue_rq_affinity_store(q,page,count);
          printf("%d\n", benchRet); 
          free(q);
          free(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
