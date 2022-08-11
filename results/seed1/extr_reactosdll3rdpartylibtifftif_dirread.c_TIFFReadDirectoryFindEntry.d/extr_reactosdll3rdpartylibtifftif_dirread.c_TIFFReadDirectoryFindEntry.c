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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint16 ;
struct TYPE_4__ {scalar_t__ tdir_tag; } ;
typedef  TYPE_1__ TIFFDirEntry ;
typedef  int /*<<< orphan*/  TIFF ;

/* Variables and functions */

__attribute__((used)) static TIFFDirEntry*
TIFFReadDirectoryFindEntry(TIFF* tif, TIFFDirEntry* dir, uint16 dircount, uint16 tagid)
{
	TIFFDirEntry* m;
	uint16 n;
	(void) tif;
	for (m=dir, n=0; n<dircount; m++, n++)
	{
		if (m->tdir_tag==tagid)
			return(m);
	}
	return(0);
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
          long dircount = 100;
          long tagid = 100;
          int _len_tif0 = 1;
          int * tif = (int *) malloc(_len_tif0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
            tif[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dir0 = 1;
          struct TYPE_4__ * dir = (struct TYPE_4__ *) malloc(_len_dir0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].tdir_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = TIFFReadDirectoryFindEntry(tif,dir,dircount,tagid);
          printf("%ld\n", (*benchRet).tdir_tag);
          free(tif);
          free(dir);
        
        break;
    }
    // big-arr
    case 1:
    {
          long dircount = 255;
          long tagid = 255;
          int _len_tif0 = 65025;
          int * tif = (int *) malloc(_len_tif0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
            tif[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dir0 = 65025;
          struct TYPE_4__ * dir = (struct TYPE_4__ *) malloc(_len_dir0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].tdir_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = TIFFReadDirectoryFindEntry(tif,dir,dircount,tagid);
          printf("%ld\n", (*benchRet).tdir_tag);
          free(tif);
          free(dir);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long dircount = 10;
          long tagid = 10;
          int _len_tif0 = 100;
          int * tif = (int *) malloc(_len_tif0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
            tif[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dir0 = 100;
          struct TYPE_4__ * dir = (struct TYPE_4__ *) malloc(_len_dir0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].tdir_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = TIFFReadDirectoryFindEntry(tif,dir,dircount,tagid);
          printf("%ld\n", (*benchRet).tdir_tag);
          free(tif);
          free(dir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
