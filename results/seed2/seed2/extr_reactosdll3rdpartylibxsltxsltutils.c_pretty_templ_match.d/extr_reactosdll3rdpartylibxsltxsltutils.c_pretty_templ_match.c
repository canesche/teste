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
typedef  TYPE_1__* xsltTemplatePtr ;
struct TYPE_3__ {scalar_t__ mode; scalar_t__ match; } ;

/* Variables and functions */

__attribute__((used)) static char *
pretty_templ_match(xsltTemplatePtr templ) {
  static char dst[1001];
  char *src = (char *)templ->match;
  int i=0,j;

  /* strip white spaces */
  for (j=0; i<1000 && src[j]; i++,j++) {
      for(;src[j]==' ';j++);
      dst[i]=src[j];
  }
  if(i<998 && templ->mode) {
    /* append [mode] */
    dst[i++]='[';
    src=(char *)templ->mode;
    for (j=0; i<999 && src[j]; i++,j++) {
      dst[i]=src[j];
    }
    dst[i++]=']';
  }
  dst[i]='\0';
  return dst;
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
          int _len_templ0 = 1;
          struct TYPE_3__ * templ = (struct TYPE_3__ *) malloc(_len_templ0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_templ0; _i0++) {
            templ[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        templ[_i0].match = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = pretty_templ_match(templ);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(templ);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_templ0 = 65025;
          struct TYPE_3__ * templ = (struct TYPE_3__ *) malloc(_len_templ0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_templ0; _i0++) {
            templ[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        templ[_i0].match = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = pretty_templ_match(templ);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(templ);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_templ0 = 100;
          struct TYPE_3__ * templ = (struct TYPE_3__ *) malloc(_len_templ0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_templ0; _i0++) {
            templ[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        templ[_i0].match = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = pretty_templ_match(templ);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(templ);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
