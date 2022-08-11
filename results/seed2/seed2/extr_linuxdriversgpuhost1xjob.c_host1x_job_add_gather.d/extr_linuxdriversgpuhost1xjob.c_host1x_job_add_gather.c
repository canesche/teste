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
       3            linked\n\
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
struct host1x_job_gather {unsigned int words; unsigned int offset; struct host1x_bo* bo; } ;
struct host1x_job {size_t num_gathers; struct host1x_job_gather* gathers; } ;
struct host1x_bo {int dummy; } ;

/* Variables and functions */

void host1x_job_add_gather(struct host1x_job *job, struct host1x_bo *bo,
			   unsigned int words, unsigned int offset)
{
	struct host1x_job_gather *gather = &job->gathers[job->num_gathers];

	gather->words = words;
	gather->bo = bo;
	gather->offset = offset;

	job->num_gathers++;
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
          unsigned int words = 100;
          unsigned int offset = 100;
          int _len_job0 = 1;
          struct host1x_job * job = (struct host1x_job *) malloc(_len_job0*sizeof(struct host1x_job));
          for(int _i0 = 0; _i0 < _len_job0; _i0++) {
            job[_i0].num_gathers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_job__i0__gathers0 = 1;
          job[_i0].gathers = (struct host1x_job_gather *) malloc(_len_job__i0__gathers0*sizeof(struct host1x_job_gather));
          for(int _j0 = 0; _j0 < _len_job__i0__gathers0; _j0++) {
            job[_i0].gathers->words = ((-2 * (next_i()%2)) + 1) * next_i();
        job[_i0].gathers->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_job__i0__gathers_bo0 = 1;
          job[_i0].gathers->bo = (struct host1x_bo *) malloc(_len_job__i0__gathers_bo0*sizeof(struct host1x_bo));
          for(int _j0 = 0; _j0 < _len_job__i0__gathers_bo0; _j0++) {
            job[_i0].gathers->bo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bo0 = 1;
          struct host1x_bo * bo = (struct host1x_bo *) malloc(_len_bo0*sizeof(struct host1x_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          host1x_job_add_gather(job,bo,words,offset);
          for(int _aux = 0; _aux < _len_job0; _aux++) {
          free(job[_aux].gathers);
          }
          free(job);
          free(bo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int words = 255;
          unsigned int offset = 255;
          int _len_job0 = 65025;
          struct host1x_job * job = (struct host1x_job *) malloc(_len_job0*sizeof(struct host1x_job));
          for(int _i0 = 0; _i0 < _len_job0; _i0++) {
            job[_i0].num_gathers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_job__i0__gathers0 = 1;
          job[_i0].gathers = (struct host1x_job_gather *) malloc(_len_job__i0__gathers0*sizeof(struct host1x_job_gather));
          for(int _j0 = 0; _j0 < _len_job__i0__gathers0; _j0++) {
            job[_i0].gathers->words = ((-2 * (next_i()%2)) + 1) * next_i();
        job[_i0].gathers->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_job__i0__gathers_bo0 = 1;
          job[_i0].gathers->bo = (struct host1x_bo *) malloc(_len_job__i0__gathers_bo0*sizeof(struct host1x_bo));
          for(int _j0 = 0; _j0 < _len_job__i0__gathers_bo0; _j0++) {
            job[_i0].gathers->bo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bo0 = 65025;
          struct host1x_bo * bo = (struct host1x_bo *) malloc(_len_bo0*sizeof(struct host1x_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          host1x_job_add_gather(job,bo,words,offset);
          for(int _aux = 0; _aux < _len_job0; _aux++) {
          free(job[_aux].gathers);
          }
          free(job);
          free(bo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int words = 10;
          unsigned int offset = 10;
          int _len_job0 = 100;
          struct host1x_job * job = (struct host1x_job *) malloc(_len_job0*sizeof(struct host1x_job));
          for(int _i0 = 0; _i0 < _len_job0; _i0++) {
            job[_i0].num_gathers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_job__i0__gathers0 = 1;
          job[_i0].gathers = (struct host1x_job_gather *) malloc(_len_job__i0__gathers0*sizeof(struct host1x_job_gather));
          for(int _j0 = 0; _j0 < _len_job__i0__gathers0; _j0++) {
            job[_i0].gathers->words = ((-2 * (next_i()%2)) + 1) * next_i();
        job[_i0].gathers->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_job__i0__gathers_bo0 = 1;
          job[_i0].gathers->bo = (struct host1x_bo *) malloc(_len_job__i0__gathers_bo0*sizeof(struct host1x_bo));
          for(int _j0 = 0; _j0 < _len_job__i0__gathers_bo0; _j0++) {
            job[_i0].gathers->bo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bo0 = 100;
          struct host1x_bo * bo = (struct host1x_bo *) malloc(_len_bo0*sizeof(struct host1x_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          host1x_job_add_gather(job,bo,words,offset);
          for(int _aux = 0; _aux < _len_job0; _aux++) {
          free(job[_aux].gathers);
          }
          free(job);
          free(bo);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned int words = ((-2 * (next_i()%2)) + 1) * next_i();
          unsigned int offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_job0 = 1;
          struct host1x_job * job = (struct host1x_job *) malloc(_len_job0*sizeof(struct host1x_job));
          for(int _i0 = 0; _i0 < _len_job0; _i0++) {
            job[_i0].num_gathers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_job__i0__gathers0 = 1;
          job[_i0].gathers = (struct host1x_job_gather *) malloc(_len_job__i0__gathers0*sizeof(struct host1x_job_gather));
          for(int _j0 = 0; _j0 < _len_job__i0__gathers0; _j0++) {
            job[_i0].gathers->words = ((-2 * (next_i()%2)) + 1) * next_i();
        job[_i0].gathers->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_job__i0__gathers_bo0 = 1;
          job[_i0].gathers->bo = (struct host1x_bo *) malloc(_len_job__i0__gathers_bo0*sizeof(struct host1x_bo));
          for(int _j0 = 0; _j0 < _len_job__i0__gathers_bo0; _j0++) {
            job[_i0].gathers->bo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bo0 = 1;
          struct host1x_bo * bo = (struct host1x_bo *) malloc(_len_bo0*sizeof(struct host1x_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          host1x_job_add_gather(job,bo,words,offset);
          for(int _aux = 0; _aux < _len_job0; _aux++) {
          free(job[_aux].gathers);
          }
          free(job);
          free(bo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
