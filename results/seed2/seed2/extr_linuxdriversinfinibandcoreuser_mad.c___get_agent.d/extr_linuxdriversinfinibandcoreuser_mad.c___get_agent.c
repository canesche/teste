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
struct ib_umad_file {struct ib_mad_agent** agent; scalar_t__ agents_dead; } ;
struct ib_mad_agent {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct ib_mad_agent *__get_agent(struct ib_umad_file *file, int id)
{
	return file->agents_dead ? NULL : file->agent[id];
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
          int id = 100;
          int _len_file0 = 1;
          struct ib_umad_file * file = (struct ib_umad_file *) malloc(_len_file0*sizeof(struct ib_umad_file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__agent0 = 1;
          file[_i0].agent = (struct ib_mad_agent **) malloc(_len_file__i0__agent0*sizeof(struct ib_mad_agent *));
          for(int _j0 = 0; _j0 < _len_file__i0__agent0; _j0++) {
            int _len_file__i0__agent1 = 1;
            file[_i0].agent[_j0] = (struct ib_mad_agent *) malloc(_len_file__i0__agent1*sizeof(struct ib_mad_agent));
            for(int _j1 = 0; _j1 < _len_file__i0__agent1; _j1++) {
              file[_i0].agent[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        file[_i0].agents_dead = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ib_mad_agent * benchRet = __get_agent(file,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(*(file[_aux].agent));
        free(file[_aux].agent);
          }
          free(file);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int _len_file0 = 65025;
          struct ib_umad_file * file = (struct ib_umad_file *) malloc(_len_file0*sizeof(struct ib_umad_file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__agent0 = 1;
          file[_i0].agent = (struct ib_mad_agent **) malloc(_len_file__i0__agent0*sizeof(struct ib_mad_agent *));
          for(int _j0 = 0; _j0 < _len_file__i0__agent0; _j0++) {
            int _len_file__i0__agent1 = 1;
            file[_i0].agent[_j0] = (struct ib_mad_agent *) malloc(_len_file__i0__agent1*sizeof(struct ib_mad_agent));
            for(int _j1 = 0; _j1 < _len_file__i0__agent1; _j1++) {
              file[_i0].agent[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        file[_i0].agents_dead = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ib_mad_agent * benchRet = __get_agent(file,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(*(file[_aux].agent));
        free(file[_aux].agent);
          }
          free(file);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int _len_file0 = 100;
          struct ib_umad_file * file = (struct ib_umad_file *) malloc(_len_file0*sizeof(struct ib_umad_file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__agent0 = 1;
          file[_i0].agent = (struct ib_mad_agent **) malloc(_len_file__i0__agent0*sizeof(struct ib_mad_agent *));
          for(int _j0 = 0; _j0 < _len_file__i0__agent0; _j0++) {
            int _len_file__i0__agent1 = 1;
            file[_i0].agent[_j0] = (struct ib_mad_agent *) malloc(_len_file__i0__agent1*sizeof(struct ib_mad_agent));
            for(int _j1 = 0; _j1 < _len_file__i0__agent1; _j1++) {
              file[_i0].agent[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        file[_i0].agents_dead = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ib_mad_agent * benchRet = __get_agent(file,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(*(file[_aux].agent));
        free(file[_aux].agent);
          }
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
