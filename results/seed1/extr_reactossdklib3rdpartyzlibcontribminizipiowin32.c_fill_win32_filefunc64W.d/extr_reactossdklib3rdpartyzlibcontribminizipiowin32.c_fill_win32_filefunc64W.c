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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/ * opaque; int /*<<< orphan*/  zerror_file; int /*<<< orphan*/  zclose_file; int /*<<< orphan*/  zseek64_file; int /*<<< orphan*/  ztell64_file; int /*<<< orphan*/  zwrite_file; int /*<<< orphan*/  zread_file; int /*<<< orphan*/  zopen64_file; } ;
typedef  TYPE_1__ zlib_filefunc64_def ;

/* Variables and functions */
 int /*<<< orphan*/  win32_close_file_func ; 
 int /*<<< orphan*/  win32_error_file_func ; 
 int /*<<< orphan*/  win32_open64_file_funcW ; 
 int /*<<< orphan*/  win32_read_file_func ; 
 int /*<<< orphan*/  win32_seek64_file_func ; 
 int /*<<< orphan*/  win32_tell64_file_func ; 
 int /*<<< orphan*/  win32_write_file_func ; 

void fill_win32_filefunc64W(zlib_filefunc64_def* pzlib_filefunc_def)
{
    pzlib_filefunc_def->zopen64_file = win32_open64_file_funcW;
    pzlib_filefunc_def->zread_file = win32_read_file_func;
    pzlib_filefunc_def->zwrite_file = win32_write_file_func;
    pzlib_filefunc_def->ztell64_file = win32_tell64_file_func;
    pzlib_filefunc_def->zseek64_file = win32_seek64_file_func;
    pzlib_filefunc_def->zclose_file = win32_close_file_func;
    pzlib_filefunc_def->zerror_file = win32_error_file_func;
    pzlib_filefunc_def->opaque = NULL;
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
          int _len_pzlib_filefunc_def0 = 1;
          struct TYPE_3__ * pzlib_filefunc_def = (struct TYPE_3__ *) malloc(_len_pzlib_filefunc_def0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pzlib_filefunc_def0; _i0++) {
              int _len_pzlib_filefunc_def__i0__opaque0 = 1;
          pzlib_filefunc_def[_i0].opaque = (int *) malloc(_len_pzlib_filefunc_def__i0__opaque0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pzlib_filefunc_def__i0__opaque0; _j0++) {
            pzlib_filefunc_def[_i0].opaque[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pzlib_filefunc_def[_i0].zerror_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zclose_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zseek64_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].ztell64_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zwrite_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zread_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zopen64_file = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_win32_filefunc64W(pzlib_filefunc_def);
          for(int _aux = 0; _aux < _len_pzlib_filefunc_def0; _aux++) {
          free(pzlib_filefunc_def[_aux].opaque);
          }
          free(pzlib_filefunc_def);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pzlib_filefunc_def0 = 65025;
          struct TYPE_3__ * pzlib_filefunc_def = (struct TYPE_3__ *) malloc(_len_pzlib_filefunc_def0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pzlib_filefunc_def0; _i0++) {
              int _len_pzlib_filefunc_def__i0__opaque0 = 1;
          pzlib_filefunc_def[_i0].opaque = (int *) malloc(_len_pzlib_filefunc_def__i0__opaque0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pzlib_filefunc_def__i0__opaque0; _j0++) {
            pzlib_filefunc_def[_i0].opaque[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pzlib_filefunc_def[_i0].zerror_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zclose_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zseek64_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].ztell64_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zwrite_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zread_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zopen64_file = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_win32_filefunc64W(pzlib_filefunc_def);
          for(int _aux = 0; _aux < _len_pzlib_filefunc_def0; _aux++) {
          free(pzlib_filefunc_def[_aux].opaque);
          }
          free(pzlib_filefunc_def);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pzlib_filefunc_def0 = 100;
          struct TYPE_3__ * pzlib_filefunc_def = (struct TYPE_3__ *) malloc(_len_pzlib_filefunc_def0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pzlib_filefunc_def0; _i0++) {
              int _len_pzlib_filefunc_def__i0__opaque0 = 1;
          pzlib_filefunc_def[_i0].opaque = (int *) malloc(_len_pzlib_filefunc_def__i0__opaque0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pzlib_filefunc_def__i0__opaque0; _j0++) {
            pzlib_filefunc_def[_i0].opaque[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pzlib_filefunc_def[_i0].zerror_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zclose_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zseek64_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].ztell64_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zwrite_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zread_file = ((-2 * (next_i()%2)) + 1) * next_i();
        pzlib_filefunc_def[_i0].zopen64_file = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_win32_filefunc64W(pzlib_filefunc_def);
          for(int _aux = 0; _aux < _len_pzlib_filefunc_def0; _aux++) {
          free(pzlib_filefunc_def[_aux].opaque);
          }
          free(pzlib_filefunc_def);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
