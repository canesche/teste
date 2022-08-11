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
struct ccdrbg_nisthmac_state {int dummy; } ;
struct ccdrbg_nisthmac_custom {int dummy; } ;
struct ccdrbg_info {int size; struct ccdrbg_nisthmac_custom const* custom; int /*<<< orphan*/  done; int /*<<< orphan*/  reseed; int /*<<< orphan*/  generate; int /*<<< orphan*/  init; } ;

/* Variables and functions */
 int /*<<< orphan*/  done ; 
 int /*<<< orphan*/  generate ; 
 int /*<<< orphan*/  init ; 
 int /*<<< orphan*/  reseed ; 

void ccdrbg_factory_nisthmac(struct ccdrbg_info *info, const struct ccdrbg_nisthmac_custom *custom)
{
    info->size = sizeof(struct ccdrbg_nisthmac_state) + sizeof(struct ccdrbg_nisthmac_custom);
    info->init = init;
    info->generate = generate;
    info->reseed = reseed;
    info->done = done;
    info->custom = custom;
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
          int _len_info0 = 1;
          struct ccdrbg_info * info = (struct ccdrbg_info *) malloc(_len_info0*sizeof(struct ccdrbg_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__custom0 = 1;
          info[_i0].custom = (const struct ccdrbg_nisthmac_custom *) malloc(_len_info__i0__custom0*sizeof(const struct ccdrbg_nisthmac_custom));
          for(int _j0 = 0; _j0 < _len_info__i0__custom0; _j0++) {
              }
        info[_i0].done = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].reseed = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].generate = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_custom0 = 1;
          const struct ccdrbg_nisthmac_custom * custom = (const struct ccdrbg_nisthmac_custom *) malloc(_len_custom0*sizeof(const struct ccdrbg_nisthmac_custom));
          for(int _i0 = 0; _i0 < _len_custom0; _i0++) {
              }
          ccdrbg_factory_nisthmac(info,custom);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].custom);
          }
          free(info);
          free(custom);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct ccdrbg_info * info = (struct ccdrbg_info *) malloc(_len_info0*sizeof(struct ccdrbg_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__custom0 = 1;
          info[_i0].custom = (const struct ccdrbg_nisthmac_custom *) malloc(_len_info__i0__custom0*sizeof(const struct ccdrbg_nisthmac_custom));
          for(int _j0 = 0; _j0 < _len_info__i0__custom0; _j0++) {
              }
        info[_i0].done = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].reseed = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].generate = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_custom0 = 65025;
          const struct ccdrbg_nisthmac_custom * custom = (const struct ccdrbg_nisthmac_custom *) malloc(_len_custom0*sizeof(const struct ccdrbg_nisthmac_custom));
          for(int _i0 = 0; _i0 < _len_custom0; _i0++) {
              }
          ccdrbg_factory_nisthmac(info,custom);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].custom);
          }
          free(info);
          free(custom);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct ccdrbg_info * info = (struct ccdrbg_info *) malloc(_len_info0*sizeof(struct ccdrbg_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__custom0 = 1;
          info[_i0].custom = (const struct ccdrbg_nisthmac_custom *) malloc(_len_info__i0__custom0*sizeof(const struct ccdrbg_nisthmac_custom));
          for(int _j0 = 0; _j0 < _len_info__i0__custom0; _j0++) {
              }
        info[_i0].done = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].reseed = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].generate = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_custom0 = 100;
          const struct ccdrbg_nisthmac_custom * custom = (const struct ccdrbg_nisthmac_custom *) malloc(_len_custom0*sizeof(const struct ccdrbg_nisthmac_custom));
          for(int _i0 = 0; _i0 < _len_custom0; _i0++) {
              }
          ccdrbg_factory_nisthmac(info,custom);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].custom);
          }
          free(info);
          free(custom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
