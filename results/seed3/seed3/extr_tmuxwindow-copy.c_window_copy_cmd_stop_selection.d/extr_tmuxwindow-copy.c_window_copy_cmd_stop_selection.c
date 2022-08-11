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
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int /*<<< orphan*/  lineflag; int /*<<< orphan*/  cursordrag; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
typedef  enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;

/* Variables and functions */
 int /*<<< orphan*/  CURSORDRAG_NONE ; 
 int /*<<< orphan*/  LINE_SEL_NONE ; 
 int WINDOW_COPY_CMD_NOTHING ; 

__attribute__((used)) static enum window_copy_cmd_action
window_copy_cmd_stop_selection(struct window_copy_cmd_state *cs)
{
	struct window_mode_entry	*wme = cs->wme;
	struct window_copy_mode_data	*data = wme->data;

	data->cursordrag = CURSORDRAG_NONE;
	data->lineflag = LINE_SEL_NONE;
	return (WINDOW_COPY_CMD_NOTHING);
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
          int _len_cs0 = 1;
          struct window_copy_cmd_state * cs = (struct window_copy_cmd_state *) malloc(_len_cs0*sizeof(struct window_copy_cmd_state));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__wme0 = 1;
          cs[_i0].wme = (struct window_mode_entry *) malloc(_len_cs__i0__wme0*sizeof(struct window_mode_entry));
          for(int _j0 = 0; _j0 < _len_cs__i0__wme0; _j0++) {
              int _len_cs__i0__wme_data0 = 1;
          cs[_i0].wme->data = (struct window_copy_mode_data *) malloc(_len_cs__i0__wme_data0*sizeof(struct window_copy_mode_data));
          for(int _j0 = 0; _j0 < _len_cs__i0__wme_data0; _j0++) {
            cs[_i0].wme->data->lineflag = ((-2 * (next_i()%2)) + 1) * next_i();
        cs[_i0].wme->data->cursordrag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum window_copy_cmd_action benchRet = window_copy_cmd_stop_selection(cs);
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].wme);
          }
          free(cs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cs0 = 65025;
          struct window_copy_cmd_state * cs = (struct window_copy_cmd_state *) malloc(_len_cs0*sizeof(struct window_copy_cmd_state));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__wme0 = 1;
          cs[_i0].wme = (struct window_mode_entry *) malloc(_len_cs__i0__wme0*sizeof(struct window_mode_entry));
          for(int _j0 = 0; _j0 < _len_cs__i0__wme0; _j0++) {
              int _len_cs__i0__wme_data0 = 1;
          cs[_i0].wme->data = (struct window_copy_mode_data *) malloc(_len_cs__i0__wme_data0*sizeof(struct window_copy_mode_data));
          for(int _j0 = 0; _j0 < _len_cs__i0__wme_data0; _j0++) {
            cs[_i0].wme->data->lineflag = ((-2 * (next_i()%2)) + 1) * next_i();
        cs[_i0].wme->data->cursordrag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum window_copy_cmd_action benchRet = window_copy_cmd_stop_selection(cs);
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].wme);
          }
          free(cs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cs0 = 100;
          struct window_copy_cmd_state * cs = (struct window_copy_cmd_state *) malloc(_len_cs0*sizeof(struct window_copy_cmd_state));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__wme0 = 1;
          cs[_i0].wme = (struct window_mode_entry *) malloc(_len_cs__i0__wme0*sizeof(struct window_mode_entry));
          for(int _j0 = 0; _j0 < _len_cs__i0__wme0; _j0++) {
              int _len_cs__i0__wme_data0 = 1;
          cs[_i0].wme->data = (struct window_copy_mode_data *) malloc(_len_cs__i0__wme_data0*sizeof(struct window_copy_mode_data));
          for(int _j0 = 0; _j0 < _len_cs__i0__wme_data0; _j0++) {
            cs[_i0].wme->data->lineflag = ((-2 * (next_i()%2)) + 1) * next_i();
        cs[_i0].wme->data->cursordrag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum window_copy_cmd_action benchRet = window_copy_cmd_stop_selection(cs);
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].wme);
          }
          free(cs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
