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
struct d_info {char const* s; char const* send; int options; char const* n; int num_comps; size_t num_subs; scalar_t__ expansion; int /*<<< orphan*/ * last_name; scalar_t__ did_subs; scalar_t__ next_sub; scalar_t__ next_comp; } ;

/* Variables and functions */

void
cplus_demangle_init_info (const char *mangled, int options, size_t len,
                          struct d_info *di)
{
  di->s = mangled;
  di->send = mangled + len;
  di->options = options;

  di->n = mangled;

  /* We can not need more components than twice the number of chars in
     the mangled string.  Most components correspond directly to
     chars, but the ARGLIST types are exceptions.  */
  di->num_comps = 2 * len;
  di->next_comp = 0;

  /* Similarly, we can not need more substitutions than there are
     chars in the mangled string.  */
  di->num_subs = len;
  di->next_sub = 0;
  di->did_subs = 0;

  di->last_name = NULL;

  di->expansion = 0;
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
          int options = 100;
          unsigned long len = 100;
          int _len_mangled0 = 1;
          const char * mangled = (const char *) malloc(_len_mangled0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_mangled0; _i0++) {
            mangled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di0 = 1;
          struct d_info * di = (struct d_info *) malloc(_len_di0*sizeof(struct d_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
              int _len_di__i0__s0 = 1;
          di[_i0].s = (const char *) malloc(_len_di__i0__s0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_di__i0__s0; _j0++) {
            di[_i0].s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di__i0__send0 = 1;
          di[_i0].send = (const char *) malloc(_len_di__i0__send0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_di__i0__send0; _j0++) {
            di[_i0].send[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__n0 = 1;
          di[_i0].n = (const char *) malloc(_len_di__i0__n0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_di__i0__n0; _j0++) {
            di[_i0].n[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].num_comps = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].num_subs = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].expansion = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__last_name0 = 1;
          di[_i0].last_name = (int *) malloc(_len_di__i0__last_name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_di__i0__last_name0; _j0++) {
            di[_i0].last_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].did_subs = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].next_sub = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].next_comp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cplus_demangle_init_info(mangled,options,len,di);
          free(mangled);
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].s);
          }
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].send);
          }
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].n);
          }
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].last_name);
          }
          free(di);
        
        break;
    }
    // big-arr
    case 1:
    {
          int options = 255;
          unsigned long len = 255;
          int _len_mangled0 = 65025;
          const char * mangled = (const char *) malloc(_len_mangled0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_mangled0; _i0++) {
            mangled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di0 = 65025;
          struct d_info * di = (struct d_info *) malloc(_len_di0*sizeof(struct d_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
              int _len_di__i0__s0 = 1;
          di[_i0].s = (const char *) malloc(_len_di__i0__s0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_di__i0__s0; _j0++) {
            di[_i0].s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di__i0__send0 = 1;
          di[_i0].send = (const char *) malloc(_len_di__i0__send0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_di__i0__send0; _j0++) {
            di[_i0].send[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__n0 = 1;
          di[_i0].n = (const char *) malloc(_len_di__i0__n0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_di__i0__n0; _j0++) {
            di[_i0].n[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].num_comps = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].num_subs = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].expansion = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__last_name0 = 1;
          di[_i0].last_name = (int *) malloc(_len_di__i0__last_name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_di__i0__last_name0; _j0++) {
            di[_i0].last_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].did_subs = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].next_sub = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].next_comp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cplus_demangle_init_info(mangled,options,len,di);
          free(mangled);
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].s);
          }
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].send);
          }
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].n);
          }
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].last_name);
          }
          free(di);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int options = 10;
          unsigned long len = 10;
          int _len_mangled0 = 100;
          const char * mangled = (const char *) malloc(_len_mangled0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_mangled0; _i0++) {
            mangled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di0 = 100;
          struct d_info * di = (struct d_info *) malloc(_len_di0*sizeof(struct d_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
              int _len_di__i0__s0 = 1;
          di[_i0].s = (const char *) malloc(_len_di__i0__s0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_di__i0__s0; _j0++) {
            di[_i0].s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di__i0__send0 = 1;
          di[_i0].send = (const char *) malloc(_len_di__i0__send0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_di__i0__send0; _j0++) {
            di[_i0].send[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__n0 = 1;
          di[_i0].n = (const char *) malloc(_len_di__i0__n0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_di__i0__n0; _j0++) {
            di[_i0].n[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].num_comps = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].num_subs = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].expansion = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__last_name0 = 1;
          di[_i0].last_name = (int *) malloc(_len_di__i0__last_name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_di__i0__last_name0; _j0++) {
            di[_i0].last_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].did_subs = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].next_sub = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].next_comp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cplus_demangle_init_info(mangled,options,len,di);
          free(mangled);
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].s);
          }
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].send);
          }
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].n);
          }
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].last_name);
          }
          free(di);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
