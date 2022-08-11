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

__attribute__((used)) static inline void get_pretty_name(int is_func, const char** name, const char** name_p)
{
	switch (is_func) {
	case 0:	*name = "variable"; *name_p = ""; break;
	case 1:	*name = "function"; *name_p = "()"; break;
	default: *name = "(unknown reference)"; *name_p = ""; break;
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
          int is_func = 100;
          int _len_name0 = 1;
          const char ** name = (const char **) malloc(_len_name0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            int _len_name1 = 1;
            name[_i0] = (const char *) malloc(_len_name1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_name1; _i1++) {
              name[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_name_p0 = 1;
          const char ** name_p = (const char **) malloc(_len_name_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_name_p0; _i0++) {
            int _len_name_p1 = 1;
            name_p[_i0] = (const char *) malloc(_len_name_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_name_p1; _i1++) {
              name_p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          get_pretty_name(is_func,name,name_p);
          for(int i1 = 0; i1 < _len_name0; i1++) {
            int _len_name1 = 1;
              free(name[i1]);
          }
          free(name);
          for(int i1 = 0; i1 < _len_name_p0; i1++) {
            int _len_name_p1 = 1;
              free(name_p[i1]);
          }
          free(name_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int is_func = 255;
          int _len_name0 = 65025;
          const char ** name = (const char **) malloc(_len_name0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            int _len_name1 = 1;
            name[_i0] = (const char *) malloc(_len_name1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_name1; _i1++) {
              name[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_name_p0 = 65025;
          const char ** name_p = (const char **) malloc(_len_name_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_name_p0; _i0++) {
            int _len_name_p1 = 1;
            name_p[_i0] = (const char *) malloc(_len_name_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_name_p1; _i1++) {
              name_p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          get_pretty_name(is_func,name,name_p);
          for(int i1 = 0; i1 < _len_name0; i1++) {
            int _len_name1 = 1;
              free(name[i1]);
          }
          free(name);
          for(int i1 = 0; i1 < _len_name_p0; i1++) {
            int _len_name_p1 = 1;
              free(name_p[i1]);
          }
          free(name_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is_func = 10;
          int _len_name0 = 100;
          const char ** name = (const char **) malloc(_len_name0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            int _len_name1 = 1;
            name[_i0] = (const char *) malloc(_len_name1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_name1; _i1++) {
              name[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_name_p0 = 100;
          const char ** name_p = (const char **) malloc(_len_name_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_name_p0; _i0++) {
            int _len_name_p1 = 1;
            name_p[_i0] = (const char *) malloc(_len_name_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_name_p1; _i1++) {
              name_p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          get_pretty_name(is_func,name,name_p);
          for(int i1 = 0; i1 < _len_name0; i1++) {
            int _len_name1 = 1;
              free(name[i1]);
          }
          free(name);
          for(int i1 = 0; i1 < _len_name_p0; i1++) {
            int _len_name_p1 = 1;
              free(name_p[i1]);
          }
          free(name_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
