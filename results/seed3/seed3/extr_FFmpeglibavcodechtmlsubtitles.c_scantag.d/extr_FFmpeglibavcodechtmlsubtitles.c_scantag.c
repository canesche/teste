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

/* Variables and functions */

__attribute__((used)) static int scantag(const char* in, char* buffer, int* lenp) {
    int len;

    for (len = 0; len < 128; len++) {
        const char c = *in++;
        switch (c) {
        case '\0':
            return 0;
        case '<':
            return 0;
        case '>':
            buffer[len] = '\0';
            *lenp = len+1;
            return 1;
        default:
            break;
        }
        buffer[len] = c;
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
          int _len_in0 = 1;
          const char * in = (const char *) malloc(_len_in0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 1;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lenp0 = 1;
          int * lenp = (int *) malloc(_len_lenp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lenp0; _i0++) {
            lenp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = scantag(in,buffer,lenp);
          printf("%d\n", benchRet); 
          free(in);
          free(buffer);
          free(lenp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_in0 = 65025;
          const char * in = (const char *) malloc(_len_in0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 65025;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lenp0 = 65025;
          int * lenp = (int *) malloc(_len_lenp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lenp0; _i0++) {
            lenp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = scantag(in,buffer,lenp);
          printf("%d\n", benchRet); 
          free(in);
          free(buffer);
          free(lenp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_in0 = 100;
          const char * in = (const char *) malloc(_len_in0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 100;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lenp0 = 100;
          int * lenp = (int *) malloc(_len_lenp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lenp0; _i0++) {
            lenp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = scantag(in,buffer,lenp);
          printf("%d\n", benchRet); 
          free(in);
          free(buffer);
          free(lenp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
