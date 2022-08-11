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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  sqlite3_stmt ;
struct TYPE_5__ {TYPE_1__* stmt_obj; } ;
typedef  TYPE_2__ php_sqlite3_free_list ;
struct TYPE_4__ {int /*<<< orphan*/ * stmt; scalar_t__ initialised; } ;

/* Variables and functions */

__attribute__((used)) static int php_sqlite3_compare_stmt_free( php_sqlite3_free_list **free_list, sqlite3_stmt *statement ) /* {{{ */
{
	return ((*free_list)->stmt_obj->initialised && statement == (*free_list)->stmt_obj->stmt);
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
          int _len_free_list0 = 1;
          struct TYPE_5__ ** free_list = (struct TYPE_5__ **) malloc(_len_free_list0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_free_list0; _i0++) {
            int _len_free_list1 = 1;
            free_list[_i0] = (struct TYPE_5__ *) malloc(_len_free_list1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_free_list1; _i1++) {
                int _len_free_list__i0___i1__stmt_obj0 = 1;
          free_list[_i0][_i1].stmt_obj = (struct TYPE_4__ *) malloc(_len_free_list__i0___i1__stmt_obj0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_free_list__i0___i1__stmt_obj0; _j0++) {
              int _len_free_list__i0___i1__stmt_obj_stmt0 = 1;
          free_list[_i0][_i1].stmt_obj->stmt = (int *) malloc(_len_free_list__i0___i1__stmt_obj_stmt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_free_list__i0___i1__stmt_obj_stmt0; _j0++) {
            free_list[_i0][_i1].stmt_obj->stmt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        free_list[_i0][_i1].stmt_obj->initialised = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_statement0 = 1;
          int * statement = (int *) malloc(_len_statement0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_statement0; _i0++) {
            statement[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = php_sqlite3_compare_stmt_free(free_list,statement);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_free_list0; i1++) {
            int _len_free_list1 = 1;
              for(int _aux = 0; _aux < _len_free_list1; _aux++) {
          free(free_list[_aux].stmt_obj);
          }
          free(free_list[i1]);
          }
          free(free_list);
          free(statement);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_free_list0 = 65025;
          struct TYPE_5__ ** free_list = (struct TYPE_5__ **) malloc(_len_free_list0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_free_list0; _i0++) {
            int _len_free_list1 = 1;
            free_list[_i0] = (struct TYPE_5__ *) malloc(_len_free_list1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_free_list1; _i1++) {
                int _len_free_list__i0___i1__stmt_obj0 = 1;
          free_list[_i0][_i1].stmt_obj = (struct TYPE_4__ *) malloc(_len_free_list__i0___i1__stmt_obj0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_free_list__i0___i1__stmt_obj0; _j0++) {
              int _len_free_list__i0___i1__stmt_obj_stmt0 = 1;
          free_list[_i0][_i1].stmt_obj->stmt = (int *) malloc(_len_free_list__i0___i1__stmt_obj_stmt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_free_list__i0___i1__stmt_obj_stmt0; _j0++) {
            free_list[_i0][_i1].stmt_obj->stmt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        free_list[_i0][_i1].stmt_obj->initialised = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_statement0 = 65025;
          int * statement = (int *) malloc(_len_statement0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_statement0; _i0++) {
            statement[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = php_sqlite3_compare_stmt_free(free_list,statement);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_free_list0; i1++) {
            int _len_free_list1 = 1;
              for(int _aux = 0; _aux < _len_free_list1; _aux++) {
          free(free_list[_aux].stmt_obj);
          }
          free(free_list[i1]);
          }
          free(free_list);
          free(statement);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_free_list0 = 100;
          struct TYPE_5__ ** free_list = (struct TYPE_5__ **) malloc(_len_free_list0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_free_list0; _i0++) {
            int _len_free_list1 = 1;
            free_list[_i0] = (struct TYPE_5__ *) malloc(_len_free_list1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_free_list1; _i1++) {
                int _len_free_list__i0___i1__stmt_obj0 = 1;
          free_list[_i0][_i1].stmt_obj = (struct TYPE_4__ *) malloc(_len_free_list__i0___i1__stmt_obj0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_free_list__i0___i1__stmt_obj0; _j0++) {
              int _len_free_list__i0___i1__stmt_obj_stmt0 = 1;
          free_list[_i0][_i1].stmt_obj->stmt = (int *) malloc(_len_free_list__i0___i1__stmt_obj_stmt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_free_list__i0___i1__stmt_obj_stmt0; _j0++) {
            free_list[_i0][_i1].stmt_obj->stmt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        free_list[_i0][_i1].stmt_obj->initialised = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_statement0 = 100;
          int * statement = (int *) malloc(_len_statement0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_statement0; _i0++) {
            statement[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = php_sqlite3_compare_stmt_free(free_list,statement);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_free_list0; i1++) {
            int _len_free_list1 = 1;
              for(int _aux = 0; _aux < _len_free_list1; _aux++) {
          free(free_list[_aux].stmt_obj);
          }
          free(free_list[i1]);
          }
          free(free_list);
          free(statement);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
