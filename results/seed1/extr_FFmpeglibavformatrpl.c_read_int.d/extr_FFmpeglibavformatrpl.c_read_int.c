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
typedef  unsigned long int32_t ;

/* Variables and functions */

__attribute__((used)) static int32_t read_int(const char* line, const char** endptr, int* error)
{
    unsigned long result = 0;
    for (; *line>='0' && *line<='9'; line++) {
        if (result > (0x7FFFFFFF - 9) / 10)
            *error = -1;
        result = 10 * result + *line - '0';
    }
    *endptr = line;
    return result;
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
          int _len_line0 = 1;
          const char * line = (const char *) malloc(_len_line0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_endptr0 = 1;
          const char ** endptr = (const char **) malloc(_len_endptr0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_endptr0; _i0++) {
            int _len_endptr1 = 1;
            endptr[_i0] = (const char *) malloc(_len_endptr1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_endptr1; _i1++) {
              endptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_error0 = 1;
          int * error = (int *) malloc(_len_error0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
            error[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = read_int(line,endptr,error);
          printf("%lu\n", benchRet); 
          free(line);
          for(int i1 = 0; i1 < _len_endptr0; i1++) {
            int _len_endptr1 = 1;
              free(endptr[i1]);
          }
          free(endptr);
          free(error);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_line0 = 65025;
          const char * line = (const char *) malloc(_len_line0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_endptr0 = 65025;
          const char ** endptr = (const char **) malloc(_len_endptr0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_endptr0; _i0++) {
            int _len_endptr1 = 1;
            endptr[_i0] = (const char *) malloc(_len_endptr1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_endptr1; _i1++) {
              endptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_error0 = 65025;
          int * error = (int *) malloc(_len_error0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
            error[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = read_int(line,endptr,error);
          printf("%lu\n", benchRet); 
          free(line);
          for(int i1 = 0; i1 < _len_endptr0; i1++) {
            int _len_endptr1 = 1;
              free(endptr[i1]);
          }
          free(endptr);
          free(error);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_line0 = 100;
          const char * line = (const char *) malloc(_len_line0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_endptr0 = 100;
          const char ** endptr = (const char **) malloc(_len_endptr0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_endptr0; _i0++) {
            int _len_endptr1 = 1;
            endptr[_i0] = (const char *) malloc(_len_endptr1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_endptr1; _i1++) {
              endptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_error0 = 100;
          int * error = (int *) malloc(_len_error0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
            error[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = read_int(line,endptr,error);
          printf("%lu\n", benchRet); 
          free(line);
          for(int i1 = 0; i1 < _len_endptr0; i1++) {
            int _len_endptr1 = 1;
              free(endptr[i1]);
          }
          free(endptr);
          free(error);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
