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
struct path {scalar_t__ flags; scalar_t__ num_keys; int /*<<< orphan*/ * keys; scalar_t__ len_class; int /*<<< orphan*/ * class; scalar_t__ num_namespaces; int /*<<< orphan*/ * len_namespaces; int /*<<< orphan*/ * namespaces; scalar_t__ len_server; int /*<<< orphan*/ * server; scalar_t__ len_text; int /*<<< orphan*/ * text; } ;

/* Variables and functions */

__attribute__((used)) static void init_path( struct path *path )
{
    path->text           = NULL;
    path->len_text       = 0;
    path->server         = NULL;
    path->len_server     = 0;
    path->namespaces     = NULL;
    path->len_namespaces = NULL;
    path->num_namespaces = 0;
    path->class          = NULL;
    path->len_class      = 0;
    path->keys           = NULL;
    path->num_keys       = 0;
    path->flags          = 0;
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
          int _len_path0 = 1;
          struct path * path = (struct path *) malloc(_len_path0*sizeof(struct path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].num_keys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__keys0 = 1;
          path[_i0].keys = (int *) malloc(_len_path__i0__keys0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__keys0; _j0++) {
            path[_i0].keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].len_class = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__class0 = 1;
          path[_i0].class = (int *) malloc(_len_path__i0__class0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__class0; _j0++) {
            path[_i0].class[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].num_namespaces = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__len_namespaces0 = 1;
          path[_i0].len_namespaces = (int *) malloc(_len_path__i0__len_namespaces0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__len_namespaces0; _j0++) {
            path[_i0].len_namespaces[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path__i0__namespaces0 = 1;
          path[_i0].namespaces = (int *) malloc(_len_path__i0__namespaces0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__namespaces0; _j0++) {
            path[_i0].namespaces[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].len_server = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__server0 = 1;
          path[_i0].server = (int *) malloc(_len_path__i0__server0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__server0; _j0++) {
            path[_i0].server[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].len_text = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__text0 = 1;
          path[_i0].text = (int *) malloc(_len_path__i0__text0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__text0; _j0++) {
            path[_i0].text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_path(path);
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].keys);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].class);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].len_namespaces);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].namespaces);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].server);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].text);
          }
          free(path);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_path0 = 65025;
          struct path * path = (struct path *) malloc(_len_path0*sizeof(struct path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].num_keys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__keys0 = 1;
          path[_i0].keys = (int *) malloc(_len_path__i0__keys0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__keys0; _j0++) {
            path[_i0].keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].len_class = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__class0 = 1;
          path[_i0].class = (int *) malloc(_len_path__i0__class0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__class0; _j0++) {
            path[_i0].class[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].num_namespaces = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__len_namespaces0 = 1;
          path[_i0].len_namespaces = (int *) malloc(_len_path__i0__len_namespaces0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__len_namespaces0; _j0++) {
            path[_i0].len_namespaces[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path__i0__namespaces0 = 1;
          path[_i0].namespaces = (int *) malloc(_len_path__i0__namespaces0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__namespaces0; _j0++) {
            path[_i0].namespaces[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].len_server = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__server0 = 1;
          path[_i0].server = (int *) malloc(_len_path__i0__server0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__server0; _j0++) {
            path[_i0].server[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].len_text = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__text0 = 1;
          path[_i0].text = (int *) malloc(_len_path__i0__text0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__text0; _j0++) {
            path[_i0].text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_path(path);
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].keys);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].class);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].len_namespaces);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].namespaces);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].server);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].text);
          }
          free(path);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_path0 = 100;
          struct path * path = (struct path *) malloc(_len_path0*sizeof(struct path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].num_keys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__keys0 = 1;
          path[_i0].keys = (int *) malloc(_len_path__i0__keys0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__keys0; _j0++) {
            path[_i0].keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].len_class = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__class0 = 1;
          path[_i0].class = (int *) malloc(_len_path__i0__class0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__class0; _j0++) {
            path[_i0].class[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].num_namespaces = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__len_namespaces0 = 1;
          path[_i0].len_namespaces = (int *) malloc(_len_path__i0__len_namespaces0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__len_namespaces0; _j0++) {
            path[_i0].len_namespaces[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path__i0__namespaces0 = 1;
          path[_i0].namespaces = (int *) malloc(_len_path__i0__namespaces0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__namespaces0; _j0++) {
            path[_i0].namespaces[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].len_server = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__server0 = 1;
          path[_i0].server = (int *) malloc(_len_path__i0__server0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__server0; _j0++) {
            path[_i0].server[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        path[_i0].len_text = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__text0 = 1;
          path[_i0].text = (int *) malloc(_len_path__i0__text0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_path__i0__text0; _j0++) {
            path[_i0].text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_path(path);
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].keys);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].class);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].len_namespaces);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].namespaces);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].server);
          }
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].text);
          }
          free(path);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
