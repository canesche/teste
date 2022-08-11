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
struct xfs_mount {struct xfs_error_cfg** m_error_cfg; } ;
struct xfs_error_cfg {int dummy; } ;

/* Variables and functions */
#define  EIO 130 
#define  ENODEV 129 
#define  ENOSPC 128 
 size_t XFS_ERR_DEFAULT ; 
 size_t XFS_ERR_EIO ; 
 size_t XFS_ERR_ENODEV ; 
 size_t XFS_ERR_ENOSPC ; 

struct xfs_error_cfg *
xfs_error_get_cfg(
	struct xfs_mount	*mp,
	int			error_class,
	int			error)
{
	struct xfs_error_cfg	*cfg;

	if (error < 0)
		error = -error;

	switch (error) {
	case EIO:
		cfg = &mp->m_error_cfg[error_class][XFS_ERR_EIO];
		break;
	case ENOSPC:
		cfg = &mp->m_error_cfg[error_class][XFS_ERR_ENOSPC];
		break;
	case ENODEV:
		cfg = &mp->m_error_cfg[error_class][XFS_ERR_ENODEV];
		break;
	default:
		cfg = &mp->m_error_cfg[error_class][XFS_ERR_DEFAULT];
		break;
	}

	return cfg;
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
          int error_class = 100;
          int error = 100;
          int _len_mp0 = 1;
          struct xfs_mount * mp = (struct xfs_mount *) malloc(_len_mp0*sizeof(struct xfs_mount));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__m_error_cfg0 = 1;
          mp[_i0].m_error_cfg = (struct xfs_error_cfg **) malloc(_len_mp__i0__m_error_cfg0*sizeof(struct xfs_error_cfg *));
          for(int _j0 = 0; _j0 < _len_mp__i0__m_error_cfg0; _j0++) {
            int _len_mp__i0__m_error_cfg1 = 1;
            mp[_i0].m_error_cfg[_j0] = (struct xfs_error_cfg *) malloc(_len_mp__i0__m_error_cfg1*sizeof(struct xfs_error_cfg));
            for(int _j1 = 0; _j1 < _len_mp__i0__m_error_cfg1; _j1++) {
              mp[_i0].m_error_cfg[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct xfs_error_cfg * benchRet = xfs_error_get_cfg(mp,error_class,error);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(*(mp[_aux].m_error_cfg));
        free(mp[_aux].m_error_cfg);
          }
          free(mp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int error_class = 255;
          int error = 255;
          int _len_mp0 = 65025;
          struct xfs_mount * mp = (struct xfs_mount *) malloc(_len_mp0*sizeof(struct xfs_mount));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__m_error_cfg0 = 1;
          mp[_i0].m_error_cfg = (struct xfs_error_cfg **) malloc(_len_mp__i0__m_error_cfg0*sizeof(struct xfs_error_cfg *));
          for(int _j0 = 0; _j0 < _len_mp__i0__m_error_cfg0; _j0++) {
            int _len_mp__i0__m_error_cfg1 = 1;
            mp[_i0].m_error_cfg[_j0] = (struct xfs_error_cfg *) malloc(_len_mp__i0__m_error_cfg1*sizeof(struct xfs_error_cfg));
            for(int _j1 = 0; _j1 < _len_mp__i0__m_error_cfg1; _j1++) {
              mp[_i0].m_error_cfg[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct xfs_error_cfg * benchRet = xfs_error_get_cfg(mp,error_class,error);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(*(mp[_aux].m_error_cfg));
        free(mp[_aux].m_error_cfg);
          }
          free(mp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error_class = 10;
          int error = 10;
          int _len_mp0 = 100;
          struct xfs_mount * mp = (struct xfs_mount *) malloc(_len_mp0*sizeof(struct xfs_mount));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__m_error_cfg0 = 1;
          mp[_i0].m_error_cfg = (struct xfs_error_cfg **) malloc(_len_mp__i0__m_error_cfg0*sizeof(struct xfs_error_cfg *));
          for(int _j0 = 0; _j0 < _len_mp__i0__m_error_cfg0; _j0++) {
            int _len_mp__i0__m_error_cfg1 = 1;
            mp[_i0].m_error_cfg[_j0] = (struct xfs_error_cfg *) malloc(_len_mp__i0__m_error_cfg1*sizeof(struct xfs_error_cfg));
            for(int _j1 = 0; _j1 < _len_mp__i0__m_error_cfg1; _j1++) {
              mp[_i0].m_error_cfg[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct xfs_error_cfg * benchRet = xfs_error_get_cfg(mp,error_class,error);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(*(mp[_aux].m_error_cfg));
        free(mp[_aux].m_error_cfg);
          }
          free(mp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
