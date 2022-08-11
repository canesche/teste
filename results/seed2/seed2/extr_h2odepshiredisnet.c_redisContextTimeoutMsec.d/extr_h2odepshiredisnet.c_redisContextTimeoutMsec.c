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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_3__ {struct timeval* timeout; } ;
typedef  TYPE_1__ redisContext ;

/* Variables and functions */
 long INT_MAX ; 
 int REDIS_ERR ; 
 int REDIS_OK ; 
 int __MAX_MSEC ; 

__attribute__((used)) static int redisContextTimeoutMsec(redisContext *c, long *result)
{
    const struct timeval *timeout = c->timeout;
    long msec = -1;

    /* Only use timeout when not NULL. */
    if (timeout != NULL) {
        if (timeout->tv_usec > 1000000 || timeout->tv_sec > __MAX_MSEC) {
            *result = msec;
            return REDIS_ERR;
        }

        msec = (timeout->tv_sec * 1000) + ((timeout->tv_usec + 999) / 1000);

        if (msec < 0 || msec > INT_MAX) {
            msec = INT_MAX;
        }
    }

    *result = msec;
    return REDIS_OK;
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
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__timeout0 = 1;
          c[_i0].timeout = (struct timeval *) malloc(_len_c__i0__timeout0*sizeof(struct timeval));
          for(int _j0 = 0; _j0 < _len_c__i0__timeout0; _j0++) {
            c[_i0].timeout->tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].timeout->tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_result0 = 1;
          long * result = (long *) malloc(_len_result0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = redisContextTimeoutMsec(c,result);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].timeout);
          }
          free(c);
          free(result);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_c0 = 65025;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__timeout0 = 1;
          c[_i0].timeout = (struct timeval *) malloc(_len_c__i0__timeout0*sizeof(struct timeval));
          for(int _j0 = 0; _j0 < _len_c__i0__timeout0; _j0++) {
            c[_i0].timeout->tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].timeout->tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_result0 = 65025;
          long * result = (long *) malloc(_len_result0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = redisContextTimeoutMsec(c,result);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].timeout);
          }
          free(c);
          free(result);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_c0 = 100;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__timeout0 = 1;
          c[_i0].timeout = (struct timeval *) malloc(_len_c__i0__timeout0*sizeof(struct timeval));
          for(int _j0 = 0; _j0 < _len_c__i0__timeout0; _j0++) {
            c[_i0].timeout->tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].timeout->tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_result0 = 100;
          long * result = (long *) malloc(_len_result0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = redisContextTimeoutMsec(c,result);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].timeout);
          }
          free(c);
          free(result);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
