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
typedef  int /*<<< orphan*/  xfs_dquot_t ;
struct xfs_inode {int /*<<< orphan*/ * i_pdquot; int /*<<< orphan*/ * i_gdquot; int /*<<< orphan*/ * i_udquot; } ;

/* Variables and functions */
 int XFS_DQ_ALLTYPES ; 
#define  XFS_DQ_GROUP 130 
#define  XFS_DQ_PROJ 129 
#define  XFS_DQ_USER 128 

__attribute__((used)) static inline xfs_dquot_t *xfs_inode_dquot(struct xfs_inode *ip, int type)
{
	switch (type & XFS_DQ_ALLTYPES) {
	case XFS_DQ_USER:
		return ip->i_udquot;
	case XFS_DQ_GROUP:
		return ip->i_gdquot;
	case XFS_DQ_PROJ:
		return ip->i_pdquot;
	default:
		return NULL;
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
          int type = 100;
          int _len_ip0 = 1;
          struct xfs_inode * ip = (struct xfs_inode *) malloc(_len_ip0*sizeof(struct xfs_inode));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
              int _len_ip__i0__i_pdquot0 = 1;
          ip[_i0].i_pdquot = (int *) malloc(_len_ip__i0__i_pdquot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_pdquot0; _j0++) {
            ip[_i0].i_pdquot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ip__i0__i_gdquot0 = 1;
          ip[_i0].i_gdquot = (int *) malloc(_len_ip__i0__i_gdquot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_gdquot0; _j0++) {
            ip[_i0].i_gdquot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ip__i0__i_udquot0 = 1;
          ip[_i0].i_udquot = (int *) malloc(_len_ip__i0__i_udquot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_udquot0; _j0++) {
            ip[_i0].i_udquot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = xfs_inode_dquot(ip,type);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_pdquot);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_gdquot);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_udquot);
          }
          free(ip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int _len_ip0 = 65025;
          struct xfs_inode * ip = (struct xfs_inode *) malloc(_len_ip0*sizeof(struct xfs_inode));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
              int _len_ip__i0__i_pdquot0 = 1;
          ip[_i0].i_pdquot = (int *) malloc(_len_ip__i0__i_pdquot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_pdquot0; _j0++) {
            ip[_i0].i_pdquot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ip__i0__i_gdquot0 = 1;
          ip[_i0].i_gdquot = (int *) malloc(_len_ip__i0__i_gdquot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_gdquot0; _j0++) {
            ip[_i0].i_gdquot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ip__i0__i_udquot0 = 1;
          ip[_i0].i_udquot = (int *) malloc(_len_ip__i0__i_udquot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_udquot0; _j0++) {
            ip[_i0].i_udquot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = xfs_inode_dquot(ip,type);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_pdquot);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_gdquot);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_udquot);
          }
          free(ip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int _len_ip0 = 100;
          struct xfs_inode * ip = (struct xfs_inode *) malloc(_len_ip0*sizeof(struct xfs_inode));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
              int _len_ip__i0__i_pdquot0 = 1;
          ip[_i0].i_pdquot = (int *) malloc(_len_ip__i0__i_pdquot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_pdquot0; _j0++) {
            ip[_i0].i_pdquot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ip__i0__i_gdquot0 = 1;
          ip[_i0].i_gdquot = (int *) malloc(_len_ip__i0__i_gdquot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_gdquot0; _j0++) {
            ip[_i0].i_gdquot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ip__i0__i_udquot0 = 1;
          ip[_i0].i_udquot = (int *) malloc(_len_ip__i0__i_udquot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_udquot0; _j0++) {
            ip[_i0].i_udquot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = xfs_inode_dquot(ip,type);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_pdquot);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_gdquot);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_udquot);
          }
          free(ip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
