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
struct TYPE_3__ {int* lpReserved2; int cbReserved2; } ;
typedef  TYPE_1__ STARTUPINFOA ;
typedef  int /*<<< orphan*/  HANDLE ;
typedef  int BYTE ;

/* Variables and functions */

__attribute__((used)) static void create_io_inherit_block( STARTUPINFOA *startup, unsigned int count, const HANDLE *handles )
{
    static BYTE block[1024];
    BYTE *wxflag_ptr;
    HANDLE *handle_ptr;
    unsigned int i;

    startup->lpReserved2 = block;
    startup->cbReserved2 = sizeof(unsigned) + (sizeof(char) + sizeof(HANDLE)) * count;
    wxflag_ptr = block + sizeof(unsigned);
    handle_ptr = (HANDLE *)(wxflag_ptr + count);

    *(unsigned*)block = count;
    for (i = 0; i < count; i++)
    {
        wxflag_ptr[i] = 0x81;
        handle_ptr[i] = handles[i];
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
          unsigned int count = 100;
          int _len_startup0 = 1;
          struct TYPE_3__ * startup = (struct TYPE_3__ *) malloc(_len_startup0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_startup0; _i0++) {
              int _len_startup__i0__lpReserved20 = 1;
          startup[_i0].lpReserved2 = (int *) malloc(_len_startup__i0__lpReserved20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_startup__i0__lpReserved20; _j0++) {
            startup[_i0].lpReserved2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        startup[_i0].cbReserved2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_handles0 = 1;
          const int * handles = (const int *) malloc(_len_handles0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_handles0; _i0++) {
            handles[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          create_io_inherit_block(startup,count,handles);
          for(int _aux = 0; _aux < _len_startup0; _aux++) {
          free(startup[_aux].lpReserved2);
          }
          free(startup);
          free(handles);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int count = 255;
          int _len_startup0 = 65025;
          struct TYPE_3__ * startup = (struct TYPE_3__ *) malloc(_len_startup0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_startup0; _i0++) {
              int _len_startup__i0__lpReserved20 = 1;
          startup[_i0].lpReserved2 = (int *) malloc(_len_startup__i0__lpReserved20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_startup__i0__lpReserved20; _j0++) {
            startup[_i0].lpReserved2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        startup[_i0].cbReserved2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_handles0 = 65025;
          const int * handles = (const int *) malloc(_len_handles0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_handles0; _i0++) {
            handles[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          create_io_inherit_block(startup,count,handles);
          for(int _aux = 0; _aux < _len_startup0; _aux++) {
          free(startup[_aux].lpReserved2);
          }
          free(startup);
          free(handles);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int count = 10;
          int _len_startup0 = 100;
          struct TYPE_3__ * startup = (struct TYPE_3__ *) malloc(_len_startup0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_startup0; _i0++) {
              int _len_startup__i0__lpReserved20 = 1;
          startup[_i0].lpReserved2 = (int *) malloc(_len_startup__i0__lpReserved20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_startup__i0__lpReserved20; _j0++) {
            startup[_i0].lpReserved2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        startup[_i0].cbReserved2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_handles0 = 100;
          const int * handles = (const int *) malloc(_len_handles0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_handles0; _i0++) {
            handles[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          create_io_inherit_block(startup,count,handles);
          for(int _aux = 0; _aux < _len_startup0; _aux++) {
          free(startup[_aux].lpReserved2);
          }
          free(startup);
          free(handles);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
