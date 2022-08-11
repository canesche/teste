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
struct cacheinfo {int attributes; scalar_t__ type; int /*<<< orphan*/  ways_of_associativity; int /*<<< orphan*/  number_of_sets; int /*<<< orphan*/  coherency_line_size; int /*<<< orphan*/  size; struct acpi_pptt_processor* fw_token; } ;
struct acpi_pptt_processor {int dummy; } ;
struct acpi_pptt_cache {int flags; int attributes; int /*<<< orphan*/  associativity; int /*<<< orphan*/  number_of_sets; int /*<<< orphan*/  line_size; int /*<<< orphan*/  size; } ;

/* Variables and functions */
 int ACPI_PPTT_ALLOCATION_TYPE_VALID ; 
 int ACPI_PPTT_ASSOCIATIVITY_VALID ; 
#define  ACPI_PPTT_CACHE_POLICY_WB 133 
#define  ACPI_PPTT_CACHE_POLICY_WT 132 
#define  ACPI_PPTT_CACHE_READ_ALLOCATE 131 
#define  ACPI_PPTT_CACHE_RW_ALLOCATE 130 
#define  ACPI_PPTT_CACHE_RW_ALLOCATE_ALT 129 
 int ACPI_PPTT_CACHE_TYPE_VALID ; 
#define  ACPI_PPTT_CACHE_WRITE_ALLOCATE 128 
 int ACPI_PPTT_LINE_SIZE_VALID ; 
 int ACPI_PPTT_MASK_ALLOCATION_TYPE ; 
 int ACPI_PPTT_MASK_WRITE_POLICY ; 
 int ACPI_PPTT_NUMBER_OF_SETS_VALID ; 
 int ACPI_PPTT_SIZE_PROPERTY_VALID ; 
 int ACPI_PPTT_WRITE_POLICY_VALID ; 
 int CACHE_READ_ALLOCATE ; 
 scalar_t__ CACHE_TYPE_NOCACHE ; 
 scalar_t__ CACHE_TYPE_UNIFIED ; 
 int CACHE_WRITE_ALLOCATE ; 
 int CACHE_WRITE_BACK ; 
 int CACHE_WRITE_THROUGH ; 

