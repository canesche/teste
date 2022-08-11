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
struct auto_pin_cfg {int line_outs; } ;
struct hda_gen_spec {int multi_ios; TYPE_1__* multi_io; int /*<<< orphan*/ * private_dac_nids; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef  int /*<<< orphan*/  hda_nid_t ;
struct TYPE_2__ {int /*<<< orphan*/  dac; } ;

/* Variables and functions */

__attribute__((used)) static hda_nid_t get_primary_out(struct hda_codec *codec, int idx)
{
	struct hda_gen_spec *spec = codec->spec;
	struct auto_pin_cfg *cfg = &spec->autocfg;

	if (cfg->line_outs > idx)
		return spec->private_dac_nids[idx];
	idx -= cfg->line_outs;
	if (spec->multi_ios > idx)
		return spec->multi_io[idx].dac;
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
          int idx = 100;
          int _len_codec0 = 1;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct hda_gen_spec *) malloc(_len_codec__i0__spec0*sizeof(struct hda_gen_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
            codec[_i0].spec->multi_ios = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__spec_multi_io0 = 1;
          codec[_i0].spec->multi_io = (struct TYPE_2__ *) malloc(_len_codec__i0__spec_multi_io0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_multi_io0; _j0++) {
            codec[_i0].spec->multi_io->dac = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_codec__i0__spec_private_dac_nids0 = 1;
          codec[_i0].spec->private_dac_nids = (int *) malloc(_len_codec__i0__spec_private_dac_nids0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_private_dac_nids0; _j0++) {
            codec[_i0].spec->private_dac_nids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        codec[_i0].spec->autocfg.line_outs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_primary_out(codec,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_codec0 = 65025;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct hda_gen_spec *) malloc(_len_codec__i0__spec0*sizeof(struct hda_gen_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
            codec[_i0].spec->multi_ios = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__spec_multi_io0 = 1;
          codec[_i0].spec->multi_io = (struct TYPE_2__ *) malloc(_len_codec__i0__spec_multi_io0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_multi_io0; _j0++) {
            codec[_i0].spec->multi_io->dac = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_codec__i0__spec_private_dac_nids0 = 1;
          codec[_i0].spec->private_dac_nids = (int *) malloc(_len_codec__i0__spec_private_dac_nids0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_private_dac_nids0; _j0++) {
            codec[_i0].spec->private_dac_nids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        codec[_i0].spec->autocfg.line_outs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_primary_out(codec,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_codec0 = 100;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct hda_gen_spec *) malloc(_len_codec__i0__spec0*sizeof(struct hda_gen_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
            codec[_i0].spec->multi_ios = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__spec_multi_io0 = 1;
          codec[_i0].spec->multi_io = (struct TYPE_2__ *) malloc(_len_codec__i0__spec_multi_io0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_multi_io0; _j0++) {
            codec[_i0].spec->multi_io->dac = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_codec__i0__spec_private_dac_nids0 = 1;
          codec[_i0].spec->private_dac_nids = (int *) malloc(_len_codec__i0__spec_private_dac_nids0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_private_dac_nids0; _j0++) {
            codec[_i0].spec->private_dac_nids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        codec[_i0].spec->autocfg.line_outs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_primary_out(codec,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
