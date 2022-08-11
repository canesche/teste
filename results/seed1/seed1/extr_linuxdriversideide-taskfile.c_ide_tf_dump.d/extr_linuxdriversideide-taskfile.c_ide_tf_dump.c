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
struct ide_cmd {int dummy; } ;

/* Variables and functions */

void ide_tf_dump(const char *s, struct ide_cmd *cmd)
{
#ifdef DEBUG
	printk("%s: tf: feat 0x%02x nsect 0x%02x lbal 0x%02x "
		"lbam 0x%02x lbah 0x%02x dev 0x%02x cmd 0x%02x\n",
	       s, cmd->tf.feature, cmd->tf.nsect,
	       cmd->tf.lbal, cmd->tf.lbam, cmd->tf.lbah,
	       cmd->tf.device, cmd->tf.command);
	printk("%s: hob: nsect 0x%02x lbal 0x%02x lbam 0x%02x lbah 0x%02x\n",
	       s, cmd->hob.nsect, cmd->hob.lbal, cmd->hob.lbam, cmd->hob.lbah);
#endif
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
          int _len_s0 = 1;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ide_tf_dump(s,cmd);
          free(s);
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 65025;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ide_tf_dump(s,cmd);
          free(s);
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 100;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ide_tf_dump(s,cmd);
          free(s);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
