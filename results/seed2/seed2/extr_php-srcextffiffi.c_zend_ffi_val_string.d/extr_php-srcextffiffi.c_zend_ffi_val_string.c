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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char const* str; size_t len; int /*<<< orphan*/  kind; } ;
typedef  TYPE_1__ zend_ffi_val ;

/* Variables and functions */
 int /*<<< orphan*/  ZEND_FFI_VAL_ERROR ; 
 int /*<<< orphan*/  ZEND_FFI_VAL_STRING ; 

void zend_ffi_val_string(zend_ffi_val *val, const char *str, size_t str_len) /* {{{ */
{
	if (str[0] != '\"') {
		val->kind = ZEND_FFI_VAL_ERROR;
	} else {
		val->kind = ZEND_FFI_VAL_STRING;
		val->str = str + 1;
		val->len = str_len - 2;
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
          unsigned long str_len = 100;
          int _len_val0 = 1;
          struct TYPE_3__ * val = (struct TYPE_3__ *) malloc(_len_val0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
              int _len_val__i0__str0 = 1;
          val[_i0].str = (const char *) malloc(_len_val__i0__str0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_val__i0__str0; _j0++) {
            val[_i0].str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        val[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        val[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 1;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_ffi_val_string(val,str,str_len);
          for(int _aux = 0; _aux < _len_val0; _aux++) {
          free(val[_aux].str);
          }
          free(val);
          free(str);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long str_len = 255;
          int _len_val0 = 65025;
          struct TYPE_3__ * val = (struct TYPE_3__ *) malloc(_len_val0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
              int _len_val__i0__str0 = 1;
          val[_i0].str = (const char *) malloc(_len_val__i0__str0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_val__i0__str0; _j0++) {
            val[_i0].str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        val[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        val[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 65025;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_ffi_val_string(val,str,str_len);
          for(int _aux = 0; _aux < _len_val0; _aux++) {
          free(val[_aux].str);
          }
          free(val);
          free(str);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long str_len = 10;
          int _len_val0 = 100;
          struct TYPE_3__ * val = (struct TYPE_3__ *) malloc(_len_val0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
              int _len_val__i0__str0 = 1;
          val[_i0].str = (const char *) malloc(_len_val__i0__str0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_val__i0__str0; _j0++) {
            val[_i0].str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        val[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        val[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 100;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_ffi_val_string(val,str,str_len);
          for(int _aux = 0; _aux < _len_val0; _aux++) {
          free(val[_aux].str);
          }
          free(val);
          free(str);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
