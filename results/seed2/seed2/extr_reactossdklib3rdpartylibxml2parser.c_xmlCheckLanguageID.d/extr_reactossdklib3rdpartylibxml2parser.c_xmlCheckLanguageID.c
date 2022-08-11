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
typedef  char xmlChar ;

/* Variables and functions */

int
xmlCheckLanguageID(const xmlChar * lang)
{
    const xmlChar *cur = lang, *nxt;

    if (cur == NULL)
        return (0);
    if (((cur[0] == 'i') && (cur[1] == '-')) ||
        ((cur[0] == 'I') && (cur[1] == '-')) ||
        ((cur[0] == 'x') && (cur[1] == '-')) ||
        ((cur[0] == 'X') && (cur[1] == '-'))) {
        /*
         * Still allow IANA code and user code which were coming
         * from the previous version of the XML-1.0 specification
         * it's deprecated but we should not fail
         */
        cur += 2;
        while (((cur[0] >= 'A') && (cur[0] <= 'Z')) ||
               ((cur[0] >= 'a') && (cur[0] <= 'z')))
            cur++;
        return(cur[0] == 0);
    }
    nxt = cur;
    while (((nxt[0] >= 'A') && (nxt[0] <= 'Z')) ||
           ((nxt[0] >= 'a') && (nxt[0] <= 'z')))
           nxt++;
    if (nxt - cur >= 4) {
        /*
         * Reserved
         */
        if ((nxt - cur > 8) || (nxt[0] != 0))
            return(0);
        return(1);
    }
    if (nxt - cur < 2)
        return(0);
    /* we got an ISO 639 code */
    if (nxt[0] == 0)
        return(1);
    if (nxt[0] != '-')
        return(0);

    nxt++;
    cur = nxt;
    /* now we can have extlang or script or region or variant */
    if ((nxt[0] >= '0') && (nxt[0] <= '9'))
        goto region_m49;

    while (((nxt[0] >= 'A') && (nxt[0] <= 'Z')) ||
           ((nxt[0] >= 'a') && (nxt[0] <= 'z')))
           nxt++;
    if (nxt - cur == 4)
        goto script;
    if (nxt - cur == 2)
        goto region;
    if ((nxt - cur >= 5) && (nxt - cur <= 8))
        goto variant;
    if (nxt - cur != 3)
        return(0);
    /* we parsed an extlang */
    if (nxt[0] == 0)
        return(1);
    if (nxt[0] != '-')
        return(0);

    nxt++;
    cur = nxt;
    /* now we can have script or region or variant */
    if ((nxt[0] >= '0') && (nxt[0] <= '9'))
        goto region_m49;

    while (((nxt[0] >= 'A') && (nxt[0] <= 'Z')) ||
           ((nxt[0] >= 'a') && (nxt[0] <= 'z')))
           nxt++;
    if (nxt - cur == 2)
        goto region;
    if ((nxt - cur >= 5) && (nxt - cur <= 8))
        goto variant;
    if (nxt - cur != 4)
        return(0);
    /* we parsed a script */
script:
    if (nxt[0] == 0)
        return(1);
    if (nxt[0] != '-')
        return(0);

    nxt++;
    cur = nxt;
    /* now we can have region or variant */
    if ((nxt[0] >= '0') && (nxt[0] <= '9'))
        goto region_m49;

    while (((nxt[0] >= 'A') && (nxt[0] <= 'Z')) ||
           ((nxt[0] >= 'a') && (nxt[0] <= 'z')))
           nxt++;

    if ((nxt - cur >= 5) && (nxt - cur <= 8))
        goto variant;
    if (nxt - cur != 2)
        return(0);
    /* we parsed a region */
region:
    if (nxt[0] == 0)
        return(1);
    if (nxt[0] != '-')
        return(0);

    nxt++;
    cur = nxt;
    /* now we can just have a variant */
    while (((nxt[0] >= 'A') && (nxt[0] <= 'Z')) ||
           ((nxt[0] >= 'a') && (nxt[0] <= 'z')))
           nxt++;

    if ((nxt - cur < 5) || (nxt - cur > 8))
        return(0);

    /* we parsed a variant */
variant:
    if (nxt[0] == 0)
        return(1);
    if (nxt[0] != '-')
        return(0);
    /* extensions and private use subtags not checked */
    return (1);

region_m49:
    if (((nxt[1] >= '0') && (nxt[1] <= '9')) &&
        ((nxt[2] >= '0') && (nxt[2] <= '9'))) {
        nxt += 3;
        goto region;
    }
    return(0);
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
          int _len_lang0 = 1;
          const char * lang = (const char *) malloc(_len_lang0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_lang0; _i0++) {
            lang[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlCheckLanguageID(lang);
          printf("%d\n", benchRet); 
          free(lang);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lang0 = 65025;
          const char * lang = (const char *) malloc(_len_lang0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_lang0; _i0++) {
            lang[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlCheckLanguageID(lang);
          printf("%d\n", benchRet); 
          free(lang);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lang0 = 100;
          const char * lang = (const char *) malloc(_len_lang0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_lang0; _i0++) {
            lang[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlCheckLanguageID(lang);
          printf("%d\n", benchRet); 
          free(lang);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
