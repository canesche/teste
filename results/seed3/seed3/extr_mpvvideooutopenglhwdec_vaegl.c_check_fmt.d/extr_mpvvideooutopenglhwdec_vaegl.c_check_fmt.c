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
struct ra_hwdec_mapper {TYPE_1__* owner; } ;
struct priv_owner {int* formats; } ;
struct TYPE_2__ {struct priv_owner* priv; } ;

/* Variables and functions */

__attribute__((used)) static bool check_fmt(struct ra_hwdec_mapper *mapper, int fmt)
{
    struct priv_owner *p_owner = mapper->owner->priv;
    for (int n = 0; p_owner->formats && p_owner->formats[n]; n++) {
        if (p_owner->formats[n] == fmt)
            return true;
    }
    return false;
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
          int fmt = 100;
          int _len_mapper0 = 1;
          struct ra_hwdec_mapper * mapper = (struct ra_hwdec_mapper *) malloc(_len_mapper0*sizeof(struct ra_hwdec_mapper));
          for(int _i0 = 0; _i0 < _len_mapper0; _i0++) {
              int _len_mapper__i0__owner0 = 1;
          mapper[_i0].owner = (struct TYPE_2__ *) malloc(_len_mapper__i0__owner0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mapper__i0__owner0; _j0++) {
              int _len_mapper__i0__owner_priv0 = 1;
          mapper[_i0].owner->priv = (struct priv_owner *) malloc(_len_mapper__i0__owner_priv0*sizeof(struct priv_owner));
          for(int _j0 = 0; _j0 < _len_mapper__i0__owner_priv0; _j0++) {
              int _len_mapper__i0__owner_priv_formats0 = 1;
          mapper[_i0].owner->priv->formats = (int *) malloc(_len_mapper__i0__owner_priv_formats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mapper__i0__owner_priv_formats0; _j0++) {
            mapper[_i0].owner->priv->formats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = check_fmt(mapper,fmt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mapper0; _aux++) {
          free(mapper[_aux].owner);
          }
          free(mapper);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fmt = 255;
          int _len_mapper0 = 65025;
          struct ra_hwdec_mapper * mapper = (struct ra_hwdec_mapper *) malloc(_len_mapper0*sizeof(struct ra_hwdec_mapper));
          for(int _i0 = 0; _i0 < _len_mapper0; _i0++) {
              int _len_mapper__i0__owner0 = 1;
          mapper[_i0].owner = (struct TYPE_2__ *) malloc(_len_mapper__i0__owner0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mapper__i0__owner0; _j0++) {
              int _len_mapper__i0__owner_priv0 = 1;
          mapper[_i0].owner->priv = (struct priv_owner *) malloc(_len_mapper__i0__owner_priv0*sizeof(struct priv_owner));
          for(int _j0 = 0; _j0 < _len_mapper__i0__owner_priv0; _j0++) {
              int _len_mapper__i0__owner_priv_formats0 = 1;
          mapper[_i0].owner->priv->formats = (int *) malloc(_len_mapper__i0__owner_priv_formats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mapper__i0__owner_priv_formats0; _j0++) {
            mapper[_i0].owner->priv->formats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = check_fmt(mapper,fmt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mapper0; _aux++) {
          free(mapper[_aux].owner);
          }
          free(mapper);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fmt = 10;
          int _len_mapper0 = 100;
          struct ra_hwdec_mapper * mapper = (struct ra_hwdec_mapper *) malloc(_len_mapper0*sizeof(struct ra_hwdec_mapper));
          for(int _i0 = 0; _i0 < _len_mapper0; _i0++) {
              int _len_mapper__i0__owner0 = 1;
          mapper[_i0].owner = (struct TYPE_2__ *) malloc(_len_mapper__i0__owner0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mapper__i0__owner0; _j0++) {
              int _len_mapper__i0__owner_priv0 = 1;
          mapper[_i0].owner->priv = (struct priv_owner *) malloc(_len_mapper__i0__owner_priv0*sizeof(struct priv_owner));
          for(int _j0 = 0; _j0 < _len_mapper__i0__owner_priv0; _j0++) {
              int _len_mapper__i0__owner_priv_formats0 = 1;
          mapper[_i0].owner->priv->formats = (int *) malloc(_len_mapper__i0__owner_priv_formats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mapper__i0__owner_priv_formats0; _j0++) {
            mapper[_i0].owner->priv->formats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = check_fmt(mapper,fmt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mapper0; _aux++) {
          free(mapper[_aux].owner);
          }
          free(mapper);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
