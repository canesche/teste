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
typedef  TYPE_1__* xmlHashTablePtr ;
typedef  int xmlChar ;
struct TYPE_3__ {unsigned long size; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long
xmlHashComputeQKey(xmlHashTablePtr table,
		   const xmlChar *prefix, const xmlChar *name,
		   const xmlChar *prefix2, const xmlChar *name2,
		   const xmlChar *prefix3, const xmlChar *name3) {
    unsigned long value = 0L;
    char ch;

#ifdef HASH_RANDOMIZATION
    value = table->random_seed;
#endif
    if (prefix != NULL)
	value += 30 * (*prefix);
    else
	value += 30 * (*name);

    if (prefix != NULL) {
	while ((ch = *prefix++) != 0) {
	    value = value ^ ((value << 5) + (value >> 3) + (unsigned long)ch);
	}
	value = value ^ ((value << 5) + (value >> 3) + (unsigned long)':');
    }
    if (name != NULL) {
	while ((ch = *name++) != 0) {
	    value = value ^ ((value << 5) + (value >> 3) + (unsigned long)ch);
	}
    }
    value = value ^ ((value << 5) + (value >> 3));
    if (prefix2 != NULL) {
	while ((ch = *prefix2++) != 0) {
	    value = value ^ ((value << 5) + (value >> 3) + (unsigned long)ch);
	}
	value = value ^ ((value << 5) + (value >> 3) + (unsigned long)':');
    }
    if (name2 != NULL) {
	while ((ch = *name2++) != 0) {
	    value = value ^ ((value << 5) + (value >> 3) + (unsigned long)ch);
	}
    }
    value = value ^ ((value << 5) + (value >> 3));
    if (prefix3 != NULL) {
	while ((ch = *prefix3++) != 0) {
	    value = value ^ ((value << 5) + (value >> 3) + (unsigned long)ch);
	}
	value = value ^ ((value << 5) + (value >> 3) + (unsigned long)':');
    }
    if (name3 != NULL) {
	while ((ch = *name3++) != 0) {
	    value = value ^ ((value << 5) + (value >> 3) + (unsigned long)ch);
	}
    }
    return (value % table->size);
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
          int _len_table0 = 1;
          struct TYPE_3__ * table = (struct TYPE_3__ *) malloc(_len_table0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 1;
          const int * prefix = (const int *) malloc(_len_prefix0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          const int * name = (const int *) malloc(_len_name0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix20 = 1;
          const int * prefix2 = (const int *) malloc(_len_prefix20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix20; _i0++) {
            prefix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name20 = 1;
          const int * name2 = (const int *) malloc(_len_name20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name20; _i0++) {
            name2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix30 = 1;
          const int * prefix3 = (const int *) malloc(_len_prefix30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix30; _i0++) {
            prefix3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name30 = 1;
          const int * name3 = (const int *) malloc(_len_name30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name30; _i0++) {
            name3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xmlHashComputeQKey(table,prefix,name,prefix2,name2,prefix3,name3);
          printf("%lu\n", benchRet); 
          free(table);
          free(prefix);
          free(name);
          free(prefix2);
          free(name2);
          free(prefix3);
          free(name3);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_table0 = 65025;
          struct TYPE_3__ * table = (struct TYPE_3__ *) malloc(_len_table0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 65025;
          const int * prefix = (const int *) malloc(_len_prefix0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          const int * name = (const int *) malloc(_len_name0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix20 = 65025;
          const int * prefix2 = (const int *) malloc(_len_prefix20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix20; _i0++) {
            prefix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name20 = 65025;
          const int * name2 = (const int *) malloc(_len_name20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name20; _i0++) {
            name2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix30 = 65025;
          const int * prefix3 = (const int *) malloc(_len_prefix30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix30; _i0++) {
            prefix3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name30 = 65025;
          const int * name3 = (const int *) malloc(_len_name30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name30; _i0++) {
            name3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xmlHashComputeQKey(table,prefix,name,prefix2,name2,prefix3,name3);
          printf("%lu\n", benchRet); 
          free(table);
          free(prefix);
          free(name);
          free(prefix2);
          free(name2);
          free(prefix3);
          free(name3);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_table0 = 100;
          struct TYPE_3__ * table = (struct TYPE_3__ *) malloc(_len_table0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 100;
          const int * prefix = (const int *) malloc(_len_prefix0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          const int * name = (const int *) malloc(_len_name0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix20 = 100;
          const int * prefix2 = (const int *) malloc(_len_prefix20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix20; _i0++) {
            prefix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name20 = 100;
          const int * name2 = (const int *) malloc(_len_name20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name20; _i0++) {
            name2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix30 = 100;
          const int * prefix3 = (const int *) malloc(_len_prefix30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix30; _i0++) {
            prefix3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name30 = 100;
          const int * name3 = (const int *) malloc(_len_name30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name30; _i0++) {
            name3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xmlHashComputeQKey(table,prefix,name,prefix2,name2,prefix3,name3);
          printf("%lu\n", benchRet); 
          free(table);
          free(prefix);
          free(name);
          free(prefix2);
          free(name2);
          free(prefix3);
          free(name3);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
