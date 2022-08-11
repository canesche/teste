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
struct file {int type; char const* suffix; int group; } ;
typedef  enum file_types { ____Placeholder_file_types } file_types ;
typedef  enum file_groups { ____Placeholder_file_groups } file_groups ;

/* Variables and functions */

__attribute__((used)) static struct file
FILE_DEF(enum file_types type, const char *suffix, enum file_groups group)
{
    struct file fd;
    fd.type = type;
    fd.suffix = suffix;
    fd.group = group;
    return fd;
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
          enum file_types type = 0;
          enum file_groups group = 0;
          int _len_suffix0 = 1;
          const char * suffix = (const char *) malloc(_len_suffix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_suffix0; _i0++) {
            suffix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct file benchRet = FILE_DEF(type,suffix,group);
          printf("%d\n", benchRet.type);
          printf("%d\n", benchRet.group);
          free(suffix);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum file_types type = 0;
          enum file_groups group = 0;
          int _len_suffix0 = 65025;
          const char * suffix = (const char *) malloc(_len_suffix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_suffix0; _i0++) {
            suffix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct file benchRet = FILE_DEF(type,suffix,group);
          printf("%d\n", benchRet.type);
          printf("%d\n", benchRet.group);
          free(suffix);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum file_types type = 0;
          enum file_groups group = 0;
          int _len_suffix0 = 100;
          const char * suffix = (const char *) malloc(_len_suffix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_suffix0; _i0++) {
            suffix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct file benchRet = FILE_DEF(type,suffix,group);
          printf("%d\n", benchRet.type);
          printf("%d\n", benchRet.group);
          free(suffix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
