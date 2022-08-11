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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char const* varname; struct TYPE_3__* iter; } ;
typedef  TYPE_1__ CGI_varlist ;

/* Variables and functions */

const char *
CGI_first_name(CGI_varlist *v) {
    return v == 0 ? 0 : (v->iter = v)->varname;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_v(int length, struct TYPE_3__ *aux_v[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_v[0] = walker;
  int _len_walker_varname0 = 1;
  walker->varname = (const char *) malloc(_len_walker_varname0*sizeof(const char));
  for(int _i0 = 0; _i0 < _len_walker_varname0; _i0++) {
    walker->varname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->iter = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->iter = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->iter;
    aux_v[i] = walker;
  int _len_walker_varname0 = 1;
  walker->varname = (const char *) malloc(_len_walker_varname0*sizeof(const char));
  for(int _i0 = 0; _i0 < _len_walker_varname0; _i0++) {
    walker->varname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->iter = NULL;
  }

  return head;
}

void _delete_v(struct TYPE_3__ *aux_v[], int aux_v_size) {
  for(int i = 0; i < aux_v_size; i++) 
    if(aux_v[i])
      free(aux_v[i]);
}

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
          struct TYPE_3__ * aux_v[1];
          struct TYPE_3__ * v = _allocate_v(1, aux_v);
          const char * benchRet = CGI_first_name(v);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          _delete_v(aux_v, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_3__ * aux_v[10000];
          struct TYPE_3__ * v = _allocate_v(10000, aux_v);
          const char * benchRet = CGI_first_name(v);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          _delete_v(aux_v, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
