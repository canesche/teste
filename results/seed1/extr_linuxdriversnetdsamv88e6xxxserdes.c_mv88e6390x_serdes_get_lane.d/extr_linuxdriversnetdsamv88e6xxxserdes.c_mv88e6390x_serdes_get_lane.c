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
typedef  int /*<<< orphan*/  u8 ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
struct TYPE_2__ {int /*<<< orphan*/  cmode; } ;

/* Variables and functions */
 int ENODEV ; 
 int MV88E6390_PORT10_LANE0 ; 
 int MV88E6390_PORT10_LANE1 ; 
 int MV88E6390_PORT10_LANE2 ; 
 int MV88E6390_PORT10_LANE3 ; 
 int MV88E6390_PORT9_LANE0 ; 
 int MV88E6390_PORT9_LANE1 ; 
 int MV88E6390_PORT9_LANE2 ; 
 int MV88E6390_PORT9_LANE3 ; 
 int /*<<< orphan*/  MV88E6XXX_PORT_STS_CMODE_1000BASE_X ; 
 int /*<<< orphan*/  MV88E6XXX_PORT_STS_CMODE_2500BASEX ; 
 int /*<<< orphan*/  MV88E6XXX_PORT_STS_CMODE_RXAUI ; 
 int /*<<< orphan*/  MV88E6XXX_PORT_STS_CMODE_SGMII ; 
 int /*<<< orphan*/  MV88E6XXX_PORT_STS_CMODE_XAUI ; 

int mv88e6390x_serdes_get_lane(struct mv88e6xxx_chip *chip, int port)
{
	u8 cmode_port9, cmode_port10, cmode_port;

	cmode_port9 = chip->ports[9].cmode;
	cmode_port10 = chip->ports[10].cmode;
	cmode_port = chip->ports[port].cmode;

	switch (port) {
	case 2:
		if (cmode_port9 == MV88E6XXX_PORT_STS_CMODE_1000BASE_X ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_SGMII ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_2500BASEX)
			if (cmode_port == MV88E6XXX_PORT_STS_CMODE_1000BASE_X)
				return MV88E6390_PORT9_LANE1;
		return -ENODEV;
	case 3:
		if (cmode_port9 == MV88E6XXX_PORT_STS_CMODE_1000BASE_X ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_SGMII ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_2500BASEX ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_RXAUI)
			if (cmode_port == MV88E6XXX_PORT_STS_CMODE_1000BASE_X)
				return MV88E6390_PORT9_LANE2;
		return -ENODEV;
	case 4:
		if (cmode_port9 == MV88E6XXX_PORT_STS_CMODE_1000BASE_X ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_SGMII ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_2500BASEX ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_RXAUI)
			if (cmode_port == MV88E6XXX_PORT_STS_CMODE_1000BASE_X)
				return MV88E6390_PORT9_LANE3;
		return -ENODEV;
	case 5:
		if (cmode_port10 == MV88E6XXX_PORT_STS_CMODE_1000BASE_X ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_SGMII ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_2500BASEX)
			if (cmode_port == MV88E6XXX_PORT_STS_CMODE_1000BASE_X)
				return MV88E6390_PORT10_LANE1;
		return -ENODEV;
	case 6:
		if (cmode_port10 == MV88E6XXX_PORT_STS_CMODE_1000BASE_X ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_SGMII ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_2500BASEX ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_RXAUI)
			if (cmode_port == MV88E6XXX_PORT_STS_CMODE_1000BASE_X)
				return MV88E6390_PORT10_LANE2;
		return -ENODEV;
	case 7:
		if (cmode_port10 == MV88E6XXX_PORT_STS_CMODE_1000BASE_X ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_SGMII ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_2500BASEX ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_RXAUI)
			if (cmode_port == MV88E6XXX_PORT_STS_CMODE_1000BASE_X)
				return MV88E6390_PORT10_LANE3;
		return -ENODEV;
	case 9:
		if (cmode_port9 == MV88E6XXX_PORT_STS_CMODE_1000BASE_X ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_SGMII ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_2500BASEX ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_XAUI ||
		    cmode_port9 == MV88E6XXX_PORT_STS_CMODE_RXAUI)
			return MV88E6390_PORT9_LANE0;
		return -ENODEV;
	case 10:
		if (cmode_port10 == MV88E6XXX_PORT_STS_CMODE_1000BASE_X ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_SGMII ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_2500BASEX ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_XAUI ||
		    cmode_port10 == MV88E6XXX_PORT_STS_CMODE_RXAUI)
			return MV88E6390_PORT10_LANE0;
		return -ENODEV;
	default:
		return -ENODEV;
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
          int port = 100;
          int _len_chip0 = 1;
          struct mv88e6xxx_chip * chip = (struct mv88e6xxx_chip *) malloc(_len_chip0*sizeof(struct mv88e6xxx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__ports0 = 1;
          chip[_i0].ports = (struct TYPE_2__ *) malloc(_len_chip__i0__ports0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__ports0; _j0++) {
            chip[_i0].ports->cmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mv88e6390x_serdes_get_lane(chip,port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].ports);
          }
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int port = 255;
          int _len_chip0 = 65025;
          struct mv88e6xxx_chip * chip = (struct mv88e6xxx_chip *) malloc(_len_chip0*sizeof(struct mv88e6xxx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__ports0 = 1;
          chip[_i0].ports = (struct TYPE_2__ *) malloc(_len_chip__i0__ports0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__ports0; _j0++) {
            chip[_i0].ports->cmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mv88e6390x_serdes_get_lane(chip,port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].ports);
          }
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int port = 10;
          int _len_chip0 = 100;
          struct mv88e6xxx_chip * chip = (struct mv88e6xxx_chip *) malloc(_len_chip0*sizeof(struct mv88e6xxx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__ports0 = 1;
          chip[_i0].ports = (struct TYPE_2__ *) malloc(_len_chip__i0__ports0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__ports0; _j0++) {
            chip[_i0].ports->cmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mv88e6390x_serdes_get_lane(chip,port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].ports);
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
