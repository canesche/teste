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
struct block1_t {int host_status_2; int host_status_4; int host_status_3; int fan_status; int p1_prochot_status; int p2_prochot_status; int host_status_1; } ;

/* Variables and functions */
 scalar_t__* vccp_limit_type ; 

__attribute__((used)) static unsigned LM93_ALARMS_FROM_REG(struct block1_t b1)
{
	unsigned result;
	result  = b1.host_status_2 & 0x3f;

	if (vccp_limit_type[0])
		result |= (b1.host_status_4 & 0x10) << 2;
	else
		result |= b1.host_status_2 & 0x40;

	if (vccp_limit_type[1])
		result |= (b1.host_status_4 & 0x20) << 2;
	else
		result |= b1.host_status_2 & 0x80;

	result |= b1.host_status_3 << 8;
	result |= (b1.fan_status & 0x0f) << 16;
	result |= (b1.p1_prochot_status & 0x80) << 13;
	result |= (b1.p2_prochot_status & 0x80) << 14;
	result |= (b1.host_status_4 & 0xfc) << 20;
	result |= (b1.host_status_1 & 0x07) << 28;
	return result;
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
          struct block1_t b1;
        b1.host_status_2 = ((-2 * (next_i()%2)) + 1) * next_i();
        b1.host_status_4 = ((-2 * (next_i()%2)) + 1) * next_i();
        b1.host_status_3 = ((-2 * (next_i()%2)) + 1) * next_i();
        b1.fan_status = ((-2 * (next_i()%2)) + 1) * next_i();
        b1.p1_prochot_status = ((-2 * (next_i()%2)) + 1) * next_i();
        b1.p2_prochot_status = ((-2 * (next_i()%2)) + 1) * next_i();
        b1.host_status_1 = ((-2 * (next_i()%2)) + 1) * next_i();
          unsigned int benchRet = LM93_ALARMS_FROM_REG(b1);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
