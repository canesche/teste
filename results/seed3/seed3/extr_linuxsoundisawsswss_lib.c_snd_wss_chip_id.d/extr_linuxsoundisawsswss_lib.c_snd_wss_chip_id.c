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
struct snd_wss {int hardware; TYPE_1__* card; } ;
struct TYPE_2__ {char const* shortname; } ;

/* Variables and functions */
#define  WSS_HW_AD1845 145 
#define  WSS_HW_AD1847 144 
#define  WSS_HW_AD1848 143 
#define  WSS_HW_CMI8330 142 
#define  WSS_HW_CS4231 141 
#define  WSS_HW_CS4231A 140 
#define  WSS_HW_CS4232 139 
#define  WSS_HW_CS4232A 138 
#define  WSS_HW_CS4235 137 
#define  WSS_HW_CS4236 136 
#define  WSS_HW_CS4236B 135 
#define  WSS_HW_CS4237B 134 
#define  WSS_HW_CS4238B 133 
#define  WSS_HW_CS4239 132 
#define  WSS_HW_CS4248 131 
#define  WSS_HW_INTERWAVE 130 
#define  WSS_HW_OPL3SA2 129 
#define  WSS_HW_OPTI93X 128 

const char *snd_wss_chip_id(struct snd_wss *chip)
{
	switch (chip->hardware) {
	case WSS_HW_CS4231:
		return "CS4231";
	case WSS_HW_CS4231A:
		return "CS4231A";
	case WSS_HW_CS4232:
		return "CS4232";
	case WSS_HW_CS4232A:
		return "CS4232A";
	case WSS_HW_CS4235:
		return "CS4235";
	case WSS_HW_CS4236:
		return "CS4236";
	case WSS_HW_CS4236B:
		return "CS4236B";
	case WSS_HW_CS4237B:
		return "CS4237B";
	case WSS_HW_CS4238B:
		return "CS4238B";
	case WSS_HW_CS4239:
		return "CS4239";
	case WSS_HW_INTERWAVE:
		return "AMD InterWave";
	case WSS_HW_OPL3SA2:
		return chip->card->shortname;
	case WSS_HW_AD1845:
		return "AD1845";
	case WSS_HW_OPTI93X:
		return "OPTi 93x";
	case WSS_HW_AD1847:
		return "AD1847";
	case WSS_HW_AD1848:
		return "AD1848";
	case WSS_HW_CS4248:
		return "CS4248";
	case WSS_HW_CMI8330:
		return "CMI8330/C3D";
	default:
		return "???";
	}
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
          int _len_chip0 = 1;
          struct snd_wss * chip = (struct snd_wss *) malloc(_len_chip0*sizeof(struct snd_wss));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].hardware = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__card0 = 1;
          chip[_i0].card = (struct TYPE_2__ *) malloc(_len_chip__i0__card0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__card0; _j0++) {
              int _len_chip__i0__card_shortname0 = 1;
          chip[_i0].card->shortname = (const char *) malloc(_len_chip__i0__card_shortname0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_chip__i0__card_shortname0; _j0++) {
            chip[_i0].card->shortname[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = snd_wss_chip_id(chip);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].card);
          }
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_chip0 = 65025;
          struct snd_wss * chip = (struct snd_wss *) malloc(_len_chip0*sizeof(struct snd_wss));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].hardware = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__card0 = 1;
          chip[_i0].card = (struct TYPE_2__ *) malloc(_len_chip__i0__card0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__card0; _j0++) {
              int _len_chip__i0__card_shortname0 = 1;
          chip[_i0].card->shortname = (const char *) malloc(_len_chip__i0__card_shortname0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_chip__i0__card_shortname0; _j0++) {
            chip[_i0].card->shortname[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = snd_wss_chip_id(chip);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].card);
          }
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_chip0 = 100;
          struct snd_wss * chip = (struct snd_wss *) malloc(_len_chip0*sizeof(struct snd_wss));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].hardware = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__card0 = 1;
          chip[_i0].card = (struct TYPE_2__ *) malloc(_len_chip__i0__card0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__card0; _j0++) {
              int _len_chip__i0__card_shortname0 = 1;
          chip[_i0].card->shortname = (const char *) malloc(_len_chip__i0__card_shortname0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_chip__i0__card_shortname0; _j0++) {
            chip[_i0].card->shortname[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = snd_wss_chip_id(chip);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].card);
          }
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
