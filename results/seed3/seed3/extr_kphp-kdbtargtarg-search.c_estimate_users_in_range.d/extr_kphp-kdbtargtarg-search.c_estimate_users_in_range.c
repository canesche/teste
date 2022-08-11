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
 int log_split_min ; 
 int log_split_mod ; 
 int max_uid ; 

__attribute__((used)) static inline int estimate_users_in_range (int min_user_id, int max_user_id) {
  int _min_uid = (min_user_id - log_split_min + log_split_mod - 1) / log_split_mod;
  int _max_uid = ((long long) max_user_id - log_split_min + log_split_mod) / log_split_mod - 1;
  if (_max_uid > max_uid) {
    _max_uid = max_uid;
  }
  if (_min_uid <= 0) {
    _min_uid = 0;
  }
  return _min_uid <= _max_uid ? _max_uid - _min_uid + 1 : 0;
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
          int min_user_id = 100;
          int max_user_id = 100;
          int benchRet = estimate_users_in_range(min_user_id,max_user_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int min_user_id = 255;
          int max_user_id = 255;
          int benchRet = estimate_users_in_range(min_user_id,max_user_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int min_user_id = 10;
          int max_user_id = 10;
          int benchRet = estimate_users_in_range(min_user_id,max_user_id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
