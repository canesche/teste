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
struct key_entry {scalar_t__ type; unsigned int keycode; } ;
struct input_dev {struct key_entry* keycode; } ;

/* Variables and functions */
 scalar_t__ KE_END ; 
 scalar_t__ KE_KEY ; 

struct key_entry *sparse_keymap_entry_from_keycode(struct input_dev *dev,
						   unsigned int keycode)
{
	struct key_entry *key;

	for (key = dev->keycode; key->type != KE_END; key++)
		if (key->type == KE_KEY && keycode == key->keycode)
			return key;

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
          unsigned int keycode = 100;
          int _len_dev0 = 1;
          struct input_dev * dev = (struct input_dev *) malloc(_len_dev0*sizeof(struct input_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__keycode0 = 1;
          dev[_i0].keycode = (struct key_entry *) malloc(_len_dev__i0__keycode0*sizeof(struct key_entry));
          for(int _j0 = 0; _j0 < _len_dev__i0__keycode0; _j0++) {
            dev[_i0].keycode->type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].keycode->keycode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct key_entry * benchRet = sparse_keymap_entry_from_keycode(dev,keycode);
          printf("%ld\n", (*benchRet).type);
          printf("%u\n", (*benchRet).keycode);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].keycode);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int keycode = 255;
          int _len_dev0 = 65025;
          struct input_dev * dev = (struct input_dev *) malloc(_len_dev0*sizeof(struct input_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__keycode0 = 1;
          dev[_i0].keycode = (struct key_entry *) malloc(_len_dev__i0__keycode0*sizeof(struct key_entry));
          for(int _j0 = 0; _j0 < _len_dev__i0__keycode0; _j0++) {
            dev[_i0].keycode->type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].keycode->keycode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct key_entry * benchRet = sparse_keymap_entry_from_keycode(dev,keycode);
          printf("%ld\n", (*benchRet).type);
          printf("%u\n", (*benchRet).keycode);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].keycode);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int keycode = 10;
          int _len_dev0 = 100;
          struct input_dev * dev = (struct input_dev *) malloc(_len_dev0*sizeof(struct input_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__keycode0 = 1;
          dev[_i0].keycode = (struct key_entry *) malloc(_len_dev__i0__keycode0*sizeof(struct key_entry));
          for(int _j0 = 0; _j0 < _len_dev__i0__keycode0; _j0++) {
            dev[_i0].keycode->type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].keycode->keycode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct key_entry * benchRet = sparse_keymap_entry_from_keycode(dev,keycode);
          printf("%ld\n", (*benchRet).type);
          printf("%u\n", (*benchRet).keycode);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].keycode);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
