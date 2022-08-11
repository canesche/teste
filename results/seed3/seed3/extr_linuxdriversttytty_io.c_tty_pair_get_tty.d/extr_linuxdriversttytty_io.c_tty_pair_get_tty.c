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
struct tty_struct {struct tty_struct* link; TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ subtype; } ;

/* Variables and functions */
 scalar_t__ PTY_TYPE_MASTER ; 
 scalar_t__ TTY_DRIVER_TYPE_PTY ; 

__attribute__((used)) static struct tty_struct *tty_pair_get_tty(struct tty_struct *tty)
{
	if (tty->driver->type == TTY_DRIVER_TYPE_PTY &&
	    tty->driver->subtype == PTY_TYPE_MASTER)
		tty = tty->link;
	return tty;
}


// ------------------------------------------------------------------------- //

struct tty_struct *_allocate_tty(int length, struct tty_struct *aux_tty[]) {
  struct tty_struct *walker = (struct tty_struct *)malloc(sizeof(struct tty_struct));

  aux_tty[0] = walker;
  walker->link = NULL;
  int _len_walker_driver0 = 1;
  walker->driver = (struct TYPE_2__ *) malloc(_len_walker_driver0*sizeof(struct TYPE_2__));
  for(int _i0 = 0; _i0 < _len_walker_driver0; _i0++) {
    walker->driver.type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->driver.subtype = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct tty_struct *head = walker;
  for(int i = 1; i < length; i++) {
    walker->link = (struct tty_struct *)malloc(sizeof(struct tty_struct));
    walker = walker->link;
    aux_tty[i] = walker;
    walker->link = NULL;
  int _len_walker_driver0 = 1;
  walker->driver = (struct TYPE_2__ *) malloc(_len_walker_driver0*sizeof(struct TYPE_2__));
  for(int _i0 = 0; _i0 < _len_walker_driver0; _i0++) {
    walker->driver.type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->driver.subtype = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_tty(struct tty_struct *aux_tty[], int aux_tty_size) {
  for(int i = 0; i < aux_tty_size; i++) 
    if(aux_tty[i])
      free(aux_tty[i]);
}

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
          struct tty_struct * aux_tty[1];
          struct tty_struct * tty = _allocate_tty(1, aux_tty);
          struct tty_struct * benchRet = tty_pair_get_tty(tty);
          _delete_tty(aux_tty, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct tty_struct * aux_tty[10000];
          struct tty_struct * tty = _allocate_tty(10000, aux_tty);
          struct tty_struct * benchRet = tty_pair_get_tty(tty);
          _delete_tty(aux_tty, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
