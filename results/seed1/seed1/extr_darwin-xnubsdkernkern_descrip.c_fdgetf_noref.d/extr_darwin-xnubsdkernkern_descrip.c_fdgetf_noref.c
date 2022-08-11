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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct fileproc {int dummy; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;
typedef  TYPE_1__* proc_t ;
struct TYPE_3__ {struct filedesc* p_fd; } ;

/* Variables and functions */
 int EBADF ; 
 int UF_RESERVED ; 

int
fdgetf_noref(proc_t p, int fd, struct fileproc **resultfp)
{
	struct filedesc *fdp = p->p_fd;
	struct fileproc *fp;

	if (fd < 0 || fd >= fdp->fd_nfiles ||
			(fp = fdp->fd_ofiles[fd]) == NULL ||
			(fdp->fd_ofileflags[fd] & UF_RESERVED)) {
		return (EBADF);
	}
	if (resultfp)
		*resultfp = fp;
	return (0);
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
          int fd = 100;
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__p_fd0 = 1;
          p[_i0].p_fd = (struct filedesc *) malloc(_len_p__i0__p_fd0*sizeof(struct filedesc));
          for(int _j0 = 0; _j0 < _len_p__i0__p_fd0; _j0++) {
            p[_i0].p_fd->fd_nfiles = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__p_fd_fd_ofileflags0 = 1;
          p[_i0].p_fd->fd_ofileflags = (int *) malloc(_len_p__i0__p_fd_fd_ofileflags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__p_fd_fd_ofileflags0; _j0++) {
            p[_i0].p_fd->fd_ofileflags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__p_fd_fd_ofiles0 = 1;
          p[_i0].p_fd->fd_ofiles = (struct fileproc **) malloc(_len_p__i0__p_fd_fd_ofiles0*sizeof(struct fileproc *));
          for(int _j0 = 0; _j0 < _len_p__i0__p_fd_fd_ofiles0; _j0++) {
            int _len_p__i0__p_fd_fd_ofiles1 = 1;
            p[_i0].p_fd->fd_ofiles[_j0] = (struct fileproc *) malloc(_len_p__i0__p_fd_fd_ofiles1*sizeof(struct fileproc));
            for(int _j1 = 0; _j1 < _len_p__i0__p_fd_fd_ofiles1; _j1++) {
              p[_i0].p_fd->fd_ofiles[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_resultfp0 = 1;
          struct fileproc ** resultfp = (struct fileproc **) malloc(_len_resultfp0*sizeof(struct fileproc *));
          for(int _i0 = 0; _i0 < _len_resultfp0; _i0++) {
            int _len_resultfp1 = 1;
            resultfp[_i0] = (struct fileproc *) malloc(_len_resultfp1*sizeof(struct fileproc));
            for(int _i1 = 0; _i1 < _len_resultfp1; _i1++) {
              resultfp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = fdgetf_noref(p,fd,resultfp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].p_fd);
          }
          free(p);
          for(int i1 = 0; i1 < _len_resultfp0; i1++) {
            int _len_resultfp1 = 1;
              free(resultfp[i1]);
          }
          free(resultfp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fd = 255;
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__p_fd0 = 1;
          p[_i0].p_fd = (struct filedesc *) malloc(_len_p__i0__p_fd0*sizeof(struct filedesc));
          for(int _j0 = 0; _j0 < _len_p__i0__p_fd0; _j0++) {
            p[_i0].p_fd->fd_nfiles = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__p_fd_fd_ofileflags0 = 1;
          p[_i0].p_fd->fd_ofileflags = (int *) malloc(_len_p__i0__p_fd_fd_ofileflags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__p_fd_fd_ofileflags0; _j0++) {
            p[_i0].p_fd->fd_ofileflags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__p_fd_fd_ofiles0 = 1;
          p[_i0].p_fd->fd_ofiles = (struct fileproc **) malloc(_len_p__i0__p_fd_fd_ofiles0*sizeof(struct fileproc *));
          for(int _j0 = 0; _j0 < _len_p__i0__p_fd_fd_ofiles0; _j0++) {
            int _len_p__i0__p_fd_fd_ofiles1 = 1;
            p[_i0].p_fd->fd_ofiles[_j0] = (struct fileproc *) malloc(_len_p__i0__p_fd_fd_ofiles1*sizeof(struct fileproc));
            for(int _j1 = 0; _j1 < _len_p__i0__p_fd_fd_ofiles1; _j1++) {
              p[_i0].p_fd->fd_ofiles[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_resultfp0 = 65025;
          struct fileproc ** resultfp = (struct fileproc **) malloc(_len_resultfp0*sizeof(struct fileproc *));
          for(int _i0 = 0; _i0 < _len_resultfp0; _i0++) {
            int _len_resultfp1 = 1;
            resultfp[_i0] = (struct fileproc *) malloc(_len_resultfp1*sizeof(struct fileproc));
            for(int _i1 = 0; _i1 < _len_resultfp1; _i1++) {
              resultfp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = fdgetf_noref(p,fd,resultfp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].p_fd);
          }
          free(p);
          for(int i1 = 0; i1 < _len_resultfp0; i1++) {
            int _len_resultfp1 = 1;
              free(resultfp[i1]);
          }
          free(resultfp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fd = 10;
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__p_fd0 = 1;
          p[_i0].p_fd = (struct filedesc *) malloc(_len_p__i0__p_fd0*sizeof(struct filedesc));
          for(int _j0 = 0; _j0 < _len_p__i0__p_fd0; _j0++) {
            p[_i0].p_fd->fd_nfiles = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__p_fd_fd_ofileflags0 = 1;
          p[_i0].p_fd->fd_ofileflags = (int *) malloc(_len_p__i0__p_fd_fd_ofileflags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__p_fd_fd_ofileflags0; _j0++) {
            p[_i0].p_fd->fd_ofileflags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__p_fd_fd_ofiles0 = 1;
          p[_i0].p_fd->fd_ofiles = (struct fileproc **) malloc(_len_p__i0__p_fd_fd_ofiles0*sizeof(struct fileproc *));
          for(int _j0 = 0; _j0 < _len_p__i0__p_fd_fd_ofiles0; _j0++) {
            int _len_p__i0__p_fd_fd_ofiles1 = 1;
            p[_i0].p_fd->fd_ofiles[_j0] = (struct fileproc *) malloc(_len_p__i0__p_fd_fd_ofiles1*sizeof(struct fileproc));
            for(int _j1 = 0; _j1 < _len_p__i0__p_fd_fd_ofiles1; _j1++) {
              p[_i0].p_fd->fd_ofiles[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_resultfp0 = 100;
          struct fileproc ** resultfp = (struct fileproc **) malloc(_len_resultfp0*sizeof(struct fileproc *));
          for(int _i0 = 0; _i0 < _len_resultfp0; _i0++) {
            int _len_resultfp1 = 1;
            resultfp[_i0] = (struct fileproc *) malloc(_len_resultfp1*sizeof(struct fileproc));
            for(int _i1 = 0; _i1 < _len_resultfp1; _i1++) {
              resultfp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = fdgetf_noref(p,fd,resultfp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].p_fd);
          }
          free(p);
          for(int i1 = 0; i1 < _len_resultfp0; i1++) {
            int _len_resultfp1 = 1;
              free(resultfp[i1]);
          }
          free(resultfp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
