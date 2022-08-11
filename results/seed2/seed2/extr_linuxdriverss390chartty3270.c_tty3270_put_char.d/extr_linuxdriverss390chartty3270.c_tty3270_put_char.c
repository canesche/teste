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
struct tty_struct {struct tty3270* driver_data; } ;
struct tty3270 {scalar_t__ char_count; unsigned char* char_buf; } ;

/* Variables and functions */
 scalar_t__ TTY3270_CHAR_BUF_SIZE ; 

__attribute__((used)) static int tty3270_put_char(struct tty_struct *tty, unsigned char ch)
{
	struct tty3270 *tp;

	tp = tty->driver_data;
	if (!tp || tp->char_count >= TTY3270_CHAR_BUF_SIZE)
		return 0;
	tp->char_buf[tp->char_count++] = ch;
	return 1;
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
          unsigned char ch = 100;
          int _len_tty0 = 1;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__driver_data0 = 1;
          tty[_i0].driver_data = (struct tty3270 *) malloc(_len_tty__i0__driver_data0*sizeof(struct tty3270));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data0; _j0++) {
            tty[_i0].driver_data->char_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tty__i0__driver_data_char_buf0 = 1;
          tty[_i0].driver_data->char_buf = (unsigned char *) malloc(_len_tty__i0__driver_data_char_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data_char_buf0; _j0++) {
            tty[_i0].driver_data->char_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tty3270_put_char(tty,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].driver_data);
          }
          free(tty);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char ch = 255;
          int _len_tty0 = 65025;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__driver_data0 = 1;
          tty[_i0].driver_data = (struct tty3270 *) malloc(_len_tty__i0__driver_data0*sizeof(struct tty3270));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data0; _j0++) {
            tty[_i0].driver_data->char_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tty__i0__driver_data_char_buf0 = 1;
          tty[_i0].driver_data->char_buf = (unsigned char *) malloc(_len_tty__i0__driver_data_char_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data_char_buf0; _j0++) {
            tty[_i0].driver_data->char_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tty3270_put_char(tty,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].driver_data);
          }
          free(tty);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char ch = 10;
          int _len_tty0 = 100;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__driver_data0 = 1;
          tty[_i0].driver_data = (struct tty3270 *) malloc(_len_tty__i0__driver_data0*sizeof(struct tty3270));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data0; _j0++) {
            tty[_i0].driver_data->char_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tty__i0__driver_data_char_buf0 = 1;
          tty[_i0].driver_data->char_buf = (unsigned char *) malloc(_len_tty__i0__driver_data_char_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data_char_buf0; _j0++) {
            tty[_i0].driver_data->char_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tty3270_put_char(tty,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].driver_data);
          }
          free(tty);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
