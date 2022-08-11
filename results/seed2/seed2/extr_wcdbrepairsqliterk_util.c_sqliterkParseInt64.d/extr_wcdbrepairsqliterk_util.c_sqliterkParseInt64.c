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
typedef  int uint32_t ;
typedef  int int8_t ;
typedef  int int64_t ;

/* Variables and functions */
 int SQLITERK_MISUSE ; 
 int SQLITERK_OK ; 

int sqliterkParseInt64(const unsigned char *data,
                       int offset,
                       int length,
                       int64_t *value)
{
    if (!data || !value)
        return SQLITERK_MISUSE;

    const unsigned char *p = data + offset;
    int64_t out;

    switch (length) {
        case 1:
            out = (int8_t) p[0];
            break;
        case 2:
            out = (((int8_t) p[0]) * 256) | p[1];
            break;
        case 3:
            out = (((int8_t) p[0]) * 65536) | (p[1] << 8) | p[2];
            break;
        case 4:
            out = (((int8_t) p[0]) * 16777216) | (p[1] << 16) | (p[2] << 8) |
                  p[3];
            break;
        case 6:
            out = (((int8_t) p[0]) * 256) | p[1];
            out *= ((int64_t) 1) << 32;
            out +=
                (((uint32_t) p[2]) << 24) | (p[3] << 16) | (p[4] << 8) | p[5];
            break;
        case 8:
            out = (((int8_t) p[0]) * 16777216) | (p[1] << 16) | (p[2] << 8) |
                  p[3];
            out *= ((int64_t) 1) << 32;
            out +=
                (((uint32_t) p[4]) << 24) | (p[5] << 16) | (p[6] << 8) | p[7];
            break;
        default:
            return SQLITERK_MISUSE;
    }

    *value = out;
    return SQLITERK_OK;
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
          int offset = 100;
          int length = 100;
          int _len_data0 = 1;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sqliterkParseInt64(data,offset,length,value);
          printf("%d\n", benchRet); 
          free(data);
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
          int length = 255;
          int _len_data0 = 65025;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 65025;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sqliterkParseInt64(data,offset,length,value);
          printf("%d\n", benchRet); 
          free(data);
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
          int length = 10;
          int _len_data0 = 100;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 100;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sqliterkParseInt64(data,offset,length,value);
          printf("%d\n", benchRet); 
          free(data);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
