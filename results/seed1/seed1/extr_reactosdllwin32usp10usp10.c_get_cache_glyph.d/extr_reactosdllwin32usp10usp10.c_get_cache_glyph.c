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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  WORD ;
struct TYPE_4__ {int /*<<< orphan*/ ** glyphs; } ;
struct TYPE_3__ {TYPE_2__** page; } ;
typedef  TYPE_1__ ScriptCache ;
typedef  scalar_t__ SCRIPT_CACHE ;
typedef  int DWORD ;
typedef  TYPE_2__ CacheGlyphPage ;

/* Variables and functions */
 int GLYPH_BLOCK_MASK ; 
 int GLYPH_BLOCK_SHIFT ; 

__attribute__((used)) static inline WORD get_cache_glyph(SCRIPT_CACHE *psc, DWORD c)
{
    CacheGlyphPage *page = ((ScriptCache *)*psc)->page[c / 0x10000];
    WORD *block;

    if (!page) return 0;
    block = page->glyphs[(c % 0x10000) >> GLYPH_BLOCK_SHIFT];
    if (!block) return 0;
    return block[(c % 0x10000) & GLYPH_BLOCK_MASK];
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
          int c = 100;
          int _len_psc0 = 1;
          long * psc = (long *) malloc(_len_psc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_psc0; _i0++) {
            psc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_cache_glyph(psc,c);
          printf("%d\n", benchRet); 
          free(psc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int c = 255;
          int _len_psc0 = 65025;
          long * psc = (long *) malloc(_len_psc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_psc0; _i0++) {
            psc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_cache_glyph(psc,c);
          printf("%d\n", benchRet); 
          free(psc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int c = 10;
          int _len_psc0 = 100;
          long * psc = (long *) malloc(_len_psc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_psc0; _i0++) {
            psc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_cache_glyph(psc,c);
          printf("%d\n", benchRet); 
          free(psc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
