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
struct mg_connection {int /*<<< orphan*/ * user_data; } ;

/* Variables and functions */

__attribute__((used)) static void unlink_conns(struct mg_connection *nc1) {
  struct mg_connection *nc2 = (struct mg_connection *) nc1->user_data;
  if (nc1->user_data != NULL) {
    nc1->user_data = NULL;
    nc2->user_data = NULL;
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
          int _len_nc10 = 1;
          struct mg_connection * nc1 = (struct mg_connection *) malloc(_len_nc10*sizeof(struct mg_connection));
          for(int _i0 = 0; _i0 < _len_nc10; _i0++) {
              int _len_nc1__i0__user_data0 = 1;
          nc1[_i0].user_data = (int *) malloc(_len_nc1__i0__user_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nc1__i0__user_data0; _j0++) {
            nc1[_i0].user_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unlink_conns(nc1);
          for(int _aux = 0; _aux < _len_nc10; _aux++) {
          free(nc1[_aux].user_data);
          }
          free(nc1);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_nc10 = 65025;
          struct mg_connection * nc1 = (struct mg_connection *) malloc(_len_nc10*sizeof(struct mg_connection));
          for(int _i0 = 0; _i0 < _len_nc10; _i0++) {
              int _len_nc1__i0__user_data0 = 1;
          nc1[_i0].user_data = (int *) malloc(_len_nc1__i0__user_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nc1__i0__user_data0; _j0++) {
            nc1[_i0].user_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unlink_conns(nc1);
          for(int _aux = 0; _aux < _len_nc10; _aux++) {
          free(nc1[_aux].user_data);
          }
          free(nc1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_nc10 = 100;
          struct mg_connection * nc1 = (struct mg_connection *) malloc(_len_nc10*sizeof(struct mg_connection));
          for(int _i0 = 0; _i0 < _len_nc10; _i0++) {
              int _len_nc1__i0__user_data0 = 1;
          nc1[_i0].user_data = (int *) malloc(_len_nc1__i0__user_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nc1__i0__user_data0; _j0++) {
            nc1[_i0].user_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unlink_conns(nc1);
          for(int _aux = 0; _aux < _len_nc10; _aux++) {
          free(nc1[_aux].user_data);
          }
          free(nc1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
