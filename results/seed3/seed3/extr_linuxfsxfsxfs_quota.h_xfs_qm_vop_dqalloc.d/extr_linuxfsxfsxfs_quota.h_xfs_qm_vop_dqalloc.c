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
typedef  int /*<<< orphan*/  xfs_dqid_t ;
typedef  int /*<<< orphan*/  uint ;
struct xfs_inode {int dummy; } ;
struct xfs_dquot {int dummy; } ;
typedef  int /*<<< orphan*/  prid_t ;

/* Variables and functions */

__attribute__((used)) static inline int
xfs_qm_vop_dqalloc(struct xfs_inode *ip, xfs_dqid_t uid, xfs_dqid_t gid,
		prid_t prid, uint flags, struct xfs_dquot **udqp,
		struct xfs_dquot **gdqp, struct xfs_dquot **pdqp)
{
	*udqp = NULL;
	*gdqp = NULL;
	*pdqp = NULL;
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
          int uid = 100;
          int gid = 100;
          int prid = 100;
          int flags = 100;
          int _len_ip0 = 1;
          struct xfs_inode * ip = (struct xfs_inode *) malloc(_len_ip0*sizeof(struct xfs_inode));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udqp0 = 1;
          struct xfs_dquot ** udqp = (struct xfs_dquot **) malloc(_len_udqp0*sizeof(struct xfs_dquot *));
          for(int _i0 = 0; _i0 < _len_udqp0; _i0++) {
            int _len_udqp1 = 1;
            udqp[_i0] = (struct xfs_dquot *) malloc(_len_udqp1*sizeof(struct xfs_dquot));
            for(int _i1 = 0; _i1 < _len_udqp1; _i1++) {
              udqp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_gdqp0 = 1;
          struct xfs_dquot ** gdqp = (struct xfs_dquot **) malloc(_len_gdqp0*sizeof(struct xfs_dquot *));
          for(int _i0 = 0; _i0 < _len_gdqp0; _i0++) {
            int _len_gdqp1 = 1;
            gdqp[_i0] = (struct xfs_dquot *) malloc(_len_gdqp1*sizeof(struct xfs_dquot));
            for(int _i1 = 0; _i1 < _len_gdqp1; _i1++) {
              gdqp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pdqp0 = 1;
          struct xfs_dquot ** pdqp = (struct xfs_dquot **) malloc(_len_pdqp0*sizeof(struct xfs_dquot *));
          for(int _i0 = 0; _i0 < _len_pdqp0; _i0++) {
            int _len_pdqp1 = 1;
            pdqp[_i0] = (struct xfs_dquot *) malloc(_len_pdqp1*sizeof(struct xfs_dquot));
            for(int _i1 = 0; _i1 < _len_pdqp1; _i1++) {
              pdqp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = xfs_qm_vop_dqalloc(ip,uid,gid,prid,flags,udqp,gdqp,pdqp);
          printf("%d\n", benchRet); 
          free(ip);
          for(int i1 = 0; i1 < _len_udqp0; i1++) {
            int _len_udqp1 = 1;
              free(udqp[i1]);
          }
          free(udqp);
          for(int i1 = 0; i1 < _len_gdqp0; i1++) {
            int _len_gdqp1 = 1;
              free(gdqp[i1]);
          }
          free(gdqp);
          for(int i1 = 0; i1 < _len_pdqp0; i1++) {
            int _len_pdqp1 = 1;
              free(pdqp[i1]);
          }
          free(pdqp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int uid = 255;
          int gid = 255;
          int prid = 255;
          int flags = 255;
          int _len_ip0 = 65025;
          struct xfs_inode * ip = (struct xfs_inode *) malloc(_len_ip0*sizeof(struct xfs_inode));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udqp0 = 65025;
          struct xfs_dquot ** udqp = (struct xfs_dquot **) malloc(_len_udqp0*sizeof(struct xfs_dquot *));
          for(int _i0 = 0; _i0 < _len_udqp0; _i0++) {
            int _len_udqp1 = 1;
            udqp[_i0] = (struct xfs_dquot *) malloc(_len_udqp1*sizeof(struct xfs_dquot));
            for(int _i1 = 0; _i1 < _len_udqp1; _i1++) {
              udqp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_gdqp0 = 65025;
          struct xfs_dquot ** gdqp = (struct xfs_dquot **) malloc(_len_gdqp0*sizeof(struct xfs_dquot *));
          for(int _i0 = 0; _i0 < _len_gdqp0; _i0++) {
            int _len_gdqp1 = 1;
            gdqp[_i0] = (struct xfs_dquot *) malloc(_len_gdqp1*sizeof(struct xfs_dquot));
            for(int _i1 = 0; _i1 < _len_gdqp1; _i1++) {
              gdqp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pdqp0 = 65025;
          struct xfs_dquot ** pdqp = (struct xfs_dquot **) malloc(_len_pdqp0*sizeof(struct xfs_dquot *));
          for(int _i0 = 0; _i0 < _len_pdqp0; _i0++) {
            int _len_pdqp1 = 1;
            pdqp[_i0] = (struct xfs_dquot *) malloc(_len_pdqp1*sizeof(struct xfs_dquot));
            for(int _i1 = 0; _i1 < _len_pdqp1; _i1++) {
              pdqp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = xfs_qm_vop_dqalloc(ip,uid,gid,prid,flags,udqp,gdqp,pdqp);
          printf("%d\n", benchRet); 
          free(ip);
          for(int i1 = 0; i1 < _len_udqp0; i1++) {
            int _len_udqp1 = 1;
              free(udqp[i1]);
          }
          free(udqp);
          for(int i1 = 0; i1 < _len_gdqp0; i1++) {
            int _len_gdqp1 = 1;
              free(gdqp[i1]);
          }
          free(gdqp);
          for(int i1 = 0; i1 < _len_pdqp0; i1++) {
            int _len_pdqp1 = 1;
              free(pdqp[i1]);
          }
          free(pdqp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int uid = 10;
          int gid = 10;
          int prid = 10;
          int flags = 10;
          int _len_ip0 = 100;
          struct xfs_inode * ip = (struct xfs_inode *) malloc(_len_ip0*sizeof(struct xfs_inode));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udqp0 = 100;
          struct xfs_dquot ** udqp = (struct xfs_dquot **) malloc(_len_udqp0*sizeof(struct xfs_dquot *));
          for(int _i0 = 0; _i0 < _len_udqp0; _i0++) {
            int _len_udqp1 = 1;
            udqp[_i0] = (struct xfs_dquot *) malloc(_len_udqp1*sizeof(struct xfs_dquot));
            for(int _i1 = 0; _i1 < _len_udqp1; _i1++) {
              udqp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_gdqp0 = 100;
          struct xfs_dquot ** gdqp = (struct xfs_dquot **) malloc(_len_gdqp0*sizeof(struct xfs_dquot *));
          for(int _i0 = 0; _i0 < _len_gdqp0; _i0++) {
            int _len_gdqp1 = 1;
            gdqp[_i0] = (struct xfs_dquot *) malloc(_len_gdqp1*sizeof(struct xfs_dquot));
            for(int _i1 = 0; _i1 < _len_gdqp1; _i1++) {
              gdqp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pdqp0 = 100;
          struct xfs_dquot ** pdqp = (struct xfs_dquot **) malloc(_len_pdqp0*sizeof(struct xfs_dquot *));
          for(int _i0 = 0; _i0 < _len_pdqp0; _i0++) {
            int _len_pdqp1 = 1;
            pdqp[_i0] = (struct xfs_dquot *) malloc(_len_pdqp1*sizeof(struct xfs_dquot));
            for(int _i1 = 0; _i1 < _len_pdqp1; _i1++) {
              pdqp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = xfs_qm_vop_dqalloc(ip,uid,gid,prid,flags,udqp,gdqp,pdqp);
          printf("%d\n", benchRet); 
          free(ip);
          for(int i1 = 0; i1 < _len_udqp0; i1++) {
            int _len_udqp1 = 1;
              free(udqp[i1]);
          }
          free(udqp);
          for(int i1 = 0; i1 < _len_gdqp0; i1++) {
            int _len_gdqp1 = 1;
              free(gdqp[i1]);
          }
          free(gdqp);
          for(int i1 = 0; i1 < _len_pdqp0; i1++) {
            int _len_pdqp1 = 1;
              free(pdqp[i1]);
          }
          free(pdqp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
