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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct cacheinfo {int /*<<< orphan*/  priv; scalar_t__ physical_line_partition; scalar_t__ number_of_sets; int /*<<< orphan*/  size; scalar_t__ ways_of_associativity; scalar_t__ coherency_line_size; int /*<<< orphan*/  type; int /*<<< orphan*/  level; int /*<<< orphan*/  attributes; int /*<<< orphan*/  id; } ;
struct TYPE_11__ {scalar_t__ physical_line_partition; scalar_t__ ways_of_associativity; scalar_t__ coherency_line_size; } ;
struct TYPE_12__ {TYPE_5__ split; } ;
struct TYPE_9__ {scalar_t__ number_of_sets; } ;
struct TYPE_10__ {TYPE_3__ split; } ;
struct TYPE_7__ {size_t type; int /*<<< orphan*/  level; } ;
struct TYPE_8__ {TYPE_1__ split; } ;
struct _cpuid4_info_regs {int /*<<< orphan*/  nb; TYPE_6__ ebx; TYPE_4__ ecx; int /*<<< orphan*/  size; TYPE_2__ eax; int /*<<< orphan*/  id; } ;

/* Variables and functions */
 int /*<<< orphan*/  CACHE_ID ; 
 int /*<<< orphan*/ * cache_type_map ; 

__attribute__((used)) static void ci_leaf_init(struct cacheinfo *this_leaf,
			 struct _cpuid4_info_regs *base)
{
	this_leaf->id = base->id;
	this_leaf->attributes = CACHE_ID;
	this_leaf->level = base->eax.split.level;
	this_leaf->type = cache_type_map[base->eax.split.type];
	this_leaf->coherency_line_size =
				base->ebx.split.coherency_line_size + 1;
	this_leaf->ways_of_associativity =
				base->ebx.split.ways_of_associativity + 1;
	this_leaf->size = base->size;
	this_leaf->number_of_sets = base->ecx.split.number_of_sets + 1;
	this_leaf->physical_line_partition =
				base->ebx.split.physical_line_partition + 1;
	this_leaf->priv = base->nb;
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
          int _len_this_leaf0 = 1;
          struct cacheinfo * this_leaf = (struct cacheinfo *) malloc(_len_this_leaf0*sizeof(struct cacheinfo));
          for(int _i0 = 0; _i0 < _len_this_leaf0; _i0++) {
            this_leaf[_i0].priv = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].physical_line_partition = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].ways_of_associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].coherency_line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 1;
          struct _cpuid4_info_regs * base = (struct _cpuid4_info_regs *) malloc(_len_base0*sizeof(struct _cpuid4_info_regs));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].nb = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ebx.split.physical_line_partition = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ebx.split.ways_of_associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ebx.split.coherency_line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ecx.split.number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].eax.split.type = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].eax.split.level = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ci_leaf_init(this_leaf,base);
          free(this_leaf);
          free(base);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_this_leaf0 = 65025;
          struct cacheinfo * this_leaf = (struct cacheinfo *) malloc(_len_this_leaf0*sizeof(struct cacheinfo));
          for(int _i0 = 0; _i0 < _len_this_leaf0; _i0++) {
            this_leaf[_i0].priv = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].physical_line_partition = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].ways_of_associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].coherency_line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 65025;
          struct _cpuid4_info_regs * base = (struct _cpuid4_info_regs *) malloc(_len_base0*sizeof(struct _cpuid4_info_regs));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].nb = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ebx.split.physical_line_partition = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ebx.split.ways_of_associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ebx.split.coherency_line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ecx.split.number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].eax.split.type = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].eax.split.level = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ci_leaf_init(this_leaf,base);
          free(this_leaf);
          free(base);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_this_leaf0 = 100;
          struct cacheinfo * this_leaf = (struct cacheinfo *) malloc(_len_this_leaf0*sizeof(struct cacheinfo));
          for(int _i0 = 0; _i0 < _len_this_leaf0; _i0++) {
            this_leaf[_i0].priv = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].physical_line_partition = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].ways_of_associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].coherency_line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 100;
          struct _cpuid4_info_regs * base = (struct _cpuid4_info_regs *) malloc(_len_base0*sizeof(struct _cpuid4_info_regs));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].nb = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ebx.split.physical_line_partition = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ebx.split.ways_of_associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ebx.split.coherency_line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].ecx.split.number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].eax.split.type = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].eax.split.level = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ci_leaf_init(this_leaf,base);
          free(this_leaf);
          free(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
