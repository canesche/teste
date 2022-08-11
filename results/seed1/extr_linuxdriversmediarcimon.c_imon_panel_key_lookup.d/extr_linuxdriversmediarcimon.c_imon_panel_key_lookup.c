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
typedef  int u64 ;
typedef  int /*<<< orphan*/  u32 ;
struct imon_panel_key_table {int hw_code; int /*<<< orphan*/  keycode; } ;
struct imon_context {int release_code; TYPE_1__* dev_descr; } ;
struct TYPE_2__ {struct imon_panel_key_table* key_table; } ;

/* Variables and functions */
 int /*<<< orphan*/  KEY_RESERVED ; 

__attribute__((used)) static u32 imon_panel_key_lookup(struct imon_context *ictx, u64 code)
{
	int i;
	u32 keycode = KEY_RESERVED;
	struct imon_panel_key_table *key_table = ictx->dev_descr->key_table;

	for (i = 0; key_table[i].hw_code != 0; i++) {
		if (key_table[i].hw_code == (code | 0xffee)) {
			keycode = key_table[i].keycode;
			break;
		}
	}
	ictx->release_code = false;
	return keycode;
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
          int code = 100;
          int _len_ictx0 = 1;
          struct imon_context * ictx = (struct imon_context *) malloc(_len_ictx0*sizeof(struct imon_context));
          for(int _i0 = 0; _i0 < _len_ictx0; _i0++) {
            ictx[_i0].release_code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ictx__i0__dev_descr0 = 1;
          ictx[_i0].dev_descr = (struct TYPE_2__ *) malloc(_len_ictx__i0__dev_descr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ictx__i0__dev_descr0; _j0++) {
              int _len_ictx__i0__dev_descr_key_table0 = 1;
          ictx[_i0].dev_descr->key_table = (struct imon_panel_key_table *) malloc(_len_ictx__i0__dev_descr_key_table0*sizeof(struct imon_panel_key_table));
          for(int _j0 = 0; _j0 < _len_ictx__i0__dev_descr_key_table0; _j0++) {
            ictx[_i0].dev_descr->key_table->hw_code = ((-2 * (next_i()%2)) + 1) * next_i();
        ictx[_i0].dev_descr->key_table->keycode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = imon_panel_key_lookup(ictx,code);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ictx0; _aux++) {
          free(ictx[_aux].dev_descr);
          }
          free(ictx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int code = 255;
          int _len_ictx0 = 65025;
          struct imon_context * ictx = (struct imon_context *) malloc(_len_ictx0*sizeof(struct imon_context));
          for(int _i0 = 0; _i0 < _len_ictx0; _i0++) {
            ictx[_i0].release_code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ictx__i0__dev_descr0 = 1;
          ictx[_i0].dev_descr = (struct TYPE_2__ *) malloc(_len_ictx__i0__dev_descr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ictx__i0__dev_descr0; _j0++) {
              int _len_ictx__i0__dev_descr_key_table0 = 1;
          ictx[_i0].dev_descr->key_table = (struct imon_panel_key_table *) malloc(_len_ictx__i0__dev_descr_key_table0*sizeof(struct imon_panel_key_table));
          for(int _j0 = 0; _j0 < _len_ictx__i0__dev_descr_key_table0; _j0++) {
            ictx[_i0].dev_descr->key_table->hw_code = ((-2 * (next_i()%2)) + 1) * next_i();
        ictx[_i0].dev_descr->key_table->keycode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = imon_panel_key_lookup(ictx,code);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ictx0; _aux++) {
          free(ictx[_aux].dev_descr);
          }
          free(ictx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int code = 10;
          int _len_ictx0 = 100;
          struct imon_context * ictx = (struct imon_context *) malloc(_len_ictx0*sizeof(struct imon_context));
          for(int _i0 = 0; _i0 < _len_ictx0; _i0++) {
            ictx[_i0].release_code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ictx__i0__dev_descr0 = 1;
          ictx[_i0].dev_descr = (struct TYPE_2__ *) malloc(_len_ictx__i0__dev_descr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ictx__i0__dev_descr0; _j0++) {
              int _len_ictx__i0__dev_descr_key_table0 = 1;
          ictx[_i0].dev_descr->key_table = (struct imon_panel_key_table *) malloc(_len_ictx__i0__dev_descr_key_table0*sizeof(struct imon_panel_key_table));
          for(int _j0 = 0; _j0 < _len_ictx__i0__dev_descr_key_table0; _j0++) {
            ictx[_i0].dev_descr->key_table->hw_code = ((-2 * (next_i()%2)) + 1) * next_i();
        ictx[_i0].dev_descr->key_table->keycode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = imon_panel_key_lookup(ictx,code);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ictx0; _aux++) {
          free(ictx[_aux].dev_descr);
          }
          free(ictx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
