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
struct parport_gsc_private {unsigned char const ctr; } ;
struct parport {TYPE_1__* physport; } ;
struct TYPE_2__ {struct parport_gsc_private* private_data; } ;

/* Variables and functions */
 unsigned char PARPORT_CONTROL_AUTOFD ; 
 unsigned char PARPORT_CONTROL_INIT ; 
 unsigned char PARPORT_CONTROL_SELECT ; 
 unsigned char PARPORT_CONTROL_STROBE ; 

__attribute__((used)) static inline unsigned char parport_gsc_read_control(struct parport *p)
{
	const unsigned char rm = (PARPORT_CONTROL_STROBE |
				  PARPORT_CONTROL_AUTOFD |
				  PARPORT_CONTROL_INIT |
				  PARPORT_CONTROL_SELECT);
	const struct parport_gsc_private *priv = p->physport->private_data;
	return priv->ctr & rm; /* Use soft copy */
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
          int _len_p0 = 1;
          struct parport * p = (struct parport *) malloc(_len_p0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__physport0 = 1;
          p[_i0].physport = (struct TYPE_2__ *) malloc(_len_p__i0__physport0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p__i0__physport0; _j0++) {
              int _len_p__i0__physport_private_data0 = 1;
          p[_i0].physport->private_data = (struct parport_gsc_private *) malloc(_len_p__i0__physport_private_data0*sizeof(struct parport_gsc_private));
          for(int _j0 = 0; _j0 < _len_p__i0__physport_private_data0; _j0++) {
            p[_i0].physport->private_data->ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned char benchRet = parport_gsc_read_control(p);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].physport);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct parport * p = (struct parport *) malloc(_len_p0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__physport0 = 1;
          p[_i0].physport = (struct TYPE_2__ *) malloc(_len_p__i0__physport0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p__i0__physport0; _j0++) {
              int _len_p__i0__physport_private_data0 = 1;
          p[_i0].physport->private_data = (struct parport_gsc_private *) malloc(_len_p__i0__physport_private_data0*sizeof(struct parport_gsc_private));
          for(int _j0 = 0; _j0 < _len_p__i0__physport_private_data0; _j0++) {
            p[_i0].physport->private_data->ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned char benchRet = parport_gsc_read_control(p);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].physport);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct parport * p = (struct parport *) malloc(_len_p0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__physport0 = 1;
          p[_i0].physport = (struct TYPE_2__ *) malloc(_len_p__i0__physport0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p__i0__physport0; _j0++) {
              int _len_p__i0__physport_private_data0 = 1;
          p[_i0].physport->private_data = (struct parport_gsc_private *) malloc(_len_p__i0__physport_private_data0*sizeof(struct parport_gsc_private));
          for(int _j0 = 0; _j0 < _len_p__i0__physport_private_data0; _j0++) {
            p[_i0].physport->private_data->ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned char benchRet = parport_gsc_read_control(p);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].physport);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
