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

void discard_hunk_line(void *priv,
		       long ob, long on, long nb, long nn,
		       const char *func, long funclen)
{
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
          long ob = 100;
          long on = 100;
          long nb = 100;
          long nn = 100;
          long funclen = 100;
          void * priv;
          int _len_func0 = 1;
          const char * func = (const char *) malloc(_len_func0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          discard_hunk_line(priv,ob,on,nb,nn,func,funclen);
          free(func);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ob = 255;
          long on = 255;
          long nb = 255;
          long nn = 255;
          long funclen = 255;
          void * priv;
          int _len_func0 = 65025;
          const char * func = (const char *) malloc(_len_func0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          discard_hunk_line(priv,ob,on,nb,nn,func,funclen);
          free(func);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ob = 10;
          long on = 10;
          long nb = 10;
          long nn = 10;
          long funclen = 10;
          void * priv;
          int _len_func0 = 100;
          const char * func = (const char *) malloc(_len_func0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          discard_hunk_line(priv,ob,on,nb,nn,func,funclen);
          free(func);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
