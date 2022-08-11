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
typedef  int wchar_t ;
struct TYPE_3__ {int* cookie; size_t buf_size; int* buf; int* rpos; int* rend; } ;
typedef  TYPE_1__ FILE ;

/* Variables and functions */

__attribute__((used)) static size_t do_read(FILE *f, unsigned char *buf, size_t len)
{
	size_t i;
	const wchar_t *wcs = f->cookie;

	if (!wcs[0]) wcs=L"@";
	for (i=0; i<f->buf_size && wcs[i]; i++)
		f->buf[i] = wcs[i] < 128 ? wcs[i] : '@';
	f->rpos = f->buf;
	f->rend = f->buf + i;
	f->cookie = (void *)(wcs+i);

	if (i && len) {
		*buf = *f->rpos++;
		return 1;
	}
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
          unsigned long len = 100;
          int _len_f0 = 1;
          struct TYPE_3__ * f = (struct TYPE_3__ *) malloc(_len_f0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              int _len_f__i0__cookie0 = 1;
          f[_i0].cookie = (int *) malloc(_len_f__i0__cookie0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__cookie0; _j0++) {
            f[_i0].cookie[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        f[_i0].buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__buf0 = 1;
          f[_i0].buf = (int *) malloc(_len_f__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__buf0; _j0++) {
            f[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f__i0__rpos0 = 1;
          f[_i0].rpos = (int *) malloc(_len_f__i0__rpos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__rpos0; _j0++) {
            f[_i0].rpos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f__i0__rend0 = 1;
          f[_i0].rend = (int *) malloc(_len_f__i0__rend0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__rend0; _j0++) {
            f[_i0].rend[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = do_read(f,buf,len);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].cookie);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].rpos);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].rend);
          }
          free(f);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_f0 = 65025;
          struct TYPE_3__ * f = (struct TYPE_3__ *) malloc(_len_f0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              int _len_f__i0__cookie0 = 1;
          f[_i0].cookie = (int *) malloc(_len_f__i0__cookie0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__cookie0; _j0++) {
            f[_i0].cookie[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        f[_i0].buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__buf0 = 1;
          f[_i0].buf = (int *) malloc(_len_f__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__buf0; _j0++) {
            f[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f__i0__rpos0 = 1;
          f[_i0].rpos = (int *) malloc(_len_f__i0__rpos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__rpos0; _j0++) {
            f[_i0].rpos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f__i0__rend0 = 1;
          f[_i0].rend = (int *) malloc(_len_f__i0__rend0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__rend0; _j0++) {
            f[_i0].rend[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = do_read(f,buf,len);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].cookie);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].rpos);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].rend);
          }
          free(f);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_f0 = 100;
          struct TYPE_3__ * f = (struct TYPE_3__ *) malloc(_len_f0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              int _len_f__i0__cookie0 = 1;
          f[_i0].cookie = (int *) malloc(_len_f__i0__cookie0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__cookie0; _j0++) {
            f[_i0].cookie[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        f[_i0].buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__buf0 = 1;
          f[_i0].buf = (int *) malloc(_len_f__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__buf0; _j0++) {
            f[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f__i0__rpos0 = 1;
          f[_i0].rpos = (int *) malloc(_len_f__i0__rpos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__rpos0; _j0++) {
            f[_i0].rpos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f__i0__rend0 = 1;
          f[_i0].rend = (int *) malloc(_len_f__i0__rend0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__rend0; _j0++) {
            f[_i0].rend[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = do_read(f,buf,len);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].cookie);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].rpos);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].rend);
          }
          free(f);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
