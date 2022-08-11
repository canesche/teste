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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ WORD ;
typedef  int /*<<< orphan*/  WCHAR ;
struct TYPE_8__ {int fClusterStart; int fZeroWidth; int /*<<< orphan*/  uJustification; scalar_t__ fDiacritic; } ;
struct TYPE_10__ {TYPE_2__ sva; } ;
struct TYPE_7__ {scalar_t__ const wgDefault; } ;
struct TYPE_9__ {TYPE_1__ sfp; } ;
typedef  TYPE_3__ ScriptCache ;
typedef  TYPE_4__ SCRIPT_GLYPHPROP ;
typedef  int /*<<< orphan*/  SCRIPT_CHARPROP ;
typedef  int /*<<< orphan*/  SCRIPT_ANALYSIS ;
typedef  int INT ;
typedef  int /*<<< orphan*/  HDC ;

/* Variables and functions */
 int /*<<< orphan*/  SCRIPT_JUSTIFY_BLANK ; 

__attribute__((used)) static void ShapeCharGlyphProp_Control( HDC hdc, ScriptCache *psc, SCRIPT_ANALYSIS *psa, const WCHAR* pwcChars, const INT cChars, const WORD* pwGlyphs, const INT cGlyphs, WORD *pwLogClust, SCRIPT_CHARPROP *pCharProp, SCRIPT_GLYPHPROP *pGlyphProp )
{
    int i;
    for (i = 0; i < cGlyphs; i++)
    {
        pGlyphProp[i].sva.fClusterStart = 1;
        pGlyphProp[i].sva.fDiacritic = 0;
        pGlyphProp[i].sva.uJustification = SCRIPT_JUSTIFY_BLANK;

        if (pwGlyphs[i] == psc->sfp.wgDefault)
            pGlyphProp[i].sva.fZeroWidth = 0;
        else
            pGlyphProp[i].sva.fZeroWidth = 1;
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
          int hdc = 100;
          const int cChars = 100;
          const int cGlyphs = 100;
          int _len_psc0 = 1;
          struct TYPE_9__ * psc = (struct TYPE_9__ *) malloc(_len_psc0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_psc0; _i0++) {
            psc[_i0].sfp.wgDefault = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psa0 = 1;
          int * psa = (int *) malloc(_len_psa0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psa0; _i0++) {
            psa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwcChars0 = 1;
          const int * pwcChars = (const int *) malloc(_len_pwcChars0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pwcChars0; _i0++) {
            pwcChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwGlyphs0 = 1;
          const long * pwGlyphs = (const long *) malloc(_len_pwGlyphs0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pwGlyphs0; _i0++) {
            pwGlyphs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwLogClust0 = 1;
          long * pwLogClust = (long *) malloc(_len_pwLogClust0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pwLogClust0; _i0++) {
            pwLogClust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pCharProp0 = 1;
          int * pCharProp = (int *) malloc(_len_pCharProp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pCharProp0; _i0++) {
            pCharProp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pGlyphProp0 = 1;
          struct TYPE_10__ * pGlyphProp = (struct TYPE_10__ *) malloc(_len_pGlyphProp0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_pGlyphProp0; _i0++) {
            pGlyphProp[_i0].sva.fClusterStart = ((-2 * (next_i()%2)) + 1) * next_i();
        pGlyphProp[_i0].sva.fZeroWidth = ((-2 * (next_i()%2)) + 1) * next_i();
        pGlyphProp[_i0].sva.uJustification = ((-2 * (next_i()%2)) + 1) * next_i();
        pGlyphProp[_i0].sva.fDiacritic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ShapeCharGlyphProp_Control(hdc,psc,psa,pwcChars,cChars,pwGlyphs,cGlyphs,pwLogClust,pCharProp,pGlyphProp);
          free(psc);
          free(psa);
          free(pwcChars);
          free(pwGlyphs);
          free(pwLogClust);
          free(pCharProp);
          free(pGlyphProp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hdc = 255;
          const int cChars = 255;
          const int cGlyphs = 255;
          int _len_psc0 = 65025;
          struct TYPE_9__ * psc = (struct TYPE_9__ *) malloc(_len_psc0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_psc0; _i0++) {
            psc[_i0].sfp.wgDefault = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psa0 = 65025;
          int * psa = (int *) malloc(_len_psa0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psa0; _i0++) {
            psa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwcChars0 = 65025;
          const int * pwcChars = (const int *) malloc(_len_pwcChars0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pwcChars0; _i0++) {
            pwcChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwGlyphs0 = 65025;
          const long * pwGlyphs = (const long *) malloc(_len_pwGlyphs0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pwGlyphs0; _i0++) {
            pwGlyphs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwLogClust0 = 65025;
          long * pwLogClust = (long *) malloc(_len_pwLogClust0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pwLogClust0; _i0++) {
            pwLogClust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pCharProp0 = 65025;
          int * pCharProp = (int *) malloc(_len_pCharProp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pCharProp0; _i0++) {
            pCharProp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pGlyphProp0 = 65025;
          struct TYPE_10__ * pGlyphProp = (struct TYPE_10__ *) malloc(_len_pGlyphProp0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_pGlyphProp0; _i0++) {
            pGlyphProp[_i0].sva.fClusterStart = ((-2 * (next_i()%2)) + 1) * next_i();
        pGlyphProp[_i0].sva.fZeroWidth = ((-2 * (next_i()%2)) + 1) * next_i();
        pGlyphProp[_i0].sva.uJustification = ((-2 * (next_i()%2)) + 1) * next_i();
        pGlyphProp[_i0].sva.fDiacritic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ShapeCharGlyphProp_Control(hdc,psc,psa,pwcChars,cChars,pwGlyphs,cGlyphs,pwLogClust,pCharProp,pGlyphProp);
          free(psc);
          free(psa);
          free(pwcChars);
          free(pwGlyphs);
          free(pwLogClust);
          free(pCharProp);
          free(pGlyphProp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hdc = 10;
          const int cChars = 10;
          const int cGlyphs = 10;
          int _len_psc0 = 100;
          struct TYPE_9__ * psc = (struct TYPE_9__ *) malloc(_len_psc0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_psc0; _i0++) {
            psc[_i0].sfp.wgDefault = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psa0 = 100;
          int * psa = (int *) malloc(_len_psa0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psa0; _i0++) {
            psa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwcChars0 = 100;
          const int * pwcChars = (const int *) malloc(_len_pwcChars0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pwcChars0; _i0++) {
            pwcChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwGlyphs0 = 100;
          const long * pwGlyphs = (const long *) malloc(_len_pwGlyphs0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pwGlyphs0; _i0++) {
            pwGlyphs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwLogClust0 = 100;
          long * pwLogClust = (long *) malloc(_len_pwLogClust0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pwLogClust0; _i0++) {
            pwLogClust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pCharProp0 = 100;
          int * pCharProp = (int *) malloc(_len_pCharProp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pCharProp0; _i0++) {
            pCharProp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pGlyphProp0 = 100;
          struct TYPE_10__ * pGlyphProp = (struct TYPE_10__ *) malloc(_len_pGlyphProp0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_pGlyphProp0; _i0++) {
            pGlyphProp[_i0].sva.fClusterStart = ((-2 * (next_i()%2)) + 1) * next_i();
        pGlyphProp[_i0].sva.fZeroWidth = ((-2 * (next_i()%2)) + 1) * next_i();
        pGlyphProp[_i0].sva.uJustification = ((-2 * (next_i()%2)) + 1) * next_i();
        pGlyphProp[_i0].sva.fDiacritic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ShapeCharGlyphProp_Control(hdc,psc,psa,pwcChars,cChars,pwGlyphs,cGlyphs,pwLogClust,pCharProp,pGlyphProp);
          free(psc);
          free(psa);
          free(pwcChars);
          free(pwGlyphs);
          free(pwLogClust);
          free(pCharProp);
          free(pGlyphProp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
