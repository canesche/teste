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
typedef  scalar_t__ spiffs_obj_id ;
typedef  int /*<<< orphan*/  spiffs_block_ix ;
struct TYPE_3__ {int /*<<< orphan*/  stats_p_allocated; int /*<<< orphan*/  stats_p_deleted; int /*<<< orphan*/  free_blocks; } ;
typedef  TYPE_1__ spiffs ;
typedef  int /*<<< orphan*/  s32_t ;

/* Variables and functions */
 scalar_t__ SPIFFS_OBJ_ID_DELETED ; 
 scalar_t__ SPIFFS_OBJ_ID_FREE ; 
 int /*<<< orphan*/  SPIFFS_VIS_COUNTINUE ; 

__attribute__((used)) static s32_t spiffs_obj_lu_scan_v(
    spiffs *fs,
    spiffs_obj_id obj_id,
    spiffs_block_ix bix,
    int ix_entry,
    const void *user_const_p,
    void *user_var_p) {
  (void)bix;
  (void)user_const_p;
  (void)user_var_p;
  if (obj_id == SPIFFS_OBJ_ID_FREE) {
    if (ix_entry == 0) {
      fs->free_blocks++;
      // todo optimize further, return SPIFFS_NEXT_BLOCK
    }
  } else if (obj_id == SPIFFS_OBJ_ID_DELETED) {
    fs->stats_p_deleted++;
  } else {
    fs->stats_p_allocated++;
  }

  return SPIFFS_VIS_COUNTINUE;
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
          long obj_id = 100;
          int bix = 100;
          int ix_entry = 100;
          int _len_fs0 = 1;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].stats_p_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].stats_p_deleted = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].free_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_user_const_p0 = 1;
          const void * user_const_p = (const void *) malloc(_len_user_const_p0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_user_const_p0; _i0++) {
            user_const_p[_i0] = 0;
          }
          void * user_var_p;
          int benchRet = spiffs_obj_lu_scan_v(fs,obj_id,bix,ix_entry,user_const_p,user_var_p);
          printf("%d\n", benchRet); 
          free(fs);
          free(user_const_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          long obj_id = 255;
          int bix = 255;
          int ix_entry = 255;
          int _len_fs0 = 65025;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].stats_p_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].stats_p_deleted = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].free_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_user_const_p0 = 65025;
          const void * user_const_p = (const void *) malloc(_len_user_const_p0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_user_const_p0; _i0++) {
            user_const_p[_i0] = 0;
          }
          void * user_var_p;
          int benchRet = spiffs_obj_lu_scan_v(fs,obj_id,bix,ix_entry,user_const_p,user_var_p);
          printf("%d\n", benchRet); 
          free(fs);
          free(user_const_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long obj_id = 10;
          int bix = 10;
          int ix_entry = 10;
          int _len_fs0 = 100;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].stats_p_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].stats_p_deleted = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].free_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_user_const_p0 = 100;
          const void * user_const_p = (const void *) malloc(_len_user_const_p0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_user_const_p0; _i0++) {
            user_const_p[_i0] = 0;
          }
          void * user_var_p;
          int benchRet = spiffs_obj_lu_scan_v(fs,obj_id,bix,ix_entry,user_const_p,user_var_p);
          printf("%d\n", benchRet); 
          free(fs);
          free(user_const_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
