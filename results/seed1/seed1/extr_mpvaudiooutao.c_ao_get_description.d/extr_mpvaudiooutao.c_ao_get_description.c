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
struct ao {TYPE_1__* driver; } ;
struct TYPE_2__ {char const* description; } ;

/* Variables and functions */

const char *ao_get_description(struct ao *ao)
{
    return ao->driver->description;
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
          int _len_ao0 = 1;
          struct ao * ao = (struct ao *) malloc(_len_ao0*sizeof(struct ao));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
              int _len_ao__i0__driver0 = 1;
          ao[_i0].driver = (struct TYPE_2__ *) malloc(_len_ao__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ao__i0__driver0; _j0++) {
              int _len_ao__i0__driver_description0 = 1;
          ao[_i0].driver->description = (const char *) malloc(_len_ao__i0__driver_description0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ao__i0__driver_description0; _j0++) {
            ao[_i0].driver->description[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = ao_get_description(ao);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_ao0; _aux++) {
          free(ao[_aux].driver);
          }
          free(ao);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ao0 = 65025;
          struct ao * ao = (struct ao *) malloc(_len_ao0*sizeof(struct ao));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
              int _len_ao__i0__driver0 = 1;
          ao[_i0].driver = (struct TYPE_2__ *) malloc(_len_ao__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ao__i0__driver0; _j0++) {
              int _len_ao__i0__driver_description0 = 1;
          ao[_i0].driver->description = (const char *) malloc(_len_ao__i0__driver_description0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ao__i0__driver_description0; _j0++) {
            ao[_i0].driver->description[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = ao_get_description(ao);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_ao0; _aux++) {
          free(ao[_aux].driver);
          }
          free(ao);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ao0 = 100;
          struct ao * ao = (struct ao *) malloc(_len_ao0*sizeof(struct ao));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
              int _len_ao__i0__driver0 = 1;
          ao[_i0].driver = (struct TYPE_2__ *) malloc(_len_ao__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ao__i0__driver0; _j0++) {
              int _len_ao__i0__driver_description0 = 1;
          ao[_i0].driver->description = (const char *) malloc(_len_ao__i0__driver_description0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ao__i0__driver_description0; _j0++) {
            ao[_i0].driver->description[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = ao_get_description(ao);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_ao0; _aux++) {
          free(ao[_aux].driver);
          }
          free(ao);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
