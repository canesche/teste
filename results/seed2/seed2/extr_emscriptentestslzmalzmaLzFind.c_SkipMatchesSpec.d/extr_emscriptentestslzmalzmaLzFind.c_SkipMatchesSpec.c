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
typedef  int UInt32 ;
typedef  int CLzRef ;
typedef  scalar_t__ Byte ;

/* Variables and functions */
 int kEmptyHashValue ; 

__attribute__((used)) static void SkipMatchesSpec(UInt32 lenLimit, UInt32 curMatch, UInt32 pos, const Byte *cur, CLzRef *son,
    UInt32 _cyclicBufferPos, UInt32 _cyclicBufferSize, UInt32 cutValue)
{
  CLzRef *ptr0 = son + (_cyclicBufferPos << 1) + 1;
  CLzRef *ptr1 = son + (_cyclicBufferPos << 1);
  UInt32 len0 = 0, len1 = 0;
  for (;;)
  {
    UInt32 delta = pos - curMatch;
    if (cutValue-- == 0 || delta >= _cyclicBufferSize)
    {
      *ptr0 = *ptr1 = kEmptyHashValue;
      return;
    }
    {
      CLzRef *pair = son + ((_cyclicBufferPos - delta + ((delta > _cyclicBufferPos) ? _cyclicBufferSize : 0)) << 1);
      const Byte *pb = cur - delta;
      UInt32 len = (len0 < len1 ? len0 : len1);
      if (pb[len] == cur[len])
      {
        while (++len != lenLimit)
          if (pb[len] != cur[len])
            break;
        {
          if (len == lenLimit)
          {
            *ptr1 = pair[0];
            *ptr0 = pair[1];
            return;
          }
        }
      }
      if (pb[len] < cur[len])
      {
        *ptr1 = curMatch;
        ptr1 = pair + 1;
        curMatch = *ptr1;
        len1 = len;
      }
      else
      {
        *ptr0 = curMatch;
        ptr0 = pair;
        curMatch = *ptr0;
        len0 = len;
      }
    }
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
          int lenLimit = 100;
          int curMatch = 100;
          int pos = 100;
          int _cyclicBufferPos = 100;
          int _cyclicBufferSize = 100;
          int cutValue = 100;
          int _len_cur0 = 1;
          const long * cur = (const long *) malloc(_len_cur0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_son0 = 1;
          int * son = (int *) malloc(_len_son0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_son0; _i0++) {
            son[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SkipMatchesSpec(lenLimit,curMatch,pos,cur,son,_cyclicBufferPos,_cyclicBufferSize,cutValue);
          free(cur);
          free(son);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lenLimit = 255;
          int curMatch = 255;
          int pos = 255;
          int _cyclicBufferPos = 255;
          int _cyclicBufferSize = 255;
          int cutValue = 255;
          int _len_cur0 = 65025;
          const long * cur = (const long *) malloc(_len_cur0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_son0 = 65025;
          int * son = (int *) malloc(_len_son0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_son0; _i0++) {
            son[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SkipMatchesSpec(lenLimit,curMatch,pos,cur,son,_cyclicBufferPos,_cyclicBufferSize,cutValue);
          free(cur);
          free(son);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lenLimit = 10;
          int curMatch = 10;
          int pos = 10;
          int _cyclicBufferPos = 10;
          int _cyclicBufferSize = 10;
          int cutValue = 10;
          int _len_cur0 = 100;
          const long * cur = (const long *) malloc(_len_cur0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_son0 = 100;
          int * son = (int *) malloc(_len_son0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_son0; _i0++) {
            son[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SkipMatchesSpec(lenLimit,curMatch,pos,cur,son,_cyclicBufferPos,_cyclicBufferSize,cutValue);
          free(cur);
          free(son);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
