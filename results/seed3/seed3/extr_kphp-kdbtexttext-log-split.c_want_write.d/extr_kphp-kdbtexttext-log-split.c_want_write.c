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
struct lev_set_flags {int user_id; } ;

/* Variables and functions */
#define  LEV_CHANGE_FIELDMASK_DELAYED 134 
#define  LEV_CRC32 133 
#define  LEV_NOOP 132 
#define  LEV_ROTATE_FROM 131 
#define  LEV_ROTATE_TO 130 
#define  LEV_START 129 
#define  LEV_TIMESTAMP 128 
 int copy_mod ; 
 int copy_rem ; 
 int /*<<< orphan*/  jump_log_pos ; 
 int /*<<< orphan*/  targ_existed ; 

__attribute__((used)) static int want_write (int type, void *rec) {
  int user_id = 0;

  switch (type) {
  case LEV_START:
    return !targ_existed++ && !jump_log_pos;
  case LEV_NOOP:
    return 0;
  case LEV_TIMESTAMP:
  case LEV_CRC32:
  case LEV_ROTATE_TO:
  case LEV_ROTATE_FROM:
    return 0;
  case LEV_CHANGE_FIELDMASK_DELAYED:
    return 1;
  default:
    user_id = ((struct lev_set_flags *) rec)->user_id;
  }
  user_id %= copy_mod;
  if (user_id == copy_rem || user_id == -copy_rem) {
    return 1;
  }
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
          int type = 100;
          void * rec;
          int benchRet = want_write(type,rec);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          void * rec;
          int benchRet = want_write(type,rec);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          void * rec;
          int benchRet = want_write(type,rec);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
