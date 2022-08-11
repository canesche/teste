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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint16_t ;
struct TYPE_6__ {int cc_count; TYPE_1__* cc_data; } ;
struct TYPE_7__ {TYPE_2__ user_data; } ;
typedef  TYPE_3__ cea708_t ;
typedef  int /*<<< orphan*/  cea708_cc_type_t ;
struct TYPE_5__ {int marker_bits; int cc_valid; int /*<<< orphan*/  cc_data; int /*<<< orphan*/  cc_type; } ;

/* Variables and functions */

int cea708_add_cc_data(cea708_t* cea708, int valid, cea708_cc_type_t type, uint16_t cc_data)
{
    if (31 <= cea708->user_data.cc_count) {
        return 0;
    }

    cea708->user_data.cc_data[cea708->user_data.cc_count].marker_bits = 0x1F;
    cea708->user_data.cc_data[cea708->user_data.cc_count].cc_valid = valid;
    cea708->user_data.cc_data[cea708->user_data.cc_count].cc_type = type;
    cea708->user_data.cc_data[cea708->user_data.cc_count].cc_data = cc_data;
    ++cea708->user_data.cc_count;
    return 1;
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
          int valid = 100;
          int type = 100;
          int cc_data = 100;
          int _len_cea7080 = 1;
          struct TYPE_7__ * cea708 = (struct TYPE_7__ *) malloc(_len_cea7080*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cea7080; _i0++) {
            cea708[_i0].user_data.cc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cea708__i0__user_data_cc_data0 = 1;
          cea708[_i0].user_data.cc_data = (struct TYPE_5__ *) malloc(_len_cea708__i0__user_data_cc_data0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cea708__i0__user_data_cc_data0; _j0++) {
            cea708[_i0].user_data.cc_data->marker_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cea708_add_cc_data(cea708,valid,type,cc_data);
          printf("%d\n", benchRet); 
          free(cea708);
        
        break;
    }
    // big-arr
    case 1:
    {
          int valid = 255;
          int type = 255;
          int cc_data = 255;
          int _len_cea7080 = 65025;
          struct TYPE_7__ * cea708 = (struct TYPE_7__ *) malloc(_len_cea7080*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cea7080; _i0++) {
            cea708[_i0].user_data.cc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cea708__i0__user_data_cc_data0 = 1;
          cea708[_i0].user_data.cc_data = (struct TYPE_5__ *) malloc(_len_cea708__i0__user_data_cc_data0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cea708__i0__user_data_cc_data0; _j0++) {
            cea708[_i0].user_data.cc_data->marker_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cea708_add_cc_data(cea708,valid,type,cc_data);
          printf("%d\n", benchRet); 
          free(cea708);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int valid = 10;
          int type = 10;
          int cc_data = 10;
          int _len_cea7080 = 100;
          struct TYPE_7__ * cea708 = (struct TYPE_7__ *) malloc(_len_cea7080*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cea7080; _i0++) {
            cea708[_i0].user_data.cc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cea708__i0__user_data_cc_data0 = 1;
          cea708[_i0].user_data.cc_data = (struct TYPE_5__ *) malloc(_len_cea708__i0__user_data_cc_data0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cea708__i0__user_data_cc_data0; _j0++) {
            cea708[_i0].user_data.cc_data->marker_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cea708_add_cc_data(cea708,valid,type,cc_data);
          printf("%d\n", benchRet); 
          free(cea708);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
