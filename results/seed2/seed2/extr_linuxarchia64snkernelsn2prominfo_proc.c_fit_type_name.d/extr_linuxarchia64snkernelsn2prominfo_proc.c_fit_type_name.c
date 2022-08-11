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
struct fit_type_map_t {int type; char const* name; } ;

/* Variables and functions */
 unsigned char FIT_ENTRY_PAL_A ; 
 unsigned char FIT_ENTRY_PAL_B ; 
 unsigned char FIT_ENTRY_UNUSED ; 
 struct fit_type_map_t* fit_entry_types ; 

__attribute__((used)) static const char *fit_type_name(unsigned char type)
{
	struct fit_type_map_t const *mapp;

	for (mapp = fit_entry_types; mapp->type != 0xff; mapp++)
		if (type == mapp->type)
			return mapp->name;

	if ((type > FIT_ENTRY_PAL_A) && (type < FIT_ENTRY_UNUSED))
		return "OEM type";
	if ((type > FIT_ENTRY_PAL_B) && (type < FIT_ENTRY_PAL_A))
		return "Reserved";

	return "Unknown type";
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
          unsigned char type = 100;
          const char * benchRet = fit_type_name(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char type = 255;
          const char * benchRet = fit_type_name(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char type = 10;
          const char * benchRet = fit_type_name(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
