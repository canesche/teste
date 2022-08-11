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

/* Variables and functions */
 int /*<<< orphan*/  ENOSYS ; 
 int /*<<< orphan*/  errno ; 

__attribute__((used)) static int execveat_(int fd, const char *path, char **argv, char **envp,
		     int flags)
{
#ifdef __NR_execveat
	return syscall(__NR_execveat, fd, path, argv, envp, flags);
#else
	errno = ENOSYS;
	return -1;
#endif
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
          int flags = 100;
          int _len_path0 = 1;
          const char * path = (const char *) malloc(_len_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argv0 = 1;
          char ** argv = (char **) malloc(_len_argv0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_argv0; _i0++) {
            int _len_argv1 = 1;
            argv[_i0] = (char *) malloc(_len_argv1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_argv1; _i1++) {
              argv[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_envp0 = 1;
          char ** envp = (char **) malloc(_len_envp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_envp0; _i0++) {
            int _len_envp1 = 1;
            envp[_i0] = (char *) malloc(_len_envp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_envp1; _i1++) {
              envp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = execveat_(fd,path,argv,envp,flags);
          printf("%d\n", benchRet); 
          free(path);
          for(int i1 = 0; i1 < _len_argv0; i1++) {
            int _len_argv1 = 1;
              free(argv[i1]);
          }
          free(argv);
          for(int i1 = 0; i1 < _len_envp0; i1++) {
            int _len_envp1 = 1;
              free(envp[i1]);
          }
          free(envp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fd = 255;
          int flags = 255;
          int _len_path0 = 65025;
          const char * path = (const char *) malloc(_len_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argv0 = 65025;
          char ** argv = (char **) malloc(_len_argv0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_argv0; _i0++) {
            int _len_argv1 = 1;
            argv[_i0] = (char *) malloc(_len_argv1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_argv1; _i1++) {
              argv[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_envp0 = 65025;
          char ** envp = (char **) malloc(_len_envp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_envp0; _i0++) {
            int _len_envp1 = 1;
            envp[_i0] = (char *) malloc(_len_envp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_envp1; _i1++) {
              envp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = execveat_(fd,path,argv,envp,flags);
          printf("%d\n", benchRet); 
          free(path);
          for(int i1 = 0; i1 < _len_argv0; i1++) {
            int _len_argv1 = 1;
              free(argv[i1]);
          }
          free(argv);
          for(int i1 = 0; i1 < _len_envp0; i1++) {
            int _len_envp1 = 1;
              free(envp[i1]);
          }
          free(envp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fd = 10;
          int flags = 10;
          int _len_path0 = 100;
          const char * path = (const char *) malloc(_len_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argv0 = 100;
          char ** argv = (char **) malloc(_len_argv0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_argv0; _i0++) {
            int _len_argv1 = 1;
            argv[_i0] = (char *) malloc(_len_argv1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_argv1; _i1++) {
              argv[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_envp0 = 100;
          char ** envp = (char **) malloc(_len_envp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_envp0; _i0++) {
            int _len_envp1 = 1;
            envp[_i0] = (char *) malloc(_len_envp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_envp1; _i1++) {
              envp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = execveat_(fd,path,argv,envp,flags);
          printf("%d\n", benchRet); 
          free(path);
          for(int i1 = 0; i1 < _len_argv0; i1++) {
            int _len_argv1 = 1;
              free(argv[i1]);
          }
          free(argv);
          for(int i1 = 0; i1 < _len_envp0; i1++) {
            int _len_envp1 = 1;
              free(envp[i1]);
          }
          free(envp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
