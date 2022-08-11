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
typedef  size_t u32 ;
struct TYPE_2__ {size_t dgst_pos0; size_t dgst_pos1; size_t dgst_pos2; size_t dgst_pos3; } ;
typedef  TYPE_1__ hashconfig_t ;

/* Variables and functions */

int sort_by_digest_p0p1 (const void *v1, const void *v2, void *v3)
{
  const u32 *d1 = (const u32 *) v1;
  const u32 *d2 = (const u32 *) v2;

  hashconfig_t *hashconfig = (hashconfig_t *) v3;

  const u32 dgst_pos0 = hashconfig->dgst_pos0;
  const u32 dgst_pos1 = hashconfig->dgst_pos1;
  const u32 dgst_pos2 = hashconfig->dgst_pos2;
  const u32 dgst_pos3 = hashconfig->dgst_pos3;

  if (d1[dgst_pos3] > d2[dgst_pos3]) return  1;
  if (d1[dgst_pos3] < d2[dgst_pos3]) return -1;
  if (d1[dgst_pos2] > d2[dgst_pos2]) return  1;
  if (d1[dgst_pos2] < d2[dgst_pos2]) return -1;
  if (d1[dgst_pos1] > d2[dgst_pos1]) return  1;
  if (d1[dgst_pos1] < d2[dgst_pos1]) return -1;
  if (d1[dgst_pos0] > d2[dgst_pos0]) return  1;
  if (d1[dgst_pos0] < d2[dgst_pos0]) return -1;

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
          int _len_v10 = 1;
          const void * v1 = (const void *) malloc(_len_v10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = 0;
          }
          int _len_v20 = 1;
          const void * v2 = (const void *) malloc(_len_v20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = 0;
          }
          void * v3;
          int benchRet = sort_by_digest_p0p1(v1,v2,v3);
          printf("%d\n", benchRet); 
          free(v1);
          free(v2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_v10 = 65025;
          const void * v1 = (const void *) malloc(_len_v10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = 0;
          }
          int _len_v20 = 65025;
          const void * v2 = (const void *) malloc(_len_v20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = 0;
          }
          void * v3;
          int benchRet = sort_by_digest_p0p1(v1,v2,v3);
          printf("%d\n", benchRet); 
          free(v1);
          free(v2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_v10 = 100;
          const void * v1 = (const void *) malloc(_len_v10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = 0;
          }
          int _len_v20 = 100;
          const void * v2 = (const void *) malloc(_len_v20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = 0;
          }
          void * v3;
          int benchRet = sort_by_digest_p0p1(v1,v2,v3);
          printf("%d\n", benchRet); 
          free(v1);
          free(v2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
