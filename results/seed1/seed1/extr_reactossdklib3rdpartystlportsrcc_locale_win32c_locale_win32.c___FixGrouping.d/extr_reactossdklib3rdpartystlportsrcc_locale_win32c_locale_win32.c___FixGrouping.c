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
 int /*<<< orphan*/  CHAR_MAX ; 

void __FixGrouping(char *grouping) {
  /* This converts NT version which uses '0' instead of 0, etc ; to ANSI */
  char *g = grouping;
  char building_group = 0;
  char repeat_last = 0;
  /* Check there is a grouping info otherwise we would add a useless CHAR_MAX */
  if (*g) {
    for (; *g; ++g) {
      if (*g > '0' && *g <= '9') {
        if (!building_group) {
          *grouping = *g - '0';
          building_group = 1;
        }
        else {
          /* Known issue: grouping might roll. */
          *grouping = *grouping * 10 + *g - '0';
        }
      }
      else if (*g == '0') {
        if (!building_group) {
          repeat_last = 1;
        }
        else
          /* Known issue: grouping might roll. */
          *grouping *= 10;
      }
      else if (*g == ';') {
        /* Stop adding to the current group */
        building_group = 0;
        ++grouping;
      }
      /* else we ignore the character */
    }

    if (!repeat_last)
      *grouping++ = CHAR_MAX;
    *grouping = 0;
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
          int _len_grouping0 = 1;
          char * grouping = (char *) malloc(_len_grouping0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_grouping0; _i0++) {
            grouping[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __FixGrouping(grouping);
          free(grouping);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_grouping0 = 65025;
          char * grouping = (char *) malloc(_len_grouping0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_grouping0; _i0++) {
            grouping[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __FixGrouping(grouping);
          free(grouping);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_grouping0 = 100;
          char * grouping = (char *) malloc(_len_grouping0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_grouping0; _i0++) {
            grouping[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __FixGrouping(grouping);
          free(grouping);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
