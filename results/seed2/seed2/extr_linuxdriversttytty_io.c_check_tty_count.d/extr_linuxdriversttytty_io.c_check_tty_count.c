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
struct tty_struct {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int check_tty_count(struct tty_struct *tty, const char *routine)
{
#ifdef CHECK_TTY_COUNT
	struct list_head *p;
	int count = 0, kopen_count = 0;

	spin_lock(&tty->files_lock);
	list_for_each(p, &tty->tty_files) {
		count++;
	}
	spin_unlock(&tty->files_lock);
	if (tty->driver->type == TTY_DRIVER_TYPE_PTY &&
	    tty->driver->subtype == PTY_TYPE_SLAVE &&
	    tty->link && tty->link->count)
		count++;
	if (tty_port_kopened(tty->port))
		kopen_count++;
	if (tty->count != (count + kopen_count)) {
		tty_warn(tty, "%s: tty->count(%d) != (#fd's(%d) + #kopen's(%d))\n",
			 routine, tty->count, count, kopen_count);
		return (count + kopen_count);
	}
#endif
	return 0;
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
          int _len_tty0 = 1;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
            tty[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_routine0 = 1;
          const char * routine = (const char *) malloc(_len_routine0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_routine0; _i0++) {
            routine[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_tty_count(tty,routine);
          printf("%d\n", benchRet); 
          free(tty);
          free(routine);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tty0 = 65025;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
            tty[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_routine0 = 65025;
          const char * routine = (const char *) malloc(_len_routine0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_routine0; _i0++) {
            routine[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_tty_count(tty,routine);
          printf("%d\n", benchRet); 
          free(tty);
          free(routine);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tty0 = 100;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
            tty[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_routine0 = 100;
          const char * routine = (const char *) malloc(_len_routine0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_routine0; _i0++) {
            routine[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_tty_count(tty,routine);
          printf("%d\n", benchRet); 
          free(tty);
          free(routine);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
