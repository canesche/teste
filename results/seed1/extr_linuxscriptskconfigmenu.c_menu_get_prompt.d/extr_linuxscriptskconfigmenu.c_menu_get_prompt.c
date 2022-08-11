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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct menu {TYPE_2__* sym; TYPE_1__* prompt; } ;
struct TYPE_4__ {char const* name; } ;
struct TYPE_3__ {char const* text; } ;

/* Variables and functions */

const char *menu_get_prompt(struct menu *menu)
{
	if (menu->prompt)
		return menu->prompt->text;
	else if (menu->sym)
		return menu->sym->name;
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
          int _len_menu0 = 1;
          struct menu * menu = (struct menu *) malloc(_len_menu0*sizeof(struct menu));
          for(int _i0 = 0; _i0 < _len_menu0; _i0++) {
              int _len_menu__i0__sym0 = 1;
          menu[_i0].sym = (struct TYPE_4__ *) malloc(_len_menu__i0__sym0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_menu__i0__sym0; _j0++) {
              int _len_menu__i0__sym_name0 = 1;
          menu[_i0].sym->name = (const char *) malloc(_len_menu__i0__sym_name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_menu__i0__sym_name0; _j0++) {
            menu[_i0].sym->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_menu__i0__prompt0 = 1;
          menu[_i0].prompt = (struct TYPE_3__ *) malloc(_len_menu__i0__prompt0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_menu__i0__prompt0; _j0++) {
              int _len_menu__i0__prompt_text0 = 1;
          menu[_i0].prompt->text = (const char *) malloc(_len_menu__i0__prompt_text0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_menu__i0__prompt_text0; _j0++) {
            menu[_i0].prompt->text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = menu_get_prompt(menu);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_menu0; _aux++) {
          free(menu[_aux].sym);
          }
          for(int _aux = 0; _aux < _len_menu0; _aux++) {
          free(menu[_aux].prompt);
          }
          free(menu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_menu0 = 65025;
          struct menu * menu = (struct menu *) malloc(_len_menu0*sizeof(struct menu));
          for(int _i0 = 0; _i0 < _len_menu0; _i0++) {
              int _len_menu__i0__sym0 = 1;
          menu[_i0].sym = (struct TYPE_4__ *) malloc(_len_menu__i0__sym0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_menu__i0__sym0; _j0++) {
              int _len_menu__i0__sym_name0 = 1;
          menu[_i0].sym->name = (const char *) malloc(_len_menu__i0__sym_name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_menu__i0__sym_name0; _j0++) {
            menu[_i0].sym->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_menu__i0__prompt0 = 1;
          menu[_i0].prompt = (struct TYPE_3__ *) malloc(_len_menu__i0__prompt0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_menu__i0__prompt0; _j0++) {
              int _len_menu__i0__prompt_text0 = 1;
          menu[_i0].prompt->text = (const char *) malloc(_len_menu__i0__prompt_text0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_menu__i0__prompt_text0; _j0++) {
            menu[_i0].prompt->text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = menu_get_prompt(menu);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_menu0; _aux++) {
          free(menu[_aux].sym);
          }
          for(int _aux = 0; _aux < _len_menu0; _aux++) {
          free(menu[_aux].prompt);
          }
          free(menu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_menu0 = 100;
          struct menu * menu = (struct menu *) malloc(_len_menu0*sizeof(struct menu));
          for(int _i0 = 0; _i0 < _len_menu0; _i0++) {
              int _len_menu__i0__sym0 = 1;
          menu[_i0].sym = (struct TYPE_4__ *) malloc(_len_menu__i0__sym0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_menu__i0__sym0; _j0++) {
              int _len_menu__i0__sym_name0 = 1;
          menu[_i0].sym->name = (const char *) malloc(_len_menu__i0__sym_name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_menu__i0__sym_name0; _j0++) {
            menu[_i0].sym->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_menu__i0__prompt0 = 1;
          menu[_i0].prompt = (struct TYPE_3__ *) malloc(_len_menu__i0__prompt0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_menu__i0__prompt0; _j0++) {
              int _len_menu__i0__prompt_text0 = 1;
          menu[_i0].prompt->text = (const char *) malloc(_len_menu__i0__prompt_text0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_menu__i0__prompt_text0; _j0++) {
            menu[_i0].prompt->text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = menu_get_prompt(menu);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_menu0; _aux++) {
          free(menu[_aux].sym);
          }
          for(int _aux = 0; _aux < _len_menu0; _aux++) {
          free(menu[_aux].prompt);
          }
          free(menu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
