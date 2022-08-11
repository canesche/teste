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
struct TYPE_5__ {TYPE_1__* cc_data; } ;
typedef  TYPE_2__ user_data_t ;
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int /*<<< orphan*/  cea708_cc_type_t ;
struct TYPE_4__ {int cc_valid; int /*<<< orphan*/  cc_data; int /*<<< orphan*/  cc_type; } ;

/* Variables and functions */

uint16_t cea708_cc_data(user_data_t* data, int index, int* valid, cea708_cc_type_t* type)
{
    (*valid) = data->cc_data[index].cc_valid;
    (*type) = data->cc_data[index].cc_type;
    return data->cc_data[index].cc_data;
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
          int index = 100;
          int _len_data0 = 1;
          struct TYPE_5__ * data = (struct TYPE_5__ *) malloc(_len_data0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__cc_data0 = 1;
          data[_i0].cc_data = (struct TYPE_4__ *) malloc(_len_data__i0__cc_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__cc_data0; _j0++) {
            data[_i0].cc_data->cc_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].cc_data->cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].cc_data->cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_valid0 = 1;
          int * valid = (int *) malloc(_len_valid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_valid0; _i0++) {
            valid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 1;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cea708_cc_data(data,index,valid,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].cc_data);
          }
          free(data);
          free(valid);
          free(type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_data0 = 65025;
          struct TYPE_5__ * data = (struct TYPE_5__ *) malloc(_len_data0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__cc_data0 = 1;
          data[_i0].cc_data = (struct TYPE_4__ *) malloc(_len_data__i0__cc_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__cc_data0; _j0++) {
            data[_i0].cc_data->cc_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].cc_data->cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].cc_data->cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_valid0 = 65025;
          int * valid = (int *) malloc(_len_valid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_valid0; _i0++) {
            valid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 65025;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cea708_cc_data(data,index,valid,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].cc_data);
          }
          free(data);
          free(valid);
          free(type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_data0 = 100;
          struct TYPE_5__ * data = (struct TYPE_5__ *) malloc(_len_data0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__cc_data0 = 1;
          data[_i0].cc_data = (struct TYPE_4__ *) malloc(_len_data__i0__cc_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__cc_data0; _j0++) {
            data[_i0].cc_data->cc_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].cc_data->cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].cc_data->cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_valid0 = 100;
          int * valid = (int *) malloc(_len_valid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_valid0; _i0++) {
            valid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 100;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cea708_cc_data(data,index,valid,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].cc_data);
          }
          free(data);
          free(valid);
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
