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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_4__ {int* resp; int /*<<< orphan*/  error; } ;
struct TYPE_3__ {int /*<<< orphan*/  sbc; } ;
struct mmc_blk_request {TYPE_2__ stop; TYPE_1__ mrq; } ;

/* Variables and functions */
 int CMD_ERRORS ; 
 int /*<<< orphan*/  EIO ; 
 int R1_OUT_OF_RANGE ; 

__attribute__((used)) static void mmc_blk_eval_resp_error(struct mmc_blk_request *brq)
{
	u32 val;

	/*
	 * Per the SD specification(physical layer version 4.10)[1],
	 * section 4.3.3, it explicitly states that "When the last
	 * block of user area is read using CMD18, the host should
	 * ignore OUT_OF_RANGE error that may occur even the sequence
	 * is correct". And JESD84-B51 for eMMC also has a similar
	 * statement on section 6.8.3.
	 *
	 * Multiple block read/write could be done by either predefined
	 * method, namely CMD23, or open-ending mode. For open-ending mode,
	 * we should ignore the OUT_OF_RANGE error as it's normal behaviour.
	 *
	 * However the spec[1] doesn't tell us whether we should also
	 * ignore that for predefined method. But per the spec[1], section
	 * 4.15 Set Block Count Command, it says"If illegal block count
	 * is set, out of range error will be indicated during read/write
	 * operation (For example, data transfer is stopped at user area
	 * boundary)." In another word, we could expect a out of range error
	 * in the response for the following CMD18/25. And if argument of
	 * CMD23 + the argument of CMD18/25 exceed the max number of blocks,
	 * we could also expect to get a -ETIMEDOUT or any error number from
	 * the host drivers due to missing data response(for write)/data(for
	 * read), as the cards will stop the data transfer by itself per the
	 * spec. So we only need to check R1_OUT_OF_RANGE for open-ending mode.
	 */

	if (!brq->stop.error) {
		bool oor_with_open_end;
		/* If there is no error yet, check R1 response */

		val = brq->stop.resp[0] & CMD_ERRORS;
		oor_with_open_end = val & R1_OUT_OF_RANGE && !brq->mrq.sbc;

		if (val && !oor_with_open_end)
			brq->stop.error = -EIO;
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
          int _len_brq0 = 1;
          struct mmc_blk_request * brq = (struct mmc_blk_request *) malloc(_len_brq0*sizeof(struct mmc_blk_request));
          for(int _i0 = 0; _i0 < _len_brq0; _i0++) {
              int _len_brq__i0__stop_resp0 = 1;
          brq[_i0].stop.resp = (int *) malloc(_len_brq__i0__stop_resp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_brq__i0__stop_resp0; _j0++) {
            brq[_i0].stop.resp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        brq[_i0].stop.error = ((-2 * (next_i()%2)) + 1) * next_i();
        brq[_i0].mrq.sbc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mmc_blk_eval_resp_error(brq);
          free(brq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_brq0 = 65025;
          struct mmc_blk_request * brq = (struct mmc_blk_request *) malloc(_len_brq0*sizeof(struct mmc_blk_request));
          for(int _i0 = 0; _i0 < _len_brq0; _i0++) {
              int _len_brq__i0__stop_resp0 = 1;
          brq[_i0].stop.resp = (int *) malloc(_len_brq__i0__stop_resp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_brq__i0__stop_resp0; _j0++) {
            brq[_i0].stop.resp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        brq[_i0].stop.error = ((-2 * (next_i()%2)) + 1) * next_i();
        brq[_i0].mrq.sbc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mmc_blk_eval_resp_error(brq);
          free(brq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_brq0 = 100;
          struct mmc_blk_request * brq = (struct mmc_blk_request *) malloc(_len_brq0*sizeof(struct mmc_blk_request));
          for(int _i0 = 0; _i0 < _len_brq0; _i0++) {
              int _len_brq__i0__stop_resp0 = 1;
          brq[_i0].stop.resp = (int *) malloc(_len_brq__i0__stop_resp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_brq__i0__stop_resp0; _j0++) {
            brq[_i0].stop.resp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        brq[_i0].stop.error = ((-2 * (next_i()%2)) + 1) * next_i();
        brq[_i0].mrq.sbc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mmc_blk_eval_resp_error(brq);
          free(brq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
