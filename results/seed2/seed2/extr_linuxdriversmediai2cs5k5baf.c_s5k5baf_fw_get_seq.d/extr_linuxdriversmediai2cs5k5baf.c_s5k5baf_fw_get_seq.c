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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u16 ;
struct s5k5baf_fw {int count; TYPE_1__* seq; scalar_t__* data; } ;
struct s5k5baf {struct s5k5baf_fw* fw; } ;
struct TYPE_2__ {scalar_t__ id; int offset; } ;

/* Variables and functions */

__attribute__((used)) static u16 *s5k5baf_fw_get_seq(struct s5k5baf *state, u16 seq_id)
{
	struct s5k5baf_fw *fw = state->fw;
	u16 *data;
	int i;

	if (fw == NULL)
		return NULL;

	data = fw->data + 2 * fw->count;

	for (i = 0; i < fw->count; ++i) {
		if (fw->seq[i].id == seq_id)
			return data + fw->seq[i].offset;
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
          long seq_id = 100;
          int _len_state0 = 1;
          struct s5k5baf * state = (struct s5k5baf *) malloc(_len_state0*sizeof(struct s5k5baf));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__fw0 = 1;
          state[_i0].fw = (struct s5k5baf_fw *) malloc(_len_state__i0__fw0*sizeof(struct s5k5baf_fw));
          for(int _j0 = 0; _j0 < _len_state__i0__fw0; _j0++) {
            state[_i0].fw->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fw_seq0 = 1;
          state[_i0].fw->seq = (struct TYPE_2__ *) malloc(_len_state__i0__fw_seq0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__fw_seq0; _j0++) {
            state[_i0].fw->seq->id = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].fw->seq->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__fw_data0 = 1;
          state[_i0].fw->data = (long *) malloc(_len_state__i0__fw_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__fw_data0; _j0++) {
            state[_i0].fw->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long * benchRet = s5k5baf_fw_get_seq(state,seq_id);
          printf("%ld\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].fw);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          long seq_id = 255;
          int _len_state0 = 65025;
          struct s5k5baf * state = (struct s5k5baf *) malloc(_len_state0*sizeof(struct s5k5baf));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__fw0 = 1;
          state[_i0].fw = (struct s5k5baf_fw *) malloc(_len_state__i0__fw0*sizeof(struct s5k5baf_fw));
          for(int _j0 = 0; _j0 < _len_state__i0__fw0; _j0++) {
            state[_i0].fw->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fw_seq0 = 1;
          state[_i0].fw->seq = (struct TYPE_2__ *) malloc(_len_state__i0__fw_seq0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__fw_seq0; _j0++) {
            state[_i0].fw->seq->id = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].fw->seq->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__fw_data0 = 1;
          state[_i0].fw->data = (long *) malloc(_len_state__i0__fw_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__fw_data0; _j0++) {
            state[_i0].fw->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long * benchRet = s5k5baf_fw_get_seq(state,seq_id);
          printf("%ld\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].fw);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long seq_id = 10;
          int _len_state0 = 100;
          struct s5k5baf * state = (struct s5k5baf *) malloc(_len_state0*sizeof(struct s5k5baf));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__fw0 = 1;
          state[_i0].fw = (struct s5k5baf_fw *) malloc(_len_state__i0__fw0*sizeof(struct s5k5baf_fw));
          for(int _j0 = 0; _j0 < _len_state__i0__fw0; _j0++) {
            state[_i0].fw->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fw_seq0 = 1;
          state[_i0].fw->seq = (struct TYPE_2__ *) malloc(_len_state__i0__fw_seq0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__fw_seq0; _j0++) {
            state[_i0].fw->seq->id = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].fw->seq->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__fw_data0 = 1;
          state[_i0].fw->data = (long *) malloc(_len_state__i0__fw_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__fw_data0; _j0++) {
            state[_i0].fw->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long * benchRet = s5k5baf_fw_get_seq(state,seq_id);
          printf("%ld\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].fw);
          }
          free(state);
        
        break;
    }
    // linked
    case 3:
    {
          long seq_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state0 = 1;
          struct s5k5baf * state = (struct s5k5baf *) malloc(_len_state0*sizeof(struct s5k5baf));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__fw0 = 1;
          state[_i0].fw = (struct s5k5baf_fw *) malloc(_len_state__i0__fw0*sizeof(struct s5k5baf_fw));
          for(int _j0 = 0; _j0 < _len_state__i0__fw0; _j0++) {
            state[_i0].fw->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fw_seq0 = 1;
          state[_i0].fw->seq = (struct TYPE_2__ *) malloc(_len_state__i0__fw_seq0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__fw_seq0; _j0++) {
            state[_i0].fw->seq->id = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].fw->seq->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__fw_data0 = 1;
          state[_i0].fw->data = (long *) malloc(_len_state__i0__fw_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__fw_data0; _j0++) {
            state[_i0].fw->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long * benchRet = s5k5baf_fw_get_seq(state,seq_id);
          printf("%ld\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].fw);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
