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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int word ;
typedef  size_t byte ;
struct TYPE_7__ {long requested_options_conn; long requested_options; TYPE_2__* adapter; TYPE_1__* appl; } ;
struct TYPE_6__ {long* requested_options_table; int manufacturer_features; } ;
struct TYPE_5__ {int Id; } ;
typedef  TYPE_3__ PLCI ;

/* Variables and functions */
 int B1_FACILITY_DTMFR ; 
 int B1_FACILITY_DTMFX ; 
 int MANUFACTURER_FEATURE_SOFTDTMF_RECEIVE ; 
 int MANUFACTURER_FEATURE_SOFTDTMF_SEND ; 
 int MANUFACTURER_FEATURE_V18 ; 
 int MANUFACTURER_FEATURE_VOWN ; 
 long PRIVATE_DTMF_TONE ; 
 int* b1_facilities_table ; 

__attribute__((used)) static word get_b1_facilities(PLCI *plci, byte b1_resource)
{
	word b1_facilities;

	b1_facilities = b1_facilities_table[b1_resource];
	if ((b1_resource == 9) || (b1_resource == 20) || (b1_resource == 25))
	{

		if (!(((plci->requested_options_conn | plci->requested_options) & (1L << PRIVATE_DTMF_TONE))
		      || (plci->appl && (plci->adapter->requested_options_table[plci->appl->Id - 1] & (1L << PRIVATE_DTMF_TONE)))))

		{
			if (plci->adapter->manufacturer_features & MANUFACTURER_FEATURE_SOFTDTMF_SEND)
				b1_facilities |= B1_FACILITY_DTMFX;
			if (plci->adapter->manufacturer_features & MANUFACTURER_FEATURE_SOFTDTMF_RECEIVE)
				b1_facilities |= B1_FACILITY_DTMFR;
		}
	}
	if ((b1_resource == 17) || (b1_resource == 18))
	{
		if (plci->adapter->manufacturer_features & (MANUFACTURER_FEATURE_V18 | MANUFACTURER_FEATURE_VOWN))
			b1_facilities |= B1_FACILITY_DTMFX | B1_FACILITY_DTMFR;
	}
/*
  dbug (1, dprintf("[%06lx] %s,%d: get_b1_facilities %d %04x",
  (dword)((plci->Id << 8) | UnMapController(plci->adapter->Id)),
  (char far *)(FILE_), __LINE__, b1_resource, b1_facilites));
*/
	return (b1_facilities);
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
          unsigned long b1_resource = 100;
          int _len_plci0 = 1;
          struct TYPE_7__ * plci = (struct TYPE_7__ *) malloc(_len_plci0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
            plci[_i0].requested_options_conn = ((-2 * (next_i()%2)) + 1) * next_i();
        plci[_i0].requested_options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_6__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_requested_options_table0 = 1;
          plci[_i0].adapter->requested_options_table = (long *) malloc(_len_plci__i0__adapter_requested_options_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_requested_options_table0; _j0++) {
            plci[_i0].adapter->requested_options_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plci[_i0].adapter->manufacturer_features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__appl0 = 1;
          plci[_i0].appl = (struct TYPE_5__ *) malloc(_len_plci__i0__appl0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_plci__i0__appl0; _j0++) {
            plci[_i0].appl->Id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_b1_facilities(plci,b1_resource);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].adapter);
          }
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].appl);
          }
          free(plci);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long b1_resource = 255;
          int _len_plci0 = 65025;
          struct TYPE_7__ * plci = (struct TYPE_7__ *) malloc(_len_plci0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
            plci[_i0].requested_options_conn = ((-2 * (next_i()%2)) + 1) * next_i();
        plci[_i0].requested_options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_6__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_requested_options_table0 = 1;
          plci[_i0].adapter->requested_options_table = (long *) malloc(_len_plci__i0__adapter_requested_options_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_requested_options_table0; _j0++) {
            plci[_i0].adapter->requested_options_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plci[_i0].adapter->manufacturer_features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__appl0 = 1;
          plci[_i0].appl = (struct TYPE_5__ *) malloc(_len_plci__i0__appl0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_plci__i0__appl0; _j0++) {
            plci[_i0].appl->Id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_b1_facilities(plci,b1_resource);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].adapter);
          }
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].appl);
          }
          free(plci);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long b1_resource = 10;
          int _len_plci0 = 100;
          struct TYPE_7__ * plci = (struct TYPE_7__ *) malloc(_len_plci0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
            plci[_i0].requested_options_conn = ((-2 * (next_i()%2)) + 1) * next_i();
        plci[_i0].requested_options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_6__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_requested_options_table0 = 1;
          plci[_i0].adapter->requested_options_table = (long *) malloc(_len_plci__i0__adapter_requested_options_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_requested_options_table0; _j0++) {
            plci[_i0].adapter->requested_options_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plci[_i0].adapter->manufacturer_features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__appl0 = 1;
          plci[_i0].appl = (struct TYPE_5__ *) malloc(_len_plci__i0__appl0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_plci__i0__appl0; _j0++) {
            plci[_i0].appl->Id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_b1_facilities(plci,b1_resource);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].adapter);
          }
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].appl);
          }
          free(plci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
