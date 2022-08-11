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
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */
 unsigned int PDO_MAX_OBJECTS ; 

__attribute__((used)) static int tcpm_copy_pdos(u32 *dest_pdo, const u32 *src_pdo,
			  unsigned int nr_pdo)
{
	unsigned int i;

	if (nr_pdo > PDO_MAX_OBJECTS)
		nr_pdo = PDO_MAX_OBJECTS;

	for (i = 0; i < nr_pdo; i++)
		dest_pdo[i] = src_pdo[i];

	return nr_pdo;
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
          unsigned int nr_pdo = 100;
          int _len_dest_pdo0 = 1;
          int * dest_pdo = (int *) malloc(_len_dest_pdo0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_pdo0; _i0++) {
            dest_pdo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_pdo0 = 1;
          const int * src_pdo = (const int *) malloc(_len_src_pdo0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src_pdo0; _i0++) {
            src_pdo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcpm_copy_pdos(dest_pdo,src_pdo,nr_pdo);
          printf("%d\n", benchRet); 
          free(dest_pdo);
          free(src_pdo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int nr_pdo = 255;
          int _len_dest_pdo0 = 65025;
          int * dest_pdo = (int *) malloc(_len_dest_pdo0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_pdo0; _i0++) {
            dest_pdo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_pdo0 = 65025;
          const int * src_pdo = (const int *) malloc(_len_src_pdo0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src_pdo0; _i0++) {
            src_pdo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcpm_copy_pdos(dest_pdo,src_pdo,nr_pdo);
          printf("%d\n", benchRet); 
          free(dest_pdo);
          free(src_pdo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int nr_pdo = 10;
          int _len_dest_pdo0 = 100;
          int * dest_pdo = (int *) malloc(_len_dest_pdo0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_pdo0; _i0++) {
            dest_pdo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_pdo0 = 100;
          const int * src_pdo = (const int *) malloc(_len_src_pdo0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src_pdo0; _i0++) {
            src_pdo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcpm_copy_pdos(dest_pdo,src_pdo,nr_pdo);
          printf("%d\n", benchRet); 
          free(dest_pdo);
          free(src_pdo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
