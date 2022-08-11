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
       3            linked\n\
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
struct acm_wb {int use; scalar_t__ len; } ;
struct acm {struct acm_wb* wb; } ;

/* Variables and functions */
 int ACM_NW ; 

__attribute__((used)) static int acm_wb_alloc(struct acm *acm)
{
	int i, wbn;
	struct acm_wb *wb;

	wbn = 0;
	i = 0;
	for (;;) {
		wb = &acm->wb[wbn];
		if (!wb->use) {
			wb->use = 1;
			wb->len = 0;
			return wbn;
		}
		wbn = (wbn + 1) % ACM_NW;
		if (++i >= ACM_NW)
			return -1;
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
          int _len_acm0 = 1;
          struct acm * acm = (struct acm *) malloc(_len_acm0*sizeof(struct acm));
          for(int _i0 = 0; _i0 < _len_acm0; _i0++) {
              int _len_acm__i0__wb0 = 1;
          acm[_i0].wb = (struct acm_wb *) malloc(_len_acm__i0__wb0*sizeof(struct acm_wb));
          for(int _j0 = 0; _j0 < _len_acm__i0__wb0; _j0++) {
            acm[_i0].wb->use = ((-2 * (next_i()%2)) + 1) * next_i();
        acm[_i0].wb->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acm_wb_alloc(acm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_acm0; _aux++) {
          free(acm[_aux].wb);
          }
          free(acm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_acm0 = 65025;
          struct acm * acm = (struct acm *) malloc(_len_acm0*sizeof(struct acm));
          for(int _i0 = 0; _i0 < _len_acm0; _i0++) {
              int _len_acm__i0__wb0 = 1;
          acm[_i0].wb = (struct acm_wb *) malloc(_len_acm__i0__wb0*sizeof(struct acm_wb));
          for(int _j0 = 0; _j0 < _len_acm__i0__wb0; _j0++) {
            acm[_i0].wb->use = ((-2 * (next_i()%2)) + 1) * next_i();
        acm[_i0].wb->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acm_wb_alloc(acm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_acm0; _aux++) {
          free(acm[_aux].wb);
          }
          free(acm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_acm0 = 100;
          struct acm * acm = (struct acm *) malloc(_len_acm0*sizeof(struct acm));
          for(int _i0 = 0; _i0 < _len_acm0; _i0++) {
              int _len_acm__i0__wb0 = 1;
          acm[_i0].wb = (struct acm_wb *) malloc(_len_acm__i0__wb0*sizeof(struct acm_wb));
          for(int _j0 = 0; _j0 < _len_acm__i0__wb0; _j0++) {
            acm[_i0].wb->use = ((-2 * (next_i()%2)) + 1) * next_i();
        acm[_i0].wb->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acm_wb_alloc(acm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_acm0; _aux++) {
          free(acm[_aux].wb);
          }
          free(acm);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_acm0 = 1;
          struct acm * acm = (struct acm *) malloc(_len_acm0*sizeof(struct acm));
          for(int _i0 = 0; _i0 < _len_acm0; _i0++) {
              int _len_acm__i0__wb0 = 1;
          acm[_i0].wb = (struct acm_wb *) malloc(_len_acm__i0__wb0*sizeof(struct acm_wb));
          for(int _j0 = 0; _j0 < _len_acm__i0__wb0; _j0++) {
            acm[_i0].wb->use = ((-2 * (next_i()%2)) + 1) * next_i();
        acm[_i0].wb->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acm_wb_alloc(acm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_acm0; _aux++) {
          free(acm[_aux].wb);
          }
          free(acm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
