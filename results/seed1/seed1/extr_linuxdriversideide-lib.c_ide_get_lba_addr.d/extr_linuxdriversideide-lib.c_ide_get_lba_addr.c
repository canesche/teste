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
typedef  int u64 ;
typedef  int u32 ;
struct ide_taskfile {int lbah; int lbam; int lbal; int device; } ;
struct ide_cmd {struct ide_taskfile hob; struct ide_taskfile tf; } ;

/* Variables and functions */

u64 ide_get_lba_addr(struct ide_cmd *cmd, int lba48)
{
	struct ide_taskfile *tf = &cmd->tf;
	u32 high, low;

	low  = (tf->lbah << 16) | (tf->lbam << 8) | tf->lbal;
	if (lba48) {
		tf = &cmd->hob;
		high = (tf->lbah << 16) | (tf->lbam << 8) | tf->lbal;
	} else
		high = tf->device & 0xf;

	return ((u64)high << 24) | low;
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
          int lba48 = 100;
          int _len_cmd0 = 1;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].hob.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].hob.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].hob.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].hob.device = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ide_get_lba_addr(cmd,lba48);
          printf("%d\n", benchRet); 
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lba48 = 255;
          int _len_cmd0 = 65025;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].hob.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].hob.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].hob.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].hob.device = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ide_get_lba_addr(cmd,lba48);
          printf("%d\n", benchRet); 
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lba48 = 10;
          int _len_cmd0 = 100;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].hob.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].hob.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].hob.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].hob.device = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ide_get_lba_addr(cmd,lba48);
          printf("%d\n", benchRet); 
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
