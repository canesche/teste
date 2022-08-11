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
struct zip_dirent {int version_madeby; int version_needed; scalar_t__ offset; scalar_t__ ext_attrib; scalar_t__ int_attrib; scalar_t__ disk_number; int /*<<< orphan*/ * comment; int /*<<< orphan*/ * extra_fields; int /*<<< orphan*/ * filename; scalar_t__ uncomp_size; scalar_t__ comp_size; scalar_t__ crc; scalar_t__ last_mod; int /*<<< orphan*/  comp_method; scalar_t__ bitflags; scalar_t__ cloned; scalar_t__ local_extra_fields_read; scalar_t__ changed; } ;

/* Variables and functions */
 int /*<<< orphan*/  ZIP_CM_DEFAULT ; 

void
_zip_dirent_init(struct zip_dirent *de)
{
    de->changed = 0;
    de->local_extra_fields_read = 0;
    de->cloned = 0;

    de->version_madeby = 20;
    de->version_needed = 20; /* 2.0 */
    de->bitflags = 0;
    de->comp_method = ZIP_CM_DEFAULT;
    de->last_mod = 0;
    de->crc = 0;
    de->comp_size = 0;
    de->uncomp_size = 0;
    de->filename = NULL;
    de->extra_fields = NULL;
    de->comment = NULL;
    de->disk_number = 0;
    de->int_attrib = 0;
    de->ext_attrib = 0;
    de->offset = 0;
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
          int _len_de0 = 1;
          struct zip_dirent * de = (struct zip_dirent *) malloc(_len_de0*sizeof(struct zip_dirent));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de[_i0].version_madeby = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].version_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].ext_attrib = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].int_attrib = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].disk_number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_de__i0__comment0 = 1;
          de[_i0].comment = (int *) malloc(_len_de__i0__comment0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__comment0; _j0++) {
            de[_i0].comment[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_de__i0__extra_fields0 = 1;
          de[_i0].extra_fields = (int *) malloc(_len_de__i0__extra_fields0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__extra_fields0; _j0++) {
            de[_i0].extra_fields[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_de__i0__filename0 = 1;
          de[_i0].filename = (int *) malloc(_len_de__i0__filename0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__filename0; _j0++) {
            de[_i0].filename[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        de[_i0].uncomp_size = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].comp_size = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].last_mod = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].comp_method = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].bitflags = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].cloned = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].local_extra_fields_read = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _zip_dirent_init(de);
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].comment);
          }
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].extra_fields);
          }
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].filename);
          }
          free(de);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_de0 = 65025;
          struct zip_dirent * de = (struct zip_dirent *) malloc(_len_de0*sizeof(struct zip_dirent));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de[_i0].version_madeby = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].version_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].ext_attrib = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].int_attrib = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].disk_number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_de__i0__comment0 = 1;
          de[_i0].comment = (int *) malloc(_len_de__i0__comment0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__comment0; _j0++) {
            de[_i0].comment[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_de__i0__extra_fields0 = 1;
          de[_i0].extra_fields = (int *) malloc(_len_de__i0__extra_fields0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__extra_fields0; _j0++) {
            de[_i0].extra_fields[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_de__i0__filename0 = 1;
          de[_i0].filename = (int *) malloc(_len_de__i0__filename0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__filename0; _j0++) {
            de[_i0].filename[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        de[_i0].uncomp_size = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].comp_size = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].last_mod = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].comp_method = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].bitflags = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].cloned = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].local_extra_fields_read = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _zip_dirent_init(de);
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].comment);
          }
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].extra_fields);
          }
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].filename);
          }
          free(de);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_de0 = 100;
          struct zip_dirent * de = (struct zip_dirent *) malloc(_len_de0*sizeof(struct zip_dirent));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de[_i0].version_madeby = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].version_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].ext_attrib = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].int_attrib = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].disk_number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_de__i0__comment0 = 1;
          de[_i0].comment = (int *) malloc(_len_de__i0__comment0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__comment0; _j0++) {
            de[_i0].comment[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_de__i0__extra_fields0 = 1;
          de[_i0].extra_fields = (int *) malloc(_len_de__i0__extra_fields0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__extra_fields0; _j0++) {
            de[_i0].extra_fields[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_de__i0__filename0 = 1;
          de[_i0].filename = (int *) malloc(_len_de__i0__filename0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__filename0; _j0++) {
            de[_i0].filename[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        de[_i0].uncomp_size = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].comp_size = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].last_mod = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].comp_method = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].bitflags = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].cloned = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].local_extra_fields_read = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _zip_dirent_init(de);
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].comment);
          }
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].extra_fields);
          }
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].filename);
          }
          free(de);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
