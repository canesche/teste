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
struct nid_path {int dummy; } ;
struct TYPE_2__ {int used; struct nid_path* list; } ;
struct hda_gen_spec {TYPE_1__ paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef  int ssize_t ;

/* Variables and functions */

int snd_hda_get_path_idx(struct hda_codec *codec, struct nid_path *path)
{
	struct hda_gen_spec *spec = codec->spec;
	struct nid_path *array = spec->paths.list;
	ssize_t idx;

	if (!spec->paths.used)
		return 0;
	idx = path - array;
	if (idx < 0 || idx >= spec->paths.used)
		return 0;
	return idx + 1;
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
          int _len_codec0 = 1;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct hda_gen_spec *) malloc(_len_codec__i0__spec0*sizeof(struct hda_gen_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
            codec[_i0].spec->paths.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__spec_paths_list0 = 1;
          codec[_i0].spec->paths.list = (struct nid_path *) malloc(_len_codec__i0__spec_paths_list0*sizeof(struct nid_path));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_paths_list0; _j0++) {
            codec[_i0].spec->paths.list->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_path0 = 1;
          struct nid_path * path = (struct nid_path *) malloc(_len_path0*sizeof(struct nid_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_hda_get_path_idx(codec,path);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
          free(path);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_codec0 = 65025;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct hda_gen_spec *) malloc(_len_codec__i0__spec0*sizeof(struct hda_gen_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
            codec[_i0].spec->paths.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__spec_paths_list0 = 1;
          codec[_i0].spec->paths.list = (struct nid_path *) malloc(_len_codec__i0__spec_paths_list0*sizeof(struct nid_path));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_paths_list0; _j0++) {
            codec[_i0].spec->paths.list->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_path0 = 65025;
          struct nid_path * path = (struct nid_path *) malloc(_len_path0*sizeof(struct nid_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_hda_get_path_idx(codec,path);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
          free(path);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_codec0 = 100;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct hda_gen_spec *) malloc(_len_codec__i0__spec0*sizeof(struct hda_gen_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
            codec[_i0].spec->paths.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__spec_paths_list0 = 1;
          codec[_i0].spec->paths.list = (struct nid_path *) malloc(_len_codec__i0__spec_paths_list0*sizeof(struct nid_path));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_paths_list0; _j0++) {
            codec[_i0].spec->paths.list->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_path0 = 100;
          struct nid_path * path = (struct nid_path *) malloc(_len_path0*sizeof(struct nid_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_hda_get_path_idx(codec,path);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
          free(path);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
