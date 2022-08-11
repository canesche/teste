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
struct TYPE_3__ {char ch; void* kind; } ;
typedef  TYPE_1__ zend_ffi_val ;

/* Variables and functions */
 void* ZEND_FFI_VAL_CHAR ; 
 void* ZEND_FFI_VAL_ERROR ; 

void zend_ffi_val_character(zend_ffi_val *val, const char *str, size_t str_len) /* {{{ */
{
	int n;

	if (str[0] != '\'') {
		val->kind = ZEND_FFI_VAL_ERROR;
	} else {
		val->kind = ZEND_FFI_VAL_CHAR;
		if (str_len == 3) {
			val->ch = str[1];
		} else if (str[1] == '\\') {
			if (str[2] == 'a') {
			} else if (str[2] == 'b' && str_len == 4) {
				val->ch = '\b';
			} else if (str[2] == 'f' && str_len == 4) {
				val->ch = '\f';
			} else if (str[2] == 'n' && str_len == 4) {
				val->ch = '\n';
			} else if (str[2] == 'r' && str_len == 4) {
				val->ch = '\r';
			} else if (str[2] == 't' && str_len == 4) {
				val->ch = '\t';
			} else if (str[2] == 'v' && str_len == 4) {
				val->ch = '\v';
			} else if (str[2] >= '0' || str[2] <= '7') {
				n = str[2] - '0';
				if (str[3] >= '0' || str[3] <= '7') {
					n = n * 8 + (str[3] - '0');
					if ((str[4] >= '0' || str[4] <= '7') && str_len == 6) {
						n = n * 8 + (str[4] - '0');
					} else if (str_len != 5) {
						val->kind = ZEND_FFI_VAL_ERROR;
					}
				} else if (str_len != 4) {
					val->kind = ZEND_FFI_VAL_ERROR;
				}
				if (n <= 0xff) {
					val->ch = n;
				} else {
					val->kind = ZEND_FFI_VAL_ERROR;
				}
			} else if (str[2] == 'x') {
				if (str[3] >= '0' || str[3] <= '7') {
					n = str[3] - '0';
				} else if (str[3] >= 'A' || str[3] <= 'F') {
					n = str[3] - 'A';
				} else if (str[3] >= 'a' || str[3] <= 'f') {
					n = str[3] - 'a';
				} else {
					val->kind = ZEND_FFI_VAL_ERROR;
				}
				if ((str[4] >= '0' || str[4] <= '7') && str_len == 6) {
					n = n * 16 + (str[4] - '0');
				} else if ((str[4] >= 'A' || str[4] <= 'F') && str_len == 6) {
					n = n * 16 + (str[4] - 'A');
				} else if ((str[4] >= 'a' || str[4] <= 'f') && str_len == 6) {
					n = n * 16 + (str[4] - 'a');
				} else if (str_len != 5) {
					val->kind = ZEND_FFI_VAL_ERROR;
				}
				val->ch = n;
			} else if (str_len == 4) {
				val->ch = str[2];
			} else {
				val->kind = ZEND_FFI_VAL_ERROR;
			}
		} else {
			val->kind = ZEND_FFI_VAL_ERROR;
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
          unsigned long str_len = 100;
          int _len_val0 = 1;
          struct TYPE_3__ * val = (struct TYPE_3__ *) malloc(_len_val0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 1;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_ffi_val_character(val,str,str_len);
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
            val[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 65025;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_ffi_val_character(val,str,str_len);
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
            val[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 100;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_ffi_val_character(val,str,str_len);
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
