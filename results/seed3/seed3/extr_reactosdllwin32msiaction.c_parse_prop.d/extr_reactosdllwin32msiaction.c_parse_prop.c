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
typedef  enum parse_state { ____Placeholder_parse_state } parse_state ;
typedef  char WCHAR ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 
#define  state_quote 130 
#define  state_token 129 
#define  state_whitespace 128 

__attribute__((used)) static int parse_prop( const WCHAR *str, WCHAR *value, int *quotes )
{
    enum parse_state state = state_quote;
    const WCHAR *p;
    WCHAR *out = value;
    BOOL ignore, in_quotes = FALSE;
    int count = 0, len = 0;

    for (p = str; *p; p++)
    {
        ignore = FALSE;
        switch (state)
        {
        case state_whitespace:
            switch (*p)
            {
            case ' ':
                in_quotes = TRUE;
                ignore = TRUE;
                len++;
                break;
            case '"':
                state = state_quote;
                if (in_quotes && p[1] != '\"') count--;
                else count++;
                break;
            default:
                state = state_token;
                in_quotes = TRUE;
                len++;
                break;
            }
            break;

        case state_token:
            switch (*p)
            {
            case '"':
                state = state_quote;
                if (in_quotes) count--;
                else count++;
                break;
            case ' ':
                state = state_whitespace;
                if (!count) goto done;
                in_quotes = TRUE;
                len++;
                break;
            default:
                if (count) in_quotes = TRUE;
                len++;
                break;
            }
            break;

        case state_quote:
            switch (*p)
            {
            case '"':
                if (in_quotes && p[1] != '\"') count--;
                else count++;
                break;
            case ' ':
                state = state_whitespace;
                if (!count || (count > 1 && !len)) goto done;
                in_quotes = TRUE;
                len++;
                break;
            default:
                state = state_token;
                if (count) in_quotes = TRUE;
                len++;
                break;
            }
            break;

        default: break;
        }
        if (!ignore) *out++ = *p;
        if (!count) in_quotes = FALSE;
    }

done:
    if (!len) *value = 0;
    else *out = 0;

    *quotes = count;
    return p - str;
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
          int _len_str0 = 1;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 1;
          char * value = (char *) malloc(_len_value0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_quotes0 = 1;
          int * quotes = (int *) malloc(_len_quotes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_quotes0; _i0++) {
            quotes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_prop(str,value,quotes);
          printf("%d\n", benchRet); 
          free(str);
          free(value);
          free(quotes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_str0 = 65025;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 65025;
          char * value = (char *) malloc(_len_value0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_quotes0 = 65025;
          int * quotes = (int *) malloc(_len_quotes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_quotes0; _i0++) {
            quotes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_prop(str,value,quotes);
          printf("%d\n", benchRet); 
          free(str);
          free(value);
          free(quotes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_str0 = 100;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 100;
          char * value = (char *) malloc(_len_value0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_quotes0 = 100;
          int * quotes = (int *) malloc(_len_quotes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_quotes0; _i0++) {
            quotes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_prop(str,value,quotes);
          printf("%d\n", benchRet); 
          free(str);
          free(value);
          free(quotes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
