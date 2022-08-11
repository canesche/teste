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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {char const* string; } ;
struct TYPE_7__ {TYPE_1__ value; scalar_t__ index; int /*<<< orphan*/  type; } ;
typedef  TYPE_2__ json_token_t ;
struct TYPE_8__ {scalar_t__ data; scalar_t__ ptr; } ;
typedef  TYPE_3__ json_parse_t ;

/* Variables and functions */
 int /*<<< orphan*/  T_ERROR ; 

__attribute__((used)) static void json_set_token_error(json_token_t *token, json_parse_t *json,
                                 const char *errtype)
{
    token->type = T_ERROR;
    token->index = json->ptr - json->data;
    token->value.string = errtype;
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
          int _len_token0 = 1;
          struct TYPE_7__ * token = (struct TYPE_7__ *) malloc(_len_token0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
              int _len_token__i0__value_string0 = 1;
          token[_i0].value.string = (const char *) malloc(_len_token__i0__value_string0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_token__i0__value_string0; _j0++) {
            token[_i0].value.string[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        token[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        token[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_json0 = 1;
          struct TYPE_8__ * json = (struct TYPE_8__ *) malloc(_len_json0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_json0; _i0++) {
            json[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        json[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_errtype0 = 1;
          const char * errtype = (const char *) malloc(_len_errtype0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_errtype0; _i0++) {
            errtype[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          json_set_token_error(token,json,errtype);
          free(token);
          free(json);
          free(errtype);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_token0 = 65025;
          struct TYPE_7__ * token = (struct TYPE_7__ *) malloc(_len_token0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
              int _len_token__i0__value_string0 = 1;
          token[_i0].value.string = (const char *) malloc(_len_token__i0__value_string0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_token__i0__value_string0; _j0++) {
            token[_i0].value.string[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        token[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        token[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_json0 = 65025;
          struct TYPE_8__ * json = (struct TYPE_8__ *) malloc(_len_json0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_json0; _i0++) {
            json[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        json[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_errtype0 = 65025;
          const char * errtype = (const char *) malloc(_len_errtype0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_errtype0; _i0++) {
            errtype[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          json_set_token_error(token,json,errtype);
          free(token);
          free(json);
          free(errtype);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_token0 = 100;
          struct TYPE_7__ * token = (struct TYPE_7__ *) malloc(_len_token0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
              int _len_token__i0__value_string0 = 1;
          token[_i0].value.string = (const char *) malloc(_len_token__i0__value_string0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_token__i0__value_string0; _j0++) {
            token[_i0].value.string[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        token[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        token[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_json0 = 100;
          struct TYPE_8__ * json = (struct TYPE_8__ *) malloc(_len_json0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_json0; _i0++) {
            json[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        json[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_errtype0 = 100;
          const char * errtype = (const char *) malloc(_len_errtype0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_errtype0; _i0++) {
            errtype[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          json_set_token_error(token,json,errtype);
          free(token);
          free(json);
          free(errtype);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
