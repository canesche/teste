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
struct iio_dev_attr {int address; TYPE_2__* c; } ;
typedef  enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
struct TYPE_4__ {TYPE_1__* event_spec; } ;
struct TYPE_3__ {int dir; } ;

/* Variables and functions */

__attribute__((used)) static enum iio_event_direction iio_ev_attr_dir(struct iio_dev_attr *attr)
{
	return attr->c->event_spec[attr->address & 0xffff].dir;
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
          int _len_attr0 = 1;
          struct iio_dev_attr * attr = (struct iio_dev_attr *) malloc(_len_attr0*sizeof(struct iio_dev_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_attr__i0__c0 = 1;
          attr[_i0].c = (struct TYPE_4__ *) malloc(_len_attr__i0__c0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_attr__i0__c0; _j0++) {
              int _len_attr__i0__c_event_spec0 = 1;
          attr[_i0].c->event_spec = (struct TYPE_3__ *) malloc(_len_attr__i0__c_event_spec0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_attr__i0__c_event_spec0; _j0++) {
            attr[_i0].c->event_spec->dir = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum iio_event_direction benchRet = iio_ev_attr_dir(attr);
          for(int _aux = 0; _aux < _len_attr0; _aux++) {
          free(attr[_aux].c);
          }
          free(attr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_attr0 = 65025;
          struct iio_dev_attr * attr = (struct iio_dev_attr *) malloc(_len_attr0*sizeof(struct iio_dev_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_attr__i0__c0 = 1;
          attr[_i0].c = (struct TYPE_4__ *) malloc(_len_attr__i0__c0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_attr__i0__c0; _j0++) {
              int _len_attr__i0__c_event_spec0 = 1;
          attr[_i0].c->event_spec = (struct TYPE_3__ *) malloc(_len_attr__i0__c_event_spec0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_attr__i0__c_event_spec0; _j0++) {
            attr[_i0].c->event_spec->dir = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum iio_event_direction benchRet = iio_ev_attr_dir(attr);
          for(int _aux = 0; _aux < _len_attr0; _aux++) {
          free(attr[_aux].c);
          }
          free(attr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_attr0 = 100;
          struct iio_dev_attr * attr = (struct iio_dev_attr *) malloc(_len_attr0*sizeof(struct iio_dev_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_attr__i0__c0 = 1;
          attr[_i0].c = (struct TYPE_4__ *) malloc(_len_attr__i0__c0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_attr__i0__c0; _j0++) {
              int _len_attr__i0__c_event_spec0 = 1;
          attr[_i0].c->event_spec = (struct TYPE_3__ *) malloc(_len_attr__i0__c_event_spec0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_attr__i0__c_event_spec0; _j0++) {
            attr[_i0].c->event_spec->dir = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum iio_event_direction benchRet = iio_ev_attr_dir(attr);
          for(int _aux = 0; _aux < _len_attr0; _aux++) {
          free(attr[_aux].c);
          }
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
