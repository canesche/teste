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
typedef  int NTSTATUS ;

/* Variables and functions */
#define  STATUS_ACCESS_VIOLATION 136 
#define  STATUS_ARRAY_BOUNDS_EXCEEDED 135 
#define  STATUS_BREAKPOINT 134 
#define  STATUS_DATATYPE_MISALIGNMENT 133 
#define  STATUS_ILLEGAL_INSTRUCTION 132 
#define  STATUS_INTEGER_DIVIDE_BY_ZERO 131 
#define  STATUS_INTEGER_OVERFLOW 130 
#define  STATUS_SINGLE_STEP 129 
#define  STATUS_STACK_OVERFLOW 128 
 void** hex_chars ; 

__attribute__((used)) static
char*
exception_code_to_gdb(NTSTATUS code, char* out)
{
    unsigned char SigVal;

    switch (code)
    {
    case STATUS_INTEGER_DIVIDE_BY_ZERO:
        SigVal = 8; /* divide by zero */
        break;
    case STATUS_SINGLE_STEP:
    case STATUS_BREAKPOINT:
        SigVal = 5; /* breakpoint */
        break;
    case STATUS_INTEGER_OVERFLOW:
    case STATUS_ARRAY_BOUNDS_EXCEEDED:
        SigVal = 16; /* bound instruction */
        break;
    case STATUS_ILLEGAL_INSTRUCTION:
        SigVal = 4; /* Invalid opcode */
        break;
    case STATUS_STACK_OVERFLOW:
    case STATUS_DATATYPE_MISALIGNMENT:
    case STATUS_ACCESS_VIOLATION:
        SigVal = 11; /* access violation */
        break;
    default:
        SigVal = 7; /* "software generated" */
    }
    *out++ = hex_chars[(SigVal >> 4) & 0xf];
    *out++ = hex_chars[SigVal & 0xf];
    return out;
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
          int code = 100;
          int _len_out0 = 1;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = exception_code_to_gdb(code,out);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int code = 255;
          int _len_out0 = 65025;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = exception_code_to_gdb(code,out);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int code = 10;
          int _len_out0 = 100;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = exception_code_to_gdb(code,out);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
