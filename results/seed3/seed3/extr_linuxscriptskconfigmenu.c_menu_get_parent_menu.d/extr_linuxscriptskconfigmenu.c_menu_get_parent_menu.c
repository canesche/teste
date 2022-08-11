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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct menu {TYPE_1__* prompt; struct menu* parent; } ;
typedef  enum prop_type { ____Placeholder_prop_type } prop_type ;
struct TYPE_2__ {int type; } ;

/* Variables and functions */
 int P_MENU ; 
 struct menu rootmenu ; 

struct menu *menu_get_parent_menu(struct menu *menu)
{
	enum prop_type type;

	for (; menu != &rootmenu; menu = menu->parent) {
		type = menu->prompt ? menu->prompt->type : 0;
		if (type == P_MENU)
			break;
	}
	return menu;
}


// ------------------------------------------------------------------------- //

struct menu *_allocate_menu(int length, struct menu *aux_menu[]) {
  struct menu *walker = (struct menu *)malloc(sizeof(struct menu));

  aux_menu[0] = walker;
  int _len_walker_prompt0 = 1;
  walker->prompt = (struct TYPE_2__ *) malloc(_len_walker_prompt0*sizeof(struct TYPE_2__));
  for(int _i0 = 0; _i0 < _len_walker_prompt0; _i0++) {
    walker->prompt.type = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->parent = NULL;

  struct menu *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct menu *)malloc(sizeof(struct menu));
    walker = walker->parent;
    aux_menu[i] = walker;
  int _len_walker_prompt0 = 1;
  walker->prompt = (struct TYPE_2__ *) malloc(_len_walker_prompt0*sizeof(struct TYPE_2__));
  for(int _i0 = 0; _i0 < _len_walker_prompt0; _i0++) {
    walker->prompt.type = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->parent = NULL;
  }

  return head;
}

void _delete_menu(struct menu *aux_menu[], int aux_menu_size) {
  for(int i = 0; i < aux_menu_size; i++) 
    if(aux_menu[i])
      free(aux_menu[i]);
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
          struct menu * aux_menu[1];
          struct menu * menu = _allocate_menu(1, aux_menu);
          struct menu * benchRet = menu_get_parent_menu(menu);
          _delete_menu(aux_menu, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct menu * aux_menu[10000];
          struct menu * menu = _allocate_menu(10000, aux_menu);
          struct menu * benchRet = menu_get_parent_menu(menu);
          _delete_menu(aux_menu, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
