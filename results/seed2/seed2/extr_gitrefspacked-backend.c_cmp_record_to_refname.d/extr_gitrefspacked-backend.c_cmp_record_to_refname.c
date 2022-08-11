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
struct TYPE_2__ {int hexsz; } ;

/* Variables and functions */
 TYPE_1__* the_hash_algo ; 

__attribute__((used)) static int cmp_record_to_refname(const char *rec, const char *refname)
{
	const char *r1 = rec + the_hash_algo->hexsz + 1;
	const char *r2 = refname;

	while (1) {
		if (*r1 == '\n')
			return *r2 ? -1 : 0;
		if (!*r2)
			return 1;
		if (*r1 != *r2)
			return (unsigned char)*r1 < (unsigned char)*r2 ? -1 : +1;
		r1++;
		r2++;
	}
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
          int _len_rec0 = 1;
          const char * rec = (const char *) malloc(_len_rec0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_refname0 = 1;
          const char * refname = (const char *) malloc(_len_refname0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_refname0; _i0++) {
            refname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmp_record_to_refname(rec,refname);
          printf("%d\n", benchRet); 
          free(rec);
          free(refname);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rec0 = 65025;
          const char * rec = (const char *) malloc(_len_rec0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_refname0 = 65025;
          const char * refname = (const char *) malloc(_len_refname0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_refname0; _i0++) {
            refname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmp_record_to_refname(rec,refname);
          printf("%d\n", benchRet); 
          free(rec);
          free(refname);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rec0 = 100;
          const char * rec = (const char *) malloc(_len_rec0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_refname0 = 100;
          const char * refname = (const char *) malloc(_len_refname0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_refname0; _i0++) {
            refname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmp_record_to_refname(rec,refname);
          printf("%d\n", benchRet); 
          free(rec);
          free(refname);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
