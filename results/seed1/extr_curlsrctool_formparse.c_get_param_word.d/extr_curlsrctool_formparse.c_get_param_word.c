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

__attribute__((used)) static char *get_param_word(char **str, char **end_pos, char endchar)
{
  char *ptr = *str;
  char *word_begin = NULL;
  char *ptr2;
  char *escape = NULL;

  /* the first non-space char is here */
  word_begin = ptr;
  if(*ptr == '"') {
    ++ptr;
    while(*ptr) {
      if(*ptr == '\\') {
        if(ptr[1] == '\\' || ptr[1] == '"') {
          /* remember the first escape position */
          if(!escape)
            escape = ptr;
          /* skip escape of back-slash or double-quote */
          ptr += 2;
          continue;
        }
      }
      if(*ptr == '"') {
        *end_pos = ptr;
        if(escape) {
          /* has escape, we restore the unescaped string here */
          ptr = ptr2 = escape;
          do {
            if(*ptr == '\\' && (ptr[1] == '\\' || ptr[1] == '"'))
              ++ptr;
            *ptr2++ = *ptr++;
          }
          while(ptr < *end_pos);
          *end_pos = ptr2;
        }
        while(*ptr && *ptr != ';' && *ptr != endchar)
          ++ptr;
        *str = ptr;
        return word_begin + 1;
      }
      ++ptr;
    }
    /* end quote is missing, treat it as non-quoted. */
    ptr = word_begin;
  }

  while(*ptr && *ptr != ';' && *ptr != endchar)
    ++ptr;
  *str = *end_pos = ptr;
  return word_begin;
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
          char endchar = 100;
          int _len_str0 = 1;
          char ** str = (char **) malloc(_len_str0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            int _len_str1 = 1;
            str[_i0] = (char *) malloc(_len_str1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_str1; _i1++) {
              str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end_pos0 = 1;
          char ** end_pos = (char **) malloc(_len_end_pos0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_end_pos0; _i0++) {
            int _len_end_pos1 = 1;
            end_pos[_i0] = (char *) malloc(_len_end_pos1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_end_pos1; _i1++) {
              end_pos[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = get_param_word(str,end_pos,endchar);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_str0; i1++) {
            int _len_str1 = 1;
              free(str[i1]);
          }
          free(str);
          for(int i1 = 0; i1 < _len_end_pos0; i1++) {
            int _len_end_pos1 = 1;
              free(end_pos[i1]);
          }
          free(end_pos);
        
        break;
    }
    // big-arr
    case 1:
    {
          char endchar = 255;
          int _len_str0 = 65025;
          char ** str = (char **) malloc(_len_str0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            int _len_str1 = 1;
            str[_i0] = (char *) malloc(_len_str1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_str1; _i1++) {
              str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end_pos0 = 65025;
          char ** end_pos = (char **) malloc(_len_end_pos0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_end_pos0; _i0++) {
            int _len_end_pos1 = 1;
            end_pos[_i0] = (char *) malloc(_len_end_pos1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_end_pos1; _i1++) {
              end_pos[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = get_param_word(str,end_pos,endchar);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_str0; i1++) {
            int _len_str1 = 1;
              free(str[i1]);
          }
          free(str);
          for(int i1 = 0; i1 < _len_end_pos0; i1++) {
            int _len_end_pos1 = 1;
              free(end_pos[i1]);
          }
          free(end_pos);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char endchar = 10;
          int _len_str0 = 100;
          char ** str = (char **) malloc(_len_str0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            int _len_str1 = 1;
            str[_i0] = (char *) malloc(_len_str1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_str1; _i1++) {
              str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end_pos0 = 100;
          char ** end_pos = (char **) malloc(_len_end_pos0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_end_pos0; _i0++) {
            int _len_end_pos1 = 1;
            end_pos[_i0] = (char *) malloc(_len_end_pos1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_end_pos1; _i1++) {
              end_pos[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = get_param_word(str,end_pos,endchar);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_str0; i1++) {
            int _len_str1 = 1;
              free(str[i1]);
          }
          free(str);
          for(int i1 = 0; i1 < _len_end_pos0; i1++) {
            int _len_end_pos1 = 1;
              free(end_pos[i1]);
          }
          free(end_pos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
