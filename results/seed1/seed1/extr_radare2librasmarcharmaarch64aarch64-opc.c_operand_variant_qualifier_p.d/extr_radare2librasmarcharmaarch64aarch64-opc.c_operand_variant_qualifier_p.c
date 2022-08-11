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
typedef  int /*<<< orphan*/  bfd_boolean ;
typedef  size_t aarch64_opnd_qualifier_t ;
struct TYPE_2__ {scalar_t__ kind; } ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 scalar_t__ OQK_OPD_VARIANT ; 
 int /*<<< orphan*/  TRUE ; 
 TYPE_1__* aarch64_opnd_qualifiers ; 

__attribute__((used)) static inline bfd_boolean
operand_variant_qualifier_p (aarch64_opnd_qualifier_t qualifier)
{
  return (aarch64_opnd_qualifiers[qualifier].kind == OQK_OPD_VARIANT)
    ? TRUE : FALSE;
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
          unsigned long qualifier = 100;
          int benchRet = operand_variant_qualifier_p(qualifier);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long qualifier = 255;
          int benchRet = operand_variant_qualifier_p(qualifier);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long qualifier = 10;
          int benchRet = operand_variant_qualifier_p(qualifier);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
