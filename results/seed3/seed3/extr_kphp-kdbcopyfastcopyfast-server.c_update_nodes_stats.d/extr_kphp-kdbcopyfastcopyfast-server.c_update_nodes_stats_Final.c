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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int timestamp; int binlog_position; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_6__ {TYPE_2__ extra; TYPE_1__ node; } ;

/* Variables and functions */
 int DEFAULT_CHILDREN_RENEW_TIME ; 
 scalar_t__ failed_nodes ; 
 int maximal_binlog_size ; 
 int minimal_binlog_size ; 
 TYPE_3__* nodes ; 
 int nodes_num ; 
 int precise_now ; 
 scalar_t__ prefailed_nodes ; 
 scalar_t__ total ; 
 scalar_t__ total_binlog_size ; 

void update_nodes_stats (int use_crc32, int crc32) {
  prefailed_nodes = 0;
  failed_nodes = 0;
  total_binlog_size = 0;
  minimal_binlog_size = 0x7fffffffffffffffll;
  maximal_binlog_size = 0;
  int i;
  total = 0;
  for (i = 0; i < nodes_num; i++) if (!use_crc32 || crc32 == (nodes[i].node.id >> 32)){
    if (precise_now - nodes[i].extra.timestamp > 3 * DEFAULT_CHILDREN_RENEW_TIME) {
      prefailed_nodes ++; 
    }
    if (precise_now - nodes[i].extra.timestamp > 30 * DEFAULT_CHILDREN_RENEW_TIME) {
      failed_nodes ++; 
    }
    total_binlog_size += nodes[i].extra.binlog_position;
    if (nodes[i].extra.binlog_position < minimal_binlog_size) {
      minimal_binlog_size = nodes[i].extra.binlog_position;
    }
    if (nodes[i].extra.binlog_position > maximal_binlog_size) {
      maximal_binlog_size = nodes[i].extra.binlog_position;
    }
    total ++;
  }
}


// ------------------------------------------------------------------------- //




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
          int use_crc32 = 100;
          int crc32 = 100;
          update_nodes_stats(use_crc32,crc32);
        
        break;
    }
    // big-arr
    case 1:
    {
          int use_crc32 = 255;
          int crc32 = 255;
          update_nodes_stats(use_crc32,crc32);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int use_crc32 = 10;
          int crc32 = 10;
          update_nodes_stats(use_crc32,crc32);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
