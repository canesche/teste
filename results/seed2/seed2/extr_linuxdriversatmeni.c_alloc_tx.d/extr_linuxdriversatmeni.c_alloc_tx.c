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
struct eni_tx {int /*<<< orphan*/  send; } ;
struct eni_dev {struct eni_tx* tx; } ;

/* Variables and functions */
 int NR_CHAN ; 

__attribute__((used)) static struct eni_tx *alloc_tx(struct eni_dev *eni_dev,int ubr)
{
	int i;

	for (i = !ubr; i < NR_CHAN; i++)
		if (!eni_dev->tx[i].send) return eni_dev->tx+i;
	return NULL;
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
          int ubr = 100;
          int _len_eni_dev0 = 1;
          struct eni_dev * eni_dev = (struct eni_dev *) malloc(_len_eni_dev0*sizeof(struct eni_dev));
          for(int _i0 = 0; _i0 < _len_eni_dev0; _i0++) {
              int _len_eni_dev__i0__tx0 = 1;
          eni_dev[_i0].tx = (struct eni_tx *) malloc(_len_eni_dev__i0__tx0*sizeof(struct eni_tx));
          for(int _j0 = 0; _j0 < _len_eni_dev__i0__tx0; _j0++) {
            eni_dev[_i0].tx->send = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct eni_tx * benchRet = alloc_tx(eni_dev,ubr);
          printf("%d\n", (*benchRet).send);
          for(int _aux = 0; _aux < _len_eni_dev0; _aux++) {
          free(eni_dev[_aux].tx);
          }
          free(eni_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ubr = 255;
          int _len_eni_dev0 = 65025;
          struct eni_dev * eni_dev = (struct eni_dev *) malloc(_len_eni_dev0*sizeof(struct eni_dev));
          for(int _i0 = 0; _i0 < _len_eni_dev0; _i0++) {
              int _len_eni_dev__i0__tx0 = 1;
          eni_dev[_i0].tx = (struct eni_tx *) malloc(_len_eni_dev__i0__tx0*sizeof(struct eni_tx));
          for(int _j0 = 0; _j0 < _len_eni_dev__i0__tx0; _j0++) {
            eni_dev[_i0].tx->send = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct eni_tx * benchRet = alloc_tx(eni_dev,ubr);
          printf("%d\n", (*benchRet).send);
          for(int _aux = 0; _aux < _len_eni_dev0; _aux++) {
          free(eni_dev[_aux].tx);
          }
          free(eni_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ubr = 10;
          int _len_eni_dev0 = 100;
          struct eni_dev * eni_dev = (struct eni_dev *) malloc(_len_eni_dev0*sizeof(struct eni_dev));
          for(int _i0 = 0; _i0 < _len_eni_dev0; _i0++) {
              int _len_eni_dev__i0__tx0 = 1;
          eni_dev[_i0].tx = (struct eni_tx *) malloc(_len_eni_dev__i0__tx0*sizeof(struct eni_tx));
          for(int _j0 = 0; _j0 < _len_eni_dev__i0__tx0; _j0++) {
            eni_dev[_i0].tx->send = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct eni_tx * benchRet = alloc_tx(eni_dev,ubr);
          printf("%d\n", (*benchRet).send);
          for(int _aux = 0; _aux < _len_eni_dev0; _aux++) {
          free(eni_dev[_aux].tx);
          }
          free(eni_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
