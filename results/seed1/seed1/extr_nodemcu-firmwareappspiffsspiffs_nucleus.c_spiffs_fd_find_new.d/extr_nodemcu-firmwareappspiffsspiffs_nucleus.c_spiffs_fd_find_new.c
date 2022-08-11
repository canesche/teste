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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32_t ;
struct TYPE_5__ {size_t file_nbr; } ;
typedef  TYPE_1__ spiffs_fd ;
struct TYPE_6__ {size_t fd_count; scalar_t__ fd_space; } ;
typedef  TYPE_2__ spiffs ;
typedef  int /*<<< orphan*/  s32_t ;

/* Variables and functions */
 int /*<<< orphan*/  SPIFFS_ERR_OUT_OF_FILE_DESCS ; 
 int /*<<< orphan*/  SPIFFS_OK ; 

s32_t spiffs_fd_find_new(spiffs *fs, spiffs_fd **fd, const char *name) {
#if SPIFFS_TEMPORAL_FD_CACHE
  u32_t i;
  u16_t min_score = 0xffff;
  u32_t cand_ix = (u32_t)-1;
  u32_t name_hash = name ? spiffs_hash(fs, (const u8_t *)name) : 0;
  spiffs_fd *fds = (spiffs_fd *)fs->fd_space;

  if (name) {
    // first, decrease score of all closed descriptors
    for (i = 0; i < fs->fd_count; i++) {
      spiffs_fd *cur_fd = &fds[i];
      if (cur_fd->file_nbr == 0) {
        if (cur_fd->score > 1) { // score == 0 indicates never used fd
          cur_fd->score--;
        }
      }
    }
  }

  // find the free fd with least score or name match
  for (i = 0; i < fs->fd_count; i++) {
    spiffs_fd *cur_fd = &fds[i];
    if (cur_fd->file_nbr == 0) {
      if (name && cur_fd->name_hash == name_hash) {
        cand_ix = i;
        break;
      }
      if (cur_fd->score < min_score) {
        min_score = cur_fd->score;
        cand_ix = i;
      }
    }
  }

  if (cand_ix != (u32_t)-1) {
    spiffs_fd *cur_fd = &fds[cand_ix];
    if (name) {
      if (cur_fd->name_hash == name_hash && cur_fd->score > 0) {
        // opened an fd with same name hash, assume same file
        // set search point to saved obj index page and hope we have a correct match directly
        // when start searching - if not, we will just keep searching until it is found
        fs->cursor_block_ix = SPIFFS_BLOCK_FOR_PAGE(fs, cur_fd->objix_hdr_pix);
        fs->cursor_obj_lu_entry = SPIFFS_OBJ_LOOKUP_ENTRY_FOR_PAGE(fs, cur_fd->objix_hdr_pix);
        // update score
        if (cur_fd->score < 0xffff-SPIFFS_TEMPORAL_CACHE_HIT_SCORE) {
          cur_fd->score += SPIFFS_TEMPORAL_CACHE_HIT_SCORE;
        } else {
          cur_fd->score = 0xffff;
        }
      } else {
        // no hash hit, restore this fd to initial state
        cur_fd->score = SPIFFS_TEMPORAL_CACHE_HIT_SCORE;
        cur_fd->name_hash = name_hash;
      }
    }
    cur_fd->file_nbr = cand_ix+1;
    *fd = cur_fd;
    return SPIFFS_OK;
  } else {
    return SPIFFS_ERR_OUT_OF_FILE_DESCS;
  }
#else
  (void)name;
  u32_t i;
  spiffs_fd *fds = (spiffs_fd *)fs->fd_space;
  for (i = 0; i < fs->fd_count; i++) {
    spiffs_fd *cur_fd = &fds[i];
    if (cur_fd->file_nbr == 0) {
      cur_fd->file_nbr = i+1;
      *fd = cur_fd;
      return SPIFFS_OK;
    }
  }
  return SPIFFS_ERR_OUT_OF_FILE_DESCS;
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
          int _len_fs0 = 1;
          struct TYPE_6__ * fs = (struct TYPE_6__ *) malloc(_len_fs0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].fd_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].fd_space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fd0 = 1;
          struct TYPE_5__ ** fd = (struct TYPE_5__ **) malloc(_len_fd0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            int _len_fd1 = 1;
            fd[_i0] = (struct TYPE_5__ *) malloc(_len_fd1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_fd1; _i1++) {
              fd[_i0][_i1].file_nbr = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spiffs_fd_find_new(fs,fd,name);
          printf("%d\n", benchRet); 
          free(fs);
          for(int i1 = 0; i1 < _len_fd0; i1++) {
            int _len_fd1 = 1;
              free(fd[i1]);
          }
          free(fd);
          free(name);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fs0 = 65025;
          struct TYPE_6__ * fs = (struct TYPE_6__ *) malloc(_len_fs0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].fd_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].fd_space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fd0 = 65025;
          struct TYPE_5__ ** fd = (struct TYPE_5__ **) malloc(_len_fd0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            int _len_fd1 = 1;
            fd[_i0] = (struct TYPE_5__ *) malloc(_len_fd1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_fd1; _i1++) {
              fd[_i0][_i1].file_nbr = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spiffs_fd_find_new(fs,fd,name);
          printf("%d\n", benchRet); 
          free(fs);
          for(int i1 = 0; i1 < _len_fd0; i1++) {
            int _len_fd1 = 1;
              free(fd[i1]);
          }
          free(fd);
          free(name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fs0 = 100;
          struct TYPE_6__ * fs = (struct TYPE_6__ *) malloc(_len_fs0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].fd_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].fd_space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fd0 = 100;
          struct TYPE_5__ ** fd = (struct TYPE_5__ **) malloc(_len_fd0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            int _len_fd1 = 1;
            fd[_i0] = (struct TYPE_5__ *) malloc(_len_fd1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_fd1; _i1++) {
              fd[_i0][_i1].file_nbr = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spiffs_fd_find_new(fs,fd,name);
          printf("%d\n", benchRet); 
          free(fs);
          for(int i1 = 0; i1 < _len_fd0; i1++) {
            int _len_fd1 = 1;
              free(fd[i1]);
          }
          free(fd);
          free(name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
