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
typedef  int /*<<< orphan*/  UINT ;
struct TYPE_5__ {TYPE_1__* Server; } ;
struct TYPE_4__ {int /*<<< orphan*/ * Cedar; } ;
typedef  TYPE_1__ SERVER ;
typedef  int /*<<< orphan*/  RPC_ENUM_ETH_VLAN ;
typedef  int /*<<< orphan*/  CEDAR ;
typedef  TYPE_2__ ADMIN ;

/* Variables and functions */
 int /*<<< orphan*/  ERR_NOT_SUPPORTED ; 
 int /*<<< orphan*/  ERR_NO_ERROR ; 
 int /*<<< orphan*/  SERVER_ADMIN_ONLY ; 

UINT StEnumEthVLan(ADMIN *a, RPC_ENUM_ETH_VLAN *t)
{
	SERVER *s = a->Server;
	CEDAR *c = s->Cedar;
	UINT ret = ERR_NO_ERROR;

	SERVER_ADMIN_ONLY;

#ifdef	OS_WIN32
	if (GetServerCapsBool(s, "b_support_eth_vlan") == false)
	{
		ret = ERR_NOT_SUPPORTED;
	}
	else
	{
		FreeRpcEnumEthVLan(t);
		Zero(t, sizeof(RPC_ENUM_ETH_VLAN));

		if (EnumEthVLanWin32(t) == false)
		{
			ret = ERR_INTERNAL_ERROR;
		}
	}
#else	// OS_WIN32
	ret = ERR_NOT_SUPPORTED;
#endif	// OS_WIN32

	return ret;
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
          int _len_a0 = 1;
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__Server0 = 1;
          a[_i0].Server = (struct TYPE_4__ *) malloc(_len_a__i0__Server0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_a__i0__Server0; _j0++) {
              int _len_a__i0__Server_Cedar0 = 1;
          a[_i0].Server->Cedar = (int *) malloc(_len_a__i0__Server_Cedar0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__Server_Cedar0; _j0++) {
            a[_i0].Server->Cedar[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_t0 = 1;
          int * t = (int *) malloc(_len_t0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = StEnumEthVLan(a,t);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].Server);
          }
          free(a);
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__Server0 = 1;
          a[_i0].Server = (struct TYPE_4__ *) malloc(_len_a__i0__Server0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_a__i0__Server0; _j0++) {
              int _len_a__i0__Server_Cedar0 = 1;
          a[_i0].Server->Cedar = (int *) malloc(_len_a__i0__Server_Cedar0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__Server_Cedar0; _j0++) {
            a[_i0].Server->Cedar[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_t0 = 65025;
          int * t = (int *) malloc(_len_t0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = StEnumEthVLan(a,t);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].Server);
          }
          free(a);
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__Server0 = 1;
          a[_i0].Server = (struct TYPE_4__ *) malloc(_len_a__i0__Server0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_a__i0__Server0; _j0++) {
              int _len_a__i0__Server_Cedar0 = 1;
          a[_i0].Server->Cedar = (int *) malloc(_len_a__i0__Server_Cedar0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__Server_Cedar0; _j0++) {
            a[_i0].Server->Cedar[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_t0 = 100;
          int * t = (int *) malloc(_len_t0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = StEnumEthVLan(a,t);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].Server);
          }
          free(a);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
