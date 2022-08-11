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
struct hda_gen_spec {scalar_t__* preferred_dacs; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef  scalar_t__ const hda_nid_t ;

/* Variables and functions */

__attribute__((used)) static hda_nid_t get_preferred_dac(struct hda_codec *codec, hda_nid_t pin)
{
	struct hda_gen_spec *spec = codec->spec;
	const hda_nid_t *list = spec->preferred_dacs;

	if (!list)
		return 0;
	for (; *list; list += 2)
		if (*list == pin)
			return list[1];
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
          const long pin = 100;
          int _len_codec0 = 1;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct hda_gen_spec *) malloc(_len_codec__i0__spec0*sizeof(struct hda_gen_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
              int _len_codec__i0__spec_preferred_dacs0 = 1;
          codec[_i0].spec->preferred_dacs = (long *) malloc(_len_codec__i0__spec_preferred_dacs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_preferred_dacs0; _j0++) {
            codec[_i0].spec->preferred_dacs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const long benchRet = get_preferred_dac(codec,pin);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
        
        break;
    }
    // big-arr
    case 1:
    {
          const long pin = 255;
          int _len_codec0 = 65025;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct hda_gen_spec *) malloc(_len_codec__i0__spec0*sizeof(struct hda_gen_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
              int _len_codec__i0__spec_preferred_dacs0 = 1;
          codec[_i0].spec->preferred_dacs = (long *) malloc(_len_codec__i0__spec_preferred_dacs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_preferred_dacs0; _j0++) {
            codec[_i0].spec->preferred_dacs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const long benchRet = get_preferred_dac(codec,pin);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const long pin = 10;
          int _len_codec0 = 100;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct hda_gen_spec *) malloc(_len_codec__i0__spec0*sizeof(struct hda_gen_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
              int _len_codec__i0__spec_preferred_dacs0 = 1;
          codec[_i0].spec->preferred_dacs = (long *) malloc(_len_codec__i0__spec_preferred_dacs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_preferred_dacs0; _j0++) {
            codec[_i0].spec->preferred_dacs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const long benchRet = get_preferred_dac(codec,pin);
          printf("%ld\n", benchRet); 
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
