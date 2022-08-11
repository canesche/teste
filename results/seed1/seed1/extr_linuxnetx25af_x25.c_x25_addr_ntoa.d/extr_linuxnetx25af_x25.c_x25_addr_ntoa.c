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
struct x25_address {char* x25_addr; } ;

/* Variables and functions */

int x25_addr_ntoa(unsigned char *p, struct x25_address *called_addr,
		  struct x25_address *calling_addr)
{
	unsigned int called_len, calling_len;
	char *called, *calling;
	unsigned int i;

	called_len  = (*p >> 0) & 0x0F;
	calling_len = (*p >> 4) & 0x0F;

	called  = called_addr->x25_addr;
	calling = calling_addr->x25_addr;
	p++;

	for (i = 0; i < (called_len + calling_len); i++) {
		if (i < called_len) {
			if (i % 2 != 0) {
				*called++ = ((*p >> 0) & 0x0F) + '0';
				p++;
			} else {
				*called++ = ((*p >> 4) & 0x0F) + '0';
			}
		} else {
			if (i % 2 != 0) {
				*calling++ = ((*p >> 0) & 0x0F) + '0';
				p++;
			} else {
				*calling++ = ((*p >> 4) & 0x0F) + '0';
			}
		}
	}

	*called = *calling = '\0';

	return 1 + (called_len + calling_len + 1) / 2;
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
          int _len_p0 = 1;
          unsigned char * p = (unsigned char *) malloc(_len_p0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_called_addr0 = 1;
          struct x25_address * called_addr = (struct x25_address *) malloc(_len_called_addr0*sizeof(struct x25_address));
          for(int _i0 = 0; _i0 < _len_called_addr0; _i0++) {
              int _len_called_addr__i0__x25_addr0 = 1;
          called_addr[_i0].x25_addr = (char *) malloc(_len_called_addr__i0__x25_addr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_called_addr__i0__x25_addr0; _j0++) {
            called_addr[_i0].x25_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_calling_addr0 = 1;
          struct x25_address * calling_addr = (struct x25_address *) malloc(_len_calling_addr0*sizeof(struct x25_address));
          for(int _i0 = 0; _i0 < _len_calling_addr0; _i0++) {
              int _len_calling_addr__i0__x25_addr0 = 1;
          calling_addr[_i0].x25_addr = (char *) malloc(_len_calling_addr__i0__x25_addr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_calling_addr__i0__x25_addr0; _j0++) {
            calling_addr[_i0].x25_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = x25_addr_ntoa(p,called_addr,calling_addr);
          printf("%d\n", benchRet); 
          free(p);
          for(int _aux = 0; _aux < _len_called_addr0; _aux++) {
          free(called_addr[_aux].x25_addr);
          }
          free(called_addr);
          for(int _aux = 0; _aux < _len_calling_addr0; _aux++) {
          free(calling_addr[_aux].x25_addr);
          }
          free(calling_addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          unsigned char * p = (unsigned char *) malloc(_len_p0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_called_addr0 = 65025;
          struct x25_address * called_addr = (struct x25_address *) malloc(_len_called_addr0*sizeof(struct x25_address));
          for(int _i0 = 0; _i0 < _len_called_addr0; _i0++) {
              int _len_called_addr__i0__x25_addr0 = 1;
          called_addr[_i0].x25_addr = (char *) malloc(_len_called_addr__i0__x25_addr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_called_addr__i0__x25_addr0; _j0++) {
            called_addr[_i0].x25_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_calling_addr0 = 65025;
          struct x25_address * calling_addr = (struct x25_address *) malloc(_len_calling_addr0*sizeof(struct x25_address));
          for(int _i0 = 0; _i0 < _len_calling_addr0; _i0++) {
              int _len_calling_addr__i0__x25_addr0 = 1;
          calling_addr[_i0].x25_addr = (char *) malloc(_len_calling_addr__i0__x25_addr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_calling_addr__i0__x25_addr0; _j0++) {
            calling_addr[_i0].x25_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = x25_addr_ntoa(p,called_addr,calling_addr);
          printf("%d\n", benchRet); 
          free(p);
          for(int _aux = 0; _aux < _len_called_addr0; _aux++) {
          free(called_addr[_aux].x25_addr);
          }
          free(called_addr);
          for(int _aux = 0; _aux < _len_calling_addr0; _aux++) {
          free(calling_addr[_aux].x25_addr);
          }
          free(calling_addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          unsigned char * p = (unsigned char *) malloc(_len_p0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_called_addr0 = 100;
          struct x25_address * called_addr = (struct x25_address *) malloc(_len_called_addr0*sizeof(struct x25_address));
          for(int _i0 = 0; _i0 < _len_called_addr0; _i0++) {
              int _len_called_addr__i0__x25_addr0 = 1;
          called_addr[_i0].x25_addr = (char *) malloc(_len_called_addr__i0__x25_addr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_called_addr__i0__x25_addr0; _j0++) {
            called_addr[_i0].x25_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_calling_addr0 = 100;
          struct x25_address * calling_addr = (struct x25_address *) malloc(_len_calling_addr0*sizeof(struct x25_address));
          for(int _i0 = 0; _i0 < _len_calling_addr0; _i0++) {
              int _len_calling_addr__i0__x25_addr0 = 1;
          calling_addr[_i0].x25_addr = (char *) malloc(_len_calling_addr__i0__x25_addr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_calling_addr__i0__x25_addr0; _j0++) {
            calling_addr[_i0].x25_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = x25_addr_ntoa(p,called_addr,calling_addr);
          printf("%d\n", benchRet); 
          free(p);
          for(int _aux = 0; _aux < _len_called_addr0; _aux++) {
          free(called_addr[_aux].x25_addr);
          }
          free(called_addr);
          for(int _aux = 0; _aux < _len_calling_addr0; _aux++) {
          free(calling_addr[_aux].x25_addr);
          }
          free(calling_addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
