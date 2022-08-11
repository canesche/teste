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
struct dot_command_header {int command_size; } ;

/* Variables and functions */
 unsigned int IBMASM_CMD_TIMEOUT_EXTRA ; 
 unsigned int IBMASM_CMD_TIMEOUT_NORMAL ; 

__attribute__((used)) static inline unsigned int get_dot_command_timeout(void *buffer)
{
	struct dot_command_header *header = (struct dot_command_header *)buffer;
	unsigned char *cmd = buffer + sizeof(struct dot_command_header);

	/* dot commands 6.3.1, 7.1 and 8.x need a longer timeout */

	if (header->command_size == 3) {
		if ((cmd[0] == 6) && (cmd[1] == 3) && (cmd[2] == 1))
			return IBMASM_CMD_TIMEOUT_EXTRA;
	} else if (header->command_size == 2) {
		if ((cmd[0] == 7) && (cmd[1] == 1))
			return IBMASM_CMD_TIMEOUT_EXTRA;
		if (cmd[0] == 8)
			return IBMASM_CMD_TIMEOUT_EXTRA;
	}
	return IBMASM_CMD_TIMEOUT_NORMAL;
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
          void * buffer;
          unsigned int benchRet = get_dot_command_timeout(buffer);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          void * buffer;
          unsigned int benchRet = get_dot_command_timeout(buffer);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * buffer;
          unsigned int benchRet = get_dot_command_timeout(buffer);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
