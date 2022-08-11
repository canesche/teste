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
struct ArcProto {int dummy; } ;

/* Variables and functions */
 struct ArcProto* arc_bcast_proto ; 
 struct ArcProto* arc_proto_default ; 
 struct ArcProto** arc_proto_map ; 
 struct ArcProto arc_proto_null ; 
 struct ArcProto* arc_raw_proto ; 

void arcnet_unregister_proto(struct ArcProto *proto)
{
	int count;

	if (arc_proto_default == proto)
		arc_proto_default = &arc_proto_null;
	if (arc_bcast_proto == proto)
		arc_bcast_proto = arc_proto_default;
	if (arc_raw_proto == proto)
		arc_raw_proto = arc_proto_default;

	for (count = 0; count < 256; count++) {
		if (arc_proto_map[count] == proto)
			arc_proto_map[count] = arc_proto_default;
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
          int _len_proto0 = 1;
          struct ArcProto * proto = (struct ArcProto *) malloc(_len_proto0*sizeof(struct ArcProto));
          for(int _i0 = 0; _i0 < _len_proto0; _i0++) {
            proto[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arcnet_unregister_proto(proto);
          free(proto);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_proto0 = 65025;
          struct ArcProto * proto = (struct ArcProto *) malloc(_len_proto0*sizeof(struct ArcProto));
          for(int _i0 = 0; _i0 < _len_proto0; _i0++) {
            proto[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arcnet_unregister_proto(proto);
          free(proto);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_proto0 = 100;
          struct ArcProto * proto = (struct ArcProto *) malloc(_len_proto0*sizeof(struct ArcProto));
          for(int _i0 = 0; _i0 < _len_proto0; _i0++) {
            proto[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arcnet_unregister_proto(proto);
          free(proto);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
