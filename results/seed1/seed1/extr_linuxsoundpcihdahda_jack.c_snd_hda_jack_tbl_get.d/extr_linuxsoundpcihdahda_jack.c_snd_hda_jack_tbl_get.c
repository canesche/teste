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
struct hda_jack_tbl {scalar_t__ nid; } ;
struct TYPE_2__ {int used; struct hda_jack_tbl* list; } ;
struct hda_codec {TYPE_1__ jacktbl; } ;
typedef  scalar_t__ hda_nid_t ;

/* Variables and functions */

struct hda_jack_tbl *
snd_hda_jack_tbl_get(struct hda_codec *codec, hda_nid_t nid)
{
	struct hda_jack_tbl *jack = codec->jacktbl.list;
	int i;

	if (!nid || !jack)
		return NULL;
	for (i = 0; i < codec->jacktbl.used; i++, jack++)
		if (jack->nid == nid)
			return jack;
	return NULL;
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
          long nid = 100;
          int _len_codec0 = 1;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].jacktbl.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__jacktbl_list0 = 1;
          codec[_i0].jacktbl.list = (struct hda_jack_tbl *) malloc(_len_codec__i0__jacktbl_list0*sizeof(struct hda_jack_tbl));
          for(int _j0 = 0; _j0 < _len_codec__i0__jacktbl_list0; _j0++) {
            codec[_i0].jacktbl.list->nid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hda_jack_tbl * benchRet = snd_hda_jack_tbl_get(codec,nid);
          printf("%ld\n", (*benchRet).nid);
          free(codec);
        
        break;
    }
    // big-arr
    case 1:
    {
          long nid = 255;
          int _len_codec0 = 65025;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].jacktbl.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__jacktbl_list0 = 1;
          codec[_i0].jacktbl.list = (struct hda_jack_tbl *) malloc(_len_codec__i0__jacktbl_list0*sizeof(struct hda_jack_tbl));
          for(int _j0 = 0; _j0 < _len_codec__i0__jacktbl_list0; _j0++) {
            codec[_i0].jacktbl.list->nid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hda_jack_tbl * benchRet = snd_hda_jack_tbl_get(codec,nid);
          printf("%ld\n", (*benchRet).nid);
          free(codec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long nid = 10;
          int _len_codec0 = 100;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].jacktbl.used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__jacktbl_list0 = 1;
          codec[_i0].jacktbl.list = (struct hda_jack_tbl *) malloc(_len_codec__i0__jacktbl_list0*sizeof(struct hda_jack_tbl));
          for(int _j0 = 0; _j0 < _len_codec__i0__jacktbl_list0; _j0++) {
            codec[_i0].jacktbl.list->nid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hda_jack_tbl * benchRet = snd_hda_jack_tbl_get(codec,nid);
          printf("%ld\n", (*benchRet).nid);
          free(codec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
