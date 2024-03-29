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

__attribute__((used)) static void count_items(char *item_str, int *nb_items, char delimiter)
{
    char *p;

    *nb_items = 1;
    for (p = item_str; *p; p++) {
        if (*p == delimiter)
            (*nb_items)++;
    }
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
          char delimiter = 100;
          int _len_item_str0 = 1;
          char * item_str = (char *) malloc(_len_item_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_item_str0; _i0++) {
            item_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nb_items0 = 1;
          int * nb_items = (int *) malloc(_len_nb_items0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nb_items0; _i0++) {
            nb_items[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          count_items(item_str,nb_items,delimiter);
          free(item_str);
          free(nb_items);
        
        break;
    }
    // big-arr
    case 1:
    {
          char delimiter = 255;
          int _len_item_str0 = 65025;
          char * item_str = (char *) malloc(_len_item_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_item_str0; _i0++) {
            item_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nb_items0 = 65025;
          int * nb_items = (int *) malloc(_len_nb_items0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nb_items0; _i0++) {
            nb_items[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          count_items(item_str,nb_items,delimiter);
          free(item_str);
          free(nb_items);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char delimiter = 10;
          int _len_item_str0 = 100;
          char * item_str = (char *) malloc(_len_item_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_item_str0; _i0++) {
            item_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nb_items0 = 100;
          int * nb_items = (int *) malloc(_len_nb_items0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nb_items0; _i0++) {
            nb_items[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          count_items(item_str,nb_items,delimiter);
          free(item_str);
          free(nb_items);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
