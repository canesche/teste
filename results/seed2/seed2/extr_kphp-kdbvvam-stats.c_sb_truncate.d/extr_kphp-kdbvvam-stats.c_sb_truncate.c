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
struct TYPE_3__ {char* buff; int size; int pos; } ;
typedef  TYPE_1__ stats_buffer_t ;

/* Variables and functions */

__attribute__((used)) static void sb_truncate (stats_buffer_t *sb) {
  sb->buff[sb->size - 1] = 0;
  sb->pos = sb->size - 2;
  while (sb->pos >= 0 && sb->buff[sb->pos] != '\n') {
    sb->buff[sb->pos--] = 0;
  }
  sb->pos++;
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
          int _len_sb0 = 1;
          struct TYPE_3__ * sb = (struct TYPE_3__ *) malloc(_len_sb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__buff0 = 1;
          sb[_i0].buff = (char *) malloc(_len_sb__i0__buff0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sb__i0__buff0; _j0++) {
            sb[_i0].buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sb_truncate(sb);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].buff);
          }
          free(sb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sb0 = 65025;
          struct TYPE_3__ * sb = (struct TYPE_3__ *) malloc(_len_sb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__buff0 = 1;
          sb[_i0].buff = (char *) malloc(_len_sb__i0__buff0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sb__i0__buff0; _j0++) {
            sb[_i0].buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sb_truncate(sb);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].buff);
          }
          free(sb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sb0 = 100;
          struct TYPE_3__ * sb = (struct TYPE_3__ *) malloc(_len_sb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__buff0 = 1;
          sb[_i0].buff = (char *) malloc(_len_sb__i0__buff0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sb__i0__buff0; _j0++) {
            sb[_i0].buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sb_truncate(sb);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].buff);
          }
          free(sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
