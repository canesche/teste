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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {char* val; size_t len; } ;
struct TYPE_5__ {TYPE_2__ string; } ;
struct TYPE_7__ {scalar_t__ token; TYPE_1__ value; } ;
typedef  TYPE_3__ lex_t ;

/* Variables and functions */
 scalar_t__ TOKEN_STRING ; 

__attribute__((used)) static char *lex_steal_string(lex_t *lex, size_t *out_len)
{
    char *result = NULL;
    if(lex->token == TOKEN_STRING) {
        result = lex->value.string.val;
        *out_len = lex->value.string.len;
        lex->value.string.val = NULL;
        lex->value.string.len = 0;
    }
    return result;
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
          int _len_lex0 = 1;
          struct TYPE_7__ * lex = (struct TYPE_7__ *) malloc(_len_lex0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_lex0; _i0++) {
            lex[_i0].token = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lex__i0__value_string_val0 = 1;
          lex[_i0].value.string.val = (char *) malloc(_len_lex__i0__value_string_val0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lex__i0__value_string_val0; _j0++) {
            lex[_i0].value.string.val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lex[_i0].value.string.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_len0 = 1;
          unsigned long * out_len = (unsigned long *) malloc(_len_out_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_len0; _i0++) {
            out_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = lex_steal_string(lex,out_len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(lex);
          free(out_len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lex0 = 65025;
          struct TYPE_7__ * lex = (struct TYPE_7__ *) malloc(_len_lex0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_lex0; _i0++) {
            lex[_i0].token = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lex__i0__value_string_val0 = 1;
          lex[_i0].value.string.val = (char *) malloc(_len_lex__i0__value_string_val0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lex__i0__value_string_val0; _j0++) {
            lex[_i0].value.string.val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lex[_i0].value.string.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_len0 = 65025;
          unsigned long * out_len = (unsigned long *) malloc(_len_out_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_len0; _i0++) {
            out_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = lex_steal_string(lex,out_len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(lex);
          free(out_len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lex0 = 100;
          struct TYPE_7__ * lex = (struct TYPE_7__ *) malloc(_len_lex0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_lex0; _i0++) {
            lex[_i0].token = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lex__i0__value_string_val0 = 1;
          lex[_i0].value.string.val = (char *) malloc(_len_lex__i0__value_string_val0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lex__i0__value_string_val0; _j0++) {
            lex[_i0].value.string.val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lex[_i0].value.string.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_len0 = 100;
          unsigned long * out_len = (unsigned long *) malloc(_len_out_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_len0; _i0++) {
            out_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = lex_steal_string(lex,out_len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(lex);
          free(out_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
