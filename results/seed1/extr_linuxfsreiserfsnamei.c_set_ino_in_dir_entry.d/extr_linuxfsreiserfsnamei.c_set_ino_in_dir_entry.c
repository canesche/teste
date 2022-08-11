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
struct reiserfs_key {int /*<<< orphan*/  k_objectid; int /*<<< orphan*/  k_dir_id; } ;
struct reiserfs_dir_entry {size_t de_entry_num; TYPE_1__* de_deh; } ;
struct TYPE_2__ {int /*<<< orphan*/  deh_objectid; int /*<<< orphan*/  deh_dir_id; } ;

/* Variables and functions */

__attribute__((used)) static void set_ino_in_dir_entry(struct reiserfs_dir_entry *de,
				 struct reiserfs_key *key)
{
	/* JDM These operations are endian safe - both are le */
	de->de_deh[de->de_entry_num].deh_dir_id = key->k_dir_id;
	de->de_deh[de->de_entry_num].deh_objectid = key->k_objectid;
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
          struct reiserfs_dir_entry * de = (struct reiserfs_dir_entry *) malloc(_len_de0*sizeof(struct reiserfs_dir_entry));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de[_i0].de_entry_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_de__i0__de_deh0 = 1;
          de[_i0].de_deh = (struct TYPE_2__ *) malloc(_len_de__i0__de_deh0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_de__i0__de_deh0; _j0++) {
            de[_i0].de_deh->deh_objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].de_deh->deh_dir_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_key0 = 1;
          struct reiserfs_key * key = (struct reiserfs_key *) malloc(_len_key0*sizeof(struct reiserfs_key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].k_objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].k_dir_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_ino_in_dir_entry(de,key);
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].de_deh);
          }
          free(de);
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_de0 = 65025;
          struct reiserfs_dir_entry * de = (struct reiserfs_dir_entry *) malloc(_len_de0*sizeof(struct reiserfs_dir_entry));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de[_i0].de_entry_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_de__i0__de_deh0 = 1;
          de[_i0].de_deh = (struct TYPE_2__ *) malloc(_len_de__i0__de_deh0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_de__i0__de_deh0; _j0++) {
            de[_i0].de_deh->deh_objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].de_deh->deh_dir_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_key0 = 65025;
          struct reiserfs_key * key = (struct reiserfs_key *) malloc(_len_key0*sizeof(struct reiserfs_key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].k_objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].k_dir_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_ino_in_dir_entry(de,key);
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].de_deh);
          }
          free(de);
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_de0 = 100;
          struct reiserfs_dir_entry * de = (struct reiserfs_dir_entry *) malloc(_len_de0*sizeof(struct reiserfs_dir_entry));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de[_i0].de_entry_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_de__i0__de_deh0 = 1;
          de[_i0].de_deh = (struct TYPE_2__ *) malloc(_len_de__i0__de_deh0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_de__i0__de_deh0; _j0++) {
            de[_i0].de_deh->deh_objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].de_deh->deh_dir_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_key0 = 100;
          struct reiserfs_key * key = (struct reiserfs_key *) malloc(_len_key0*sizeof(struct reiserfs_key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].k_objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].k_dir_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_ino_in_dir_entry(de,key);
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].de_deh);
          }
          free(de);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
