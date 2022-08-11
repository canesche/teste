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
typedef  int /*<<< orphan*/  lua_Number ;
typedef  int Uinttype ;
typedef  int /*<<< orphan*/  Inttype ;

/* Variables and functions */
 int BIG ; 

__attribute__((used)) static lua_Number getinteger (const char *buff, int endian,
                        int issigned, int size) {
  Uinttype l = 0;
  int i;
  if (endian == BIG) {
    for (i = 0; i < size; i++) {
      l <<= 8;
      l |= (Uinttype)(unsigned char)buff[i];
    }
  }
  else {
    for (i = size - 1; i >= 0; i--) {
      l <<= 8;
      l |= (Uinttype)(unsigned char)buff[i];
    }
  }
  if (!issigned)
    return (lua_Number)l;
  else {  /* signed format */
    Uinttype mask = (Uinttype)(~((Uinttype)0)) << (size*8 - 1);
    if (l & mask)  /* negative value? */
      l |= mask;  /* signal extension */
    return (lua_Number)(Inttype)l;
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
          int endian = 100;
          int issigned = 100;
          int size = 100;
          int _len_buff0 = 1;
          const char * buff = (const char *) malloc(_len_buff0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = getinteger(buff,endian,issigned,size);
          printf("%d\n", benchRet); 
          free(buff);
        
        break;
    }
    // big-arr
    case 1:
    {
          int endian = 255;
          int issigned = 255;
          int size = 255;
          int _len_buff0 = 65025;
          const char * buff = (const char *) malloc(_len_buff0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = getinteger(buff,endian,issigned,size);
          printf("%d\n", benchRet); 
          free(buff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int endian = 10;
          int issigned = 10;
          int size = 10;
          int _len_buff0 = 100;
          const char * buff = (const char *) malloc(_len_buff0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = getinteger(buff,endian,issigned,size);
          printf("%d\n", benchRet); 
          free(buff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
