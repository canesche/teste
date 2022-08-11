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

/* Variables and functions */
 int RCU_FANOUT ; 
 int nr_cpu_ids ; 
 scalar_t__ rcu_fanout_exact ; 
 int rcu_fanout_leaf ; 
 int rcu_num_lvls ; 

__attribute__((used)) static inline void rcu_init_levelspread(int *levelspread, const int *levelcnt)
{
	int i;

	if (rcu_fanout_exact) {
		levelspread[rcu_num_lvls - 1] = rcu_fanout_leaf;
		for (i = rcu_num_lvls - 2; i >= 0; i--)
			levelspread[i] = RCU_FANOUT;
	} else {
		int ccur;
		int cprv;

		cprv = nr_cpu_ids;
		for (i = rcu_num_lvls - 1; i >= 0; i--) {
			ccur = levelcnt[i];
			levelspread[i] = (cprv + ccur - 1) / ccur;
			cprv = ccur;
		}
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
          int _len_levelspread0 = 1;
          int * levelspread = (int *) malloc(_len_levelspread0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_levelspread0; _i0++) {
            levelspread[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_levelcnt0 = 1;
          const int * levelcnt = (const int *) malloc(_len_levelcnt0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_levelcnt0; _i0++) {
            levelcnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rcu_init_levelspread(levelspread,levelcnt);
          free(levelspread);
          free(levelcnt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_levelspread0 = 65025;
          int * levelspread = (int *) malloc(_len_levelspread0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_levelspread0; _i0++) {
            levelspread[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_levelcnt0 = 65025;
          const int * levelcnt = (const int *) malloc(_len_levelcnt0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_levelcnt0; _i0++) {
            levelcnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rcu_init_levelspread(levelspread,levelcnt);
          free(levelspread);
          free(levelcnt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_levelspread0 = 100;
          int * levelspread = (int *) malloc(_len_levelspread0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_levelspread0; _i0++) {
            levelspread[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_levelcnt0 = 100;
          const int * levelcnt = (const int *) malloc(_len_levelcnt0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_levelcnt0; _i0++) {
            levelcnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rcu_init_levelspread(levelspread,levelcnt);
          free(levelspread);
          free(levelcnt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
