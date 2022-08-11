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
typedef  int /*<<< orphan*/  u64 ;

/* Variables and functions */

__attribute__((used)) static void _dump_field(const char *hdr, u64 n, const char *func, int line)
{
#if defined(DEBUG)
	char s[16];
	const char *const in = (const char *)&n;
	unsigned int i;

	for (i = 0; i < 8; i++)
		s[i] = (in[i] <= 126 && in[i] >= 32) ? in[i] : '.';
	s[i] = 0;

	pr_devel("%s:%d: %s%016llx : %s\n", func, line, hdr, n, s);
#endif
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
          int n = 100;
          int line = 100;
          int _len_hdr0 = 1;
          const char * hdr = (const char *) malloc(_len_hdr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func0 = 1;
          const char * func = (const char *) malloc(_len_func0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _dump_field(hdr,n,func,line);
          free(hdr);
          free(func);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int line = 255;
          int _len_hdr0 = 65025;
          const char * hdr = (const char *) malloc(_len_hdr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func0 = 65025;
          const char * func = (const char *) malloc(_len_func0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _dump_field(hdr,n,func,line);
          free(hdr);
          free(func);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int line = 10;
          int _len_hdr0 = 100;
          const char * hdr = (const char *) malloc(_len_hdr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func0 = 100;
          const char * func = (const char *) malloc(_len_func0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _dump_field(hdr,n,func,line);
          free(hdr);
          free(func);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
