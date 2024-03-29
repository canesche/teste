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
struct ext2_dir_entry {unsigned int rec_len; } ;
typedef  TYPE_1__* ext2_filsys ;
typedef  int /*<<< orphan*/  errcode_t ;
struct TYPE_3__ {int blocksize; } ;

/* Variables and functions */
 unsigned int EXT4_MAX_REC_LEN ; 

errcode_t ext2fs_get_rec_len(ext2_filsys fs,
			     struct ext2_dir_entry *dirent,
			     unsigned int *rec_len)
{
	unsigned int len = dirent->rec_len;

	if (fs->blocksize < 65536)
		*rec_len = len;
	else if (len == EXT4_MAX_REC_LEN || len == 0)
		*rec_len = fs->blocksize;
	else 
		*rec_len = (len & 65532) | ((len & 3) << 16);
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
          int _len_fs0 = 1;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirent0 = 1;
          struct ext2_dir_entry * dirent = (struct ext2_dir_entry *) malloc(_len_dirent0*sizeof(struct ext2_dir_entry));
          for(int _i0 = 0; _i0 < _len_dirent0; _i0++) {
            dirent[_i0].rec_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rec_len0 = 1;
          unsigned int * rec_len = (unsigned int *) malloc(_len_rec_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rec_len0; _i0++) {
            rec_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext2fs_get_rec_len(fs,dirent,rec_len);
          printf("%d\n", benchRet); 
          free(fs);
          free(dirent);
          free(rec_len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fs0 = 65025;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirent0 = 65025;
          struct ext2_dir_entry * dirent = (struct ext2_dir_entry *) malloc(_len_dirent0*sizeof(struct ext2_dir_entry));
          for(int _i0 = 0; _i0 < _len_dirent0; _i0++) {
            dirent[_i0].rec_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rec_len0 = 65025;
          unsigned int * rec_len = (unsigned int *) malloc(_len_rec_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rec_len0; _i0++) {
            rec_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext2fs_get_rec_len(fs,dirent,rec_len);
          printf("%d\n", benchRet); 
          free(fs);
          free(dirent);
          free(rec_len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fs0 = 100;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirent0 = 100;
          struct ext2_dir_entry * dirent = (struct ext2_dir_entry *) malloc(_len_dirent0*sizeof(struct ext2_dir_entry));
          for(int _i0 = 0; _i0 < _len_dirent0; _i0++) {
            dirent[_i0].rec_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rec_len0 = 100;
          unsigned int * rec_len = (unsigned int *) malloc(_len_rec_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rec_len0; _i0++) {
            rec_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext2fs_get_rec_len(fs,dirent,rec_len);
          printf("%d\n", benchRet); 
          free(fs);
          free(dirent);
          free(rec_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
