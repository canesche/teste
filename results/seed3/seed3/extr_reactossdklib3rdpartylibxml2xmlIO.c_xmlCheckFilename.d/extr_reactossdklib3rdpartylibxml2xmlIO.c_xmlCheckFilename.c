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

int
xmlCheckFilename (const char *path)
{
#ifdef HAVE_STAT
#if defined(_WIN32) || defined (__DJGPP__) && !defined (__CYGWIN__)
    struct _stat stat_buffer;
#else
    struct stat stat_buffer;
#endif
#endif
    if (path == NULL)
	return(0);

#ifdef HAVE_STAT
#if defined(_WIN32) || defined (__DJGPP__) && !defined (__CYGWIN__)
    /*
     * On Windows stat and wstat do not work with long pathname,
     * which start with '\\?\'
     */
    if ((path[0] == '\\') && (path[1] == '\\') && (path[2] == '?') &&
	(path[3] == '\\') )
	    return 1;

    if (xmlWrapStatUtf8(path, &stat_buffer) == -1)
        return 0;
#else
    if (stat(path, &stat_buffer) == -1)
        return 0;
#endif
#ifdef S_ISDIR
    if (S_ISDIR(stat_buffer.st_mode))
        return 2;
#endif
#endif /* HAVE_STAT */
    return 1;
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
          int _len_path0 = 1;
          const char * path = (const char *) malloc(_len_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlCheckFilename(path);
          printf("%d\n", benchRet); 
          free(path);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_path0 = 65025;
          const char * path = (const char *) malloc(_len_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlCheckFilename(path);
          printf("%d\n", benchRet); 
          free(path);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_path0 = 100;
          const char * path = (const char *) malloc(_len_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlCheckFilename(path);
          printf("%d\n", benchRet); 
          free(path);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
