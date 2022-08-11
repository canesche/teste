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
       3            linked\n\
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
struct parport_uss720_private {int /*<<< orphan*/ * reg; } ;
struct TYPE_3__ {int /*<<< orphan*/  ecr; int /*<<< orphan*/  ctr; } ;
struct TYPE_4__ {TYPE_1__ pc; } ;
struct parport_state {TYPE_2__ u; } ;
struct parport {struct parport_uss720_private* private_data; } ;

/* Variables and functions */

__attribute__((used)) static void parport_uss720_save_state(struct parport *pp, struct parport_state *s)
{
	struct parport_uss720_private *priv = pp->private_data;	

#if 0
	if (get_1284_register(pp, 2, NULL, GFP_ATOMIC))
		return;
#endif
	s->u.pc.ctr = priv->reg[1];
	s->u.pc.ecr = priv->reg[2];
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
          int _len_pp0 = 1;
          struct parport * pp = (struct parport *) malloc(_len_pp0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
              int _len_pp__i0__private_data0 = 1;
          pp[_i0].private_data = (struct parport_uss720_private *) malloc(_len_pp__i0__private_data0*sizeof(struct parport_uss720_private));
          for(int _j0 = 0; _j0 < _len_pp__i0__private_data0; _j0++) {
              int _len_pp__i0__private_data_reg0 = 1;
          pp[_i0].private_data->reg = (int *) malloc(_len_pp__i0__private_data_reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pp__i0__private_data_reg0; _j0++) {
            pp[_i0].private_data->reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 1;
          struct parport_state * s = (struct parport_state *) malloc(_len_s0*sizeof(struct parport_state));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].u.pc.ecr = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].u.pc.ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parport_uss720_save_state(pp,s);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].private_data);
          }
          free(pp);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pp0 = 65025;
          struct parport * pp = (struct parport *) malloc(_len_pp0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
              int _len_pp__i0__private_data0 = 1;
          pp[_i0].private_data = (struct parport_uss720_private *) malloc(_len_pp__i0__private_data0*sizeof(struct parport_uss720_private));
          for(int _j0 = 0; _j0 < _len_pp__i0__private_data0; _j0++) {
              int _len_pp__i0__private_data_reg0 = 1;
          pp[_i0].private_data->reg = (int *) malloc(_len_pp__i0__private_data_reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pp__i0__private_data_reg0; _j0++) {
            pp[_i0].private_data->reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 65025;
          struct parport_state * s = (struct parport_state *) malloc(_len_s0*sizeof(struct parport_state));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].u.pc.ecr = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].u.pc.ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parport_uss720_save_state(pp,s);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].private_data);
          }
          free(pp);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pp0 = 100;
          struct parport * pp = (struct parport *) malloc(_len_pp0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
              int _len_pp__i0__private_data0 = 1;
          pp[_i0].private_data = (struct parport_uss720_private *) malloc(_len_pp__i0__private_data0*sizeof(struct parport_uss720_private));
          for(int _j0 = 0; _j0 < _len_pp__i0__private_data0; _j0++) {
              int _len_pp__i0__private_data_reg0 = 1;
          pp[_i0].private_data->reg = (int *) malloc(_len_pp__i0__private_data_reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pp__i0__private_data_reg0; _j0++) {
            pp[_i0].private_data->reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 100;
          struct parport_state * s = (struct parport_state *) malloc(_len_s0*sizeof(struct parport_state));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].u.pc.ecr = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].u.pc.ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parport_uss720_save_state(pp,s);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].private_data);
          }
          free(pp);
          free(s);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_pp0 = 1;
          struct parport * pp = (struct parport *) malloc(_len_pp0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
              int _len_pp__i0__private_data0 = 1;
          pp[_i0].private_data = (struct parport_uss720_private *) malloc(_len_pp__i0__private_data0*sizeof(struct parport_uss720_private));
          for(int _j0 = 0; _j0 < _len_pp__i0__private_data0; _j0++) {
              int _len_pp__i0__private_data_reg0 = 1;
          pp[_i0].private_data->reg = (int *) malloc(_len_pp__i0__private_data_reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pp__i0__private_data_reg0; _j0++) {
            pp[_i0].private_data->reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 1;
          struct parport_state * s = (struct parport_state *) malloc(_len_s0*sizeof(struct parport_state));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].u.pc.ecr = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].u.pc.ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parport_uss720_save_state(pp,s);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].private_data);
          }
          free(pp);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
