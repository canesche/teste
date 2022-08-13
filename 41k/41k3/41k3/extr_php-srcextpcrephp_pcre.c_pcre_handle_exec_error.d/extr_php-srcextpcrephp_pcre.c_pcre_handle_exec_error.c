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
typedef  int PCRE_G ;

/* Variables and functions */
#define  PCRE2_ERROR_BADUTFOFFSET 130 
#define  PCRE2_ERROR_MATCHLIMIT 129 
#define  PCRE2_ERROR_RECURSIONLIMIT 128 
 int PCRE2_ERROR_UTF8_ERR1 ; 
 int PCRE2_ERROR_UTF8_ERR21 ; 
 int PHP_PCRE_BACKTRACK_LIMIT_ERROR ; 
 int PHP_PCRE_BAD_UTF8_ERROR ; 
 int PHP_PCRE_BAD_UTF8_OFFSET_ERROR ; 
 int PHP_PCRE_INTERNAL_ERROR ; 
 int PHP_PCRE_RECURSION_LIMIT_ERROR ; 

__attribute__((used)) static void pcre_handle_exec_error(int pcre_code) /* {{{ */
{
	int preg_code = 0;

	switch (pcre_code) {
		case PCRE2_ERROR_MATCHLIMIT:
			preg_code = PHP_PCRE_BACKTRACK_LIMIT_ERROR;
			break;

		case PCRE2_ERROR_RECURSIONLIMIT:
			preg_code = PHP_PCRE_RECURSION_LIMIT_ERROR;
			break;

		case PCRE2_ERROR_BADUTFOFFSET:
			preg_code = PHP_PCRE_BAD_UTF8_OFFSET_ERROR;
			break;

#ifdef HAVE_PCRE_JIT_SUPPORT
		case PCRE2_ERROR_JIT_STACKLIMIT:
			preg_code = PHP_PCRE_JIT_STACKLIMIT_ERROR;
			break;
#endif

		default:
			if (pcre_code <= PCRE2_ERROR_UTF8_ERR1 && pcre_code >= PCRE2_ERROR_UTF8_ERR21) {
				preg_code = PHP_PCRE_BAD_UTF8_ERROR;
			} else  {
				preg_code = PHP_PCRE_INTERNAL_ERROR;
			}
			break;
	}

	PCRE_G(error_code) = preg_code;
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
          int pcre_code = 100;
          pcre_handle_exec_error(pcre_code);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pcre_code = 255;
          pcre_handle_exec_error(pcre_code);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pcre_code = 10;
          pcre_handle_exec_error(pcre_code);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
