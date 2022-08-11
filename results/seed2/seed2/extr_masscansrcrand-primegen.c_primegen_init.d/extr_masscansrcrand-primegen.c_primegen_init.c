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
struct TYPE_3__ {int L; int base; int* p; int num; int /*<<< orphan*/  pos; } ;
typedef  TYPE_1__ primegen ;

/* Variables and functions */
 int /*<<< orphan*/  PRIMEGEN_WORDS ; 

void primegen_init(primegen *pg)
{
  pg->L = 1;
  pg->base = 60;

  pg->pos = PRIMEGEN_WORDS;

  pg->p[0] = 59;
  pg->p[1] = 53;
  pg->p[2] = 47;
  pg->p[3] = 43;
  pg->p[4] = 41;
  pg->p[5] = 37;
  pg->p[6] = 31;
  pg->p[7] = 29;
  pg->p[8] = 23;
  pg->p[9] = 19;
  pg->p[10] = 17;
  pg->p[11] = 13;
  pg->p[12] = 11;
  pg->p[13] = 7;
  pg->p[14] = 5;
  pg->p[15] = 3;
  pg->p[16] = 2;

  pg->num = 17;
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
          int _len_pg0 = 1;
          struct TYPE_3__ * pg = (struct TYPE_3__ *) malloc(_len_pg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pg0; _i0++) {
            pg[_i0].L = ((-2 * (next_i()%2)) + 1) * next_i();
        pg[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pg__i0__p0 = 1;
          pg[_i0].p = (int *) malloc(_len_pg__i0__p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pg__i0__p0; _j0++) {
            pg[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pg[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
        pg[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          primegen_init(pg);
          for(int _aux = 0; _aux < _len_pg0; _aux++) {
          free(pg[_aux].p);
          }
          free(pg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pg0 = 65025;
          struct TYPE_3__ * pg = (struct TYPE_3__ *) malloc(_len_pg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pg0; _i0++) {
            pg[_i0].L = ((-2 * (next_i()%2)) + 1) * next_i();
        pg[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pg__i0__p0 = 1;
          pg[_i0].p = (int *) malloc(_len_pg__i0__p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pg__i0__p0; _j0++) {
            pg[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pg[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
        pg[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          primegen_init(pg);
          for(int _aux = 0; _aux < _len_pg0; _aux++) {
          free(pg[_aux].p);
          }
          free(pg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pg0 = 100;
          struct TYPE_3__ * pg = (struct TYPE_3__ *) malloc(_len_pg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pg0; _i0++) {
            pg[_i0].L = ((-2 * (next_i()%2)) + 1) * next_i();
        pg[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pg__i0__p0 = 1;
          pg[_i0].p = (int *) malloc(_len_pg__i0__p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pg__i0__p0; _j0++) {
            pg[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pg[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
        pg[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          primegen_init(pg);
          for(int _aux = 0; _aux < _len_pg0; _aux++) {
          free(pg[_aux].p);
          }
          free(pg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
