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
typedef  TYPE_1__* xsltSecurityPrefsPtr ;
typedef  int xsltSecurityOption ;
typedef  int /*<<< orphan*/ * xsltSecurityCheck ;
struct TYPE_3__ {int /*<<< orphan*/ * writeNet; int /*<<< orphan*/ * readNet; int /*<<< orphan*/ * createDir; int /*<<< orphan*/ * createFile; int /*<<< orphan*/ * readFile; } ;

/* Variables and functions */
#define  XSLT_SECPREF_CREATE_DIRECTORY 132 
#define  XSLT_SECPREF_READ_FILE 131 
#define  XSLT_SECPREF_READ_NETWORK 130 
#define  XSLT_SECPREF_WRITE_FILE 129 
#define  XSLT_SECPREF_WRITE_NETWORK 128 

xsltSecurityCheck
xsltGetSecurityPrefs(xsltSecurityPrefsPtr sec, xsltSecurityOption option) {
    if (sec == NULL)
	return(NULL);
    switch (option) {
        case XSLT_SECPREF_READ_FILE:
            return(sec->readFile);
        case XSLT_SECPREF_WRITE_FILE:
            return(sec->createFile);
        case XSLT_SECPREF_CREATE_DIRECTORY:
            return(sec->createDir);
        case XSLT_SECPREF_READ_NETWORK:
            return(sec->readNet);
        case XSLT_SECPREF_WRITE_NETWORK:
            return(sec->writeNet);
    }
    return(NULL);
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
          int option = 100;
          int _len_sec0 = 1;
          struct TYPE_3__ * sec = (struct TYPE_3__ *) malloc(_len_sec0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sec0; _i0++) {
              int _len_sec__i0__writeNet0 = 1;
          sec[_i0].writeNet = (int *) malloc(_len_sec__i0__writeNet0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__writeNet0; _j0++) {
            sec[_i0].writeNet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__readNet0 = 1;
          sec[_i0].readNet = (int *) malloc(_len_sec__i0__readNet0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__readNet0; _j0++) {
            sec[_i0].readNet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__createDir0 = 1;
          sec[_i0].createDir = (int *) malloc(_len_sec__i0__createDir0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__createDir0; _j0++) {
            sec[_i0].createDir[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__createFile0 = 1;
          sec[_i0].createFile = (int *) malloc(_len_sec__i0__createFile0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__createFile0; _j0++) {
            sec[_i0].createFile[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__readFile0 = 1;
          sec[_i0].readFile = (int *) malloc(_len_sec__i0__readFile0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__readFile0; _j0++) {
            sec[_i0].readFile[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = xsltGetSecurityPrefs(sec,option);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].writeNet);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].readNet);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].createDir);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].createFile);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].readFile);
          }
          free(sec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int option = 255;
          int _len_sec0 = 65025;
          struct TYPE_3__ * sec = (struct TYPE_3__ *) malloc(_len_sec0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sec0; _i0++) {
              int _len_sec__i0__writeNet0 = 1;
          sec[_i0].writeNet = (int *) malloc(_len_sec__i0__writeNet0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__writeNet0; _j0++) {
            sec[_i0].writeNet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__readNet0 = 1;
          sec[_i0].readNet = (int *) malloc(_len_sec__i0__readNet0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__readNet0; _j0++) {
            sec[_i0].readNet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__createDir0 = 1;
          sec[_i0].createDir = (int *) malloc(_len_sec__i0__createDir0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__createDir0; _j0++) {
            sec[_i0].createDir[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__createFile0 = 1;
          sec[_i0].createFile = (int *) malloc(_len_sec__i0__createFile0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__createFile0; _j0++) {
            sec[_i0].createFile[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__readFile0 = 1;
          sec[_i0].readFile = (int *) malloc(_len_sec__i0__readFile0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__readFile0; _j0++) {
            sec[_i0].readFile[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = xsltGetSecurityPrefs(sec,option);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].writeNet);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].readNet);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].createDir);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].createFile);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].readFile);
          }
          free(sec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int option = 10;
          int _len_sec0 = 100;
          struct TYPE_3__ * sec = (struct TYPE_3__ *) malloc(_len_sec0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sec0; _i0++) {
              int _len_sec__i0__writeNet0 = 1;
          sec[_i0].writeNet = (int *) malloc(_len_sec__i0__writeNet0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__writeNet0; _j0++) {
            sec[_i0].writeNet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__readNet0 = 1;
          sec[_i0].readNet = (int *) malloc(_len_sec__i0__readNet0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__readNet0; _j0++) {
            sec[_i0].readNet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__createDir0 = 1;
          sec[_i0].createDir = (int *) malloc(_len_sec__i0__createDir0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__createDir0; _j0++) {
            sec[_i0].createDir[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__createFile0 = 1;
          sec[_i0].createFile = (int *) malloc(_len_sec__i0__createFile0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__createFile0; _j0++) {
            sec[_i0].createFile[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sec__i0__readFile0 = 1;
          sec[_i0].readFile = (int *) malloc(_len_sec__i0__readFile0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sec__i0__readFile0; _j0++) {
            sec[_i0].readFile[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = xsltGetSecurityPrefs(sec,option);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].writeNet);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].readNet);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].createDir);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].createFile);
          }
          for(int _aux = 0; _aux < _len_sec0; _aux++) {
          free(sec[_aux].readFile);
          }
          free(sec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
