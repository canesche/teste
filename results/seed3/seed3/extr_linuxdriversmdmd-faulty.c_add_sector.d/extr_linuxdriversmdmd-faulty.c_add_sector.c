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
struct faulty_conf {int nfaults; scalar_t__* faults; int* modes; } ;
typedef  scalar_t__ sector_t ;

/* Variables and functions */
 void* AllPersist ; 
 int MaxFault ; 
#define  NoPersist 131 
#define  ReadFixable 130 
#define  ReadPersistent 129 
#define  WritePersistent 128 

__attribute__((used)) static void add_sector(struct faulty_conf *conf, sector_t start, int mode)
{
	int i;
	int n = conf->nfaults;
	for (i=0; i<conf->nfaults; i++)
		if (conf->faults[i] == start) {
			switch(mode) {
			case NoPersist: conf->modes[i] = mode; return;
			case WritePersistent:
				if (conf->modes[i] == ReadPersistent ||
				    conf->modes[i] == ReadFixable)
					conf->modes[i] = AllPersist;
				else
					conf->modes[i] = WritePersistent;
				return;
			case ReadPersistent:
				if (conf->modes[i] == WritePersistent)
					conf->modes[i] = AllPersist;
				else
					conf->modes[i] = ReadPersistent;
				return;
			case ReadFixable:
				if (conf->modes[i] == WritePersistent ||
				    conf->modes[i] == ReadPersistent)
					conf->modes[i] = AllPersist;
				else
					conf->modes[i] = ReadFixable;
				return;
			}
		} else if (conf->modes[i] == NoPersist)
			n = i;

	if (n >= MaxFault)
		return;
	conf->faults[n] = start;
	conf->modes[n] = mode;
	if (conf->nfaults == n)
		conf->nfaults = n+1;
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
          long start = 100;
          int mode = 100;
          int _len_conf0 = 1;
          struct faulty_conf * conf = (struct faulty_conf *) malloc(_len_conf0*sizeof(struct faulty_conf));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0].nfaults = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_conf__i0__faults0 = 1;
          conf[_i0].faults = (long *) malloc(_len_conf__i0__faults0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_conf__i0__faults0; _j0++) {
            conf[_i0].faults[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conf__i0__modes0 = 1;
          conf[_i0].modes = (int *) malloc(_len_conf__i0__modes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_conf__i0__modes0; _j0++) {
            conf[_i0].modes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          add_sector(conf,start,mode);
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].faults);
          }
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].modes);
          }
          free(conf);
        
        break;
    }
    // big-arr
    case 1:
    {
          long start = 255;
          int mode = 255;
          int _len_conf0 = 65025;
          struct faulty_conf * conf = (struct faulty_conf *) malloc(_len_conf0*sizeof(struct faulty_conf));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0].nfaults = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_conf__i0__faults0 = 1;
          conf[_i0].faults = (long *) malloc(_len_conf__i0__faults0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_conf__i0__faults0; _j0++) {
            conf[_i0].faults[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conf__i0__modes0 = 1;
          conf[_i0].modes = (int *) malloc(_len_conf__i0__modes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_conf__i0__modes0; _j0++) {
            conf[_i0].modes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          add_sector(conf,start,mode);
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].faults);
          }
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].modes);
          }
          free(conf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long start = 10;
          int mode = 10;
          int _len_conf0 = 100;
          struct faulty_conf * conf = (struct faulty_conf *) malloc(_len_conf0*sizeof(struct faulty_conf));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0].nfaults = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_conf__i0__faults0 = 1;
          conf[_i0].faults = (long *) malloc(_len_conf__i0__faults0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_conf__i0__faults0; _j0++) {
            conf[_i0].faults[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conf__i0__modes0 = 1;
          conf[_i0].modes = (int *) malloc(_len_conf__i0__modes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_conf__i0__modes0; _j0++) {
            conf[_i0].modes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          add_sector(conf,start,mode);
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].faults);
          }
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].modes);
          }
          free(conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
