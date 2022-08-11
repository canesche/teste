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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int width; int height; scalar_t__ freeze_count; int /*<<< orphan*/  visibility; scalar_t__ configure_serial; int /*<<< orphan*/ * bin_window; int /*<<< orphan*/ * children; } ;
typedef  TYPE_1__ GtkForm ;

/* Variables and functions */
 int /*<<< orphan*/  GDK_VISIBILITY_PARTIAL ; 

__attribute__((used)) static void
gtk_form_init(GtkForm *form)
{
    form->children = NULL;

    form->width = 1;
    form->height = 1;

    form->bin_window = NULL;

    form->configure_serial = 0;
    form->visibility = GDK_VISIBILITY_PARTIAL;

    form->freeze_count = 0;
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
          int _len_form0 = 1;
          struct TYPE_3__ * form = (struct TYPE_3__ *) malloc(_len_form0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_form0; _i0++) {
            form[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].freeze_count = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].visibility = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].configure_serial = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_form__i0__bin_window0 = 1;
          form[_i0].bin_window = (int *) malloc(_len_form__i0__bin_window0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_form__i0__bin_window0; _j0++) {
            form[_i0].bin_window[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_form__i0__children0 = 1;
          form[_i0].children = (int *) malloc(_len_form__i0__children0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_form__i0__children0; _j0++) {
            form[_i0].children[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gtk_form_init(form);
          for(int _aux = 0; _aux < _len_form0; _aux++) {
          free(form[_aux].bin_window);
          }
          for(int _aux = 0; _aux < _len_form0; _aux++) {
          free(form[_aux].children);
          }
          free(form);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_form0 = 65025;
          struct TYPE_3__ * form = (struct TYPE_3__ *) malloc(_len_form0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_form0; _i0++) {
            form[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].freeze_count = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].visibility = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].configure_serial = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_form__i0__bin_window0 = 1;
          form[_i0].bin_window = (int *) malloc(_len_form__i0__bin_window0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_form__i0__bin_window0; _j0++) {
            form[_i0].bin_window[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_form__i0__children0 = 1;
          form[_i0].children = (int *) malloc(_len_form__i0__children0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_form__i0__children0; _j0++) {
            form[_i0].children[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gtk_form_init(form);
          for(int _aux = 0; _aux < _len_form0; _aux++) {
          free(form[_aux].bin_window);
          }
          for(int _aux = 0; _aux < _len_form0; _aux++) {
          free(form[_aux].children);
          }
          free(form);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_form0 = 100;
          struct TYPE_3__ * form = (struct TYPE_3__ *) malloc(_len_form0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_form0; _i0++) {
            form[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].freeze_count = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].visibility = ((-2 * (next_i()%2)) + 1) * next_i();
        form[_i0].configure_serial = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_form__i0__bin_window0 = 1;
          form[_i0].bin_window = (int *) malloc(_len_form__i0__bin_window0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_form__i0__bin_window0; _j0++) {
            form[_i0].bin_window[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_form__i0__children0 = 1;
          form[_i0].children = (int *) malloc(_len_form__i0__children0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_form__i0__children0; _j0++) {
            form[_i0].children[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gtk_form_init(form);
          for(int _aux = 0; _aux < _len_form0; _aux++) {
          free(form[_aux].bin_window);
          }
          for(int _aux = 0; _aux < _len_form0; _aux++) {
          free(form[_aux].children);
          }
          free(form);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
