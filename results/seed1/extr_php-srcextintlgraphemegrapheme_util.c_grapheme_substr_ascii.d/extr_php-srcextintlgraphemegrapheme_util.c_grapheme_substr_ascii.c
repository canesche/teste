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
typedef  size_t int32_t ;

/* Variables and functions */
 size_t INT32_MAX ; 

void grapheme_substr_ascii(char *str, size_t str_len, int32_t f, int32_t l, char **sub_str, int32_t *sub_str_len)
{
	int32_t str_len2 = (int32_t)str_len; /* in order to avoid signed/unsigned problems */
    *sub_str = NULL;

    if(str_len > INT32_MAX) {
    	/* We can not return long strings from ICU functions, so we won't here too */
    	return;
    }

    if ((l < 0 && -l > str_len2)) {
        return;
    } else if (l > 0 && l > str_len2) {
        l = str_len2;
    }

    if (f > str_len2 || (f < 0 && -f > str_len2)) {
        return;
    }

    if (l < 0 && str_len2 < f - l) {
        return;
    }

    /* if "from" position is negative, count start position from the end
     * of the string
     */
    if (f < 0) {
        f = str_len2 + f;
        if (f < 0) {
            f = 0;
        }
    }


    /* if "length" position is negative, set it to the length
     * needed to stop that many chars from the end of the string
     */
    if (l < 0) {
        l = (str_len2 - f) + l;
        if (l < 0) {
            l = 0;
        }
    }

    if (f >= str_len2) {
        return;
    }

    if ((f + l) > str_len2) {
        l = str_len - f;
    }

    *sub_str = str + f;
    *sub_str_len = l;

    return;
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
          unsigned long f = 100;
          unsigned long l = 100;
          int _len_str0 = 1;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sub_str0 = 1;
          char ** sub_str = (char **) malloc(_len_sub_str0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_sub_str0; _i0++) {
            int _len_sub_str1 = 1;
            sub_str[_i0] = (char *) malloc(_len_sub_str1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_sub_str1; _i1++) {
              sub_str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sub_str_len0 = 1;
          unsigned long * sub_str_len = (unsigned long *) malloc(_len_sub_str_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sub_str_len0; _i0++) {
            sub_str_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          grapheme_substr_ascii(str,str_len,f,l,sub_str,sub_str_len);
          free(str);
          for(int i1 = 0; i1 < _len_sub_str0; i1++) {
            int _len_sub_str1 = 1;
              free(sub_str[i1]);
          }
          free(sub_str);
          free(sub_str_len);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long str_len = 255;
          unsigned long f = 255;
          unsigned long l = 255;
          int _len_str0 = 65025;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sub_str0 = 65025;
          char ** sub_str = (char **) malloc(_len_sub_str0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_sub_str0; _i0++) {
            int _len_sub_str1 = 1;
            sub_str[_i0] = (char *) malloc(_len_sub_str1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_sub_str1; _i1++) {
              sub_str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sub_str_len0 = 65025;
          unsigned long * sub_str_len = (unsigned long *) malloc(_len_sub_str_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sub_str_len0; _i0++) {
            sub_str_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          grapheme_substr_ascii(str,str_len,f,l,sub_str,sub_str_len);
          free(str);
          for(int i1 = 0; i1 < _len_sub_str0; i1++) {
            int _len_sub_str1 = 1;
              free(sub_str[i1]);
          }
          free(sub_str);
          free(sub_str_len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long str_len = 10;
          unsigned long f = 10;
          unsigned long l = 10;
          int _len_str0 = 100;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sub_str0 = 100;
          char ** sub_str = (char **) malloc(_len_sub_str0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_sub_str0; _i0++) {
            int _len_sub_str1 = 1;
            sub_str[_i0] = (char *) malloc(_len_sub_str1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_sub_str1; _i1++) {
              sub_str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sub_str_len0 = 100;
          unsigned long * sub_str_len = (unsigned long *) malloc(_len_sub_str_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sub_str_len0; _i0++) {
            sub_str_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          grapheme_substr_ascii(str,str_len,f,l,sub_str,sub_str_len);
          free(str);
          for(int i1 = 0; i1 < _len_sub_str0; i1++) {
            int _len_sub_str1 = 1;
              free(sub_str[i1]);
          }
          free(sub_str);
          free(sub_str_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
