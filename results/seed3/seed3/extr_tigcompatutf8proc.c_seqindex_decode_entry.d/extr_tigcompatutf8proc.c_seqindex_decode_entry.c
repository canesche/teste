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
typedef  int utf8proc_uint16_t ;
typedef  int utf8proc_int32_t ;

/* Variables and functions */

__attribute__((used)) static utf8proc_int32_t seqindex_decode_entry(const utf8proc_uint16_t **entry)
{
  utf8proc_int32_t entry_cp = **entry;
  if ((entry_cp & 0xF800) == 0xD800) {
    *entry = *entry + 1;
    entry_cp = ((entry_cp & 0x03FF) << 10) | (**entry & 0x03FF);
    entry_cp += 0x10000;
  }
  return entry_cp;
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
          int _len_entry0 = 1;
          const int ** entry = (const int **) malloc(_len_entry0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            int _len_entry1 = 1;
            entry[_i0] = (const int *) malloc(_len_entry1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_entry1; _i1++) {
              entry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = seqindex_decode_entry(entry);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_entry0; i1++) {
            int _len_entry1 = 1;
              free(entry[i1]);
          }
          free(entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_entry0 = 65025;
          const int ** entry = (const int **) malloc(_len_entry0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            int _len_entry1 = 1;
            entry[_i0] = (const int *) malloc(_len_entry1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_entry1; _i1++) {
              entry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = seqindex_decode_entry(entry);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_entry0; i1++) {
            int _len_entry1 = 1;
              free(entry[i1]);
          }
          free(entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_entry0 = 100;
          const int ** entry = (const int **) malloc(_len_entry0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            int _len_entry1 = 1;
            entry[_i0] = (const int *) malloc(_len_entry1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_entry1; _i1++) {
              entry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = seqindex_decode_entry(entry);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_entry0; i1++) {
            int _len_entry1 = 1;
              free(entry[i1]);
          }
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
