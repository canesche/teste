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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  int64; } ;
struct mpv_node {TYPE_1__ u; int /*<<< orphan*/  format; } ;
typedef  int /*<<< orphan*/  m_option_t ;
typedef  int /*<<< orphan*/  int64_t ;

/* Variables and functions */
 int /*<<< orphan*/  MPV_FORMAT_INT64 ; 

__attribute__((used)) static int int64_get(const m_option_t *opt, void *ta_parent,
                     struct mpv_node *dst, void *src)
{
    dst->format = MPV_FORMAT_INT64;
    dst->u.int64 = *(int64_t *)src;
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
          int _len_opt0 = 1;
          const int * opt = (const int *) malloc(_len_opt0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ta_parent;
          int _len_dst0 = 1;
          struct mpv_node * dst = (struct mpv_node *) malloc(_len_dst0*sizeof(struct mpv_node));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].u.int64 = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * src;
          int benchRet = int64_get(opt,ta_parent,dst,src);
          printf("%d\n", benchRet); 
          free(opt);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_opt0 = 65025;
          const int * opt = (const int *) malloc(_len_opt0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ta_parent;
          int _len_dst0 = 65025;
          struct mpv_node * dst = (struct mpv_node *) malloc(_len_dst0*sizeof(struct mpv_node));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].u.int64 = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * src;
          int benchRet = int64_get(opt,ta_parent,dst,src);
          printf("%d\n", benchRet); 
          free(opt);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_opt0 = 100;
          const int * opt = (const int *) malloc(_len_opt0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ta_parent;
          int _len_dst0 = 100;
          struct mpv_node * dst = (struct mpv_node *) malloc(_len_dst0*sizeof(struct mpv_node));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].u.int64 = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * src;
          int benchRet = int64_get(opt,ta_parent,dst,src);
          printf("%d\n", benchRet); 
          free(opt);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
