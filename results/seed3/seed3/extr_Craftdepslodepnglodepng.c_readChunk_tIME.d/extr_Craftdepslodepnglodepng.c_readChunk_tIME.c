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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int year; unsigned char month; unsigned char day; unsigned char hour; unsigned char minute; unsigned char second; } ;
struct TYPE_5__ {int time_defined; TYPE_1__ time; } ;
typedef  TYPE_2__ LodePNGInfo ;

/* Variables and functions */

__attribute__((used)) static unsigned readChunk_tIME(LodePNGInfo* info, const unsigned char* data, size_t chunkLength)
{
  if(chunkLength != 7) return 73; /*invalid tIME chunk size*/

  info->time_defined = 1;
  info->time.year = 256 * data[0] + data[+ 1];
  info->time.month = data[2];
  info->time.day = data[3];
  info->time.hour = data[4];
  info->time.minute = data[5];
  info->time.second = data[6];

  return 0; /* OK */
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
          unsigned long chunkLength = 100;
          int _len_info0 = 1;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].time_defined = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.year = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.month = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.day = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.hour = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.minute = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.second = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = readChunk_tIME(info,data,chunkLength);
          printf("%u\n", benchRet); 
          free(info);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long chunkLength = 255;
          int _len_info0 = 65025;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].time_defined = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.year = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.month = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.day = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.hour = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.minute = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.second = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = readChunk_tIME(info,data,chunkLength);
          printf("%u\n", benchRet); 
          free(info);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long chunkLength = 10;
          int _len_info0 = 100;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].time_defined = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.year = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.month = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.day = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.hour = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.minute = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time.second = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = readChunk_tIME(info,data,chunkLength);
          printf("%u\n", benchRet); 
          free(info);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
