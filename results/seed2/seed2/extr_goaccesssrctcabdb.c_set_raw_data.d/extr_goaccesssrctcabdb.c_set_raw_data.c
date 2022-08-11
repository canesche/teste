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
struct TYPE_7__ {size_t idx; scalar_t__ type; TYPE_2__* items; } ;
struct TYPE_5__ {char* svalue; int ivalue; } ;
struct TYPE_6__ {int key; TYPE_1__ value; } ;
typedef  TYPE_3__ GRawData ;

/* Variables and functions */
 scalar_t__ STRING ; 

__attribute__((used)) static void
set_raw_data (void *key, void *value, GRawData * raw_data)
{
  raw_data->items[raw_data->idx].key = (*(int *) key);
  if (raw_data->type == STRING)
    raw_data->items[raw_data->idx].value.svalue = (char *) value;
  else
    raw_data->items[raw_data->idx].value.ivalue = (*(int *) value);
  raw_data->idx++;
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
          void * key;
          void * value;
          int _len_raw_data0 = 1;
          struct TYPE_7__ * raw_data = (struct TYPE_7__ *) malloc(_len_raw_data0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_raw_data0; _i0++) {
            raw_data[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        raw_data[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_raw_data__i0__items0 = 1;
          raw_data[_i0].items = (struct TYPE_6__ *) malloc(_len_raw_data__i0__items0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_raw_data__i0__items0; _j0++) {
            raw_data[_i0].items->key = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_raw_data__i0__items_value_svalue0 = 1;
          raw_data[_i0].items->value.svalue = (char *) malloc(_len_raw_data__i0__items_value_svalue0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_raw_data__i0__items_value_svalue0; _j0++) {
            raw_data[_i0].items->value.svalue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw_data[_i0].items->value.ivalue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_raw_data(key,value,raw_data);
          for(int _aux = 0; _aux < _len_raw_data0; _aux++) {
          free(raw_data[_aux].items);
          }
          free(raw_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * key;
          void * value;
          int _len_raw_data0 = 65025;
          struct TYPE_7__ * raw_data = (struct TYPE_7__ *) malloc(_len_raw_data0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_raw_data0; _i0++) {
            raw_data[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        raw_data[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_raw_data__i0__items0 = 1;
          raw_data[_i0].items = (struct TYPE_6__ *) malloc(_len_raw_data__i0__items0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_raw_data__i0__items0; _j0++) {
            raw_data[_i0].items->key = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_raw_data__i0__items_value_svalue0 = 1;
          raw_data[_i0].items->value.svalue = (char *) malloc(_len_raw_data__i0__items_value_svalue0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_raw_data__i0__items_value_svalue0; _j0++) {
            raw_data[_i0].items->value.svalue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw_data[_i0].items->value.ivalue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_raw_data(key,value,raw_data);
          for(int _aux = 0; _aux < _len_raw_data0; _aux++) {
          free(raw_data[_aux].items);
          }
          free(raw_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * key;
          void * value;
          int _len_raw_data0 = 100;
          struct TYPE_7__ * raw_data = (struct TYPE_7__ *) malloc(_len_raw_data0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_raw_data0; _i0++) {
            raw_data[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        raw_data[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_raw_data__i0__items0 = 1;
          raw_data[_i0].items = (struct TYPE_6__ *) malloc(_len_raw_data__i0__items0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_raw_data__i0__items0; _j0++) {
            raw_data[_i0].items->key = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_raw_data__i0__items_value_svalue0 = 1;
          raw_data[_i0].items->value.svalue = (char *) malloc(_len_raw_data__i0__items_value_svalue0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_raw_data__i0__items_value_svalue0; _j0++) {
            raw_data[_i0].items->value.svalue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw_data[_i0].items->value.ivalue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_raw_data(key,value,raw_data);
          for(int _aux = 0; _aux < _len_raw_data0; _aux++) {
          free(raw_data[_aux].items);
          }
          free(raw_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
