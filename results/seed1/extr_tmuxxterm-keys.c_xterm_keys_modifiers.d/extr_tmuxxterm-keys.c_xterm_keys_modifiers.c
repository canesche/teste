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
typedef  int u_int ;
typedef  int /*<<< orphan*/  key_code ;

/* Variables and functions */
 int /*<<< orphan*/  KEYC_CTRL ; 
 int /*<<< orphan*/  KEYC_ESCAPE ; 
 int /*<<< orphan*/  KEYC_SHIFT ; 

__attribute__((used)) static int
xterm_keys_modifiers(const char *buf, size_t len, size_t *pos,
    key_code *modifiers)
{
	u_int	flags;

	if (len - *pos < 2)
		return (1);

	if (buf[*pos] < '0' || buf[*pos] > '9')
		return (-1);
	flags = buf[(*pos)++] - '0';
	if (buf[*pos] >= '0' && buf[*pos] <= '9')
		flags = (flags * 10) + (buf[(*pos)++] - '0');
	flags -= 1;

	*modifiers = 0;
	if (flags & 1)
		*modifiers |= KEYC_SHIFT;
	if (flags & 2)
		*modifiers |= KEYC_ESCAPE;
	if (flags & 4)
		*modifiers |= KEYC_CTRL;
	if (flags & 8)
		*modifiers |= KEYC_ESCAPE;
	return (0);
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
          unsigned long len = 100;
          int _len_buf0 = 1;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 1;
          unsigned long * pos = (unsigned long *) malloc(_len_pos0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_modifiers0 = 1;
          int * modifiers = (int *) malloc(_len_modifiers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_modifiers0; _i0++) {
            modifiers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xterm_keys_modifiers(buf,len,pos,modifiers);
          printf("%d\n", benchRet); 
          free(buf);
          free(pos);
          free(modifiers);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_buf0 = 65025;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 65025;
          unsigned long * pos = (unsigned long *) malloc(_len_pos0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_modifiers0 = 65025;
          int * modifiers = (int *) malloc(_len_modifiers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_modifiers0; _i0++) {
            modifiers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xterm_keys_modifiers(buf,len,pos,modifiers);
          printf("%d\n", benchRet); 
          free(buf);
          free(pos);
          free(modifiers);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_buf0 = 100;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 100;
          unsigned long * pos = (unsigned long *) malloc(_len_pos0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_modifiers0 = 100;
          int * modifiers = (int *) malloc(_len_modifiers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_modifiers0; _i0++) {
            modifiers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xterm_keys_modifiers(buf,len,pos,modifiers);
          printf("%d\n", benchRet); 
          free(buf);
          free(pos);
          free(modifiers);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
