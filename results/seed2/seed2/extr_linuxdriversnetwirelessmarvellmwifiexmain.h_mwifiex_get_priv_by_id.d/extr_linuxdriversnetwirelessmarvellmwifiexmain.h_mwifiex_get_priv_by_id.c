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
typedef  scalar_t__ u8 ;
struct mwifiex_private {scalar_t__ bss_num; scalar_t__ bss_type; } ;
struct mwifiex_adapter {int priv_num; struct mwifiex_private** priv; } ;

/* Variables and functions */

__attribute__((used)) static inline struct mwifiex_private *
mwifiex_get_priv_by_id(struct mwifiex_adapter *adapter,
		       u8 bss_num, u8 bss_type)
{
	int i;

	for (i = 0; i < adapter->priv_num; i++) {
		if (adapter->priv[i]) {
			if ((adapter->priv[i]->bss_num == bss_num) &&
			    (adapter->priv[i]->bss_type == bss_type))
				break;
		}
	}
	return ((i < adapter->priv_num) ? adapter->priv[i] : NULL);
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
          long bss_num = 100;
          long bss_type = 100;
          int _len_adapter0 = 1;
          struct mwifiex_adapter * adapter = (struct mwifiex_adapter *) malloc(_len_adapter0*sizeof(struct mwifiex_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].priv_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__priv0 = 1;
          adapter[_i0].priv = (struct mwifiex_private **) malloc(_len_adapter__i0__priv0*sizeof(struct mwifiex_private *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__priv0; _j0++) {
            int _len_adapter__i0__priv1 = 1;
            adapter[_i0].priv[_j0] = (struct mwifiex_private *) malloc(_len_adapter__i0__priv1*sizeof(struct mwifiex_private));
            for(int _j1 = 0; _j1 < _len_adapter__i0__priv1; _j1++) {
              adapter[_i0].priv[_j0]->bss_num = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->bss_type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mwifiex_private * benchRet = mwifiex_get_priv_by_id(adapter,bss_num,bss_type);
          printf("%ld\n", (*benchRet).bss_num);
          printf("%ld\n", (*benchRet).bss_type);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].priv));
        free(adapter[_aux].priv);
          }
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          long bss_num = 255;
          long bss_type = 255;
          int _len_adapter0 = 65025;
          struct mwifiex_adapter * adapter = (struct mwifiex_adapter *) malloc(_len_adapter0*sizeof(struct mwifiex_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].priv_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__priv0 = 1;
          adapter[_i0].priv = (struct mwifiex_private **) malloc(_len_adapter__i0__priv0*sizeof(struct mwifiex_private *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__priv0; _j0++) {
            int _len_adapter__i0__priv1 = 1;
            adapter[_i0].priv[_j0] = (struct mwifiex_private *) malloc(_len_adapter__i0__priv1*sizeof(struct mwifiex_private));
            for(int _j1 = 0; _j1 < _len_adapter__i0__priv1; _j1++) {
              adapter[_i0].priv[_j0]->bss_num = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->bss_type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mwifiex_private * benchRet = mwifiex_get_priv_by_id(adapter,bss_num,bss_type);
          printf("%ld\n", (*benchRet).bss_num);
          printf("%ld\n", (*benchRet).bss_type);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].priv));
        free(adapter[_aux].priv);
          }
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long bss_num = 10;
          long bss_type = 10;
          int _len_adapter0 = 100;
          struct mwifiex_adapter * adapter = (struct mwifiex_adapter *) malloc(_len_adapter0*sizeof(struct mwifiex_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].priv_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__priv0 = 1;
          adapter[_i0].priv = (struct mwifiex_private **) malloc(_len_adapter__i0__priv0*sizeof(struct mwifiex_private *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__priv0; _j0++) {
            int _len_adapter__i0__priv1 = 1;
            adapter[_i0].priv[_j0] = (struct mwifiex_private *) malloc(_len_adapter__i0__priv1*sizeof(struct mwifiex_private));
            for(int _j1 = 0; _j1 < _len_adapter__i0__priv1; _j1++) {
              adapter[_i0].priv[_j0]->bss_num = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->bss_type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mwifiex_private * benchRet = mwifiex_get_priv_by_id(adapter,bss_num,bss_type);
          printf("%ld\n", (*benchRet).bss_num);
          printf("%ld\n", (*benchRet).bss_type);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].priv));
        free(adapter[_aux].priv);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
