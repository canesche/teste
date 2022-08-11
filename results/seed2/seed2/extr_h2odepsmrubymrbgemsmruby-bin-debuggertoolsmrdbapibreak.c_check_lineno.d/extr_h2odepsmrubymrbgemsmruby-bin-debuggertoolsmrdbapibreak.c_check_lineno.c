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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint32_t ;
typedef  size_t uint16_t ;
struct TYPE_5__ {size_t* ary; TYPE_2__* flat_map; } ;
struct TYPE_7__ {size_t line_entry_count; scalar_t__ line_type; TYPE_1__ lines; } ;
typedef  TYPE_3__ mrb_irep_debug_info_file ;
struct TYPE_6__ {size_t line; } ;

/* Variables and functions */
 scalar_t__ mrb_debug_line_ary ; 

__attribute__((used)) static uint16_t
check_lineno(mrb_irep_debug_info_file *info_file, uint16_t lineno)
{
  uint32_t count = info_file->line_entry_count;
  uint16_t l_idx;

  if (info_file->line_type == mrb_debug_line_ary) {
    for (l_idx = 0; l_idx < count; ++l_idx) {
      if (lineno == info_file->lines.ary[l_idx]) {
        return lineno;
      }
    }
  }
  else {
    for (l_idx = 0; l_idx < count; ++l_idx) {
      if (lineno == info_file->lines.flat_map[l_idx].line) {
        return lineno;
      }
    }
  }

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
          unsigned long lineno = 100;
          int _len_info_file0 = 1;
          struct TYPE_7__ * info_file = (struct TYPE_7__ *) malloc(_len_info_file0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_info_file0; _i0++) {
            info_file[_i0].line_entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info_file[_i0].line_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info_file__i0__lines_ary0 = 1;
          info_file[_i0].lines.ary = (unsigned long *) malloc(_len_info_file__i0__lines_ary0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_info_file__i0__lines_ary0; _j0++) {
            info_file[_i0].lines.ary[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info_file__i0__lines_flat_map0 = 1;
          info_file[_i0].lines.flat_map = (struct TYPE_6__ *) malloc(_len_info_file__i0__lines_flat_map0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_info_file__i0__lines_flat_map0; _j0++) {
            info_file[_i0].lines.flat_map->line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = check_lineno(info_file,lineno);
          printf("%lu\n", benchRet); 
          free(info_file);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long lineno = 255;
          int _len_info_file0 = 65025;
          struct TYPE_7__ * info_file = (struct TYPE_7__ *) malloc(_len_info_file0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_info_file0; _i0++) {
            info_file[_i0].line_entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info_file[_i0].line_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info_file__i0__lines_ary0 = 1;
          info_file[_i0].lines.ary = (unsigned long *) malloc(_len_info_file__i0__lines_ary0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_info_file__i0__lines_ary0; _j0++) {
            info_file[_i0].lines.ary[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info_file__i0__lines_flat_map0 = 1;
          info_file[_i0].lines.flat_map = (struct TYPE_6__ *) malloc(_len_info_file__i0__lines_flat_map0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_info_file__i0__lines_flat_map0; _j0++) {
            info_file[_i0].lines.flat_map->line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = check_lineno(info_file,lineno);
          printf("%lu\n", benchRet); 
          free(info_file);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long lineno = 10;
          int _len_info_file0 = 100;
          struct TYPE_7__ * info_file = (struct TYPE_7__ *) malloc(_len_info_file0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_info_file0; _i0++) {
            info_file[_i0].line_entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info_file[_i0].line_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info_file__i0__lines_ary0 = 1;
          info_file[_i0].lines.ary = (unsigned long *) malloc(_len_info_file__i0__lines_ary0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_info_file__i0__lines_ary0; _j0++) {
            info_file[_i0].lines.ary[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info_file__i0__lines_flat_map0 = 1;
          info_file[_i0].lines.flat_map = (struct TYPE_6__ *) malloc(_len_info_file__i0__lines_flat_map0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_info_file__i0__lines_flat_map0; _j0++) {
            info_file[_i0].lines.flat_map->line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = check_lineno(info_file,lineno);
          printf("%lu\n", benchRet); 
          free(info_file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
