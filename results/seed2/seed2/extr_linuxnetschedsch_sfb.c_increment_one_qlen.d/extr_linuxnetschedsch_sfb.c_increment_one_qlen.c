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
typedef  size_t u32 ;
struct sfb_sched_data {TYPE_1__* bins; } ;
struct sfb_bucket {int qlen; } ;
struct TYPE_2__ {struct sfb_bucket** bins; } ;

/* Variables and functions */
 size_t SFB_BUCKET_MASK ; 
 size_t SFB_BUCKET_SHIFT ; 
 int SFB_LEVELS ; 
 int /*<<< orphan*/  SFB_NUMBUCKETS ; 

__attribute__((used)) static void increment_one_qlen(u32 sfbhash, u32 slot, struct sfb_sched_data *q)
{
	int i;
	struct sfb_bucket *b = &q->bins[slot].bins[0][0];

	for (i = 0; i < SFB_LEVELS; i++) {
		u32 hash = sfbhash & SFB_BUCKET_MASK;

		sfbhash >>= SFB_BUCKET_SHIFT;
		if (b[hash].qlen < 0xFFFF)
			b[hash].qlen++;
		b += SFB_NUMBUCKETS; /* next level */
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
          unsigned long sfbhash = 100;
          unsigned long slot = 100;
          int _len_q0 = 1;
          struct sfb_sched_data * q = (struct sfb_sched_data *) malloc(_len_q0*sizeof(struct sfb_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__bins0 = 1;
          q[_i0].bins = (struct TYPE_2__ *) malloc(_len_q__i0__bins0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q__i0__bins0; _j0++) {
              int _len_q__i0__bins_bins0 = 1;
          q[_i0].bins->bins = (struct sfb_bucket **) malloc(_len_q__i0__bins_bins0*sizeof(struct sfb_bucket *));
          for(int _j0 = 0; _j0 < _len_q__i0__bins_bins0; _j0++) {
            int _len_q__i0__bins_bins1 = 1;
            q[_i0].bins->bins[_j0] = (struct sfb_bucket *) malloc(_len_q__i0__bins_bins1*sizeof(struct sfb_bucket));
            for(int _j1 = 0; _j1 < _len_q__i0__bins_bins1; _j1++) {
              q[_i0].bins->bins[_j0]->qlen = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          increment_one_qlen(sfbhash,slot,q);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].bins);
          }
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long sfbhash = 255;
          unsigned long slot = 255;
          int _len_q0 = 65025;
          struct sfb_sched_data * q = (struct sfb_sched_data *) malloc(_len_q0*sizeof(struct sfb_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__bins0 = 1;
          q[_i0].bins = (struct TYPE_2__ *) malloc(_len_q__i0__bins0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q__i0__bins0; _j0++) {
              int _len_q__i0__bins_bins0 = 1;
          q[_i0].bins->bins = (struct sfb_bucket **) malloc(_len_q__i0__bins_bins0*sizeof(struct sfb_bucket *));
          for(int _j0 = 0; _j0 < _len_q__i0__bins_bins0; _j0++) {
            int _len_q__i0__bins_bins1 = 1;
            q[_i0].bins->bins[_j0] = (struct sfb_bucket *) malloc(_len_q__i0__bins_bins1*sizeof(struct sfb_bucket));
            for(int _j1 = 0; _j1 < _len_q__i0__bins_bins1; _j1++) {
              q[_i0].bins->bins[_j0]->qlen = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          increment_one_qlen(sfbhash,slot,q);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].bins);
          }
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long sfbhash = 10;
          unsigned long slot = 10;
          int _len_q0 = 100;
          struct sfb_sched_data * q = (struct sfb_sched_data *) malloc(_len_q0*sizeof(struct sfb_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__bins0 = 1;
          q[_i0].bins = (struct TYPE_2__ *) malloc(_len_q__i0__bins0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q__i0__bins0; _j0++) {
              int _len_q__i0__bins_bins0 = 1;
          q[_i0].bins->bins = (struct sfb_bucket **) malloc(_len_q__i0__bins_bins0*sizeof(struct sfb_bucket *));
          for(int _j0 = 0; _j0 < _len_q__i0__bins_bins0; _j0++) {
            int _len_q__i0__bins_bins1 = 1;
            q[_i0].bins->bins[_j0] = (struct sfb_bucket *) malloc(_len_q__i0__bins_bins1*sizeof(struct sfb_bucket));
            for(int _j1 = 0; _j1 < _len_q__i0__bins_bins1; _j1++) {
              q[_i0].bins->bins[_j0]->qlen = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          increment_one_qlen(sfbhash,slot,q);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].bins);
          }
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
