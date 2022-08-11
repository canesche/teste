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
struct file_user_list_entry {long long user_id; } ;
struct TYPE_2__ {int tot_users; } ;

/* Variables and functions */
 struct file_user_list_entry** FileUsers ; 
 TYPE_1__ Header ; 

struct file_user_list_entry *lookup_user_directory (long long user_id) {
  int i = -1, j = Header.tot_users, k;
  if (j <= 0) {
    return 0;
  }
  while (j - i > 1) {
    k = ((i + j) >> 1);
    if (user_id < FileUsers[k]->user_id) { j = k; } else { i = k; }
  }
  if (i >= 0 && FileUsers[i]->user_id == user_id) {
    return FileUsers[i];
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
          long long user_id = 100;
          struct file_user_list_entry * benchRet = lookup_user_directory(user_id);
          printf("%lld\n", (*benchRet).user_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          long long user_id = 255;
          struct file_user_list_entry * benchRet = lookup_user_directory(user_id);
          printf("%lld\n", (*benchRet).user_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long long user_id = 10;
          struct file_user_list_entry * benchRet = lookup_user_directory(user_id);
          printf("%lld\n", (*benchRet).user_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
