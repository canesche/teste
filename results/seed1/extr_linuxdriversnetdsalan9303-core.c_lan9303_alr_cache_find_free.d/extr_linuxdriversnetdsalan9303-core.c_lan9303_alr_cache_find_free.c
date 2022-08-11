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
       3            linked\n\
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
struct lan9303_alr_cache_entry {scalar_t__ port_map; } ;
struct lan9303 {struct lan9303_alr_cache_entry* alr_cache; } ;

/* Variables and functions */
 int LAN9303_NUM_ALR_RECORDS ; 

__attribute__((used)) static struct lan9303_alr_cache_entry *
lan9303_alr_cache_find_free(struct lan9303 *chip)
{
	int i;
	struct lan9303_alr_cache_entry *entr = chip->alr_cache;

	for (i = 0; i < LAN9303_NUM_ALR_RECORDS; i++, entr++)
		if (entr->port_map == 0)
			return entr;

	return NULL;
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
          int _len_chip0 = 1;
          struct lan9303 * chip = (struct lan9303 *) malloc(_len_chip0*sizeof(struct lan9303));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__alr_cache0 = 1;
          chip[_i0].alr_cache = (struct lan9303_alr_cache_entry *) malloc(_len_chip__i0__alr_cache0*sizeof(struct lan9303_alr_cache_entry));
          for(int _j0 = 0; _j0 < _len_chip__i0__alr_cache0; _j0++) {
            chip[_i0].alr_cache->port_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct lan9303_alr_cache_entry * benchRet = lan9303_alr_cache_find_free(chip);
          printf("%ld\n", (*benchRet).port_map);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].alr_cache);
          }
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_chip0 = 65025;
          struct lan9303 * chip = (struct lan9303 *) malloc(_len_chip0*sizeof(struct lan9303));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__alr_cache0 = 1;
          chip[_i0].alr_cache = (struct lan9303_alr_cache_entry *) malloc(_len_chip__i0__alr_cache0*sizeof(struct lan9303_alr_cache_entry));
          for(int _j0 = 0; _j0 < _len_chip__i0__alr_cache0; _j0++) {
            chip[_i0].alr_cache->port_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct lan9303_alr_cache_entry * benchRet = lan9303_alr_cache_find_free(chip);
          printf("%ld\n", (*benchRet).port_map);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].alr_cache);
          }
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_chip0 = 100;
          struct lan9303 * chip = (struct lan9303 *) malloc(_len_chip0*sizeof(struct lan9303));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__alr_cache0 = 1;
          chip[_i0].alr_cache = (struct lan9303_alr_cache_entry *) malloc(_len_chip__i0__alr_cache0*sizeof(struct lan9303_alr_cache_entry));
          for(int _j0 = 0; _j0 < _len_chip__i0__alr_cache0; _j0++) {
            chip[_i0].alr_cache->port_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct lan9303_alr_cache_entry * benchRet = lan9303_alr_cache_find_free(chip);
          printf("%ld\n", (*benchRet).port_map);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].alr_cache);
          }
          free(chip);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_chip0 = 1;
          struct lan9303 * chip = (struct lan9303 *) malloc(_len_chip0*sizeof(struct lan9303));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__alr_cache0 = 1;
          chip[_i0].alr_cache = (struct lan9303_alr_cache_entry *) malloc(_len_chip__i0__alr_cache0*sizeof(struct lan9303_alr_cache_entry));
          for(int _j0 = 0; _j0 < _len_chip__i0__alr_cache0; _j0++) {
            chip[_i0].alr_cache->port_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct lan9303_alr_cache_entry * benchRet = lan9303_alr_cache_find_free(chip);
          printf("%ld\n", (*benchRet).port_map);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].alr_cache);
          }
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
