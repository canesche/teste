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
struct _Locale_name_hint {int dummy; } ;
struct _Locale_collate {int dummy; } ;

/* Variables and functions */

struct _Locale_name_hint* _Locale_get_collate_hint(struct _Locale_collate* collate)
{ return 0; }


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
          int _len_collate0 = 1;
          struct _Locale_collate * collate = (struct _Locale_collate *) malloc(_len_collate0*sizeof(struct _Locale_collate));
          for(int _i0 = 0; _i0 < _len_collate0; _i0++) {
            collate[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct _Locale_name_hint * benchRet = _Locale_get_collate_hint(collate);
          printf("%d\n", (*benchRet).dummy);
          free(collate);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_collate0 = 65025;
          struct _Locale_collate * collate = (struct _Locale_collate *) malloc(_len_collate0*sizeof(struct _Locale_collate));
          for(int _i0 = 0; _i0 < _len_collate0; _i0++) {
            collate[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct _Locale_name_hint * benchRet = _Locale_get_collate_hint(collate);
          printf("%d\n", (*benchRet).dummy);
          free(collate);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_collate0 = 100;
          struct _Locale_collate * collate = (struct _Locale_collate *) malloc(_len_collate0*sizeof(struct _Locale_collate));
          for(int _i0 = 0; _i0 < _len_collate0; _i0++) {
            collate[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct _Locale_name_hint * benchRet = _Locale_get_collate_hint(collate);
          printf("%d\n", (*benchRet).dummy);
          free(collate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
