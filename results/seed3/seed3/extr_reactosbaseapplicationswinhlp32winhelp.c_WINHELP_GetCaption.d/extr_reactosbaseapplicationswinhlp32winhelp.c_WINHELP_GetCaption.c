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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_3__* page; TYPE_1__* wininfo; } ;
typedef  TYPE_4__ WINHELP_WNDPAGE ;
struct TYPE_8__ {TYPE_2__* file; } ;
struct TYPE_7__ {char* lpszTitle; } ;
struct TYPE_6__ {char* caption; } ;

/* Variables and functions */

__attribute__((used)) static char* WINHELP_GetCaption(WINHELP_WNDPAGE* wpage)
{
    if (wpage->wininfo->caption[0]) return wpage->wininfo->caption;
    return wpage->page->file->lpszTitle;
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
          int _len_wpage0 = 1;
          struct TYPE_9__ * wpage = (struct TYPE_9__ *) malloc(_len_wpage0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_wpage0; _i0++) {
              int _len_wpage__i0__page0 = 1;
          wpage[_i0].page = (struct TYPE_8__ *) malloc(_len_wpage__i0__page0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_wpage__i0__page0; _j0++) {
              int _len_wpage__i0__page_file0 = 1;
          wpage[_i0].page->file = (struct TYPE_7__ *) malloc(_len_wpage__i0__page_file0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_wpage__i0__page_file0; _j0++) {
              int _len_wpage__i0__page_file_lpszTitle0 = 1;
          wpage[_i0].page->file->lpszTitle = (char *) malloc(_len_wpage__i0__page_file_lpszTitle0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_wpage__i0__page_file_lpszTitle0; _j0++) {
            wpage[_i0].page->file->lpszTitle[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_wpage__i0__wininfo0 = 1;
          wpage[_i0].wininfo = (struct TYPE_6__ *) malloc(_len_wpage__i0__wininfo0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_wpage__i0__wininfo0; _j0++) {
              int _len_wpage__i0__wininfo_caption0 = 1;
          wpage[_i0].wininfo->caption = (char *) malloc(_len_wpage__i0__wininfo_caption0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_wpage__i0__wininfo_caption0; _j0++) {
            wpage[_i0].wininfo->caption[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          char * benchRet = WINHELP_GetCaption(wpage);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_wpage0; _aux++) {
          free(wpage[_aux].page);
          }
          for(int _aux = 0; _aux < _len_wpage0; _aux++) {
          free(wpage[_aux].wininfo);
          }
          free(wpage);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wpage0 = 65025;
          struct TYPE_9__ * wpage = (struct TYPE_9__ *) malloc(_len_wpage0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_wpage0; _i0++) {
              int _len_wpage__i0__page0 = 1;
          wpage[_i0].page = (struct TYPE_8__ *) malloc(_len_wpage__i0__page0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_wpage__i0__page0; _j0++) {
              int _len_wpage__i0__page_file0 = 1;
          wpage[_i0].page->file = (struct TYPE_7__ *) malloc(_len_wpage__i0__page_file0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_wpage__i0__page_file0; _j0++) {
              int _len_wpage__i0__page_file_lpszTitle0 = 1;
          wpage[_i0].page->file->lpszTitle = (char *) malloc(_len_wpage__i0__page_file_lpszTitle0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_wpage__i0__page_file_lpszTitle0; _j0++) {
            wpage[_i0].page->file->lpszTitle[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_wpage__i0__wininfo0 = 1;
          wpage[_i0].wininfo = (struct TYPE_6__ *) malloc(_len_wpage__i0__wininfo0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_wpage__i0__wininfo0; _j0++) {
              int _len_wpage__i0__wininfo_caption0 = 1;
          wpage[_i0].wininfo->caption = (char *) malloc(_len_wpage__i0__wininfo_caption0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_wpage__i0__wininfo_caption0; _j0++) {
            wpage[_i0].wininfo->caption[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          char * benchRet = WINHELP_GetCaption(wpage);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_wpage0; _aux++) {
          free(wpage[_aux].page);
          }
          for(int _aux = 0; _aux < _len_wpage0; _aux++) {
          free(wpage[_aux].wininfo);
          }
          free(wpage);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wpage0 = 100;
          struct TYPE_9__ * wpage = (struct TYPE_9__ *) malloc(_len_wpage0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_wpage0; _i0++) {
              int _len_wpage__i0__page0 = 1;
          wpage[_i0].page = (struct TYPE_8__ *) malloc(_len_wpage__i0__page0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_wpage__i0__page0; _j0++) {
              int _len_wpage__i0__page_file0 = 1;
          wpage[_i0].page->file = (struct TYPE_7__ *) malloc(_len_wpage__i0__page_file0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_wpage__i0__page_file0; _j0++) {
              int _len_wpage__i0__page_file_lpszTitle0 = 1;
          wpage[_i0].page->file->lpszTitle = (char *) malloc(_len_wpage__i0__page_file_lpszTitle0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_wpage__i0__page_file_lpszTitle0; _j0++) {
            wpage[_i0].page->file->lpszTitle[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_wpage__i0__wininfo0 = 1;
          wpage[_i0].wininfo = (struct TYPE_6__ *) malloc(_len_wpage__i0__wininfo0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_wpage__i0__wininfo0; _j0++) {
              int _len_wpage__i0__wininfo_caption0 = 1;
          wpage[_i0].wininfo->caption = (char *) malloc(_len_wpage__i0__wininfo_caption0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_wpage__i0__wininfo_caption0; _j0++) {
            wpage[_i0].wininfo->caption[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          char * benchRet = WINHELP_GetCaption(wpage);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_wpage0; _aux++) {
          free(wpage[_aux].page);
          }
          for(int _aux = 0; _aux < _len_wpage0; _aux++) {
          free(wpage[_aux].wininfo);
          }
          free(wpage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
