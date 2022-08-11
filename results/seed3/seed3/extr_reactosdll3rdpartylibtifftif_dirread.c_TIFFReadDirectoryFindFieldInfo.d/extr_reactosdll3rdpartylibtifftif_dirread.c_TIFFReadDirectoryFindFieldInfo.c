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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32 ;
typedef  scalar_t__ uint16 ;
typedef  int int32 ;
struct TYPE_5__ {TYPE_1__** tif_fields; scalar_t__ tif_nfields; } ;
struct TYPE_4__ {scalar_t__ field_tag; } ;
typedef  TYPE_2__ TIFF ;

/* Variables and functions */
 scalar_t__ FAILED_FII ; 

__attribute__((used)) static void
TIFFReadDirectoryFindFieldInfo(TIFF* tif, uint16 tagid, uint32* fii)
{
	int32 ma,mb,mc;
	ma=-1;
	mc=(int32)tif->tif_nfields;
	while (1)
	{
		if (ma+1==mc)
		{
			*fii = FAILED_FII;
			return;
		}
		mb=(ma+mc)/2;
		if (tif->tif_fields[mb]->field_tag==(uint32)tagid)
			break;
		if (tif->tif_fields[mb]->field_tag<(uint32)tagid)
			ma=mb;
		else
			mc=mb;
	}
	while (1)
	{
		if (mb==0)
			break;
		if (tif->tif_fields[mb-1]->field_tag!=(uint32)tagid)
			break;
		mb--;
	}
	*fii=mb;
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
          long tagid = 100;
          int _len_tif0 = 1;
          struct TYPE_5__ * tif = (struct TYPE_5__ *) malloc(_len_tif0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
              int _len_tif__i0__tif_fields0 = 1;
          tif[_i0].tif_fields = (struct TYPE_4__ **) malloc(_len_tif__i0__tif_fields0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_tif__i0__tif_fields0; _j0++) {
            int _len_tif__i0__tif_fields1 = 1;
            tif[_i0].tif_fields[_j0] = (struct TYPE_4__ *) malloc(_len_tif__i0__tif_fields1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_tif__i0__tif_fields1; _j1++) {
              tif[_i0].tif_fields[_j0]->field_tag = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        tif[_i0].tif_nfields = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fii0 = 1;
          long * fii = (long *) malloc(_len_fii0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_fii0; _i0++) {
            fii[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TIFFReadDirectoryFindFieldInfo(tif,tagid,fii);
          for(int _aux = 0; _aux < _len_tif0; _aux++) {
          free(*(tif[_aux].tif_fields));
        free(tif[_aux].tif_fields);
          }
          free(tif);
          free(fii);
        
        break;
    }
    // big-arr
    case 1:
    {
          long tagid = 255;
          int _len_tif0 = 65025;
          struct TYPE_5__ * tif = (struct TYPE_5__ *) malloc(_len_tif0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
              int _len_tif__i0__tif_fields0 = 1;
          tif[_i0].tif_fields = (struct TYPE_4__ **) malloc(_len_tif__i0__tif_fields0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_tif__i0__tif_fields0; _j0++) {
            int _len_tif__i0__tif_fields1 = 1;
            tif[_i0].tif_fields[_j0] = (struct TYPE_4__ *) malloc(_len_tif__i0__tif_fields1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_tif__i0__tif_fields1; _j1++) {
              tif[_i0].tif_fields[_j0]->field_tag = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        tif[_i0].tif_nfields = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fii0 = 65025;
          long * fii = (long *) malloc(_len_fii0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_fii0; _i0++) {
            fii[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TIFFReadDirectoryFindFieldInfo(tif,tagid,fii);
          for(int _aux = 0; _aux < _len_tif0; _aux++) {
          free(*(tif[_aux].tif_fields));
        free(tif[_aux].tif_fields);
          }
          free(tif);
          free(fii);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long tagid = 10;
          int _len_tif0 = 100;
          struct TYPE_5__ * tif = (struct TYPE_5__ *) malloc(_len_tif0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
              int _len_tif__i0__tif_fields0 = 1;
          tif[_i0].tif_fields = (struct TYPE_4__ **) malloc(_len_tif__i0__tif_fields0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_tif__i0__tif_fields0; _j0++) {
            int _len_tif__i0__tif_fields1 = 1;
            tif[_i0].tif_fields[_j0] = (struct TYPE_4__ *) malloc(_len_tif__i0__tif_fields1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_tif__i0__tif_fields1; _j1++) {
              tif[_i0].tif_fields[_j0]->field_tag = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        tif[_i0].tif_nfields = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fii0 = 100;
          long * fii = (long *) malloc(_len_fii0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_fii0; _i0++) {
            fii[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TIFFReadDirectoryFindFieldInfo(tif,tagid,fii);
          for(int _aux = 0; _aux < _len_tif0; _aux++) {
          free(*(tif[_aux].tif_fields));
        free(tif[_aux].tif_fields);
          }
          free(tif);
          free(fii);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
