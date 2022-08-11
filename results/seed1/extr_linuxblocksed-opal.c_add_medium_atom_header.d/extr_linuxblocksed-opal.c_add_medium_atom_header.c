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
typedef  int u8 ;
struct opal_dev {int* cmd; int /*<<< orphan*/  pos; } ;

/* Variables and functions */
 int MEDIUM_ATOM_BYTESTRING ; 
 int MEDIUM_ATOM_ID ; 
 int MEDIUM_ATOM_LEN_MASK ; 
 int MEDIUM_ATOM_SIGNED ; 

__attribute__((used)) static void add_medium_atom_header(struct opal_dev *cmd, bool bytestring,
				   bool has_sign, int len)
{
	u8 header0;

	header0 = MEDIUM_ATOM_ID;
	header0 |= bytestring ? MEDIUM_ATOM_BYTESTRING : 0;
	header0 |= has_sign ? MEDIUM_ATOM_SIGNED : 0;
	header0 |= (len >> 8) & MEDIUM_ATOM_LEN_MASK;
	cmd->cmd[cmd->pos++] = header0;
	cmd->cmd[cmd->pos++] = len;
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
          int bytestring = 100;
          int has_sign = 100;
          int len = 100;
          int _len_cmd0 = 1;
          struct opal_dev * cmd = (struct opal_dev *) malloc(_len_cmd0*sizeof(struct opal_dev));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__cmd0 = 1;
          cmd[_i0].cmd = (int *) malloc(_len_cmd__i0__cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__cmd0; _j0++) {
            cmd[_i0].cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_medium_atom_header(cmd,bytestring,has_sign,len);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].cmd);
          }
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bytestring = 255;
          int has_sign = 255;
          int len = 255;
          int _len_cmd0 = 65025;
          struct opal_dev * cmd = (struct opal_dev *) malloc(_len_cmd0*sizeof(struct opal_dev));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__cmd0 = 1;
          cmd[_i0].cmd = (int *) malloc(_len_cmd__i0__cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__cmd0; _j0++) {
            cmd[_i0].cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_medium_atom_header(cmd,bytestring,has_sign,len);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].cmd);
          }
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bytestring = 10;
          int has_sign = 10;
          int len = 10;
          int _len_cmd0 = 100;
          struct opal_dev * cmd = (struct opal_dev *) malloc(_len_cmd0*sizeof(struct opal_dev));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__cmd0 = 1;
          cmd[_i0].cmd = (int *) malloc(_len_cmd__i0__cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__cmd0; _j0++) {
            cmd[_i0].cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_medium_atom_header(cmd,bytestring,has_sign,len);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].cmd);
          }
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
