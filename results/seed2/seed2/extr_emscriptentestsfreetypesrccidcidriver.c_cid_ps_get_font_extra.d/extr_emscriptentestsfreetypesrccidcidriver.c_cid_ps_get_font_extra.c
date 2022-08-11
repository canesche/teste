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
struct TYPE_2__ {int /*<<< orphan*/  font_extra; } ;
typedef  int /*<<< orphan*/  PS_FontExtraRec ;
typedef  scalar_t__ FT_Face ;
typedef  int /*<<< orphan*/  FT_Error ;
typedef  TYPE_1__* CID_Face ;

/* Variables and functions */
 int /*<<< orphan*/  CID_Err_Ok ; 

__attribute__((used)) static FT_Error
  cid_ps_get_font_extra( FT_Face          face,
                        PS_FontExtraRec*  afont_extra )
  {
    *afont_extra = ((CID_Face)face)->font_extra;

    return CID_Err_Ok;
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
          long face = 100;
          int _len_afont_extra0 = 1;
          int * afont_extra = (int *) malloc(_len_afont_extra0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_afont_extra0; _i0++) {
            afont_extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cid_ps_get_font_extra(face,afont_extra);
          printf("%d\n", benchRet); 
          free(afont_extra);
        
        break;
    }
    // big-arr
    case 1:
    {
          long face = 255;
          int _len_afont_extra0 = 65025;
          int * afont_extra = (int *) malloc(_len_afont_extra0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_afont_extra0; _i0++) {
            afont_extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cid_ps_get_font_extra(face,afont_extra);
          printf("%d\n", benchRet); 
          free(afont_extra);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long face = 10;
          int _len_afont_extra0 = 100;
          int * afont_extra = (int *) malloc(_len_afont_extra0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_afont_extra0; _i0++) {
            afont_extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cid_ps_get_font_extra(face,afont_extra);
          printf("%d\n", benchRet); 
          free(afont_extra);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
