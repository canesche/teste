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

char *
grub_strstr (const char *haystack, const char *needle)
{
  /* Be careful not to look at the entire extent of haystack or needle
     until needed.  This is useful because of these two cases:
       - haystack may be very long, and a match of needle found early,
       - needle may be very long, and not even a short initial segment of
       needle may be found in haystack.  */
  if (*needle != '\0')
    {
      /* Speed up the following searches of needle by caching its first
	 character.  */
      char b = *needle++;

      for (;; haystack++)
	{
	  if (*haystack == '\0')
	    /* No match.  */
	    return NULL;
	  if (*haystack == b)
	    /* The first character matches.  */
	    {
	      const char *rhaystack = haystack + 1;
	      const char *rneedle = needle;

	      for (;; rhaystack++, rneedle++)
		{
		  if (*rneedle == '\0')
		    /* Found a match.  */
		    return (char *) haystack;
		  if (*rhaystack == '\0')
		    /* No match.  */
		    return NULL;
		  if (*rhaystack != *rneedle)
		    /* Nothing in this round.  */
		    break;
		}
	    }
	}
    }
  else
    return (char *) haystack;
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
          int _len_haystack0 = 1;
          const char * haystack = (const char *) malloc(_len_haystack0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_haystack0; _i0++) {
            haystack[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle0 = 1;
          const char * needle = (const char *) malloc(_len_needle0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_needle0; _i0++) {
            needle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = grub_strstr(haystack,needle);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(haystack);
          free(needle);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_haystack0 = 65025;
          const char * haystack = (const char *) malloc(_len_haystack0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_haystack0; _i0++) {
            haystack[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle0 = 65025;
          const char * needle = (const char *) malloc(_len_needle0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_needle0; _i0++) {
            needle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = grub_strstr(haystack,needle);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(haystack);
          free(needle);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_haystack0 = 100;
          const char * haystack = (const char *) malloc(_len_haystack0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_haystack0; _i0++) {
            haystack[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle0 = 100;
          const char * needle = (const char *) malloc(_len_needle0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_needle0; _i0++) {
            needle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = grub_strstr(haystack,needle);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(haystack);
          free(needle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
