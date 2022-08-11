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
struct TYPE_2__ {scalar_t__ interface_id; scalar_t__ subnet_prefix; } ;
union ib_gid {TYPE_1__ global; } ;
typedef  scalar_t__ __be64 ;

/* Variables and functions */
 scalar_t__ IB_DEFAULT_GID_PREFIX ; 

__attribute__((used)) static int gid_ok(union ib_gid *gid, __be64 gid_prefix, __be64 id)
{
	return (gid->global.interface_id == id &&
		(gid->global.subnet_prefix == gid_prefix ||
		 gid->global.subnet_prefix == IB_DEFAULT_GID_PREFIX));
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
          long gid_prefix = 100;
          long id = 100;
          int _len_gid0 = 1;
          union ib_gid * gid = (union ib_gid *) malloc(_len_gid0*sizeof(union ib_gid));
          for(int _i0 = 0; _i0 < _len_gid0; _i0++) {
            gid[_i0] = 0;
          }
          int benchRet = gid_ok(gid,gid_prefix,id);
          printf("%d\n", benchRet); 
          free(gid);
        
        break;
    }
    // big-arr
    case 1:
    {
          long gid_prefix = 255;
          long id = 255;
          int _len_gid0 = 65025;
          union ib_gid * gid = (union ib_gid *) malloc(_len_gid0*sizeof(union ib_gid));
          for(int _i0 = 0; _i0 < _len_gid0; _i0++) {
            gid[_i0] = 0;
          }
          int benchRet = gid_ok(gid,gid_prefix,id);
          printf("%d\n", benchRet); 
          free(gid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long gid_prefix = 10;
          long id = 10;
          int _len_gid0 = 100;
          union ib_gid * gid = (union ib_gid *) malloc(_len_gid0*sizeof(union ib_gid));
          for(int _i0 = 0; _i0 < _len_gid0; _i0++) {
            gid[_i0] = 0;
          }
          int benchRet = gid_ok(gid,gid_prefix,id);
          printf("%d\n", benchRet); 
          free(gid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
