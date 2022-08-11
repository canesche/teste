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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ BuildNumber; } ;
struct TYPE_5__ {TYPE_1__ osContext; } ;
typedef  TYPE_2__* PKUHL_M_SEKURLSA_CONTEXT ;
typedef  int /*<<< orphan*/  MSV1_0_PRIMARY_HELPER ;

/* Variables and functions */
 scalar_t__ KULL_M_WIN_BUILD_10_1507 ; 
 scalar_t__ KULL_M_WIN_BUILD_10_1511 ; 
 scalar_t__ KULL_M_WIN_BUILD_10_1607 ; 
 int /*<<< orphan*/ * msv1_0_primaryHelper ; 

const MSV1_0_PRIMARY_HELPER * kuhl_m_sekurlsa_msv_helper(PKUHL_M_SEKURLSA_CONTEXT context)
{
	const MSV1_0_PRIMARY_HELPER * helper;
	if(context->osContext.BuildNumber < KULL_M_WIN_BUILD_10_1507)
		helper = &msv1_0_primaryHelper[0];
	else if(context->osContext.BuildNumber < KULL_M_WIN_BUILD_10_1511)
		helper = &msv1_0_primaryHelper[1];
	else if(context->osContext.BuildNumber < KULL_M_WIN_BUILD_10_1607)
		helper = &msv1_0_primaryHelper[2];
	else
		helper = &msv1_0_primaryHelper[3];
	return helper;
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
          int _len_context0 = 1;
          struct TYPE_5__ * context = (struct TYPE_5__ *) malloc(_len_context0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].osContext.BuildNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = kuhl_m_sekurlsa_msv_helper(context);
          printf("%d\n", (*benchRet)); 
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_context0 = 65025;
          struct TYPE_5__ * context = (struct TYPE_5__ *) malloc(_len_context0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].osContext.BuildNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = kuhl_m_sekurlsa_msv_helper(context);
          printf("%d\n", (*benchRet)); 
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_context0 = 100;
          struct TYPE_5__ * context = (struct TYPE_5__ *) malloc(_len_context0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].osContext.BuildNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = kuhl_m_sekurlsa_msv_helper(context);
          printf("%d\n", (*benchRet)); 
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
