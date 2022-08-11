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
 int DIGEST_MAX_CONTENT_LENGTH ; 
 int DIGEST_MAX_VALUE_LENGTH ; 
 int FALSE ; 
 int TRUE ; 

bool Curl_auth_digest_get_pair(const char *str, char *value, char *content,
                               const char **endptr)
{
  int c;
  bool starts_with_quote = FALSE;
  bool escape = FALSE;

  for(c = DIGEST_MAX_VALUE_LENGTH - 1; (*str && (*str != '=') && c--);)
    *value++ = *str++;
  *value = 0;

  if('=' != *str++)
    /* eek, no match */
    return FALSE;

  if('\"' == *str) {
    /* This starts with a quote so it must end with one as well! */
    str++;
    starts_with_quote = TRUE;
  }

  for(c = DIGEST_MAX_CONTENT_LENGTH - 1; *str && c--; str++) {
    switch(*str) {
    case '\\':
      if(!escape) {
        /* possibly the start of an escaped quote */
        escape = TRUE;
        *content++ = '\\'; /* Even though this is an escape character, we still
                              store it as-is in the target buffer */
        continue;
      }
      break;

    case ',':
      if(!starts_with_quote) {
        /* This signals the end of the content if we didn't get a starting
           quote and then we do "sloppy" parsing */
        c = 0; /* the end */
        continue;
      }
      break;

    case '\r':
    case '\n':
      /* end of string */
      c = 0;
      continue;

    case '\"':
      if(!escape && starts_with_quote) {
        /* end of string */
        c = 0;
        continue;
      }
      break;
    }

    escape = FALSE;
    *content++ = *str;
  }

  *content = 0;
  *endptr = str;

  return TRUE;
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
          int _len_content0 = 1;
          char * content = (char *) malloc(_len_content0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_content0; _i0++) {
            content[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_endptr0 = 1;
          const char ** endptr = (const char **) malloc(_len_endptr0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_endptr0; _i0++) {
            int _len_endptr1 = 1;
            endptr[_i0] = (const char *) malloc(_len_endptr1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_endptr1; _i1++) {
              endptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = Curl_auth_digest_get_pair(str,value,content,endptr);
          printf("%d\n", benchRet); 
          free(str);
          free(value);
          free(content);
          for(int i1 = 0; i1 < _len_endptr0; i1++) {
            int _len_endptr1 = 1;
              free(endptr[i1]);
          }
          free(endptr);
        
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
          int _len_content0 = 65025;
          char * content = (char *) malloc(_len_content0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_content0; _i0++) {
            content[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_endptr0 = 65025;
          const char ** endptr = (const char **) malloc(_len_endptr0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_endptr0; _i0++) {
            int _len_endptr1 = 1;
            endptr[_i0] = (const char *) malloc(_len_endptr1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_endptr1; _i1++) {
              endptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = Curl_auth_digest_get_pair(str,value,content,endptr);
          printf("%d\n", benchRet); 
          free(str);
          free(value);
          free(content);
          for(int i1 = 0; i1 < _len_endptr0; i1++) {
            int _len_endptr1 = 1;
              free(endptr[i1]);
          }
          free(endptr);
        
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
          int _len_content0 = 100;
          char * content = (char *) malloc(_len_content0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_content0; _i0++) {
            content[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_endptr0 = 100;
          const char ** endptr = (const char **) malloc(_len_endptr0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_endptr0; _i0++) {
            int _len_endptr1 = 1;
            endptr[_i0] = (const char *) malloc(_len_endptr1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_endptr1; _i1++) {
              endptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = Curl_auth_digest_get_pair(str,value,content,endptr);
          printf("%d\n", benchRet); 
          free(str);
          free(value);
          free(content);
          for(int i1 = 0; i1 < _len_endptr0; i1++) {
            int _len_endptr1 = 1;
              free(endptr[i1]);
          }
          free(endptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
