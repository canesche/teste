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

__attribute__((used)) static void debug_one_dentry(unsigned char d_type, const char *de_name,
			     unsigned int de_namelen)
{
#ifdef CONFIG_EROFS_FS_DEBUG
	/* since the on-disk name could not have the trailing '\0' */
	unsigned char dbg_namebuf[EROFS_NAME_LEN + 1];

	memcpy(dbg_namebuf, de_name, de_namelen);
	dbg_namebuf[de_namelen] = '\0';

	debugln("found dirent %s de_len %u d_type %d", dbg_namebuf,
		de_namelen, d_type);
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
          unsigned char d_type = 100;
          unsigned int de_namelen = 100;
          int _len_de_name0 = 1;
          const char * de_name = (const char *) malloc(_len_de_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_de_name0; _i0++) {
            de_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          debug_one_dentry(d_type,de_name,de_namelen);
          free(de_name);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char d_type = 255;
          unsigned int de_namelen = 255;
          int _len_de_name0 = 65025;
          const char * de_name = (const char *) malloc(_len_de_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_de_name0; _i0++) {
            de_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          debug_one_dentry(d_type,de_name,de_namelen);
          free(de_name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char d_type = 10;
          unsigned int de_namelen = 10;
          int _len_de_name0 = 100;
          const char * de_name = (const char *) malloc(_len_de_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_de_name0; _i0++) {
            de_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          debug_one_dentry(d_type,de_name,de_namelen);
          free(de_name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
