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
typedef  size_t tilegx_pipeline ;
typedef  unsigned short tilegx_bundle_bits ;
struct tilegx_opcode {int dummy; } ;

/* Variables and functions */
 unsigned short TILEGX_OPC_NONE ; 
 unsigned short** tilegx_bundle_decoder_fsms ; 
 struct tilegx_opcode const* tilegx_opcodes ; 

const struct tilegx_opcode *
find_opcode(tilegx_bundle_bits bits, tilegx_pipeline pipe)
{
  const unsigned short *table = tilegx_bundle_decoder_fsms[pipe];
  int index = 0;

  while (1)
  {
    unsigned short bitspec = table[index];
    unsigned int bitfield =
      ((unsigned int)(bits >> (bitspec & 63))) & (bitspec >> 6);

    unsigned short next = table[index + 1 + bitfield];
    if (next <= TILEGX_OPC_NONE)
      return &tilegx_opcodes[next];

    index = next - TILEGX_OPC_NONE;
  }
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
          unsigned short bits = 100;
          unsigned long pipe = 100;
          const struct tilegx_opcode * benchRet = find_opcode(bits,pipe);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short bits = 255;
          unsigned long pipe = 255;
          const struct tilegx_opcode * benchRet = find_opcode(bits,pipe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short bits = 10;
          unsigned long pipe = 10;
          const struct tilegx_opcode * benchRet = find_opcode(bits,pipe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
