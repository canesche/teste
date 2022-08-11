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
typedef  int u16 ;
struct vc_data {int vc_num; int vc_attr; int /*<<< orphan*/  vc_y; int /*<<< orphan*/  vc_x; int /*<<< orphan*/  vc_pos; } ;
struct TYPE_3__ {int* highsize; int** highbuf; int /*<<< orphan*/ * ry; int /*<<< orphan*/ * rx; int /*<<< orphan*/ * rpos; } ;
struct TYPE_4__ {TYPE_1__ ht; } ;

/* Variables and functions */
 int COLOR_BUFFER_SIZE ; 
 TYPE_2__** speakup_console ; 

__attribute__((used)) static void update_color_buffer(struct vc_data *vc, const u16 *ic, int len)
{
	int i, bi, hi;
	int vc_num = vc->vc_num;

	bi = (vc->vc_attr & 0x70) >> 4;
	hi = speakup_console[vc_num]->ht.highsize[bi];

	i = 0;
	if (speakup_console[vc_num]->ht.highsize[bi] == 0) {
		speakup_console[vc_num]->ht.rpos[bi] = vc->vc_pos;
		speakup_console[vc_num]->ht.rx[bi] = vc->vc_x;
		speakup_console[vc_num]->ht.ry[bi] = vc->vc_y;
	}
	while ((hi < COLOR_BUFFER_SIZE) && (i < len)) {
		if (ic[i] > 32) {
			speakup_console[vc_num]->ht.highbuf[bi][hi] = ic[i];
			hi++;
		} else if ((ic[i] == 32) && (hi != 0)) {
			if (speakup_console[vc_num]->ht.highbuf[bi][hi - 1] !=
			    32) {
				speakup_console[vc_num]->ht.highbuf[bi][hi] =
				    ic[i];
				hi++;
			}
		}
		i++;
	}
	speakup_console[vc_num]->ht.highsize[bi] = hi;
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
          int len = 100;
          int _len_vc0 = 1;
          struct vc_data * vc = (struct vc_data *) malloc(_len_vc0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
            vc[_i0].vc_num = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_attr = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_y = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_x = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic0 = 1;
          const int * ic = (const int *) malloc(_len_ic0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
            ic[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_color_buffer(vc,ic,len);
          free(vc);
          free(ic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_vc0 = 65025;
          struct vc_data * vc = (struct vc_data *) malloc(_len_vc0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
            vc[_i0].vc_num = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_attr = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_y = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_x = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic0 = 65025;
          const int * ic = (const int *) malloc(_len_ic0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
            ic[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_color_buffer(vc,ic,len);
          free(vc);
          free(ic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_vc0 = 100;
          struct vc_data * vc = (struct vc_data *) malloc(_len_vc0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
            vc[_i0].vc_num = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_attr = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_y = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_x = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic0 = 100;
          const int * ic = (const int *) malloc(_len_ic0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
            ic[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_color_buffer(vc,ic,len);
          free(vc);
          free(ic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
