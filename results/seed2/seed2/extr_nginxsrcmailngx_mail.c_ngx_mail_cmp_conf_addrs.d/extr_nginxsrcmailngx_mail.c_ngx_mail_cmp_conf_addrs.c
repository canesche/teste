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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ bind; scalar_t__ wildcard; } ;
struct TYPE_4__ {TYPE_1__ opt; } ;
typedef  TYPE_2__ ngx_mail_conf_addr_t ;
typedef  int ngx_int_t ;

/* Variables and functions */

__attribute__((used)) static ngx_int_t
ngx_mail_cmp_conf_addrs(const void *one, const void *two)
{
    ngx_mail_conf_addr_t  *first, *second;

    first = (ngx_mail_conf_addr_t *) one;
    second = (ngx_mail_conf_addr_t *) two;

    if (first->opt.wildcard) {
        /* a wildcard must be the last resort, shift it to the end */
        return 1;
    }

    if (second->opt.wildcard) {
        /* a wildcard must be the last resort, shift it to the end */
        return -1;
    }

    if (first->opt.bind && !second->opt.bind) {
        /* shift explicit bind()ed addresses to the start */
        return -1;
    }

    if (!first->opt.bind && second->opt.bind) {
        /* shift explicit bind()ed addresses to the start */
        return 1;
    }

    /* do not sort by default */

    return 0;
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
          int _len_one0 = 1;
          const void * one = (const void *) malloc(_len_one0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_one0; _i0++) {
            one[_i0] = 0;
          }
          int _len_two0 = 1;
          const void * two = (const void *) malloc(_len_two0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_two0; _i0++) {
            two[_i0] = 0;
          }
          int benchRet = ngx_mail_cmp_conf_addrs(one,two);
          printf("%d\n", benchRet); 
          free(one);
          free(two);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_one0 = 65025;
          const void * one = (const void *) malloc(_len_one0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_one0; _i0++) {
            one[_i0] = 0;
          }
          int _len_two0 = 65025;
          const void * two = (const void *) malloc(_len_two0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_two0; _i0++) {
            two[_i0] = 0;
          }
          int benchRet = ngx_mail_cmp_conf_addrs(one,two);
          printf("%d\n", benchRet); 
          free(one);
          free(two);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_one0 = 100;
          const void * one = (const void *) malloc(_len_one0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_one0; _i0++) {
            one[_i0] = 0;
          }
          int _len_two0 = 100;
          const void * two = (const void *) malloc(_len_two0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_two0; _i0++) {
            two[_i0] = 0;
          }
          int benchRet = ngx_mail_cmp_conf_addrs(one,two);
          printf("%d\n", benchRet); 
          free(one);
          free(two);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
