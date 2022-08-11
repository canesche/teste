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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t word ;
typedef  int byte ;
struct TYPE_3__ {int* info; int length; } ;
typedef  TYPE_1__ API_PARSE ;

/* Variables and functions */

__attribute__((used)) static word api_parse(byte *msg, word length, byte *format, API_PARSE *parms)
{
	word i;
	word p;

	for (i = 0, p = 0; format[i]; i++) {
		if (parms)
		{
			parms[i].info = &msg[p];
		}
		switch (format[i]) {
		case 'b':
			p += 1;
			break;
		case 'w':
			p += 2;
			break;
		case 'd':
			p += 4;
			break;
		case 's':
			if (msg[p] == 0xff) {
				parms[i].info += 2;
				parms[i].length = msg[p + 1] + (msg[p + 2] << 8);
				p += (parms[i].length + 3);
			}
			else {
				parms[i].length = msg[p];
				p += (parms[i].length + 1);
			}
			break;
		}

		if (p > length) return true;
	}
	if (parms) parms[i].info = NULL;
	return false;
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
          unsigned long length = 100;
          int _len_msg0 = 1;
          int * msg = (int *) malloc(_len_msg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_format0 = 1;
          int * format = (int *) malloc(_len_format0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parms0 = 1;
          struct TYPE_3__ * parms = (struct TYPE_3__ *) malloc(_len_parms0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parms0; _i0++) {
              int _len_parms__i0__info0 = 1;
          parms[_i0].info = (int *) malloc(_len_parms__i0__info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parms__i0__info0; _j0++) {
            parms[_i0].info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parms[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = api_parse(msg,length,format,parms);
          printf("%lu\n", benchRet); 
          free(msg);
          free(format);
          for(int _aux = 0; _aux < _len_parms0; _aux++) {
          free(parms[_aux].info);
          }
          free(parms);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          int _len_msg0 = 65025;
          int * msg = (int *) malloc(_len_msg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_format0 = 65025;
          int * format = (int *) malloc(_len_format0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parms0 = 65025;
          struct TYPE_3__ * parms = (struct TYPE_3__ *) malloc(_len_parms0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parms0; _i0++) {
              int _len_parms__i0__info0 = 1;
          parms[_i0].info = (int *) malloc(_len_parms__i0__info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parms__i0__info0; _j0++) {
            parms[_i0].info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parms[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = api_parse(msg,length,format,parms);
          printf("%lu\n", benchRet); 
          free(msg);
          free(format);
          for(int _aux = 0; _aux < _len_parms0; _aux++) {
          free(parms[_aux].info);
          }
          free(parms);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          int _len_msg0 = 100;
          int * msg = (int *) malloc(_len_msg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_format0 = 100;
          int * format = (int *) malloc(_len_format0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parms0 = 100;
          struct TYPE_3__ * parms = (struct TYPE_3__ *) malloc(_len_parms0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parms0; _i0++) {
              int _len_parms__i0__info0 = 1;
          parms[_i0].info = (int *) malloc(_len_parms__i0__info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parms__i0__info0; _j0++) {
            parms[_i0].info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parms[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = api_parse(msg,length,format,parms);
          printf("%lu\n", benchRet); 
          free(msg);
          free(format);
          for(int _aux = 0; _aux < _len_parms0; _aux++) {
          free(parms[_aux].info);
          }
          free(parms);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
