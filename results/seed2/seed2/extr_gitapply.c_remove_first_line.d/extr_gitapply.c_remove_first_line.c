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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct image {int /*<<< orphan*/  nr; TYPE_1__* line; int /*<<< orphan*/  len; int /*<<< orphan*/  buf; } ;
struct TYPE_2__ {scalar_t__ len; } ;

/* Variables and functions */

__attribute__((used)) static void remove_first_line(struct image *img)
{
	img->buf += img->line[0].len;
	img->len -= img->line[0].len;
	img->line++;
	img->nr--;
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
          int _len_img0 = 1;
          struct image * img = (struct image *) malloc(_len_img0*sizeof(struct image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_img__i0__line0 = 1;
          img[_i0].line = (struct TYPE_2__ *) malloc(_len_img__i0__line0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_img__i0__line0; _j0++) {
            img[_i0].line->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        img[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          remove_first_line(img);
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].line);
          }
          free(img);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_img0 = 65025;
          struct image * img = (struct image *) malloc(_len_img0*sizeof(struct image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_img__i0__line0 = 1;
          img[_i0].line = (struct TYPE_2__ *) malloc(_len_img__i0__line0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_img__i0__line0; _j0++) {
            img[_i0].line->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        img[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          remove_first_line(img);
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].line);
          }
          free(img);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_img0 = 100;
          struct image * img = (struct image *) malloc(_len_img0*sizeof(struct image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_img__i0__line0 = 1;
          img[_i0].line = (struct TYPE_2__ *) malloc(_len_img__i0__line0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_img__i0__line0; _j0++) {
            img[_i0].line->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        img[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          remove_first_line(img);
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].line);
          }
          free(img);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
