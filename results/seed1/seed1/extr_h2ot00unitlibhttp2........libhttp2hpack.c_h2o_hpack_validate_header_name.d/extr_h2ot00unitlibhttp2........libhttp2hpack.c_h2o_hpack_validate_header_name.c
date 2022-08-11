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

/* Variables and functions */
 char* h2o_hpack_err_found_upper_case_in_header_name ; 
 char* h2o_hpack_soft_err_found_invalid_char_in_header_name ; 

int h2o_hpack_validate_header_name(const char *s, size_t len, const char **err_desc)
{
    /* all printable chars, except upper case and separator characters */
    static const char valid_h2_header_name_char[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*    0-31 */
        0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, /*   32-63 */
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, /*   64-95 */
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, /*  96-127 */
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /* 128-159 */
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /* 160-191 */
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /* 192-223 */
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /* 224-255 */
    };

    for (; len != 0; ++s, --len) {
        unsigned char ch = (unsigned char)*s;
        if (!valid_h2_header_name_char[ch]) {
            if (ch - 'A' < 26U) {
                *err_desc = h2o_hpack_err_found_upper_case_in_header_name;
                return 0;
            }
            *err_desc = h2o_hpack_soft_err_found_invalid_char_in_header_name;
        }
    }
    return 1;
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
          unsigned long len = 100;
          int _len_s0 = 1;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_err_desc0 = 1;
          const char ** err_desc = (const char **) malloc(_len_err_desc0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_err_desc0; _i0++) {
            int _len_err_desc1 = 1;
            err_desc[_i0] = (const char *) malloc(_len_err_desc1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_err_desc1; _i1++) {
              err_desc[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = h2o_hpack_validate_header_name(s,len,err_desc);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_err_desc0; i1++) {
            int _len_err_desc1 = 1;
              free(err_desc[i1]);
          }
          free(err_desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_s0 = 65025;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_err_desc0 = 65025;
          const char ** err_desc = (const char **) malloc(_len_err_desc0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_err_desc0; _i0++) {
            int _len_err_desc1 = 1;
            err_desc[_i0] = (const char *) malloc(_len_err_desc1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_err_desc1; _i1++) {
              err_desc[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = h2o_hpack_validate_header_name(s,len,err_desc);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_err_desc0; i1++) {
            int _len_err_desc1 = 1;
              free(err_desc[i1]);
          }
          free(err_desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_s0 = 100;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_err_desc0 = 100;
          const char ** err_desc = (const char **) malloc(_len_err_desc0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_err_desc0; _i0++) {
            int _len_err_desc1 = 1;
            err_desc[_i0] = (const char *) malloc(_len_err_desc1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_err_desc1; _i1++) {
              err_desc[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = h2o_hpack_validate_header_name(s,len,err_desc);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_err_desc0; i1++) {
            int _len_err_desc1 = 1;
              free(err_desc[i1]);
          }
          free(err_desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
