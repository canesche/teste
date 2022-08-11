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

__attribute__((used)) static const char *
arm_decode_bitfield (const char *ptr,
		     unsigned long insn,
		     unsigned long *valuep,
		     int *widthp)
{
  unsigned long value = 0;
  int width = 0;

  do
    {
      int start, end;
      int bits;

      for (start = 0; *ptr >= '0' && *ptr <= '9'; ptr++) {
	      start = start * 10 + *ptr - '0';
      }
      if (*ptr == '-') {
	      for (end = 0, ptr++; *ptr >= '0' && *ptr <= '9'; ptr++) {
		      end = end * 10 + *ptr - '0';
	      }
      } else {
	      end = start;
      }
      bits = end - start;
      if (bits < 0) {
return NULL;
}
      value |= ((insn >> start) & ((2ul << bits) - 1)) << width;
      width += bits + 1;
    }
  while (*ptr++ == ',');
  *valuep = value;
  if (widthp) {
	  *widthp = width;
  }
  return ptr - 1;
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
          unsigned long insn = 100;
          int _len_ptr0 = 1;
          const char * ptr = (const char *) malloc(_len_ptr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valuep0 = 1;
          unsigned long * valuep = (unsigned long *) malloc(_len_valuep0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_valuep0; _i0++) {
            valuep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_widthp0 = 1;
          int * widthp = (int *) malloc(_len_widthp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_widthp0; _i0++) {
            widthp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = arm_decode_bitfield(ptr,insn,valuep,widthp);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(ptr);
          free(valuep);
          free(widthp);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long insn = 255;
          int _len_ptr0 = 65025;
          const char * ptr = (const char *) malloc(_len_ptr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valuep0 = 65025;
          unsigned long * valuep = (unsigned long *) malloc(_len_valuep0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_valuep0; _i0++) {
            valuep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_widthp0 = 65025;
          int * widthp = (int *) malloc(_len_widthp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_widthp0; _i0++) {
            widthp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = arm_decode_bitfield(ptr,insn,valuep,widthp);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(ptr);
          free(valuep);
          free(widthp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long insn = 10;
          int _len_ptr0 = 100;
          const char * ptr = (const char *) malloc(_len_ptr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valuep0 = 100;
          unsigned long * valuep = (unsigned long *) malloc(_len_valuep0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_valuep0; _i0++) {
            valuep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_widthp0 = 100;
          int * widthp = (int *) malloc(_len_widthp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_widthp0; _i0++) {
            widthp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = arm_decode_bitfield(ptr,insn,valuep,widthp);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(ptr);
          free(valuep);
          free(widthp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
