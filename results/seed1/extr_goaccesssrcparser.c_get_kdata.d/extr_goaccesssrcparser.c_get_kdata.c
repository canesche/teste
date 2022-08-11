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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char* data_key; char* data; } ;
typedef  TYPE_1__ GKeyData ;

/* Variables and functions */

__attribute__((used)) static void
get_kdata (GKeyData * kdata, char *data_key, char *data)
{
  /* inserted in keymap */
  kdata->data_key = data_key;
  /* inserted in datamap */
  kdata->data = data;
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
          int _len_kdata0 = 1;
          struct TYPE_3__ * kdata = (struct TYPE_3__ *) malloc(_len_kdata0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_kdata0; _i0++) {
              int _len_kdata__i0__data_key0 = 1;
          kdata[_i0].data_key = (char *) malloc(_len_kdata__i0__data_key0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_kdata__i0__data_key0; _j0++) {
            kdata[_i0].data_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kdata__i0__data0 = 1;
          kdata[_i0].data = (char *) malloc(_len_kdata__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_kdata__i0__data0; _j0++) {
            kdata[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data_key0 = 1;
          char * data_key = (char *) malloc(_len_data_key0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data_key0; _i0++) {
            data_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          char * data = (char *) malloc(_len_data0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_kdata(kdata,data_key,data);
          for(int _aux = 0; _aux < _len_kdata0; _aux++) {
          free(kdata[_aux].data_key);
          }
          for(int _aux = 0; _aux < _len_kdata0; _aux++) {
          free(kdata[_aux].data);
          }
          free(kdata);
          free(data_key);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_kdata0 = 65025;
          struct TYPE_3__ * kdata = (struct TYPE_3__ *) malloc(_len_kdata0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_kdata0; _i0++) {
              int _len_kdata__i0__data_key0 = 1;
          kdata[_i0].data_key = (char *) malloc(_len_kdata__i0__data_key0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_kdata__i0__data_key0; _j0++) {
            kdata[_i0].data_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kdata__i0__data0 = 1;
          kdata[_i0].data = (char *) malloc(_len_kdata__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_kdata__i0__data0; _j0++) {
            kdata[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data_key0 = 65025;
          char * data_key = (char *) malloc(_len_data_key0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data_key0; _i0++) {
            data_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          char * data = (char *) malloc(_len_data0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_kdata(kdata,data_key,data);
          for(int _aux = 0; _aux < _len_kdata0; _aux++) {
          free(kdata[_aux].data_key);
          }
          for(int _aux = 0; _aux < _len_kdata0; _aux++) {
          free(kdata[_aux].data);
          }
          free(kdata);
          free(data_key);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_kdata0 = 100;
          struct TYPE_3__ * kdata = (struct TYPE_3__ *) malloc(_len_kdata0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_kdata0; _i0++) {
              int _len_kdata__i0__data_key0 = 1;
          kdata[_i0].data_key = (char *) malloc(_len_kdata__i0__data_key0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_kdata__i0__data_key0; _j0++) {
            kdata[_i0].data_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kdata__i0__data0 = 1;
          kdata[_i0].data = (char *) malloc(_len_kdata__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_kdata__i0__data0; _j0++) {
            kdata[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data_key0 = 100;
          char * data_key = (char *) malloc(_len_data_key0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data_key0; _i0++) {
            data_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          char * data = (char *) malloc(_len_data0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_kdata(kdata,data_key,data);
          for(int _aux = 0; _aux < _len_kdata0; _aux++) {
          free(kdata[_aux].data_key);
          }
          for(int _aux = 0; _aux < _len_kdata0; _aux++) {
          free(kdata[_aux].data);
          }
          free(kdata);
          free(data_key);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
