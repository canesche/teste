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
typedef  char WCHAR ;
typedef  int /*<<< orphan*/  VOID ;

/* Variables and functions */

VOID NarrowToWide(WCHAR *wide_name, char *name)
{
    char *copy_name;
    WCHAR *wide_name_ptr;
    for (wide_name_ptr = wide_name, copy_name = name;
         (*wide_name_ptr = *copy_name);
         wide_name_ptr++, copy_name++);
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
          int _len_wide_name0 = 1;
          char * wide_name = (char *) malloc(_len_wide_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_wide_name0; _i0++) {
            wide_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          char * name = (char *) malloc(_len_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NarrowToWide(wide_name,name);
          printf("%d\n", benchRet); 
          free(wide_name);
          free(name);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wide_name0 = 65025;
          char * wide_name = (char *) malloc(_len_wide_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_wide_name0; _i0++) {
            wide_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          char * name = (char *) malloc(_len_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NarrowToWide(wide_name,name);
          printf("%d\n", benchRet); 
          free(wide_name);
          free(name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wide_name0 = 100;
          char * wide_name = (char *) malloc(_len_wide_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_wide_name0; _i0++) {
            wide_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          char * name = (char *) malloc(_len_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NarrowToWide(wide_name,name);
          printf("%d\n", benchRet); 
          free(wide_name);
          free(name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
