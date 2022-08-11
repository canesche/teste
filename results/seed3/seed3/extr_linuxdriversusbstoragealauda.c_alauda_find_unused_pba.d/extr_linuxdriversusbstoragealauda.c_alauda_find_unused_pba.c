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
typedef  scalar_t__ u16 ;
struct alauda_media_info {unsigned int zonesize; unsigned int zoneshift; scalar_t__** pba_to_lba; } ;

/* Variables and functions */
 scalar_t__ UNDEF ; 

__attribute__((used)) static u16 alauda_find_unused_pba(struct alauda_media_info *info,
	unsigned int zone)
{
	u16 *pba_to_lba = info->pba_to_lba[zone];
	unsigned int i;

	for (i = 0; i < info->zonesize; i++)
		if (pba_to_lba[i] == UNDEF)
			return (zone << info->zoneshift) + i;

	return 0;
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
          unsigned int zone = 100;
          int _len_info0 = 1;
          struct alauda_media_info * info = (struct alauda_media_info *) malloc(_len_info0*sizeof(struct alauda_media_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].zonesize = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].zoneshift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__pba_to_lba0 = 1;
          info[_i0].pba_to_lba = (long **) malloc(_len_info__i0__pba_to_lba0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_info__i0__pba_to_lba0; _j0++) {
            int _len_info__i0__pba_to_lba1 = 1;
            info[_i0].pba_to_lba[_j0] = (long *) malloc(_len_info__i0__pba_to_lba1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_info__i0__pba_to_lba1; _j1++) {
              info[_i0].pba_to_lba[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          long benchRet = alauda_find_unused_pba(info,zone);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(*(info[_aux].pba_to_lba));
        free(info[_aux].pba_to_lba);
          }
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int zone = 255;
          int _len_info0 = 65025;
          struct alauda_media_info * info = (struct alauda_media_info *) malloc(_len_info0*sizeof(struct alauda_media_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].zonesize = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].zoneshift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__pba_to_lba0 = 1;
          info[_i0].pba_to_lba = (long **) malloc(_len_info__i0__pba_to_lba0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_info__i0__pba_to_lba0; _j0++) {
            int _len_info__i0__pba_to_lba1 = 1;
            info[_i0].pba_to_lba[_j0] = (long *) malloc(_len_info__i0__pba_to_lba1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_info__i0__pba_to_lba1; _j1++) {
              info[_i0].pba_to_lba[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          long benchRet = alauda_find_unused_pba(info,zone);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(*(info[_aux].pba_to_lba));
        free(info[_aux].pba_to_lba);
          }
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int zone = 10;
          int _len_info0 = 100;
          struct alauda_media_info * info = (struct alauda_media_info *) malloc(_len_info0*sizeof(struct alauda_media_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].zonesize = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].zoneshift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__pba_to_lba0 = 1;
          info[_i0].pba_to_lba = (long **) malloc(_len_info__i0__pba_to_lba0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_info__i0__pba_to_lba0; _j0++) {
            int _len_info__i0__pba_to_lba1 = 1;
            info[_i0].pba_to_lba[_j0] = (long *) malloc(_len_info__i0__pba_to_lba1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_info__i0__pba_to_lba1; _j1++) {
              info[_i0].pba_to_lba[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          long benchRet = alauda_find_unused_pba(info,zone);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(*(info[_aux].pba_to_lba));
        free(info[_aux].pba_to_lba);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
