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
struct cmd_bind {int num_keys; int const* keys; } ;

/* Variables and functions */

__attribute__((used)) static bool bind_matches_key(struct cmd_bind *bind, int num_keys, const int *keys)
{
    if (bind->num_keys != num_keys)
        return false;
    for (int i = 0; i < num_keys; i++) {
        if (bind->keys[i] != keys[i])
            return false;
    }
    return true;
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
          int num_keys = 100;
          int _len_bind0 = 1;
          struct cmd_bind * bind = (struct cmd_bind *) malloc(_len_bind0*sizeof(struct cmd_bind));
          for(int _i0 = 0; _i0 < _len_bind0; _i0++) {
            bind[_i0].num_keys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bind__i0__keys0 = 1;
          bind[_i0].keys = (const int *) malloc(_len_bind__i0__keys0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_bind__i0__keys0; _j0++) {
            bind[_i0].keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_keys0 = 1;
          const int * keys = (const int *) malloc(_len_keys0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_keys0; _i0++) {
            keys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bind_matches_key(bind,num_keys,keys);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bind0; _aux++) {
          free(bind[_aux].keys);
          }
          free(bind);
          free(keys);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_keys = 255;
          int _len_bind0 = 65025;
          struct cmd_bind * bind = (struct cmd_bind *) malloc(_len_bind0*sizeof(struct cmd_bind));
          for(int _i0 = 0; _i0 < _len_bind0; _i0++) {
            bind[_i0].num_keys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bind__i0__keys0 = 1;
          bind[_i0].keys = (const int *) malloc(_len_bind__i0__keys0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_bind__i0__keys0; _j0++) {
            bind[_i0].keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_keys0 = 65025;
          const int * keys = (const int *) malloc(_len_keys0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_keys0; _i0++) {
            keys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bind_matches_key(bind,num_keys,keys);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bind0; _aux++) {
          free(bind[_aux].keys);
          }
          free(bind);
          free(keys);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_keys = 10;
          int _len_bind0 = 100;
          struct cmd_bind * bind = (struct cmd_bind *) malloc(_len_bind0*sizeof(struct cmd_bind));
          for(int _i0 = 0; _i0 < _len_bind0; _i0++) {
            bind[_i0].num_keys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bind__i0__keys0 = 1;
          bind[_i0].keys = (const int *) malloc(_len_bind__i0__keys0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_bind__i0__keys0; _j0++) {
            bind[_i0].keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_keys0 = 100;
          const int * keys = (const int *) malloc(_len_keys0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_keys0; _i0++) {
            keys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bind_matches_key(bind,num_keys,keys);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bind0; _aux++) {
          free(bind[_aux].keys);
          }
          free(bind);
          free(keys);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
