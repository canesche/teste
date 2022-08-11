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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ pos; scalar_t__ size; } ;
typedef  scalar_t__ OPJ_SIZE_T ;
typedef  scalar_t__ OPJ_OFF_T ;
typedef  TYPE_1__ BufferReader ;

/* Variables and functions */

__attribute__((used)) static OPJ_OFF_T stream_skip(OPJ_OFF_T nb_bytes, void *user_data)
{
    BufferReader *reader = user_data;
    if (nb_bytes < 0) {
        if (reader->pos == 0) {
            return (OPJ_SIZE_T)-1;
        }
        if (nb_bytes + reader->pos < 0) {
            nb_bytes = -reader->pos;
        }
    } else {
        int remaining;

        if (reader->pos == reader->size) {
            return (OPJ_SIZE_T)-1;
        }
        remaining = reader->size - reader->pos;
        if (nb_bytes > remaining) {
            nb_bytes = remaining;
        }
    }
    reader->pos += (int)nb_bytes;
    return nb_bytes;
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
          long nb_bytes = 100;
          void * user_data;
          long benchRet = stream_skip(nb_bytes,user_data);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long nb_bytes = 255;
          void * user_data;
          long benchRet = stream_skip(nb_bytes,user_data);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long nb_bytes = 10;
          void * user_data;
          long benchRet = stream_skip(nb_bytes,user_data);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
