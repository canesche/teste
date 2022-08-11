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
typedef  int /*<<< orphan*/  gboolean ;
typedef  int /*<<< orphan*/  IgnoreReason ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 

gboolean
should_ignore_on_checkout (const char *file_path, IgnoreReason *ignore_reason)
{
    gboolean ret = FALSE;

#ifdef WIN32
    static char illegals[] = {'\\', ':', '*', '?', '"', '<', '>', '|', '\b', '\t'};
    char **components = g_strsplit (file_path, "/", -1);
    int n_comps = g_strv_length (components);
    int j = 0;
    char *file_name;
    int i;
    char c;

    for (; j < n_comps; ++j) {
        file_name = components[j];

        if (has_trailing_space_or_period (file_name)) {
            /* Ignore files/dir whose path has trailing spaces. It would cause
             * problem on windows. */
            /* g_debug ("ignore '%s' which contains trailing space in path\n", path); */
            ret = TRUE;
            if (ignore_reason)
                *ignore_reason = IGNORE_REASON_END_SPACE_PERIOD;
            goto out;
        }

        for (i = 0; i < G_N_ELEMENTS(illegals); i++) {
            if (strchr (file_name, illegals[i])) {
                ret = TRUE;
                if (ignore_reason)
                    *ignore_reason = IGNORE_REASON_INVALID_CHARACTER;
                goto out;
            }
        }

        for (c = 1; c <= 31; c++) {
            if (strchr (file_name, c)) {
                ret = TRUE;
                if (ignore_reason)
                    *ignore_reason = IGNORE_REASON_INVALID_CHARACTER;
                goto out;
            }
        }
    }

out:
    g_strfreev (components);
#endif

    return ret;
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
          int _len_file_path0 = 1;
          const char * file_path = (const char *) malloc(_len_file_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_file_path0; _i0++) {
            file_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ignore_reason0 = 1;
          int * ignore_reason = (int *) malloc(_len_ignore_reason0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ignore_reason0; _i0++) {
            ignore_reason[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = should_ignore_on_checkout(file_path,ignore_reason);
          printf("%d\n", benchRet); 
          free(file_path);
          free(ignore_reason);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_file_path0 = 65025;
          const char * file_path = (const char *) malloc(_len_file_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_file_path0; _i0++) {
            file_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ignore_reason0 = 65025;
          int * ignore_reason = (int *) malloc(_len_ignore_reason0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ignore_reason0; _i0++) {
            ignore_reason[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = should_ignore_on_checkout(file_path,ignore_reason);
          printf("%d\n", benchRet); 
          free(file_path);
          free(ignore_reason);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_file_path0 = 100;
          const char * file_path = (const char *) malloc(_len_file_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_file_path0; _i0++) {
            file_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ignore_reason0 = 100;
          int * ignore_reason = (int *) malloc(_len_ignore_reason0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ignore_reason0; _i0++) {
            ignore_reason[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = should_ignore_on_checkout(file_path,ignore_reason);
          printf("%d\n", benchRet); 
          free(file_path);
          free(ignore_reason);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
