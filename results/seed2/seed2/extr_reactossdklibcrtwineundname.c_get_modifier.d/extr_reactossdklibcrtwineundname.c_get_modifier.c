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
struct parsed_symbol {char* current; int flags; } ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 
 int UNDNAME_NO_LEADING_UNDERSCORES ; 
 int UNDNAME_NO_MS_KEYWORDS ; 

__attribute__((used)) static BOOL get_modifier(struct parsed_symbol *sym, const char **ret, const char **ptr_modif)
{
    *ptr_modif = NULL;
    if (*sym->current == 'E')
    {
        if (!(sym->flags & UNDNAME_NO_MS_KEYWORDS))
        {
            *ptr_modif = "__ptr64";
            if (sym->flags & UNDNAME_NO_LEADING_UNDERSCORES)
                *ptr_modif = *ptr_modif + 2;
        }
        sym->current++;
    }
    switch (*sym->current++)
    {
    case 'A': *ret = NULL; break;
    case 'B': *ret = "const"; break;
    case 'C': *ret = "volatile"; break;
    case 'D': *ret = "const volatile"; break;
    default: return FALSE;
    }
    return TRUE;
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
          int _len_sym0 = 1;
          struct parsed_symbol * sym = (struct parsed_symbol *) malloc(_len_sym0*sizeof(struct parsed_symbol));
          for(int _i0 = 0; _i0 < _len_sym0; _i0++) {
              int _len_sym__i0__current0 = 1;
          sym[_i0].current = (char *) malloc(_len_sym__i0__current0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sym__i0__current0; _j0++) {
            sym[_i0].current[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sym[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ret0 = 1;
          const char ** ret = (const char **) malloc(_len_ret0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            int _len_ret1 = 1;
            ret[_i0] = (const char *) malloc(_len_ret1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_ret1; _i1++) {
              ret[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ptr_modif0 = 1;
          const char ** ptr_modif = (const char **) malloc(_len_ptr_modif0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_ptr_modif0; _i0++) {
            int _len_ptr_modif1 = 1;
            ptr_modif[_i0] = (const char *) malloc(_len_ptr_modif1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_ptr_modif1; _i1++) {
              ptr_modif[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = get_modifier(sym,ret,ptr_modif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sym0; _aux++) {
          free(sym[_aux].current);
          }
          free(sym);
          for(int i1 = 0; i1 < _len_ret0; i1++) {
            int _len_ret1 = 1;
              free(ret[i1]);
          }
          free(ret);
          for(int i1 = 0; i1 < _len_ptr_modif0; i1++) {
            int _len_ptr_modif1 = 1;
              free(ptr_modif[i1]);
          }
          free(ptr_modif);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sym0 = 65025;
          struct parsed_symbol * sym = (struct parsed_symbol *) malloc(_len_sym0*sizeof(struct parsed_symbol));
          for(int _i0 = 0; _i0 < _len_sym0; _i0++) {
              int _len_sym__i0__current0 = 1;
          sym[_i0].current = (char *) malloc(_len_sym__i0__current0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sym__i0__current0; _j0++) {
            sym[_i0].current[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sym[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ret0 = 65025;
          const char ** ret = (const char **) malloc(_len_ret0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            int _len_ret1 = 1;
            ret[_i0] = (const char *) malloc(_len_ret1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_ret1; _i1++) {
              ret[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ptr_modif0 = 65025;
          const char ** ptr_modif = (const char **) malloc(_len_ptr_modif0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_ptr_modif0; _i0++) {
            int _len_ptr_modif1 = 1;
            ptr_modif[_i0] = (const char *) malloc(_len_ptr_modif1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_ptr_modif1; _i1++) {
              ptr_modif[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = get_modifier(sym,ret,ptr_modif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sym0; _aux++) {
          free(sym[_aux].current);
          }
          free(sym);
          for(int i1 = 0; i1 < _len_ret0; i1++) {
            int _len_ret1 = 1;
              free(ret[i1]);
          }
          free(ret);
          for(int i1 = 0; i1 < _len_ptr_modif0; i1++) {
            int _len_ptr_modif1 = 1;
              free(ptr_modif[i1]);
          }
          free(ptr_modif);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sym0 = 100;
          struct parsed_symbol * sym = (struct parsed_symbol *) malloc(_len_sym0*sizeof(struct parsed_symbol));
          for(int _i0 = 0; _i0 < _len_sym0; _i0++) {
              int _len_sym__i0__current0 = 1;
          sym[_i0].current = (char *) malloc(_len_sym__i0__current0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sym__i0__current0; _j0++) {
            sym[_i0].current[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sym[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ret0 = 100;
          const char ** ret = (const char **) malloc(_len_ret0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            int _len_ret1 = 1;
            ret[_i0] = (const char *) malloc(_len_ret1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_ret1; _i1++) {
              ret[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ptr_modif0 = 100;
          const char ** ptr_modif = (const char **) malloc(_len_ptr_modif0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_ptr_modif0; _i0++) {
            int _len_ptr_modif1 = 1;
            ptr_modif[_i0] = (const char *) malloc(_len_ptr_modif1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_ptr_modif1; _i1++) {
              ptr_modif[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = get_modifier(sym,ret,ptr_modif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sym0; _aux++) {
          free(sym[_aux].current);
          }
          free(sym);
          for(int i1 = 0; i1 < _len_ret0; i1++) {
            int _len_ret1 = 1;
              free(ret[i1]);
          }
          free(ret);
          for(int i1 = 0; i1 < _len_ptr_modif0; i1++) {
            int _len_ptr_modif1 = 1;
              free(ptr_modif[i1]);
          }
          free(ptr_modif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