__attribute__((used)) static void update_cache_properties(struct cacheinfo *this_leaf,
				    struct acpi_pptt_cache *found_cache,
				    struct acpi_pptt_processor *cpu_node)
{
	this_leaf->fw_token = cpu_node;
	if (found_cache->flags & ACPI_PPTT_SIZE_PROPERTY_VALID)
		this_leaf->size = found_cache->size;
	if (found_cache->flags & ACPI_PPTT_LINE_SIZE_VALID)
		this_leaf->coherency_line_size = found_cache->line_size;
	if (found_cache->flags & ACPI_PPTT_NUMBER_OF_SETS_VALID)
		this_leaf->number_of_sets = found_cache->number_of_sets;
	if (found_cache->flags & ACPI_PPTT_ASSOCIATIVITY_VALID)
		this_leaf->ways_of_associativity = found_cache->associativity;
	if (found_cache->flags & ACPI_PPTT_WRITE_POLICY_VALID) {
		switch (found_cache->attributes & ACPI_PPTT_MASK_WRITE_POLICY) {
		case ACPI_PPTT_CACHE_POLICY_WT:
			this_leaf->attributes = CACHE_WRITE_THROUGH;
			break;
		case ACPI_PPTT_CACHE_POLICY_WB:
			this_leaf->attributes = CACHE_WRITE_BACK;
			break;
		}
	}
	if (found_cache->flags & ACPI_PPTT_ALLOCATION_TYPE_VALID) {
		switch (found_cache->attributes & ACPI_PPTT_MASK_ALLOCATION_TYPE) {
		case ACPI_PPTT_CACHE_READ_ALLOCATE:
			this_leaf->attributes |= CACHE_READ_ALLOCATE;
			break;
		case ACPI_PPTT_CACHE_WRITE_ALLOCATE:
			this_leaf->attributes |= CACHE_WRITE_ALLOCATE;
			break;
		case ACPI_PPTT_CACHE_RW_ALLOCATE:
		case ACPI_PPTT_CACHE_RW_ALLOCATE_ALT:
			this_leaf->attributes |=
				CACHE_READ_ALLOCATE | CACHE_WRITE_ALLOCATE;
			break;
		}
	}
	/*
	 * If cache type is NOCACHE, then the cache hasn't been specified
	 * via other mechanisms.  Update the type if a cache type has been
	 * provided.
	 *
	 * Note, we assume such caches are unified based on conventional system
	 * design and known examples.  Significant work is required elsewhere to
	 * fully support data/instruction only type caches which are only
	 * specified in PPTT.
	 */
	if (this_leaf->type == CACHE_TYPE_NOCACHE &&
	    found_cache->flags & ACPI_PPTT_CACHE_TYPE_VALID)
		this_leaf->type = CACHE_TYPE_UNIFIED;
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
            this_leaf[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].ways_of_associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].coherency_line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_this_leaf__i0__fw_token0 = 1;
          this_leaf[_i0].fw_token = (struct acpi_pptt_processor *) malloc(_len_this_leaf__i0__fw_token0*sizeof(struct acpi_pptt_processor));
          for(int _j0 = 0; _j0 < _len_this_leaf__i0__fw_token0; _j0++) {
            this_leaf[_i0].fw_token->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_found_cache0 = 1;
          struct acpi_pptt_cache * found_cache = (struct acpi_pptt_cache *) malloc(_len_found_cache0*sizeof(struct acpi_pptt_cache));
          for(int _i0 = 0; _i0 < _len_found_cache0; _i0++) {
            found_cache[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpu_node0 = 1;
          struct acpi_pptt_processor * cpu_node = (struct acpi_pptt_processor *) malloc(_len_cpu_node0*sizeof(struct acpi_pptt_processor));
          for(int _i0 = 0; _i0 < _len_cpu_node0; _i0++) {
            cpu_node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_cache_properties(this_leaf,found_cache,cpu_node);
          for(int _aux = 0; _aux < _len_this_leaf0; _aux++) {
          free(this_leaf[_aux].fw_token);
          }
          free(this_leaf);
          free(found_cache);
          free(cpu_node);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_this_leaf0 = 65025;
          struct cacheinfo * this_leaf = (struct cacheinfo *) malloc(_len_this_leaf0*sizeof(struct cacheinfo));
          for(int _i0 = 0; _i0 < _len_this_leaf0; _i0++) {
            this_leaf[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].ways_of_associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].coherency_line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_this_leaf__i0__fw_token0 = 1;
          this_leaf[_i0].fw_token = (struct acpi_pptt_processor *) malloc(_len_this_leaf__i0__fw_token0*sizeof(struct acpi_pptt_processor));
          for(int _j0 = 0; _j0 < _len_this_leaf__i0__fw_token0; _j0++) {
            this_leaf[_i0].fw_token->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_found_cache0 = 65025;
          struct acpi_pptt_cache * found_cache = (struct acpi_pptt_cache *) malloc(_len_found_cache0*sizeof(struct acpi_pptt_cache));
          for(int _i0 = 0; _i0 < _len_found_cache0; _i0++) {
            found_cache[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpu_node0 = 65025;
          struct acpi_pptt_processor * cpu_node = (struct acpi_pptt_processor *) malloc(_len_cpu_node0*sizeof(struct acpi_pptt_processor));
          for(int _i0 = 0; _i0 < _len_cpu_node0; _i0++) {
            cpu_node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_cache_properties(this_leaf,found_cache,cpu_node);
          for(int _aux = 0; _aux < _len_this_leaf0; _aux++) {
          free(this_leaf[_aux].fw_token);
          }
          free(this_leaf);
          free(found_cache);
          free(cpu_node);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_this_leaf0 = 100;
          struct cacheinfo * this_leaf = (struct cacheinfo *) malloc(_len_this_leaf0*sizeof(struct cacheinfo));
          for(int _i0 = 0; _i0 < _len_this_leaf0; _i0++) {
            this_leaf[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].ways_of_associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].coherency_line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        this_leaf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_this_leaf__i0__fw_token0 = 1;
          this_leaf[_i0].fw_token = (struct acpi_pptt_processor *) malloc(_len_this_leaf__i0__fw_token0*sizeof(struct acpi_pptt_processor));
          for(int _j0 = 0; _j0 < _len_this_leaf__i0__fw_token0; _j0++) {
            this_leaf[_i0].fw_token->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_found_cache0 = 100;
          struct acpi_pptt_cache * found_cache = (struct acpi_pptt_cache *) malloc(_len_found_cache0*sizeof(struct acpi_pptt_cache));
          for(int _i0 = 0; _i0 < _len_found_cache0; _i0++) {
            found_cache[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].associativity = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].number_of_sets = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        found_cache[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpu_node0 = 100;
          struct acpi_pptt_processor * cpu_node = (struct acpi_pptt_processor *) malloc(_len_cpu_node0*sizeof(struct acpi_pptt_processor));
          for(int _i0 = 0; _i0 < _len_cpu_node0; _i0++) {
            cpu_node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_cache_properties(this_leaf,found_cache,cpu_node);
          for(int _aux = 0; _aux < _len_this_leaf0; _aux++) {
          free(this_leaf[_aux].fw_token);
          }
          free(this_leaf);
          free(found_cache);
          free(cpu_node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
