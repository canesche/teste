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
typedef  int /*<<< orphan*/  WCHAR ;
typedef  int /*<<< orphan*/  HANDLE ;
typedef  int /*<<< orphan*/  DWORD_PTR ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 

BOOL macho_fetch_file_info(HANDLE process, const WCHAR* name, unsigned long load_addr, DWORD_PTR* base,
                           DWORD* size, DWORD* checksum)
{
    return FALSE;
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
          int process = 100;
          unsigned long load_addr = 100;
          int _len_name0 = 1;
          const int * name = (const int *) malloc(_len_name0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 1;
          int * base = (int *) malloc(_len_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 1;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_checksum0 = 1;
          int * checksum = (int *) malloc(_len_checksum0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_checksum0; _i0++) {
            checksum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = macho_fetch_file_info(process,name,load_addr,base,size,checksum);
          printf("%d\n", benchRet); 
          free(name);
          free(base);
          free(size);
          free(checksum);
        
        break;
    }
    // big-arr
    case 1:
    {
          int process = 255;
          unsigned long load_addr = 255;
          int _len_name0 = 65025;
          const int * name = (const int *) malloc(_len_name0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 65025;
          int * base = (int *) malloc(_len_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 65025;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_checksum0 = 65025;
          int * checksum = (int *) malloc(_len_checksum0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_checksum0; _i0++) {
            checksum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = macho_fetch_file_info(process,name,load_addr,base,size,checksum);
          printf("%d\n", benchRet); 
          free(name);
          free(base);
          free(size);
          free(checksum);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int process = 10;
          unsigned long load_addr = 10;
          int _len_name0 = 100;
          const int * name = (const int *) malloc(_len_name0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 100;
          int * base = (int *) malloc(_len_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 100;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_checksum0 = 100;
          int * checksum = (int *) malloc(_len_checksum0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_checksum0; _i0++) {
            checksum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = macho_fetch_file_info(process,name,load_addr,base,size,checksum);
          printf("%d\n", benchRet); 
          free(name);
          free(base);
          free(size);
          free(checksum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
