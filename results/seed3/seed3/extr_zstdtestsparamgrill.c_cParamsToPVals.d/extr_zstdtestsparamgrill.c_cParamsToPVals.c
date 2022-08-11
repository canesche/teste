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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t varInds_t ;
struct TYPE_5__ {int /*<<< orphan*/ * vals; } ;
typedef  TYPE_1__ paramValues_t ;
struct TYPE_6__ {int /*<<< orphan*/  strategy; int /*<<< orphan*/  targetLength; int /*<<< orphan*/  minMatch; int /*<<< orphan*/  searchLog; int /*<<< orphan*/  hashLog; int /*<<< orphan*/  chainLog; int /*<<< orphan*/  windowLog; } ;
typedef  TYPE_2__ ZSTD_compressionParameters ;

/* Variables and functions */
 size_t NUM_PARAMS ; 
 size_t clog_ind ; 
 size_t hlog_ind ; 
 int /*<<< orphan*/ * mintable ; 
 size_t mml_ind ; 
 size_t slog_ind ; 
 size_t strt_ind ; 
 size_t tlen_ind ; 
 size_t wlog_ind ; 

__attribute__((used)) static paramValues_t cParamsToPVals(ZSTD_compressionParameters c)
{
    paramValues_t p;
    varInds_t i;
    p.vals[wlog_ind] = c.windowLog;
    p.vals[clog_ind] = c.chainLog;
    p.vals[hlog_ind] = c.hashLog;
    p.vals[slog_ind] = c.searchLog;
    p.vals[mml_ind]  = c.minMatch;
    p.vals[tlen_ind] = c.targetLength;
    p.vals[strt_ind] = c.strategy;

    /* set all other params to their minimum value */
    for (i = strt_ind + 1; i < NUM_PARAMS; i++) {
        p.vals[i] = mintable[i];
    }
    return p;
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
          struct TYPE_6__ c;
        c.strategy = ((-2 * (next_i()%2)) + 1) * next_i();
        c.targetLength = ((-2 * (next_i()%2)) + 1) * next_i();
        c.minMatch = ((-2 * (next_i()%2)) + 1) * next_i();
        c.searchLog = ((-2 * (next_i()%2)) + 1) * next_i();
        c.hashLog = ((-2 * (next_i()%2)) + 1) * next_i();
        c.chainLog = ((-2 * (next_i()%2)) + 1) * next_i();
        c.windowLog = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_5__ benchRet = cParamsToPVals(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
