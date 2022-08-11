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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ luaR_numkey ;
struct TYPE_6__ {scalar_t__ numkey; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ id; } ;
struct TYPE_8__ {int /*<<< orphan*/  const value; TYPE_2__ key; } ;
typedef  TYPE_3__ luaR_entry ;
typedef  int /*<<< orphan*/  TValue ;
typedef  TYPE_3__ ROTable ;

/* Variables and functions */
 scalar_t__ LUA_TNIL ; 
 scalar_t__ LUA_TNUMBER ; 

const TValue* luaR_findentryN(ROTable *rotable, luaR_numkey numkey, unsigned *ppos) {
  unsigned i = 0;
  const luaR_entry *pentry = rotable;
  if (pentry) {
    for ( ;pentry->key.type != LUA_TNIL; i++, pentry++) {
      if (pentry->key.type == LUA_TNUMBER && (luaR_numkey) pentry->key.id.numkey == numkey) {
        if (ppos)
          *ppos = i;
        return &pentry->value;
      }
    }
  }
  return NULL;
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
          long numkey = 100;
          int _len_rotable0 = 1;
          struct TYPE_8__ * rotable = (struct TYPE_8__ *) malloc(_len_rotable0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_rotable0; _i0++) {
            rotable[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
        rotable[_i0].key.type = ((-2 * (next_i()%2)) + 1) * next_i();
        rotable[_i0].key.id.numkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppos0 = 1;
          unsigned int * ppos = (unsigned int *) malloc(_len_ppos0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ppos0; _i0++) {
            ppos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = luaR_findentryN(rotable,numkey,ppos);
          printf("%d\n", (*benchRet)); 
          free(rotable);
          free(ppos);
        
        break;
    }
    // big-arr
    case 1:
    {
          long numkey = 255;
          int _len_rotable0 = 65025;
          struct TYPE_8__ * rotable = (struct TYPE_8__ *) malloc(_len_rotable0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_rotable0; _i0++) {
            rotable[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
        rotable[_i0].key.type = ((-2 * (next_i()%2)) + 1) * next_i();
        rotable[_i0].key.id.numkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppos0 = 65025;
          unsigned int * ppos = (unsigned int *) malloc(_len_ppos0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ppos0; _i0++) {
            ppos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = luaR_findentryN(rotable,numkey,ppos);
          printf("%d\n", (*benchRet)); 
          free(rotable);
          free(ppos);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long numkey = 10;
          int _len_rotable0 = 100;
          struct TYPE_8__ * rotable = (struct TYPE_8__ *) malloc(_len_rotable0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_rotable0; _i0++) {
            rotable[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
        rotable[_i0].key.type = ((-2 * (next_i()%2)) + 1) * next_i();
        rotable[_i0].key.id.numkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppos0 = 100;
          unsigned int * ppos = (unsigned int *) malloc(_len_ppos0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ppos0; _i0++) {
            ppos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = luaR_findentryN(rotable,numkey,ppos);
          printf("%d\n", (*benchRet)); 
          free(rotable);
          free(ppos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
