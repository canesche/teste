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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int* aiColumn; TYPE_2__* pTable; } ;
struct TYPE_6__ {TYPE_1__* aCol; } ;
struct TYPE_5__ {char const* zName; } ;
typedef  TYPE_3__ Index ;

/* Variables and functions */
 int XN_EXPR ; 
 int XN_ROWID ; 

__attribute__((used)) static const char *explainIndexColumnName(Index *pIdx, int i){
  i = pIdx->aiColumn[i];
  if( i==XN_EXPR ) return "<expr>";
  if( i==XN_ROWID ) return "rowid";
  return pIdx->pTable->aCol[i].zName;
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
          int i = 100;
          int _len_pIdx0 = 1;
          struct TYPE_7__ * pIdx = (struct TYPE_7__ *) malloc(_len_pIdx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pIdx0; _i0++) {
              int _len_pIdx__i0__aiColumn0 = 1;
          pIdx[_i0].aiColumn = (int *) malloc(_len_pIdx__i0__aiColumn0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__aiColumn0; _j0++) {
            pIdx[_i0].aiColumn[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pIdx__i0__pTable0 = 1;
          pIdx[_i0].pTable = (struct TYPE_6__ *) malloc(_len_pIdx__i0__pTable0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__pTable0; _j0++) {
              int _len_pIdx__i0__pTable_aCol0 = 1;
          pIdx[_i0].pTable->aCol = (struct TYPE_5__ *) malloc(_len_pIdx__i0__pTable_aCol0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__pTable_aCol0; _j0++) {
              int _len_pIdx__i0__pTable_aCol_zName0 = 1;
          pIdx[_i0].pTable->aCol->zName = (const char *) malloc(_len_pIdx__i0__pTable_aCol_zName0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__pTable_aCol_zName0; _j0++) {
            pIdx[_i0].pTable->aCol->zName[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          const char * benchRet = explainIndexColumnName(pIdx,i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_pIdx0; _aux++) {
          free(pIdx[_aux].aiColumn);
          }
          for(int _aux = 0; _aux < _len_pIdx0; _aux++) {
          free(pIdx[_aux].pTable);
          }
          free(pIdx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int _len_pIdx0 = 65025;
          struct TYPE_7__ * pIdx = (struct TYPE_7__ *) malloc(_len_pIdx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pIdx0; _i0++) {
              int _len_pIdx__i0__aiColumn0 = 1;
          pIdx[_i0].aiColumn = (int *) malloc(_len_pIdx__i0__aiColumn0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__aiColumn0; _j0++) {
            pIdx[_i0].aiColumn[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pIdx__i0__pTable0 = 1;
          pIdx[_i0].pTable = (struct TYPE_6__ *) malloc(_len_pIdx__i0__pTable0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__pTable0; _j0++) {
              int _len_pIdx__i0__pTable_aCol0 = 1;
          pIdx[_i0].pTable->aCol = (struct TYPE_5__ *) malloc(_len_pIdx__i0__pTable_aCol0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__pTable_aCol0; _j0++) {
              int _len_pIdx__i0__pTable_aCol_zName0 = 1;
          pIdx[_i0].pTable->aCol->zName = (const char *) malloc(_len_pIdx__i0__pTable_aCol_zName0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__pTable_aCol_zName0; _j0++) {
            pIdx[_i0].pTable->aCol->zName[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          const char * benchRet = explainIndexColumnName(pIdx,i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_pIdx0; _aux++) {
          free(pIdx[_aux].aiColumn);
          }
          for(int _aux = 0; _aux < _len_pIdx0; _aux++) {
          free(pIdx[_aux].pTable);
          }
          free(pIdx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int _len_pIdx0 = 100;
          struct TYPE_7__ * pIdx = (struct TYPE_7__ *) malloc(_len_pIdx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pIdx0; _i0++) {
              int _len_pIdx__i0__aiColumn0 = 1;
          pIdx[_i0].aiColumn = (int *) malloc(_len_pIdx__i0__aiColumn0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__aiColumn0; _j0++) {
            pIdx[_i0].aiColumn[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pIdx__i0__pTable0 = 1;
          pIdx[_i0].pTable = (struct TYPE_6__ *) malloc(_len_pIdx__i0__pTable0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__pTable0; _j0++) {
              int _len_pIdx__i0__pTable_aCol0 = 1;
          pIdx[_i0].pTable->aCol = (struct TYPE_5__ *) malloc(_len_pIdx__i0__pTable_aCol0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__pTable_aCol0; _j0++) {
              int _len_pIdx__i0__pTable_aCol_zName0 = 1;
          pIdx[_i0].pTable->aCol->zName = (const char *) malloc(_len_pIdx__i0__pTable_aCol_zName0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_pIdx__i0__pTable_aCol_zName0; _j0++) {
            pIdx[_i0].pTable->aCol->zName[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          const char * benchRet = explainIndexColumnName(pIdx,i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_pIdx0; _aux++) {
          free(pIdx[_aux].aiColumn);
          }
          for(int _aux = 0; _aux < _len_pIdx0; _aux++) {
          free(pIdx[_aux].pTable);
          }
          free(pIdx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
