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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct object {scalar_t__ type; unsigned int flags; } ;
struct TYPE_4__ {TYPE_1__* parsed_objects; } ;
struct TYPE_3__ {int obj_hash_size; struct object** obj_hash; } ;

/* Variables and functions */
 scalar_t__ OBJ_COMMIT ; 
 TYPE_2__* the_repository ; 

void clear_commit_marks_all(unsigned int flags)
{
	int i;

	for (i = 0; i < the_repository->parsed_objects->obj_hash_size; i++) {
		struct object *obj = the_repository->parsed_objects->obj_hash[i];
		if (obj && obj->type == OBJ_COMMIT)
			obj->flags &= ~flags;
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
          unsigned int flags = 100;
          clear_commit_marks_all(flags);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int flags = 255;
          clear_commit_marks_all(flags);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int flags = 10;
          clear_commit_marks_all(flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
