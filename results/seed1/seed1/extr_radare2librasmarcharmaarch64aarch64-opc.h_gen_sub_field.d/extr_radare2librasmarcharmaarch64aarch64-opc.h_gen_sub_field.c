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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  enum aarch64_field_kind { ____Placeholder_aarch64_field_kind } aarch64_field_kind ;
struct TYPE_4__ {int width; scalar_t__ lsb; } ;
typedef  TYPE_1__ aarch64_field ;

/* Variables and functions */
 TYPE_1__* fields ; 

__attribute__((used)) static inline int
gen_sub_field (enum aarch64_field_kind kind, int lsb_rel, int width, aarch64_field *ret)
{
  const aarch64_field *field = &fields[kind];
  if (lsb_rel < 0 || width <= 0 || lsb_rel + width > field->width)
    return 0;
  ret->lsb = field->lsb + lsb_rel;
  ret->width = width;
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
          enum aarch64_field_kind kind = 0;
          int lsb_rel = 100;
          int width = 100;
          int _len_ret0 = 1;
          struct TYPE_4__ * ret = (struct TYPE_4__ *) malloc(_len_ret0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].lsb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gen_sub_field(kind,lsb_rel,width,ret);
          printf("%d\n", benchRet); 
          free(ret);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum aarch64_field_kind kind = 0;
          int lsb_rel = 255;
          int width = 255;
          int _len_ret0 = 65025;
          struct TYPE_4__ * ret = (struct TYPE_4__ *) malloc(_len_ret0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].lsb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gen_sub_field(kind,lsb_rel,width,ret);
          printf("%d\n", benchRet); 
          free(ret);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum aarch64_field_kind kind = 0;
          int lsb_rel = 10;
          int width = 10;
          int _len_ret0 = 100;
          struct TYPE_4__ * ret = (struct TYPE_4__ *) malloc(_len_ret0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].lsb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gen_sub_field(kind,lsb_rel,width,ret);
          printf("%d\n", benchRet); 
          free(ret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
