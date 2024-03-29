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

/* Variables and functions */
 int MPV_ERROR_PROPERTY_ERROR ; 
 int MPV_ERROR_PROPERTY_FORMAT ; 
 int MPV_ERROR_PROPERTY_NOT_FOUND ; 
 int MPV_ERROR_PROPERTY_UNAVAILABLE ; 
#define  M_PROPERTY_ERROR 133 
#define  M_PROPERTY_INVALID_FORMAT 132 
#define  M_PROPERTY_NOT_IMPLEMENTED 131 
#define  M_PROPERTY_OK 130 
#define  M_PROPERTY_UNAVAILABLE 129 
#define  M_PROPERTY_UNKNOWN 128 

__attribute__((used)) static int translate_property_error(int errc)
{
    switch (errc) {
    case M_PROPERTY_OK:                 return 0;
    case M_PROPERTY_ERROR:              return MPV_ERROR_PROPERTY_ERROR;
    case M_PROPERTY_UNAVAILABLE:        return MPV_ERROR_PROPERTY_UNAVAILABLE;
    case M_PROPERTY_NOT_IMPLEMENTED:    return MPV_ERROR_PROPERTY_ERROR;
    case M_PROPERTY_UNKNOWN:            return MPV_ERROR_PROPERTY_NOT_FOUND;
    case M_PROPERTY_INVALID_FORMAT:     return MPV_ERROR_PROPERTY_FORMAT;
    // shouldn't happen
    default:                            return MPV_ERROR_PROPERTY_ERROR;
    }
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
          int errc = 100;
          int benchRet = translate_property_error(errc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int errc = 255;
          int benchRet = translate_property_error(errc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int errc = 10;
          int benchRet = translate_property_error(errc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
