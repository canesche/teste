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
struct TYPE_2__ {int /*<<< orphan*/  s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int /*<<< orphan*/  sin_port; int /*<<< orphan*/  sin_family; } ;
union sockaddr_in_4_6 {struct sockaddr_in sin; } ;
typedef  int /*<<< orphan*/  u_int16_t ;
struct in_addr {int /*<<< orphan*/  s_addr; } ;

/* Variables and functions */
 int /*<<< orphan*/  AF_INET ; 

__attribute__((used)) static void
fill_ip_sockaddr_4_6(union sockaddr_in_4_6 *sin46,
	struct in_addr ip, u_int16_t port)
{
	struct sockaddr_in *sin = &sin46->sin;

	sin->sin_family = AF_INET;
	sin->sin_len = sizeof(*sin);
	sin->sin_port = port;
	sin->sin_addr.s_addr = ip.s_addr;
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
          int _len_sin460 = 1;
          union sockaddr_in_4_6 * sin46 = (union sockaddr_in_4_6 *) malloc(_len_sin460*sizeof(union sockaddr_in_4_6));
          for(int _i0 = 0; _i0 < _len_sin460; _i0++) {
            sin46[_i0] = 0;
          }
          struct in_addr ip;
        ip.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          fill_ip_sockaddr_4_6(sin46,ip,port);
          free(sin46);
        
        break;
    }
    // big-arr
    case 1:
    {
          int port = 255;
          int _len_sin460 = 65025;
          union sockaddr_in_4_6 * sin46 = (union sockaddr_in_4_6 *) malloc(_len_sin460*sizeof(union sockaddr_in_4_6));
          for(int _i0 = 0; _i0 < _len_sin460; _i0++) {
            sin46[_i0] = 0;
          }
          struct in_addr ip;
        ip.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          fill_ip_sockaddr_4_6(sin46,ip,port);
          free(sin46);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int port = 10;
          int _len_sin460 = 100;
          union sockaddr_in_4_6 * sin46 = (union sockaddr_in_4_6 *) malloc(_len_sin460*sizeof(union sockaddr_in_4_6));
          for(int _i0 = 0; _i0 < _len_sin460; _i0++) {
            sin46[_i0] = 0;
          }
          struct in_addr ip;
        ip.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          fill_ip_sockaddr_4_6(sin46,ip,port);
          free(sin46);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
