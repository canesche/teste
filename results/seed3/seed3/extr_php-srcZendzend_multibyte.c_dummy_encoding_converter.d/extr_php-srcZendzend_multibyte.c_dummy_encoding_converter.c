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
typedef  int /*<<< orphan*/  zend_encoding ;

/* Variables and functions */

__attribute__((used)) static size_t dummy_encoding_converter(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from)
{
	return (size_t)-1;
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
          unsigned long from_length = 100;
          int _len_to0 = 1;
          unsigned char ** to = (unsigned char **) malloc(_len_to0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            int _len_to1 = 1;
            to[_i0] = (unsigned char *) malloc(_len_to1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_to1; _i1++) {
              to[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_to_length0 = 1;
          unsigned long * to_length = (unsigned long *) malloc(_len_to_length0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_to_length0; _i0++) {
            to_length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_from0 = 1;
          const unsigned char * from = (const unsigned char *) malloc(_len_from0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_encoding_to0 = 1;
          const int * encoding_to = (const int *) malloc(_len_encoding_to0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_encoding_to0; _i0++) {
            encoding_to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_encoding_from0 = 1;
          const int * encoding_from = (const int *) malloc(_len_encoding_from0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_encoding_from0; _i0++) {
            encoding_from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = dummy_encoding_converter(to,to_length,from,from_length,encoding_to,encoding_from);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_to0; i1++) {
            int _len_to1 = 1;
              free(to[i1]);
          }
          free(to);
          free(to_length);
          free(from);
          free(encoding_to);
          free(encoding_from);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long from_length = 255;
          int _len_to0 = 65025;
          unsigned char ** to = (unsigned char **) malloc(_len_to0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            int _len_to1 = 1;
            to[_i0] = (unsigned char *) malloc(_len_to1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_to1; _i1++) {
              to[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_to_length0 = 65025;
          unsigned long * to_length = (unsigned long *) malloc(_len_to_length0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_to_length0; _i0++) {
            to_length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_from0 = 65025;
          const unsigned char * from = (const unsigned char *) malloc(_len_from0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_encoding_to0 = 65025;
          const int * encoding_to = (const int *) malloc(_len_encoding_to0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_encoding_to0; _i0++) {
            encoding_to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_encoding_from0 = 65025;
          const int * encoding_from = (const int *) malloc(_len_encoding_from0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_encoding_from0; _i0++) {
            encoding_from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = dummy_encoding_converter(to,to_length,from,from_length,encoding_to,encoding_from);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_to0; i1++) {
            int _len_to1 = 1;
              free(to[i1]);
          }
          free(to);
          free(to_length);
          free(from);
          free(encoding_to);
          free(encoding_from);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long from_length = 10;
          int _len_to0 = 100;
          unsigned char ** to = (unsigned char **) malloc(_len_to0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            int _len_to1 = 1;
            to[_i0] = (unsigned char *) malloc(_len_to1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_to1; _i1++) {
              to[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_to_length0 = 100;
          unsigned long * to_length = (unsigned long *) malloc(_len_to_length0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_to_length0; _i0++) {
            to_length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_from0 = 100;
          const unsigned char * from = (const unsigned char *) malloc(_len_from0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_encoding_to0 = 100;
          const int * encoding_to = (const int *) malloc(_len_encoding_to0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_encoding_to0; _i0++) {
            encoding_to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_encoding_from0 = 100;
          const int * encoding_from = (const int *) malloc(_len_encoding_from0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_encoding_from0; _i0++) {
            encoding_from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = dummy_encoding_converter(to,to_length,from,from_length,encoding_to,encoding_from);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_to0; i1++) {
            int _len_to1 = 1;
              free(to[i1]);
          }
          free(to);
          free(to_length);
          free(from);
          free(encoding_to);
          free(encoding_from);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
