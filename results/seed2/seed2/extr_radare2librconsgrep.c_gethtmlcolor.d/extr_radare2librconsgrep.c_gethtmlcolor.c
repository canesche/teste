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

/* Variables and functions */

__attribute__((used)) static const char *gethtmlcolor(const char ptrch, const char *def) {
	switch (ptrch) {
	case '0': return "#000"; // BLACK
	case '1': return "#f00"; // RED
	case '2': return "#0f0"; // GREEN
	case '3': return "#ff0"; // YELLOW
	case '4': return "#00f"; // BLUE
	case '5': return "#f0f"; // MAGENTA
	case '6': return "#aaf"; // TURQOISE
	case '7': return "#fff"; // WHITE
	case '8': return "#777"; // GREY
	case '9': break; // ???
	}
	return def;
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
          const char ptrch = 100;
          int _len_def0 = 1;
          const char * def = (const char *) malloc(_len_def0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_def0; _i0++) {
            def[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = gethtmlcolor(ptrch,def);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(def);
        
        break;
    }
    // big-arr
    case 1:
    {
          const char ptrch = 255;
          int _len_def0 = 65025;
          const char * def = (const char *) malloc(_len_def0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_def0; _i0++) {
            def[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = gethtmlcolor(ptrch,def);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(def);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const char ptrch = 10;
          int _len_def0 = 100;
          const char * def = (const char *) malloc(_len_def0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_def0; _i0++) {
            def[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = gethtmlcolor(ptrch,def);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(def);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
