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
typedef  int /*<<< orphan*/  vfs_fs_fns ;
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  sint32_t ;

/* Variables and functions */
 int /*<<< orphan*/  VFS_RES_ERR ; 

sint32_t vfs_fscfg( const char *name, uint32_t *phys_addr, uint32_t *phys_size)
{
  vfs_fs_fns *fs_fns;
  char *outname;

#ifdef BUILD_SPIFFS
  if (fs_fns = myspiffs_realm( "/FLASH", &outname, FALSE )) {
    return fs_fns->fscfg( phys_addr, phys_size );
  }
#endif

#ifdef BUILD_FATFS
  // not supported
#endif

  // Error
  return VFS_RES_ERR;
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
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phys_addr0 = 1;
          int * phys_addr = (int *) malloc(_len_phys_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_addr0; _i0++) {
            phys_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phys_size0 = 1;
          int * phys_size = (int *) malloc(_len_phys_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_size0; _i0++) {
            phys_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vfs_fscfg(name,phys_addr,phys_size);
          printf("%d\n", benchRet); 
          free(name);
          free(phys_addr);
          free(phys_size);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phys_addr0 = 65025;
          int * phys_addr = (int *) malloc(_len_phys_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_addr0; _i0++) {
            phys_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phys_size0 = 65025;
          int * phys_size = (int *) malloc(_len_phys_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_size0; _i0++) {
            phys_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vfs_fscfg(name,phys_addr,phys_size);
          printf("%d\n", benchRet); 
          free(name);
          free(phys_addr);
          free(phys_size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phys_addr0 = 100;
          int * phys_addr = (int *) malloc(_len_phys_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_addr0; _i0++) {
            phys_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phys_size0 = 100;
          int * phys_size = (int *) malloc(_len_phys_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_size0; _i0++) {
            phys_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vfs_fscfg(name,phys_addr,phys_size);
          printf("%d\n", benchRet); 
          free(name);
          free(phys_addr);
          free(phys_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
