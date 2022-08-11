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
typedef  int /*<<< orphan*/  u16 ;
struct rvt_ibport {int /*<<< orphan*/ * pkey_table; } ;
struct rvt_dev_info {struct rvt_ibport** ports; } ;

/* Variables and functions */

int rvt_init_port(struct rvt_dev_info *rdi, struct rvt_ibport *port,
		  int port_index, u16 *pkey_table)
{

	rdi->ports[port_index] = port;
	rdi->ports[port_index]->pkey_table = pkey_table;

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
          int port_index = 100;
          int _len_rdi0 = 1;
          struct rvt_dev_info * rdi = (struct rvt_dev_info *) malloc(_len_rdi0*sizeof(struct rvt_dev_info));
          for(int _i0 = 0; _i0 < _len_rdi0; _i0++) {
              int _len_rdi__i0__ports0 = 1;
          rdi[_i0].ports = (struct rvt_ibport **) malloc(_len_rdi__i0__ports0*sizeof(struct rvt_ibport *));
          for(int _j0 = 0; _j0 < _len_rdi__i0__ports0; _j0++) {
            int _len_rdi__i0__ports1 = 1;
            rdi[_i0].ports[_j0] = (struct rvt_ibport *) malloc(_len_rdi__i0__ports1*sizeof(struct rvt_ibport));
            for(int _j1 = 0; _j1 < _len_rdi__i0__ports1; _j1++) {
                int _len_rdi__i0__ports__j0__pkey_table0 = 1;
          rdi[_i0].ports[_j0]->pkey_table = (int *) malloc(_len_rdi__i0__ports__j0__pkey_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdi__i0__ports__j0__pkey_table0; _j0++) {
            rdi[_i0].ports[_j0]->pkey_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_port0 = 1;
          struct rvt_ibport * port = (struct rvt_ibport *) malloc(_len_port0*sizeof(struct rvt_ibport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__pkey_table0 = 1;
          port[_i0].pkey_table = (int *) malloc(_len_port__i0__pkey_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port__i0__pkey_table0; _j0++) {
            port[_i0].pkey_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkey_table0 = 1;
          int * pkey_table = (int *) malloc(_len_pkey_table0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pkey_table0; _i0++) {
            pkey_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rvt_init_port(rdi,port,port_index,pkey_table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdi0; _aux++) {
          free(*(rdi[_aux].ports));
        free(rdi[_aux].ports);
          }
          free(rdi);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].pkey_table);
          }
          free(port);
          free(pkey_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int port_index = 255;
          int _len_rdi0 = 65025;
          struct rvt_dev_info * rdi = (struct rvt_dev_info *) malloc(_len_rdi0*sizeof(struct rvt_dev_info));
          for(int _i0 = 0; _i0 < _len_rdi0; _i0++) {
              int _len_rdi__i0__ports0 = 1;
          rdi[_i0].ports = (struct rvt_ibport **) malloc(_len_rdi__i0__ports0*sizeof(struct rvt_ibport *));
          for(int _j0 = 0; _j0 < _len_rdi__i0__ports0; _j0++) {
            int _len_rdi__i0__ports1 = 1;
            rdi[_i0].ports[_j0] = (struct rvt_ibport *) malloc(_len_rdi__i0__ports1*sizeof(struct rvt_ibport));
            for(int _j1 = 0; _j1 < _len_rdi__i0__ports1; _j1++) {
                int _len_rdi__i0__ports__j0__pkey_table0 = 1;
          rdi[_i0].ports[_j0]->pkey_table = (int *) malloc(_len_rdi__i0__ports__j0__pkey_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdi__i0__ports__j0__pkey_table0; _j0++) {
            rdi[_i0].ports[_j0]->pkey_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_port0 = 65025;
          struct rvt_ibport * port = (struct rvt_ibport *) malloc(_len_port0*sizeof(struct rvt_ibport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__pkey_table0 = 1;
          port[_i0].pkey_table = (int *) malloc(_len_port__i0__pkey_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port__i0__pkey_table0; _j0++) {
            port[_i0].pkey_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkey_table0 = 65025;
          int * pkey_table = (int *) malloc(_len_pkey_table0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pkey_table0; _i0++) {
            pkey_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rvt_init_port(rdi,port,port_index,pkey_table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdi0; _aux++) {
          free(*(rdi[_aux].ports));
        free(rdi[_aux].ports);
          }
          free(rdi);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].pkey_table);
          }
          free(port);
          free(pkey_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int port_index = 10;
          int _len_rdi0 = 100;
          struct rvt_dev_info * rdi = (struct rvt_dev_info *) malloc(_len_rdi0*sizeof(struct rvt_dev_info));
          for(int _i0 = 0; _i0 < _len_rdi0; _i0++) {
              int _len_rdi__i0__ports0 = 1;
          rdi[_i0].ports = (struct rvt_ibport **) malloc(_len_rdi__i0__ports0*sizeof(struct rvt_ibport *));
          for(int _j0 = 0; _j0 < _len_rdi__i0__ports0; _j0++) {
            int _len_rdi__i0__ports1 = 1;
            rdi[_i0].ports[_j0] = (struct rvt_ibport *) malloc(_len_rdi__i0__ports1*sizeof(struct rvt_ibport));
            for(int _j1 = 0; _j1 < _len_rdi__i0__ports1; _j1++) {
                int _len_rdi__i0__ports__j0__pkey_table0 = 1;
          rdi[_i0].ports[_j0]->pkey_table = (int *) malloc(_len_rdi__i0__ports__j0__pkey_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rdi__i0__ports__j0__pkey_table0; _j0++) {
            rdi[_i0].ports[_j0]->pkey_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_port0 = 100;
          struct rvt_ibport * port = (struct rvt_ibport *) malloc(_len_port0*sizeof(struct rvt_ibport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__pkey_table0 = 1;
          port[_i0].pkey_table = (int *) malloc(_len_port__i0__pkey_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port__i0__pkey_table0; _j0++) {
            port[_i0].pkey_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkey_table0 = 100;
          int * pkey_table = (int *) malloc(_len_pkey_table0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pkey_table0; _i0++) {
            pkey_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rvt_init_port(rdi,port,port_index,pkey_table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdi0; _aux++) {
          free(*(rdi[_aux].ports));
        free(rdi[_aux].ports);
          }
          free(rdi);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].pkey_table);
          }
          free(port);
          free(pkey_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
