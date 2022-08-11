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
struct adi_port {struct adi* adi; } ;
struct adi {int ret; int* data; scalar_t__ idx; } ;

/* Variables and functions */

__attribute__((used)) static void adi_move_bits(struct adi_port *port, int length)
{
	int i;
	struct adi *adi = port->adi;

	adi[0].idx = adi[1].idx = 0;

	if (adi[0].ret <= 0 || adi[1].ret <= 0) return;
	if (adi[0].data[0] & 0x20 || ~adi[1].data[0] & 0x20) return;

	for (i = 1; i <= adi[1].ret; i++)
		adi[0].data[((length - 1) >> 1) + i + 1] = adi[1].data[i];

	adi[0].ret += adi[1].ret;
	adi[1].ret = -1;
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
          int length = 100;
          int _len_port0 = 1;
          struct adi_port * port = (struct adi_port *) malloc(_len_port0*sizeof(struct adi_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__adi0 = 1;
          port[_i0].adi = (struct adi *) malloc(_len_port__i0__adi0*sizeof(struct adi));
          for(int _j0 = 0; _j0 < _len_port__i0__adi0; _j0++) {
            port[_i0].adi->ret = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__adi_data0 = 1;
          port[_i0].adi->data = (int *) malloc(_len_port__i0__adi_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port__i0__adi_data0; _j0++) {
            port[_i0].adi->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        port[_i0].adi->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adi_move_bits(port,length);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].adi);
          }
          free(port);
        
        break;
    }
    // big-arr
    case 1:
    {
          int length = 255;
          int _len_port0 = 65025;
          struct adi_port * port = (struct adi_port *) malloc(_len_port0*sizeof(struct adi_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__adi0 = 1;
          port[_i0].adi = (struct adi *) malloc(_len_port__i0__adi0*sizeof(struct adi));
          for(int _j0 = 0; _j0 < _len_port__i0__adi0; _j0++) {
            port[_i0].adi->ret = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__adi_data0 = 1;
          port[_i0].adi->data = (int *) malloc(_len_port__i0__adi_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port__i0__adi_data0; _j0++) {
            port[_i0].adi->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        port[_i0].adi->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adi_move_bits(port,length);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].adi);
          }
          free(port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int length = 10;
          int _len_port0 = 100;
          struct adi_port * port = (struct adi_port *) malloc(_len_port0*sizeof(struct adi_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__adi0 = 1;
          port[_i0].adi = (struct adi *) malloc(_len_port__i0__adi0*sizeof(struct adi));
          for(int _j0 = 0; _j0 < _len_port__i0__adi0; _j0++) {
            port[_i0].adi->ret = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__adi_data0 = 1;
          port[_i0].adi->data = (int *) malloc(_len_port__i0__adi_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port__i0__adi_data0; _j0++) {
            port[_i0].adi->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        port[_i0].adi->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adi_move_bits(port,length);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].adi);
          }
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
