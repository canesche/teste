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
typedef  int /*<<< orphan*/  r ;

/* Variables and functions */

__attribute__((used)) static void build_table_color(const unsigned int romtable[16][8],
			      unsigned char p0004[16][1024],
			      unsigned char p8004[16][256])
{
	int compression_mode, j, k, bit, pw;
	unsigned char *p0, *p8;
	const unsigned int *r;

	/* We have 16 compressions tables */
	for (compression_mode = 0; compression_mode < 16; compression_mode++) {
		p0 = p0004[compression_mode];
		p8 = p8004[compression_mode];
		r  = romtable[compression_mode];

		for (j = 0; j < 8; j++, r++, p0 += 128) {

			for (k = 0; k < 16; k++) {
				if (k == 0)
					bit = 1;
				else if (k >= 1 && k < 3)
					bit = (r[0] >> 15) & 7;
				else if (k >= 3 && k < 6)
					bit = (r[0] >> 12) & 7;
				else if (k >= 6 && k < 10)
					bit = (r[0] >> 9) & 7;
				else if (k >= 10 && k < 13)
					bit = (r[0] >> 6) & 7;
				else if (k >= 13 && k < 15)
					bit = (r[0] >> 3) & 7;
				else
					bit = (r[0]) & 7;
				if (k == 0)
					*p8++ = 8;
				else
					*p8++ = j - bit;
				*p8++ = bit;

				pw = 1 << bit;
				p0[k + 0x00] = (1 * pw) + 0x80;
				p0[k + 0x10] = (2 * pw) + 0x80;
				p0[k + 0x20] = (3 * pw) + 0x80;
				p0[k + 0x30] = (4 * pw) + 0x80;
				p0[k + 0x40] = (-1 * pw) + 0x80;
				p0[k + 0x50] = (-2 * pw) + 0x80;
				p0[k + 0x60] = (-3 * pw) + 0x80;
				p0[k + 0x70] = (-4 * pw) + 0x80;
			}	/* end of for (k=0; k<16; k++, p8++) */
		}	/* end of for (j=0; j<8; j++ , table++) */
	} /* end of foreach compression_mode */
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
          int _len_romtable0 = 16;
          unsigned int const** romtable = (unsigned int const**) malloc(_len_romtable0*sizeof(unsigned int const*));
          for(int _i0 = 0; _i0 < _len_romtable0; _i0++) {
            int _len_romtable1 = 8;
            romtable[_i0] = (unsigned int const*) malloc(_len_romtable1*sizeof(unsigned int const));
            for(int _i1 = 0; _i1 < _len_romtable1; _i1++) {
              romtable[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p00040 = 16;
          unsigned char ** p0004 = (unsigned char **) malloc(_len_p00040*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_p00040; _i0++) {
            int _len_p00041 = 1024;
            p0004[_i0] = (unsigned char *) malloc(_len_p00041*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_p00041; _i1++) {
              p0004[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p80040 = 16;
          unsigned char ** p8004 = (unsigned char **) malloc(_len_p80040*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_p80040; _i0++) {
            int _len_p80041 = 256;
            p8004[_i0] = (unsigned char *) malloc(_len_p80041*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_p80041; _i1++) {
              p8004[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          build_table_color(romtable,p0004,p8004);
          for(int i1 = 0; i1 < _len_romtable0; i1++) {
            int _len_romtable1 = 8;
              free(romtable[i1]);
          }
          free(romtable);
          for(int i1 = 0; i1 < _len_p00040; i1++) {
            int _len_p00041 = 1024;
              free(p0004[i1]);
          }
          free(p0004);
          for(int i1 = 0; i1 < _len_p80040; i1++) {
            int _len_p80041 = 256;
              free(p8004[i1]);
          }
          free(p8004);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_romtable0 = 65025;
          unsigned int const** romtable = (unsigned int const**) malloc(_len_romtable0*sizeof(unsigned int const*));
          for(int _i0 = 0; _i0 < _len_romtable0; _i0++) {
            int _len_romtable1 = 8;
            romtable[_i0] = (unsigned int const*) malloc(_len_romtable1*sizeof(unsigned int const));
            for(int _i1 = 0; _i1 < _len_romtable1; _i1++) {
              romtable[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p00040 = 65025;
          unsigned char ** p0004 = (unsigned char **) malloc(_len_p00040*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_p00040; _i0++) {
            int _len_p00041 = 1024;
            p0004[_i0] = (unsigned char *) malloc(_len_p00041*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_p00041; _i1++) {
              p0004[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p80040 = 65025;
          unsigned char ** p8004 = (unsigned char **) malloc(_len_p80040*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_p80040; _i0++) {
            int _len_p80041 = 256;
            p8004[_i0] = (unsigned char *) malloc(_len_p80041*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_p80041; _i1++) {
              p8004[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          build_table_color(romtable,p0004,p8004);
          for(int i1 = 0; i1 < _len_romtable0; i1++) {
            int _len_romtable1 = 8;
              free(romtable[i1]);
          }
          free(romtable);
          for(int i1 = 0; i1 < _len_p00040; i1++) {
            int _len_p00041 = 1024;
              free(p0004[i1]);
          }
          free(p0004);
          for(int i1 = 0; i1 < _len_p80040; i1++) {
            int _len_p80041 = 256;
              free(p8004[i1]);
          }
          free(p8004);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_romtable0 = 100;
          unsigned int const** romtable = (unsigned int const**) malloc(_len_romtable0*sizeof(unsigned int const*));
          for(int _i0 = 0; _i0 < _len_romtable0; _i0++) {
            int _len_romtable1 = 8;
            romtable[_i0] = (unsigned int const*) malloc(_len_romtable1*sizeof(unsigned int const));
            for(int _i1 = 0; _i1 < _len_romtable1; _i1++) {
              romtable[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p00040 = 100;
          unsigned char ** p0004 = (unsigned char **) malloc(_len_p00040*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_p00040; _i0++) {
            int _len_p00041 = 1024;
            p0004[_i0] = (unsigned char *) malloc(_len_p00041*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_p00041; _i1++) {
              p0004[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p80040 = 100;
          unsigned char ** p8004 = (unsigned char **) malloc(_len_p80040*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_p80040; _i0++) {
            int _len_p80041 = 256;
            p8004[_i0] = (unsigned char *) malloc(_len_p80041*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_p80041; _i1++) {
              p8004[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          build_table_color(romtable,p0004,p8004);
          for(int i1 = 0; i1 < _len_romtable0; i1++) {
            int _len_romtable1 = 8;
              free(romtable[i1]);
          }
          free(romtable);
          for(int i1 = 0; i1 < _len_p00040; i1++) {
            int _len_p00041 = 1024;
              free(p0004[i1]);
          }
          free(p0004);
          for(int i1 = 0; i1 < _len_p80040; i1++) {
            int _len_p80041 = 256;
              free(p8004[i1]);
          }
          free(p8004);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
