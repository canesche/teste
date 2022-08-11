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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * encoding; int /*<<< orphan*/  flag; int /*<<< orphan*/  status; } ;
typedef  TYPE_1__ mbfl_identify_filter ;
struct TYPE_5__ {int filter_list_size; TYPE_1__** filter_list; int /*<<< orphan*/  strict; } ;
typedef  TYPE_2__ mbfl_encoding_detector ;
typedef  int /*<<< orphan*/  mbfl_encoding ;

/* Variables and functions */

const mbfl_encoding *mbfl_encoding_detector_judge(mbfl_encoding_detector *identd)
{
	mbfl_identify_filter *filter;
	const mbfl_encoding *encoding = NULL;
	int n;

	/* judge */
	if (identd != NULL) {
		n = identd->filter_list_size - 1;
		while (n >= 0) {
			filter = identd->filter_list[n];
			if (!filter->flag) {
				if (!identd->strict || !filter->status) {
					encoding = filter->encoding;
				}
			}
			n--;
		}

		/* fallback judge */
		if (!encoding) {
			n = identd->filter_list_size - 1;
			while (n >= 0) {
				filter = identd->filter_list[n];
				if (!filter->flag) {
					encoding = filter->encoding;
				}
				n--;
 			}
		}
	}

	return encoding;
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
          int _len_identd0 = 1;
          struct TYPE_5__ * identd = (struct TYPE_5__ *) malloc(_len_identd0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_identd0; _i0++) {
            identd[_i0].filter_list_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_identd__i0__filter_list0 = 1;
          identd[_i0].filter_list = (struct TYPE_4__ **) malloc(_len_identd__i0__filter_list0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_identd__i0__filter_list0; _j0++) {
            int _len_identd__i0__filter_list1 = 1;
            identd[_i0].filter_list[_j0] = (struct TYPE_4__ *) malloc(_len_identd__i0__filter_list1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_identd__i0__filter_list1; _j1++) {
                int _len_identd__i0__filter_list__j0__encoding0 = 1;
          identd[_i0].filter_list[_j0]->encoding = (int *) malloc(_len_identd__i0__filter_list__j0__encoding0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_identd__i0__filter_list__j0__encoding0; _j0++) {
            identd[_i0].filter_list[_j0]->encoding[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        identd[_i0].filter_list[_j0]->flag = ((-2 * (next_i()%2)) + 1) * next_i();
        identd[_i0].filter_list[_j0]->status = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        identd[_i0].strict = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = mbfl_encoding_detector_judge(identd);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_identd0; _aux++) {
          free(*(identd[_aux].filter_list));
        free(identd[_aux].filter_list);
          }
          free(identd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_identd0 = 65025;
          struct TYPE_5__ * identd = (struct TYPE_5__ *) malloc(_len_identd0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_identd0; _i0++) {
            identd[_i0].filter_list_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_identd__i0__filter_list0 = 1;
          identd[_i0].filter_list = (struct TYPE_4__ **) malloc(_len_identd__i0__filter_list0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_identd__i0__filter_list0; _j0++) {
            int _len_identd__i0__filter_list1 = 1;
            identd[_i0].filter_list[_j0] = (struct TYPE_4__ *) malloc(_len_identd__i0__filter_list1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_identd__i0__filter_list1; _j1++) {
                int _len_identd__i0__filter_list__j0__encoding0 = 1;
          identd[_i0].filter_list[_j0]->encoding = (int *) malloc(_len_identd__i0__filter_list__j0__encoding0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_identd__i0__filter_list__j0__encoding0; _j0++) {
            identd[_i0].filter_list[_j0]->encoding[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        identd[_i0].filter_list[_j0]->flag = ((-2 * (next_i()%2)) + 1) * next_i();
        identd[_i0].filter_list[_j0]->status = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        identd[_i0].strict = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = mbfl_encoding_detector_judge(identd);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_identd0; _aux++) {
          free(*(identd[_aux].filter_list));
        free(identd[_aux].filter_list);
          }
          free(identd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_identd0 = 100;
          struct TYPE_5__ * identd = (struct TYPE_5__ *) malloc(_len_identd0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_identd0; _i0++) {
            identd[_i0].filter_list_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_identd__i0__filter_list0 = 1;
          identd[_i0].filter_list = (struct TYPE_4__ **) malloc(_len_identd__i0__filter_list0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_identd__i0__filter_list0; _j0++) {
            int _len_identd__i0__filter_list1 = 1;
            identd[_i0].filter_list[_j0] = (struct TYPE_4__ *) malloc(_len_identd__i0__filter_list1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_identd__i0__filter_list1; _j1++) {
                int _len_identd__i0__filter_list__j0__encoding0 = 1;
          identd[_i0].filter_list[_j0]->encoding = (int *) malloc(_len_identd__i0__filter_list__j0__encoding0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_identd__i0__filter_list__j0__encoding0; _j0++) {
            identd[_i0].filter_list[_j0]->encoding[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        identd[_i0].filter_list[_j0]->flag = ((-2 * (next_i()%2)) + 1) * next_i();
        identd[_i0].filter_list[_j0]->status = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        identd[_i0].strict = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = mbfl_encoding_detector_judge(identd);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_identd0; _aux++) {
          free(*(identd[_aux].filter_list));
        free(identd[_aux].filter_list);
          }
          free(identd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
