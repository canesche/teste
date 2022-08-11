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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static void resolv_skip_name(uint8_t *reader, uint8_t *buffer, int *count)
{
    unsigned int jumped = 0, offset;
    *count = 1;
    while(*reader != 0)
    {
        if(*reader >= 192)
        {
            offset = (*reader)*256 + *(reader+1) - 49152;
            reader = buffer + offset - 1;
            jumped = 1;
        }
        reader = reader+1;
        if(jumped == 0)
            *count = *count + 1;
    }

    if(jumped == 1)
        *count = *count + 1;
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
          int _len_reader0 = 1;
          int * reader = (int *) malloc(_len_reader0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reader0; _i0++) {
            reader[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 1;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_count0 = 1;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          resolv_skip_name(reader,buffer,count);
          free(reader);
          free(buffer);
          free(count);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_reader0 = 65025;
          int * reader = (int *) malloc(_len_reader0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reader0; _i0++) {
            reader[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 65025;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_count0 = 65025;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          resolv_skip_name(reader,buffer,count);
          free(reader);
          free(buffer);
          free(count);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_reader0 = 100;
          int * reader = (int *) malloc(_len_reader0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reader0; _i0++) {
            reader[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 100;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_count0 = 100;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          resolv_skip_name(reader,buffer,count);
          free(reader);
          free(buffer);
          free(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
