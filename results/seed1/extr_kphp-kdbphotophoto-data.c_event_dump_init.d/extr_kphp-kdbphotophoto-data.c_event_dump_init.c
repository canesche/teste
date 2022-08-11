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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int type_id; int /*<<< orphan*/  size; scalar_t__ tn; } ;
typedef  TYPE_1__ event_dump ;
struct TYPE_5__ {int /*<<< orphan*/  shifts_len; } ;

/* Variables and functions */
 TYPE_2__* types ; 

void event_dump_init (event_dump *d, int type_id) {
  d->tn = 0;
  d->type_id = type_id;
  d->size = types[type_id].shifts_len;
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
          int type_id = 100;
          int _len_d0 = 1;
          struct TYPE_4__ * d = (struct TYPE_4__ *) malloc(_len_d0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].type_id = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].tn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          event_dump_init(d,type_id);
          free(d);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type_id = 255;
          int _len_d0 = 65025;
          struct TYPE_4__ * d = (struct TYPE_4__ *) malloc(_len_d0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].type_id = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].tn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          event_dump_init(d,type_id);
          free(d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type_id = 10;
          int _len_d0 = 100;
          struct TYPE_4__ * d = (struct TYPE_4__ *) malloc(_len_d0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].type_id = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].tn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          event_dump_init(d,type_id);
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
