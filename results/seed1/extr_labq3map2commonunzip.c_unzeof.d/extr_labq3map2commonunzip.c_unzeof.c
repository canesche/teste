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
struct TYPE_3__ {TYPE_2__* pfile_in_zip_read; } ;
typedef  TYPE_1__ unz_s ;
typedef  int /*<<< orphan*/ * unzFile ;
struct TYPE_4__ {scalar_t__ rest_read_uncompressed; } ;
typedef  TYPE_2__ file_in_zip_read_info_s ;

/* Variables and functions */
 int UNZ_PARAMERROR ; 

extern int unzeof (unzFile file)
{
	unz_s* s;
	file_in_zip_read_info_s* pfile_in_zip_read_info;
	if (file==NULL)
		return UNZ_PARAMERROR;
	s=(unz_s*)file;
    pfile_in_zip_read_info=s->pfile_in_zip_read;

	if (pfile_in_zip_read_info==NULL)
		return UNZ_PARAMERROR;
	
	if (pfile_in_zip_read_info->rest_read_uncompressed == 0)
		return 1;
	else
		return 0;
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
          int _len_file0 = 1;
          int * file = (int *) malloc(_len_file0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = unzeof(file);
          printf("%d\n", benchRet); 
          free(file);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_file0 = 65025;
          int * file = (int *) malloc(_len_file0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = unzeof(file);
          printf("%d\n", benchRet); 
          free(file);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_file0 = 100;
          int * file = (int *) malloc(_len_file0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = unzeof(file);
          printf("%d\n", benchRet); 
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
