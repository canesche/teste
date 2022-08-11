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
typedef  int /*<<< orphan*/  VOID ;
typedef  int /*<<< orphan*/  USER_HANDLE_ENTRY ;
typedef  int ULONG ;
struct TYPE_3__ {int allocated_handles; scalar_t__ nb_handles; int /*<<< orphan*/  handles; int /*<<< orphan*/ * freelist; } ;
typedef  int /*<<< orphan*/  PVOID ;
typedef  TYPE_1__* PUSER_HANDLE_TABLE ;

/* Variables and functions */

VOID UserInitHandleTable(PUSER_HANDLE_TABLE ht, PVOID mem, ULONG bytes)
{
   ht->freelist = NULL;
   ht->handles = mem;

   ht->nb_handles = 0;
   ht->allocated_handles = bytes / sizeof(USER_HANDLE_ENTRY);
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
          int mem = 100;
          int bytes = 100;
          int _len_ht0 = 1;
          struct TYPE_3__ * ht = (struct TYPE_3__ *) malloc(_len_ht0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].allocated_handles = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].nb_handles = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].handles = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ht__i0__freelist0 = 1;
          ht[_i0].freelist = (int *) malloc(_len_ht__i0__freelist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ht__i0__freelist0; _j0++) {
            ht[_i0].freelist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = UserInitHandleTable(ht,mem,bytes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].freelist);
          }
          free(ht);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mem = 255;
          int bytes = 255;
          int _len_ht0 = 65025;
          struct TYPE_3__ * ht = (struct TYPE_3__ *) malloc(_len_ht0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].allocated_handles = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].nb_handles = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].handles = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ht__i0__freelist0 = 1;
          ht[_i0].freelist = (int *) malloc(_len_ht__i0__freelist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ht__i0__freelist0; _j0++) {
            ht[_i0].freelist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = UserInitHandleTable(ht,mem,bytes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].freelist);
          }
          free(ht);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mem = 10;
          int bytes = 10;
          int _len_ht0 = 100;
          struct TYPE_3__ * ht = (struct TYPE_3__ *) malloc(_len_ht0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].allocated_handles = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].nb_handles = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].handles = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ht__i0__freelist0 = 1;
          ht[_i0].freelist = (int *) malloc(_len_ht__i0__freelist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ht__i0__freelist0; _j0++) {
            ht[_i0].freelist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = UserInitHandleTable(ht,mem,bytes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].freelist);
          }
          free(ht);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
