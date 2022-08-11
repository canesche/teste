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
struct channel_info {int tsin_id; } ;
struct c8sectpfei {struct channel_info** channel_data; } ;

/* Variables and functions */
 int C8SECTPFE_MAX_TSIN_CHAN ; 

__attribute__((used)) static struct channel_info *find_channel(struct c8sectpfei *fei, int tsin_num)
{
	int i;

	for (i = 0; i < C8SECTPFE_MAX_TSIN_CHAN; i++) {
		if (!fei->channel_data[i])
			continue;

		if (fei->channel_data[i]->tsin_id == tsin_num)
			return fei->channel_data[i];
	}

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
          int tsin_num = 100;
          int _len_fei0 = 1;
          struct c8sectpfei * fei = (struct c8sectpfei *) malloc(_len_fei0*sizeof(struct c8sectpfei));
          for(int _i0 = 0; _i0 < _len_fei0; _i0++) {
              int _len_fei__i0__channel_data0 = 1;
          fei[_i0].channel_data = (struct channel_info **) malloc(_len_fei__i0__channel_data0*sizeof(struct channel_info *));
          for(int _j0 = 0; _j0 < _len_fei__i0__channel_data0; _j0++) {
            int _len_fei__i0__channel_data1 = 1;
            fei[_i0].channel_data[_j0] = (struct channel_info *) malloc(_len_fei__i0__channel_data1*sizeof(struct channel_info));
            for(int _j1 = 0; _j1 < _len_fei__i0__channel_data1; _j1++) {
              fei[_i0].channel_data[_j0]->tsin_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct channel_info * benchRet = find_channel(fei,tsin_num);
          printf("%d\n", (*benchRet).tsin_id);
          for(int _aux = 0; _aux < _len_fei0; _aux++) {
          free(*(fei[_aux].channel_data));
        free(fei[_aux].channel_data);
          }
          free(fei);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tsin_num = 255;
          int _len_fei0 = 65025;
          struct c8sectpfei * fei = (struct c8sectpfei *) malloc(_len_fei0*sizeof(struct c8sectpfei));
          for(int _i0 = 0; _i0 < _len_fei0; _i0++) {
              int _len_fei__i0__channel_data0 = 1;
          fei[_i0].channel_data = (struct channel_info **) malloc(_len_fei__i0__channel_data0*sizeof(struct channel_info *));
          for(int _j0 = 0; _j0 < _len_fei__i0__channel_data0; _j0++) {
            int _len_fei__i0__channel_data1 = 1;
            fei[_i0].channel_data[_j0] = (struct channel_info *) malloc(_len_fei__i0__channel_data1*sizeof(struct channel_info));
            for(int _j1 = 0; _j1 < _len_fei__i0__channel_data1; _j1++) {
              fei[_i0].channel_data[_j0]->tsin_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct channel_info * benchRet = find_channel(fei,tsin_num);
          printf("%d\n", (*benchRet).tsin_id);
          for(int _aux = 0; _aux < _len_fei0; _aux++) {
          free(*(fei[_aux].channel_data));
        free(fei[_aux].channel_data);
          }
          free(fei);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tsin_num = 10;
          int _len_fei0 = 100;
          struct c8sectpfei * fei = (struct c8sectpfei *) malloc(_len_fei0*sizeof(struct c8sectpfei));
          for(int _i0 = 0; _i0 < _len_fei0; _i0++) {
              int _len_fei__i0__channel_data0 = 1;
          fei[_i0].channel_data = (struct channel_info **) malloc(_len_fei__i0__channel_data0*sizeof(struct channel_info *));
          for(int _j0 = 0; _j0 < _len_fei__i0__channel_data0; _j0++) {
            int _len_fei__i0__channel_data1 = 1;
            fei[_i0].channel_data[_j0] = (struct channel_info *) malloc(_len_fei__i0__channel_data1*sizeof(struct channel_info));
            for(int _j1 = 0; _j1 < _len_fei__i0__channel_data1; _j1++) {
              fei[_i0].channel_data[_j0]->tsin_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct channel_info * benchRet = find_channel(fei,tsin_num);
          printf("%d\n", (*benchRet).tsin_id);
          for(int _aux = 0; _aux < _len_fei0; _aux++) {
          free(*(fei[_aux].channel_data));
        free(fei[_aux].channel_data);
          }
          free(fei);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
