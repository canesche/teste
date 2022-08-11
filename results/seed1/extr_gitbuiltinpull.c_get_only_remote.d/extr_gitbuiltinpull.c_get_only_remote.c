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
struct remote {char* name; } ;

/* Variables and functions */

__attribute__((used)) static int get_only_remote(struct remote *remote, void *cb_data)
{
	const char **remote_name = cb_data;

	if (*remote_name)
		return -1;

	*remote_name = remote->name;
	return 0;
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
          int _len_remote0 = 1;
          struct remote * remote = (struct remote *) malloc(_len_remote0*sizeof(struct remote));
          for(int _i0 = 0; _i0 < _len_remote0; _i0++) {
              int _len_remote__i0__name0 = 1;
          remote[_i0].name = (char *) malloc(_len_remote__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_remote__i0__name0; _j0++) {
            remote[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * cb_data;
          int benchRet = get_only_remote(remote,cb_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_remote0; _aux++) {
          free(remote[_aux].name);
          }
          free(remote);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_remote0 = 65025;
          struct remote * remote = (struct remote *) malloc(_len_remote0*sizeof(struct remote));
          for(int _i0 = 0; _i0 < _len_remote0; _i0++) {
              int _len_remote__i0__name0 = 1;
          remote[_i0].name = (char *) malloc(_len_remote__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_remote__i0__name0; _j0++) {
            remote[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * cb_data;
          int benchRet = get_only_remote(remote,cb_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_remote0; _aux++) {
          free(remote[_aux].name);
          }
          free(remote);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_remote0 = 100;
          struct remote * remote = (struct remote *) malloc(_len_remote0*sizeof(struct remote));
          for(int _i0 = 0; _i0 < _len_remote0; _i0++) {
              int _len_remote__i0__name0 = 1;
          remote[_i0].name = (char *) malloc(_len_remote__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_remote__i0__name0; _j0++) {
            remote[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * cb_data;
          int benchRet = get_only_remote(remote,cb_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_remote0; _aux++) {
          free(remote[_aux].name);
          }
          free(remote);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
