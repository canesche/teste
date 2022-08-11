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
struct ktermios {int c_iflag; int c_oflag; int c_cflag; int c_lflag; scalar_t__* c_cc; scalar_t__ c_line; } ;
struct tty_struct {struct ktermios termios_locked; struct ktermios termios; } ;

/* Variables and functions */
 int NCCS ; 

__attribute__((used)) static void unset_locked_termios(struct tty_struct *tty, struct ktermios *old)
{
	struct ktermios *termios = &tty->termios;
	struct ktermios *locked  = &tty->termios_locked;
	int	i;

#define NOSET_MASK(x, y, z) (x = ((x) & ~(z)) | ((y) & (z)))

	NOSET_MASK(termios->c_iflag, old->c_iflag, locked->c_iflag);
	NOSET_MASK(termios->c_oflag, old->c_oflag, locked->c_oflag);
	NOSET_MASK(termios->c_cflag, old->c_cflag, locked->c_cflag);
	NOSET_MASK(termios->c_lflag, old->c_lflag, locked->c_lflag);
	termios->c_line = locked->c_line ? old->c_line : termios->c_line;
	for (i = 0; i < NCCS; i++)
		termios->c_cc[i] = locked->c_cc[i] ?
			old->c_cc[i] : termios->c_cc[i];
	/* FIXME: What should we do for i/ospeed */
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
            tty[_i0].termios_locked.c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios_locked.c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios_locked.c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios_locked.c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tty__i0__termios_locked_c_cc0 = 1;
          tty[_i0].termios_locked.c_cc = (long *) malloc(_len_tty__i0__termios_locked_c_cc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tty__i0__termios_locked_c_cc0; _j0++) {
            tty[_i0].termios_locked.c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tty[_i0].termios_locked.c_line = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tty__i0__termios_c_cc0 = 1;
          tty[_i0].termios.c_cc = (long *) malloc(_len_tty__i0__termios_c_cc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tty__i0__termios_c_cc0; _j0++) {
            tty[_i0].termios.c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tty[_i0].termios.c_line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old0 = 1;
          struct ktermios * old = (struct ktermios *) malloc(_len_old0*sizeof(struct ktermios));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_old__i0__c_cc0 = 1;
          old[_i0].c_cc = (long *) malloc(_len_old__i0__c_cc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_old__i0__c_cc0; _j0++) {
            old[_i0].c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        old[_i0].c_line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unset_locked_termios(tty,old);
          free(tty);
          for(int _aux = 0; _aux < _len_old0; _aux++) {
          free(old[_aux].c_cc);
          }
          free(old);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tty0 = 65025;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
            tty[_i0].termios_locked.c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios_locked.c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios_locked.c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios_locked.c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tty__i0__termios_locked_c_cc0 = 1;
          tty[_i0].termios_locked.c_cc = (long *) malloc(_len_tty__i0__termios_locked_c_cc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tty__i0__termios_locked_c_cc0; _j0++) {
            tty[_i0].termios_locked.c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tty[_i0].termios_locked.c_line = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tty__i0__termios_c_cc0 = 1;
          tty[_i0].termios.c_cc = (long *) malloc(_len_tty__i0__termios_c_cc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tty__i0__termios_c_cc0; _j0++) {
            tty[_i0].termios.c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tty[_i0].termios.c_line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old0 = 65025;
          struct ktermios * old = (struct ktermios *) malloc(_len_old0*sizeof(struct ktermios));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_old__i0__c_cc0 = 1;
          old[_i0].c_cc = (long *) malloc(_len_old__i0__c_cc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_old__i0__c_cc0; _j0++) {
            old[_i0].c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        old[_i0].c_line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unset_locked_termios(tty,old);
          free(tty);
          for(int _aux = 0; _aux < _len_old0; _aux++) {
          free(old[_aux].c_cc);
          }
          free(old);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tty0 = 100;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
            tty[_i0].termios_locked.c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios_locked.c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios_locked.c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios_locked.c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tty__i0__termios_locked_c_cc0 = 1;
          tty[_i0].termios_locked.c_cc = (long *) malloc(_len_tty__i0__termios_locked_c_cc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tty__i0__termios_locked_c_cc0; _j0++) {
            tty[_i0].termios_locked.c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tty[_i0].termios_locked.c_line = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tty__i0__termios_c_cc0 = 1;
          tty[_i0].termios.c_cc = (long *) malloc(_len_tty__i0__termios_c_cc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tty__i0__termios_c_cc0; _j0++) {
            tty[_i0].termios.c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tty[_i0].termios.c_line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old0 = 100;
          struct ktermios * old = (struct ktermios *) malloc(_len_old0*sizeof(struct ktermios));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_old__i0__c_cc0 = 1;
          old[_i0].c_cc = (long *) malloc(_len_old__i0__c_cc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_old__i0__c_cc0; _j0++) {
            old[_i0].c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        old[_i0].c_line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unset_locked_termios(tty,old);
          free(tty);
          for(int _aux = 0; _aux < _len_old0; _aux++) {
          free(old[_aux].c_cc);
          }
          free(old);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
