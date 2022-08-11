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
typedef  int DWORD ;

/* Variables and functions */
#define  TOKEN_CHAR 139 
#define  TOKEN_CSTRING 138 
#define  TOKEN_DOUBLE 137 
#define  TOKEN_DWORD 136 
#define  TOKEN_FLOAT 135 
#define  TOKEN_LPSTR 134 
#define  TOKEN_SDWORD 133 
#define  TOKEN_SWORD 132 
#define  TOKEN_UCHAR 131 
#define  TOKEN_UNICODE 130 
#define  TOKEN_VOID 129 
#define  TOKEN_WORD 128 

__attribute__((used)) static const char* get_primitive_string(DWORD token)
{
  switch(token)
  {
    case TOKEN_WORD:
      return "WORD";
    case TOKEN_DWORD:
      return "DWORD";
    case TOKEN_FLOAT:
      return "FLOAT";
    case TOKEN_DOUBLE:
      return "DOUBLE";
    case TOKEN_CHAR:
      return "CHAR";
    case TOKEN_UCHAR:
      return "UCHAR";
    case TOKEN_SWORD:
      return "SWORD";
    case TOKEN_SDWORD:
      return "SDWORD";
    case TOKEN_VOID:
      return "VOID";
    case TOKEN_LPSTR:
      return "STRING";
    case TOKEN_UNICODE:
      return "UNICODE";
    case TOKEN_CSTRING:
      return "CSTRING ";
    default:
      break;
  }
  return NULL;
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
          int token = 100;
          const char * benchRet = get_primitive_string(token);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int token = 255;
          const char * benchRet = get_primitive_string(token);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int token = 10;
          const char * benchRet = get_primitive_string(token);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
