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
struct machine_request_callback_data {scalar_t__ find_this_machine; TYPE_1__* result; } ;
struct TYPE_2__ {scalar_t__ machine; } ;
typedef  TYPE_1__ REGISTRY_PERSON_URL ;

/* Variables and functions */

__attribute__((used)) static int machine_request_callback(void *entry, void *data) {
    REGISTRY_PERSON_URL *mypu = (REGISTRY_PERSON_URL *)entry;
    struct machine_request_callback_data *myrdata = (struct machine_request_callback_data *)data;

    if(mypu->machine == myrdata->find_this_machine) {
        myrdata->result = mypu;
        return -1; // this will also stop the walk through
    }

    return 0; // continue
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
          void * entry;
          void * data;
          int benchRet = machine_request_callback(entry,data);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          void * entry;
          void * data;
          int benchRet = machine_request_callback(entry,data);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * entry;
          void * data;
          int benchRet = machine_request_callback(entry,data);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
