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
typedef  int /*<<< orphan*/  VOID ;
typedef  scalar_t__* LPTSTR ;
typedef  int BOOL ;

/* Variables and functions */
 scalar_t__ CHAR_BACKSLASH ; 
 scalar_t__ CHAR_COLON ; 
 scalar_t__ CHAR_DQUOTE ; 
 scalar_t__ CHAR_SPACE ; 
 int FALSE ; 

VOID
GetPathInfo(LPTSTR szTemp, LPTSTR *ppDir, LPTSTR *ppFile, LPTSTR *ppPar)
{
   // handle quoted things
   BOOL bInQuotes=FALSE;

   // strip leading spaces

   for (*ppDir = szTemp; **ppDir == CHAR_SPACE; (*ppDir)++)
      ;

   // locate the parameters

   // Use bInQuotes and add if clause
   for (*ppPar = *ppDir; **ppPar && (**ppPar != CHAR_SPACE || bInQuotes) ; (*ppPar)++)
      if ( CHAR_DQUOTE == **ppPar ) bInQuotes = !bInQuotes;

   // locate the start of the filename and the extension.

   for (*ppFile = *ppPar; *ppFile > *ppDir; --(*ppFile)) {
      if (((*ppFile)[-1] == CHAR_COLON) || ((*ppFile)[-1] == CHAR_BACKSLASH))
         break;
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
          int _len_szTemp0 = 1;
          long * szTemp = (long *) malloc(_len_szTemp0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_szTemp0; _i0++) {
            szTemp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppDir0 = 1;
          long ** ppDir = (long **) malloc(_len_ppDir0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_ppDir0; _i0++) {
            int _len_ppDir1 = 1;
            ppDir[_i0] = (long *) malloc(_len_ppDir1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_ppDir1; _i1++) {
              ppDir[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ppFile0 = 1;
          long ** ppFile = (long **) malloc(_len_ppFile0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_ppFile0; _i0++) {
            int _len_ppFile1 = 1;
            ppFile[_i0] = (long *) malloc(_len_ppFile1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_ppFile1; _i1++) {
              ppFile[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ppPar0 = 1;
          long ** ppPar = (long **) malloc(_len_ppPar0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_ppPar0; _i0++) {
            int _len_ppPar1 = 1;
            ppPar[_i0] = (long *) malloc(_len_ppPar1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_ppPar1; _i1++) {
              ppPar[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = GetPathInfo(szTemp,ppDir,ppFile,ppPar);
          printf("%d\n", benchRet); 
          free(szTemp);
          for(int i1 = 0; i1 < _len_ppDir0; i1++) {
            int _len_ppDir1 = 1;
              free(ppDir[i1]);
          }
          free(ppDir);
          for(int i1 = 0; i1 < _len_ppFile0; i1++) {
            int _len_ppFile1 = 1;
              free(ppFile[i1]);
          }
          free(ppFile);
          for(int i1 = 0; i1 < _len_ppPar0; i1++) {
            int _len_ppPar1 = 1;
              free(ppPar[i1]);
          }
          free(ppPar);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_szTemp0 = 65025;
          long * szTemp = (long *) malloc(_len_szTemp0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_szTemp0; _i0++) {
            szTemp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppDir0 = 65025;
          long ** ppDir = (long **) malloc(_len_ppDir0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_ppDir0; _i0++) {
            int _len_ppDir1 = 1;
            ppDir[_i0] = (long *) malloc(_len_ppDir1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_ppDir1; _i1++) {
              ppDir[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ppFile0 = 65025;
          long ** ppFile = (long **) malloc(_len_ppFile0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_ppFile0; _i0++) {
            int _len_ppFile1 = 1;
            ppFile[_i0] = (long *) malloc(_len_ppFile1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_ppFile1; _i1++) {
              ppFile[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ppPar0 = 65025;
          long ** ppPar = (long **) malloc(_len_ppPar0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_ppPar0; _i0++) {
            int _len_ppPar1 = 1;
            ppPar[_i0] = (long *) malloc(_len_ppPar1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_ppPar1; _i1++) {
              ppPar[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = GetPathInfo(szTemp,ppDir,ppFile,ppPar);
          printf("%d\n", benchRet); 
          free(szTemp);
          for(int i1 = 0; i1 < _len_ppDir0; i1++) {
            int _len_ppDir1 = 1;
              free(ppDir[i1]);
          }
          free(ppDir);
          for(int i1 = 0; i1 < _len_ppFile0; i1++) {
            int _len_ppFile1 = 1;
              free(ppFile[i1]);
          }
          free(ppFile);
          for(int i1 = 0; i1 < _len_ppPar0; i1++) {
            int _len_ppPar1 = 1;
              free(ppPar[i1]);
          }
          free(ppPar);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_szTemp0 = 100;
          long * szTemp = (long *) malloc(_len_szTemp0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_szTemp0; _i0++) {
            szTemp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppDir0 = 100;
          long ** ppDir = (long **) malloc(_len_ppDir0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_ppDir0; _i0++) {
            int _len_ppDir1 = 1;
            ppDir[_i0] = (long *) malloc(_len_ppDir1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_ppDir1; _i1++) {
              ppDir[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ppFile0 = 100;
          long ** ppFile = (long **) malloc(_len_ppFile0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_ppFile0; _i0++) {
            int _len_ppFile1 = 1;
            ppFile[_i0] = (long *) malloc(_len_ppFile1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_ppFile1; _i1++) {
              ppFile[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ppPar0 = 100;
          long ** ppPar = (long **) malloc(_len_ppPar0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_ppPar0; _i0++) {
            int _len_ppPar1 = 1;
            ppPar[_i0] = (long *) malloc(_len_ppPar1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_ppPar1; _i1++) {
              ppPar[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = GetPathInfo(szTemp,ppDir,ppFile,ppPar);
          printf("%d\n", benchRet); 
          free(szTemp);
          for(int i1 = 0; i1 < _len_ppDir0; i1++) {
            int _len_ppDir1 = 1;
              free(ppDir[i1]);
          }
          free(ppDir);
          for(int i1 = 0; i1 < _len_ppFile0; i1++) {
            int _len_ppFile1 = 1;
              free(ppFile[i1]);
          }
          free(ppFile);
          for(int i1 = 0; i1 < _len_ppPar0; i1++) {
            int _len_ppPar1 = 1;
              free(ppPar[i1]);
          }
          free(ppPar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
