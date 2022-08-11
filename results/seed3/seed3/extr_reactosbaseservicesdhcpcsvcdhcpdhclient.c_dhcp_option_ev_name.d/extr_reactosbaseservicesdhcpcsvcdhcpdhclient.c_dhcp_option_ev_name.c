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
struct dhcp_option {char* name; } ;

/* Variables and functions */

int
dhcp_option_ev_name(char *buf, size_t buflen, struct dhcp_option *option)
{
	int i;

	for (i = 0; option->name[i]; i++) {
		if (i + 1 == buflen)
			return 0;
		if (option->name[i] == '-')
			buf[i] = '_';
		else
			buf[i] = option->name[i];
	}

	buf[i] = 0;
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
          unsigned long buflen = 100;
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_option0 = 1;
          struct dhcp_option * option = (struct dhcp_option *) malloc(_len_option0*sizeof(struct dhcp_option));
          for(int _i0 = 0; _i0 < _len_option0; _i0++) {
              int _len_option__i0__name0 = 1;
          option[_i0].name = (char *) malloc(_len_option__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_option__i0__name0; _j0++) {
            option[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dhcp_option_ev_name(buf,buflen,option);
          printf("%d\n", benchRet); 
          free(buf);
          for(int _aux = 0; _aux < _len_option0; _aux++) {
          free(option[_aux].name);
          }
          free(option);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long buflen = 255;
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_option0 = 65025;
          struct dhcp_option * option = (struct dhcp_option *) malloc(_len_option0*sizeof(struct dhcp_option));
          for(int _i0 = 0; _i0 < _len_option0; _i0++) {
              int _len_option__i0__name0 = 1;
          option[_i0].name = (char *) malloc(_len_option__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_option__i0__name0; _j0++) {
            option[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dhcp_option_ev_name(buf,buflen,option);
          printf("%d\n", benchRet); 
          free(buf);
          for(int _aux = 0; _aux < _len_option0; _aux++) {
          free(option[_aux].name);
          }
          free(option);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long buflen = 10;
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_option0 = 100;
          struct dhcp_option * option = (struct dhcp_option *) malloc(_len_option0*sizeof(struct dhcp_option));
          for(int _i0 = 0; _i0 < _len_option0; _i0++) {
              int _len_option__i0__name0 = 1;
          option[_i0].name = (char *) malloc(_len_option__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_option__i0__name0; _j0++) {
            option[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dhcp_option_ev_name(buf,buflen,option);
          printf("%d\n", benchRet); 
          free(buf);
          for(int _aux = 0; _aux < _len_option0; _aux++) {
          free(option[_aux].name);
          }
          free(option);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
