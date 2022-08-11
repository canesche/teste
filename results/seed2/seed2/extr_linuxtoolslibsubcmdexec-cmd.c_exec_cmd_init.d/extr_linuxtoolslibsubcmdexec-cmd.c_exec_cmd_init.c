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
struct TYPE_2__ {char const* exec_name; char const* prefix; char const* exec_path; char const* exec_path_env; } ;

/* Variables and functions */
 TYPE_1__ subcmd_config ; 

void exec_cmd_init(const char *exec_name, const char *prefix,
		   const char *exec_path, const char *exec_path_env)
{
	subcmd_config.exec_name		= exec_name;
	subcmd_config.prefix		= prefix;
	subcmd_config.exec_path		= exec_path;
	subcmd_config.exec_path_env	= exec_path_env;
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
          int _len_exec_name0 = 1;
          const char * exec_name = (const char *) malloc(_len_exec_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_exec_name0; _i0++) {
            exec_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 1;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exec_path0 = 1;
          const char * exec_path = (const char *) malloc(_len_exec_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_exec_path0; _i0++) {
            exec_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exec_path_env0 = 1;
          const char * exec_path_env = (const char *) malloc(_len_exec_path_env0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_exec_path_env0; _i0++) {
            exec_path_env[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exec_cmd_init(exec_name,prefix,exec_path,exec_path_env);
          free(exec_name);
          free(prefix);
          free(exec_path);
          free(exec_path_env);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_exec_name0 = 65025;
          const char * exec_name = (const char *) malloc(_len_exec_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_exec_name0; _i0++) {
            exec_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 65025;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exec_path0 = 65025;
          const char * exec_path = (const char *) malloc(_len_exec_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_exec_path0; _i0++) {
            exec_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exec_path_env0 = 65025;
          const char * exec_path_env = (const char *) malloc(_len_exec_path_env0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_exec_path_env0; _i0++) {
            exec_path_env[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exec_cmd_init(exec_name,prefix,exec_path,exec_path_env);
          free(exec_name);
          free(prefix);
          free(exec_path);
          free(exec_path_env);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_exec_name0 = 100;
          const char * exec_name = (const char *) malloc(_len_exec_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_exec_name0; _i0++) {
            exec_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 100;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exec_path0 = 100;
          const char * exec_path = (const char *) malloc(_len_exec_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_exec_path0; _i0++) {
            exec_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exec_path_env0 = 100;
          const char * exec_path_env = (const char *) malloc(_len_exec_path_env0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_exec_path_env0; _i0++) {
            exec_path_env[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exec_cmd_init(exec_name,prefix,exec_path,exec_path_env);
          free(exec_name);
          free(prefix);
          free(exec_path);
          free(exec_path_env);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
