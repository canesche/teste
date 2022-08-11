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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_4__ {char* country_code; } ;
struct TYPE_5__ {TYPE_1__ location; scalar_t__ bc; } ;
typedef  TYPE_2__ timelib_tzinfo ;

/* Variables and functions */

__attribute__((used)) static int read_tzif_preamble(const unsigned char **tzf, timelib_tzinfo *tz)
{
	uint32_t version;

	/* read ID */
	switch ((*tzf)[4]) {
		case '\0':
			version = 0;
			break;
		case '2':
			version = 2;
			break;
		case '3':
			version = 3;
			break;
		default:
			return -1;
	}
	*tzf += 5;

	/* set BC flag and country code to default */
	tz->bc = 0;
	tz->location.country_code[0] = '?';
	tz->location.country_code[1] = '?';
	tz->location.country_code[2] = '\0';

	/* skip rest of preamble */
	*tzf += 15;

	return version;
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
          int _len_tzf0 = 1;
          const unsigned char ** tzf = (const unsigned char **) malloc(_len_tzf0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_tzf0; _i0++) {
            int _len_tzf1 = 1;
            tzf[_i0] = (const unsigned char *) malloc(_len_tzf1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_tzf1; _i1++) {
              tzf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tz0 = 1;
          struct TYPE_5__ * tz = (struct TYPE_5__ *) malloc(_len_tz0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__location_country_code0 = 1;
          tz[_i0].location.country_code = (char *) malloc(_len_tz__i0__location_country_code0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_tz__i0__location_country_code0; _j0++) {
            tz[_i0].location.country_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tz[_i0].bc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = read_tzif_preamble(tzf,tz);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_tzf0; i1++) {
            int _len_tzf1 = 1;
              free(tzf[i1]);
          }
          free(tzf);
          free(tz);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tzf0 = 65025;
          const unsigned char ** tzf = (const unsigned char **) malloc(_len_tzf0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_tzf0; _i0++) {
            int _len_tzf1 = 1;
            tzf[_i0] = (const unsigned char *) malloc(_len_tzf1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_tzf1; _i1++) {
              tzf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tz0 = 65025;
          struct TYPE_5__ * tz = (struct TYPE_5__ *) malloc(_len_tz0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__location_country_code0 = 1;
          tz[_i0].location.country_code = (char *) malloc(_len_tz__i0__location_country_code0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_tz__i0__location_country_code0; _j0++) {
            tz[_i0].location.country_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tz[_i0].bc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = read_tzif_preamble(tzf,tz);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_tzf0; i1++) {
            int _len_tzf1 = 1;
              free(tzf[i1]);
          }
          free(tzf);
          free(tz);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tzf0 = 100;
          const unsigned char ** tzf = (const unsigned char **) malloc(_len_tzf0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_tzf0; _i0++) {
            int _len_tzf1 = 1;
            tzf[_i0] = (const unsigned char *) malloc(_len_tzf1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_tzf1; _i1++) {
              tzf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tz0 = 100;
          struct TYPE_5__ * tz = (struct TYPE_5__ *) malloc(_len_tz0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__location_country_code0 = 1;
          tz[_i0].location.country_code = (char *) malloc(_len_tz__i0__location_country_code0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_tz__i0__location_country_code0; _j0++) {
            tz[_i0].location.country_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tz[_i0].bc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = read_tzif_preamble(tzf,tz);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_tzf0; i1++) {
            int _len_tzf1 = 1;
              free(tzf[i1]);
          }
          free(tzf);
          free(tz);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
