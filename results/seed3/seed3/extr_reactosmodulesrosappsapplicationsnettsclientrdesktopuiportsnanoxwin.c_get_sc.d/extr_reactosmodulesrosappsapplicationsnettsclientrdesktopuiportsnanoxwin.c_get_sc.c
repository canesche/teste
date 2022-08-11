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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ chs; scalar_t__ ch1; scalar_t__ ch2; scalar_t__ ch3; } ;
struct TYPE_4__ {int modifiers; scalar_t__ ch; } ;
typedef  TYPE_1__ GR_EVENT_KEYSTROKE ;

/* Variables and functions */
 TYPE_3__* g_keys ; 

__attribute__((used)) static int get_sc(GR_EVENT_KEYSTROKE * event_keystroke, int * sc, int * ec)
{
  int i;

  //printf("%d %d\n", event_keystroke->ch, event_keystroke->modifiers);
  *sc = 0;
  *ec = 0;
  for (i = 0; i < 256; i++)
  {
    if (event_keystroke->modifiers & 1) /* shift is down */
    {
      if (event_keystroke->ch == g_keys[i].chs)
      {
        *sc = i;
        break;
      }
    }
    if (event_keystroke->ch == g_keys[i].ch1 ||
        event_keystroke->ch == g_keys[i].ch2 ||
        event_keystroke->ch == g_keys[i].ch3)
    {
      *sc = i;
      break;
    }
  }
  if (*sc == 0)
  {
    return 1;
  }
  else
  {
    return 0;
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
          int _len_event_keystroke0 = 1;
          struct TYPE_4__ * event_keystroke = (struct TYPE_4__ *) malloc(_len_event_keystroke0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_event_keystroke0; _i0++) {
            event_keystroke[_i0].modifiers = ((-2 * (next_i()%2)) + 1) * next_i();
        event_keystroke[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc0 = 1;
          int * sc = (int *) malloc(_len_sc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ec0 = 1;
          int * ec = (int *) malloc(_len_ec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_sc(event_keystroke,sc,ec);
          printf("%d\n", benchRet); 
          free(event_keystroke);
          free(sc);
          free(ec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_event_keystroke0 = 65025;
          struct TYPE_4__ * event_keystroke = (struct TYPE_4__ *) malloc(_len_event_keystroke0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_event_keystroke0; _i0++) {
            event_keystroke[_i0].modifiers = ((-2 * (next_i()%2)) + 1) * next_i();
        event_keystroke[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc0 = 65025;
          int * sc = (int *) malloc(_len_sc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ec0 = 65025;
          int * ec = (int *) malloc(_len_ec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_sc(event_keystroke,sc,ec);
          printf("%d\n", benchRet); 
          free(event_keystroke);
          free(sc);
          free(ec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_event_keystroke0 = 100;
          struct TYPE_4__ * event_keystroke = (struct TYPE_4__ *) malloc(_len_event_keystroke0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_event_keystroke0; _i0++) {
            event_keystroke[_i0].modifiers = ((-2 * (next_i()%2)) + 1) * next_i();
        event_keystroke[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc0 = 100;
          int * sc = (int *) malloc(_len_sc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ec0 = 100;
          int * ec = (int *) malloc(_len_ec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_sc(event_keystroke,sc,ec);
          printf("%d\n", benchRet); 
          free(event_keystroke);
          free(sc);
          free(ec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
