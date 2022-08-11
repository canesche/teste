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
typedef  enum chomp_state { ____Placeholder_chomp_state } chomp_state ;
typedef  char WCHAR ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
#define  CS_QUOTE 130 
#define  CS_TOKEN 129 
#define  CS_WHITESPACE 128 
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static int chomp( const WCHAR *in, WCHAR *out )
{
    enum chomp_state state = CS_TOKEN;
    const WCHAR *p;
    int count = 1;
    BOOL ignore;

    for (p = in; *p; p++)
    {
        ignore = TRUE;
        switch (state)
        {
        case CS_WHITESPACE:
            switch (*p)
            {
            case ' ':
                break;
            case '"':
                state = CS_QUOTE;
                count++;
                break;
            default:
                count++;
                ignore = FALSE;
                state = CS_TOKEN;
            }
            break;

        case CS_TOKEN:
            switch (*p)
            {
            case '"':
                state = CS_QUOTE;
                break;
            case ' ':
                state = CS_WHITESPACE;
                if (out) *out++ = 0;
                break;
            default:
                if (p > in && p[-1] == '"')
                {
                    if (out) *out++ = 0;
                    count++;
                }
                ignore = FALSE;
            }
            break;

        case CS_QUOTE:
            switch (*p)
            {
            case '"':
                state = CS_TOKEN;
                break;
            default:
                ignore = FALSE;
            }
            break;
        }
        if (!ignore && out) *out++ = *p;
    }
    if (out) *out = 0;
    return count;
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
          int _len_in0 = 1;
          const char * in = (const char *) malloc(_len_in0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = chomp(in,out);
          printf("%d\n", benchRet); 
          free(in);
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_in0 = 65025;
          const char * in = (const char *) malloc(_len_in0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = chomp(in,out);
          printf("%d\n", benchRet); 
          free(in);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_in0 = 100;
          const char * in = (const char *) malloc(_len_in0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = chomp(in,out);
          printf("%d\n", benchRet); 
          free(in);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
