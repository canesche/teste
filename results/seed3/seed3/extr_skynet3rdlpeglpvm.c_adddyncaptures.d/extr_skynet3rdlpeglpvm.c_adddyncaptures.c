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
struct TYPE_3__ {int siz; int idx; char const* s; int /*<<< orphan*/  kind; } ;
typedef  TYPE_1__ Capture ;

/* Variables and functions */
 int /*<<< orphan*/  Cclose ; 
 int /*<<< orphan*/  Cgroup ; 
 int /*<<< orphan*/  Cruntime ; 

__attribute__((used)) static void adddyncaptures (const char *s, Capture *base, int n, int fd) {
  int i;
  base[0].kind = Cgroup;  /* create group capture */
  base[0].siz = 0;
  base[0].idx = 0;  /* make it an anonymous group */
  for (i = 1; i <= n; i++) {  /* add runtime captures */
    base[i].kind = Cruntime;
    base[i].siz = 1;  /* mark it as closed */
    base[i].idx = fd + i - 1;  /* stack index of capture value */
    base[i].s = s;
  }
  base[i].kind = Cclose;  /* close group */
  base[i].siz = 1;
  base[i].s = s;
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
          int n = 100;
          int fd = 100;
          int _len_s0 = 1;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 1;
          struct TYPE_3__ * base = (struct TYPE_3__ *) malloc(_len_base0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].siz = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_base__i0__s0 = 1;
          base[_i0].s = (const char *) malloc(_len_base__i0__s0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_base__i0__s0; _j0++) {
            base[_i0].s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        base[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adddyncaptures(s,base,n,fd);
          free(s);
          for(int _aux = 0; _aux < _len_base0; _aux++) {
          free(base[_aux].s);
          }
          free(base);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int fd = 255;
          int _len_s0 = 65025;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 65025;
          struct TYPE_3__ * base = (struct TYPE_3__ *) malloc(_len_base0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].siz = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_base__i0__s0 = 1;
          base[_i0].s = (const char *) malloc(_len_base__i0__s0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_base__i0__s0; _j0++) {
            base[_i0].s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        base[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adddyncaptures(s,base,n,fd);
          free(s);
          for(int _aux = 0; _aux < _len_base0; _aux++) {
          free(base[_aux].s);
          }
          free(base);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int fd = 10;
          int _len_s0 = 100;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 100;
          struct TYPE_3__ * base = (struct TYPE_3__ *) malloc(_len_base0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].siz = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_base__i0__s0 = 1;
          base[_i0].s = (const char *) malloc(_len_base__i0__s0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_base__i0__s0; _j0++) {
            base[_i0].s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        base[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adddyncaptures(s,base,n,fd);
          free(s);
          for(int _aux = 0; _aux < _len_base0; _aux++) {
          free(base[_aux].s);
          }
          free(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
