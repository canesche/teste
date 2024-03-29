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
struct tb_path {int egress_fc_enable; int priority; int weight; scalar_t__ nfc_credits; scalar_t__ drop_packages; void* ingress_shared_buffer; int /*<<< orphan*/  ingress_fc_enable; void* egress_shared_buffer; } ;

/* Variables and functions */
 int /*<<< orphan*/  TB_PATH_ALL ; 
 int TB_PATH_INTERNAL ; 
 void* TB_PATH_NONE ; 
 int TB_PATH_SOURCE ; 

__attribute__((used)) static void tb_pci_init_path(struct tb_path *path)
{
	path->egress_fc_enable = TB_PATH_SOURCE | TB_PATH_INTERNAL;
	path->egress_shared_buffer = TB_PATH_NONE;
	path->ingress_fc_enable = TB_PATH_ALL;
	path->ingress_shared_buffer = TB_PATH_NONE;
	path->priority = 3;
	path->weight = 1;
	path->drop_packages = 0;
	path->nfc_credits = 0;
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
          struct tb_path * path = (struct tb_path *) malloc(_len_path0*sizeof(struct tb_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].egress_fc_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].weight = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].nfc_credits = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].drop_packages = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].ingress_fc_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tb_pci_init_path(path);
          free(path);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_path0 = 65025;
          struct tb_path * path = (struct tb_path *) malloc(_len_path0*sizeof(struct tb_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].egress_fc_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].weight = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].nfc_credits = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].drop_packages = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].ingress_fc_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tb_pci_init_path(path);
          free(path);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_path0 = 100;
          struct tb_path * path = (struct tb_path *) malloc(_len_path0*sizeof(struct tb_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].egress_fc_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].weight = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].nfc_credits = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].drop_packages = ((-2 * (next_i()%2)) + 1) * next_i();
        path[_i0].ingress_fc_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tb_pci_init_path(path);
          free(path);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
