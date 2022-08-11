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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int u_char ;
struct TYPE_5__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef  TYPE_1__ tuple_t ;
struct TYPE_6__ {int last_idx; int subtuples; scalar_t__* rmask; scalar_t__ base; } ;
typedef  TYPE_2__ cistpl_config_t ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int parse_config(tuple_t *tuple, cistpl_config_t *config)
{
	int rasz, rmsz, i;
	u_char *p;

	p = (u_char *)tuple->TupleData;
	rasz = *p & 0x03;
	rmsz = (*p & 0x3c) >> 2;
	if (tuple->TupleDataLen < rasz+rmsz+4)
		return -EINVAL;
	config->last_idx = *(++p);
	p++;
	config->base = 0;
	for (i = 0; i <= rasz; i++)
		config->base += p[i] << (8*i);
	p += rasz+1;
	for (i = 0; i < 4; i++)
		config->rmask[i] = 0;
	for (i = 0; i <= rmsz; i++)
		config->rmask[i>>2] += p[i] << (8*(i%4));
	config->subtuples = tuple->TupleDataLen - (rasz+rmsz+4);
	return 0;
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
          int _len_tuple0 = 1;
          struct TYPE_5__ * tuple = (struct TYPE_5__ *) malloc(_len_tuple0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tuple0; _i0++) {
            tuple[_i0].TupleDataLen = ((-2 * (next_i()%2)) + 1) * next_i();
        tuple[_i0].TupleData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config0 = 1;
          struct TYPE_6__ * config = (struct TYPE_6__ *) malloc(_len_config0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].last_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].subtuples = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_config__i0__rmask0 = 1;
          config[_i0].rmask = (long *) malloc(_len_config__i0__rmask0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_config__i0__rmask0; _j0++) {
            config[_i0].rmask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        config[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_config(tuple,config);
          printf("%d\n", benchRet); 
          free(tuple);
          for(int _aux = 0; _aux < _len_config0; _aux++) {
          free(config[_aux].rmask);
          }
          free(config);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tuple0 = 65025;
          struct TYPE_5__ * tuple = (struct TYPE_5__ *) malloc(_len_tuple0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tuple0; _i0++) {
            tuple[_i0].TupleDataLen = ((-2 * (next_i()%2)) + 1) * next_i();
        tuple[_i0].TupleData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config0 = 65025;
          struct TYPE_6__ * config = (struct TYPE_6__ *) malloc(_len_config0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].last_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].subtuples = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_config__i0__rmask0 = 1;
          config[_i0].rmask = (long *) malloc(_len_config__i0__rmask0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_config__i0__rmask0; _j0++) {
            config[_i0].rmask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        config[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_config(tuple,config);
          printf("%d\n", benchRet); 
          free(tuple);
          for(int _aux = 0; _aux < _len_config0; _aux++) {
          free(config[_aux].rmask);
          }
          free(config);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tuple0 = 100;
          struct TYPE_5__ * tuple = (struct TYPE_5__ *) malloc(_len_tuple0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tuple0; _i0++) {
            tuple[_i0].TupleDataLen = ((-2 * (next_i()%2)) + 1) * next_i();
        tuple[_i0].TupleData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config0 = 100;
          struct TYPE_6__ * config = (struct TYPE_6__ *) malloc(_len_config0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].last_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].subtuples = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_config__i0__rmask0 = 1;
          config[_i0].rmask = (long *) malloc(_len_config__i0__rmask0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_config__i0__rmask0; _j0++) {
            config[_i0].rmask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        config[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_config(tuple,config);
          printf("%d\n", benchRet); 
          free(tuple);
          for(int _aux = 0; _aux < _len_config0; _aux++) {
          free(config[_aux].rmask);
          }
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
