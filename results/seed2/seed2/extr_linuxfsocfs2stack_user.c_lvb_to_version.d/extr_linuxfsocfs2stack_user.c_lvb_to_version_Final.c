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
       0            big-arr\n\
       1            big-arr-10x\n\
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
struct ocfs2_protocol_version {int /*<<< orphan*/  pv_minor; int /*<<< orphan*/  pv_major; } ;

/* Variables and functions */

__attribute__((used)) static void lvb_to_version(char *lvb, struct ocfs2_protocol_version *ver)
{
	struct ocfs2_protocol_version *pv =
		(struct ocfs2_protocol_version *)lvb;
	/*
	 * ocfs2_protocol_version has two u8 variables, so we don't
	 * need any endian conversion.
	 */
	ver->pv_major = pv->pv_major;
	ver->pv_minor = pv->pv_minor;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_lvb0 = 65025;
          char * lvb = (char *) malloc(_len_lvb0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lvb0; _i0++) {
            lvb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ver0 = 65025;
          struct ocfs2_protocol_version * ver = (struct ocfs2_protocol_version *) malloc(_len_ver0*sizeof(struct ocfs2_protocol_version));
          for(int _i0 = 0; _i0 < _len_ver0; _i0++) {
            ver[_i0].pv_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        ver[_i0].pv_major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lvb_to_version(lvb,ver);
          free(lvb);
          free(ver);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_lvb0 = 100;
          char * lvb = (char *) malloc(_len_lvb0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lvb0; _i0++) {
            lvb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ver0 = 100;
          struct ocfs2_protocol_version * ver = (struct ocfs2_protocol_version *) malloc(_len_ver0*sizeof(struct ocfs2_protocol_version));
          for(int _i0 = 0; _i0 < _len_ver0; _i0++) {
            ver[_i0].pv_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        ver[_i0].pv_major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lvb_to_version(lvb,ver);
          free(lvb);
          free(ver);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
