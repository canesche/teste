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
typedef  unsigned int _u16 ;
typedef  int _i16 ;

/* Variables and functions */
 unsigned int SL_SOCKET_PAYLOAD_BASE ; 
 int const SL_SOCKET_PAYLOAD_TYPE_MASK ; 
 unsigned int* _SlPayloadByProtocolLUT ; 

_u16 _sl_TruncatePayloadByProtocol(const _i16 sd, const _u16 length)
{
   unsigned int maxLength;


   maxLength = SL_SOCKET_PAYLOAD_BASE + _SlPayloadByProtocolLUT[((sd & SL_SOCKET_PAYLOAD_TYPE_MASK) >> 4)];



   if( length > maxLength )
   {
      return maxLength;
   }
   else
   {
      return length;
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
          const int sd = 100;
          const unsigned int length = 100;
          unsigned int benchRet = _sl_TruncatePayloadByProtocol(sd,length);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const int sd = 255;
          const unsigned int length = 255;
          unsigned int benchRet = _sl_TruncatePayloadByProtocol(sd,length);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int sd = 10;
          const unsigned int length = 10;
          unsigned int benchRet = _sl_TruncatePayloadByProtocol(sd,length);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
