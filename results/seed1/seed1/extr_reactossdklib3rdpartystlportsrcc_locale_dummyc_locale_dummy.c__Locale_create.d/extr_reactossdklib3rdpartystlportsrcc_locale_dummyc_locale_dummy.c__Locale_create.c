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
 int _STLP_LOC_NO_PLATFORM_SUPPORT ; 

void* _Locale_create(const char* name, int *__err_code) {
  if (name[0] == 'C' && name[1] == 0)
  { return (void*)0x1; }
  *__err_code = _STLP_LOC_NO_PLATFORM_SUPPORT; return 0;
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
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len___err_code0 = 1;
          int * __err_code = (int *) malloc(_len___err_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len___err_code0; _i0++) {
            __err_code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = _Locale_create(name,__err_code);
          free(name);
          free(__err_code);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len___err_code0 = 65025;
          int * __err_code = (int *) malloc(_len___err_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len___err_code0; _i0++) {
            __err_code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = _Locale_create(name,__err_code);
          free(name);
          free(__err_code);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len___err_code0 = 100;
          int * __err_code = (int *) malloc(_len___err_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len___err_code0; _i0++) {
            __err_code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = _Locale_create(name,__err_code);
          free(name);
          free(__err_code);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
