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
struct the_nilfs {unsigned long ns_nsegments; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {scalar_t__ s_fs_info; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned long nilfs_sufile_get_nsegments(struct inode *sufile)
{
	return ((struct the_nilfs *)sufile->i_sb->s_fs_info)->ns_nsegments;
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
          int _len_sufile0 = 1;
          struct inode * sufile = (struct inode *) malloc(_len_sufile0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_sufile0; _i0++) {
              int _len_sufile__i0__i_sb0 = 1;
          sufile[_i0].i_sb = (struct TYPE_2__ *) malloc(_len_sufile__i0__i_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sufile__i0__i_sb0; _j0++) {
            sufile[_i0].i_sb->s_fs_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = nilfs_sufile_get_nsegments(sufile);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_sufile0; _aux++) {
          free(sufile[_aux].i_sb);
          }
          free(sufile);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sufile0 = 65025;
          struct inode * sufile = (struct inode *) malloc(_len_sufile0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_sufile0; _i0++) {
              int _len_sufile__i0__i_sb0 = 1;
          sufile[_i0].i_sb = (struct TYPE_2__ *) malloc(_len_sufile__i0__i_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sufile__i0__i_sb0; _j0++) {
            sufile[_i0].i_sb->s_fs_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = nilfs_sufile_get_nsegments(sufile);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_sufile0; _aux++) {
          free(sufile[_aux].i_sb);
          }
          free(sufile);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sufile0 = 100;
          struct inode * sufile = (struct inode *) malloc(_len_sufile0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_sufile0; _i0++) {
              int _len_sufile__i0__i_sb0 = 1;
          sufile[_i0].i_sb = (struct TYPE_2__ *) malloc(_len_sufile__i0__i_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sufile__i0__i_sb0; _j0++) {
            sufile[_i0].i_sb->s_fs_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = nilfs_sufile_get_nsegments(sufile);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_sufile0; _aux++) {
          free(sufile[_aux].i_sb);
          }
          free(sufile);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
