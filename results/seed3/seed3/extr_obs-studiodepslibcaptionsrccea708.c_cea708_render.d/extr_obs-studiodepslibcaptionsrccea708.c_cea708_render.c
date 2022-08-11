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
typedef  int uint8_t ;
struct TYPE_6__ {int em_data; int cc_count; TYPE_1__* cc_data; scalar_t__ additional_data_flag; scalar_t__ process_cc_data_flag; scalar_t__ process_em_data_flag; } ;
struct TYPE_7__ {int country; int provider; int user_identifier; int user_data_type_code; int directv_user_data_length; TYPE_2__ user_data; } ;
typedef  TYPE_3__ cea708_t ;
struct TYPE_5__ {int marker_bits; int cc_valid; int cc_type; int cc_data; } ;

/* Variables and functions */
 int t35_provider_atsc ; 
 int t35_provider_direct_tv ; 

int cea708_render(cea708_t* cea708, uint8_t* data, size_t size)
{
    int i;
    size_t total = 0;
    data[0] = cea708->country;
    data[1] = cea708->provider >> 8;
    data[2] = cea708->provider >> 0;
    total += 3;
    data += 3;
    size -= 3;

    if (t35_provider_atsc == cea708->provider) {

        data[0] = cea708->user_identifier >> 24;
        data[1] = cea708->user_identifier >> 16;
        data[2] = cea708->user_identifier >> 8;
        data[3] = cea708->user_identifier >> 0;
        total += 4;
        data += 4;
        size -= 4;
    }

    if (t35_provider_atsc == cea708->provider || t35_provider_direct_tv == cea708->provider) {
        data[0] = cea708->user_data_type_code;
        total += 1;
        data += 1;
        size -= 1;
    }

    if (t35_provider_direct_tv == cea708->provider) {
        data[0] = cea708->directv_user_data_length;
        total += 1;
        data += 1;
        size -= 1;
    }

    data[1] = cea708->user_data.em_data;
    data[0] = (cea708->user_data.process_em_data_flag ? 0x80 : 0x00)
        | (cea708->user_data.process_cc_data_flag ? 0x40 : 0x00)
        | (cea708->user_data.additional_data_flag ? 0x20 : 0x00)
        | (cea708->user_data.cc_count & 0x1F);

    total += 2;
    data += 2;
    size -= 2;

    for (i = 0; i < (int)cea708->user_data.cc_count; ++i) {
        data[0] = (cea708->user_data.cc_data[i].marker_bits << 3) | (cea708->user_data.cc_data[i].cc_valid << 2) | cea708->user_data.cc_data[i].cc_type;
        data[1] = cea708->user_data.cc_data[i].cc_data >> 8;
        data[2] = cea708->user_data.cc_data[i].cc_data >> 0;
        total += 3;
        data += 3;
        size -= 3;
    }

    data[0] = 0xFF; //marker bits
    return (int)(total + 1);
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
          unsigned long size = 100;
          int _len_cea7080 = 1;
          struct TYPE_7__ * cea708 = (struct TYPE_7__ *) malloc(_len_cea7080*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cea7080; _i0++) {
            cea708[_i0].country = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].provider = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_identifier = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data_type_code = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].directv_user_data_length = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.em_data = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cea708__i0__user_data_cc_data0 = 1;
          cea708[_i0].user_data.cc_data = (struct TYPE_5__ *) malloc(_len_cea708__i0__user_data_cc_data0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cea708__i0__user_data_cc_data0; _j0++) {
            cea708[_i0].user_data.cc_data->marker_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cea708[_i0].user_data.additional_data_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.process_cc_data_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.process_em_data_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cea708_render(cea708,data,size);
          printf("%d\n", benchRet); 
          free(cea708);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int _len_cea7080 = 65025;
          struct TYPE_7__ * cea708 = (struct TYPE_7__ *) malloc(_len_cea7080*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cea7080; _i0++) {
            cea708[_i0].country = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].provider = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_identifier = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data_type_code = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].directv_user_data_length = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.em_data = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cea708__i0__user_data_cc_data0 = 1;
          cea708[_i0].user_data.cc_data = (struct TYPE_5__ *) malloc(_len_cea708__i0__user_data_cc_data0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cea708__i0__user_data_cc_data0; _j0++) {
            cea708[_i0].user_data.cc_data->marker_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cea708[_i0].user_data.additional_data_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.process_cc_data_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.process_em_data_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cea708_render(cea708,data,size);
          printf("%d\n", benchRet); 
          free(cea708);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int _len_cea7080 = 100;
          struct TYPE_7__ * cea708 = (struct TYPE_7__ *) malloc(_len_cea7080*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cea7080; _i0++) {
            cea708[_i0].country = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].provider = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_identifier = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data_type_code = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].directv_user_data_length = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.em_data = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cea708__i0__user_data_cc_data0 = 1;
          cea708[_i0].user_data.cc_data = (struct TYPE_5__ *) malloc(_len_cea708__i0__user_data_cc_data0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cea708__i0__user_data_cc_data0; _j0++) {
            cea708[_i0].user_data.cc_data->marker_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.cc_data->cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cea708[_i0].user_data.additional_data_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.process_cc_data_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        cea708[_i0].user_data.process_em_data_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cea708_render(cea708,data,size);
          printf("%d\n", benchRet); 
          free(cea708);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
