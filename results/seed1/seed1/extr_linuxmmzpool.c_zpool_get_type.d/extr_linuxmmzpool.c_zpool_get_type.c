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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct zpool {TYPE_1__* driver; } ;
struct TYPE_2__ {char const* type; } ;

/* Variables and functions */

const char *zpool_get_type(struct zpool *zpool)
{
	return zpool->driver->type;
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
          int _len_zpool0 = 1;
          struct zpool * zpool = (struct zpool *) malloc(_len_zpool0*sizeof(struct zpool));
          for(int _i0 = 0; _i0 < _len_zpool0; _i0++) {
              int _len_zpool__i0__driver0 = 1;
          zpool[_i0].driver = (struct TYPE_2__ *) malloc(_len_zpool__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_zpool__i0__driver0; _j0++) {
              int _len_zpool__i0__driver_type0 = 1;
          zpool[_i0].driver->type = (const char *) malloc(_len_zpool__i0__driver_type0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_zpool__i0__driver_type0; _j0++) {
            zpool[_i0].driver->type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = zpool_get_type(zpool);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_zpool0; _aux++) {
          free(zpool[_aux].driver);
          }
          free(zpool);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_zpool0 = 65025;
          struct zpool * zpool = (struct zpool *) malloc(_len_zpool0*sizeof(struct zpool));
          for(int _i0 = 0; _i0 < _len_zpool0; _i0++) {
              int _len_zpool__i0__driver0 = 1;
          zpool[_i0].driver = (struct TYPE_2__ *) malloc(_len_zpool__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_zpool__i0__driver0; _j0++) {
              int _len_zpool__i0__driver_type0 = 1;
          zpool[_i0].driver->type = (const char *) malloc(_len_zpool__i0__driver_type0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_zpool__i0__driver_type0; _j0++) {
            zpool[_i0].driver->type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = zpool_get_type(zpool);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_zpool0; _aux++) {
          free(zpool[_aux].driver);
          }
          free(zpool);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_zpool0 = 100;
          struct zpool * zpool = (struct zpool *) malloc(_len_zpool0*sizeof(struct zpool));
          for(int _i0 = 0; _i0 < _len_zpool0; _i0++) {
              int _len_zpool__i0__driver0 = 1;
          zpool[_i0].driver = (struct TYPE_2__ *) malloc(_len_zpool__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_zpool__i0__driver0; _j0++) {
              int _len_zpool__i0__driver_type0 = 1;
          zpool[_i0].driver->type = (const char *) malloc(_len_zpool__i0__driver_type0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_zpool__i0__driver_type0; _j0++) {
            zpool[_i0].driver->type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = zpool_get_type(zpool);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_zpool0; _aux++) {
          free(zpool[_aux].driver);
          }
          free(zpool);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
