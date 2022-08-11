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
typedef  int xmlChar ;

/* Variables and functions */

__attribute__((used)) static const xmlChar*
xsltDefaultRegion(const xmlChar *localeName) {
    xmlChar c;
    /* region should be xmlChar, but gcc warns on all string assignments */
    const char *region = NULL;

    c = localeName[1];
    /* This is based on the locales from glibc 2.3.3 */

    switch (localeName[0]) {
        case 'a':
            if (c == 'a' || c == 'm') region = "ET";
            else if (c == 'f') region = "ZA";
            else if (c == 'n') region = "ES";
            else if (c == 'r') region = "AE";
            else if (c == 'z') region = "AZ";
            break;
        case 'b':
            if (c == 'e') region = "BY";
            else if (c == 'g') region = "BG";
            else if (c == 'n') region = "BD";
            else if (c == 'r') region = "FR";
            else if (c == 's') region = "BA";
            break;
        case 'c':
            if (c == 'a') region = "ES";
            else if (c == 's') region = "CZ";
            else if (c == 'y') region = "GB";
            break;
        case 'd':
            if (c == 'a') region = "DK";
            else if (c == 'e') region = "DE";
            break;
        case 'e':
            if (c == 'l') region = "GR";
            else if (c == 'n' || c == 'o') region = "US";
            else if (c == 's' || c == 'u') region = "ES";
            else if (c == 't') region = "EE";
            break;
        case 'f':
            if (c == 'a') region = "IR";
            else if (c == 'i') region = "FI";
            else if (c == 'o') region = "FO";
            else if (c == 'r') region = "FR";
            break;
        case 'g':
            if (c == 'a') region = "IE";
            else if (c == 'l') region = "ES";
            else if (c == 'v') region = "GB";
            break;
        case 'h':
            if (c == 'e') region = "IL";
            else if (c == 'i') region = "IN";
            else if (c == 'r') region = "HT";
            else if (c == 'u') region = "HU";
            break;
        case 'i':
            if (c == 'd') region = "ID";
            else if (c == 's') region = "IS";
            else if (c == 't') region = "IT";
            else if (c == 'w') region = "IL";
            break;
        case 'j':
            if (c == 'a') region = "JP";
            break;
        case 'k':
            if (c == 'l') region = "GL";
            else if (c == 'o') region = "KR";
            else if (c == 'w') region = "GB";
            break;
        case 'l':
            if (c == 't') region = "LT";
            else if (c == 'v') region = "LV";
            break;
        case 'm':
            if (c == 'k') region = "MK";
            else if (c == 'l' || c == 'r') region = "IN";
            else if (c == 'n') region = "MN";
            else if (c == 's') region = "MY";
            else if (c == 't') region = "MT";
            break;
        case 'n':
            if (c == 'b' || c == 'n' || c == 'o') region = "NO";
            else if (c == 'e') region = "NP";
            else if (c == 'l') region = "NL";
            break;
        case 'o':
            if (c == 'm') region = "ET";
            break;
        case 'p':
            if (c == 'a') region = "IN";
            else if (c == 'l') region = "PL";
            else if (c == 't') region = "PT";
            break;
        case 'r':
            if (c == 'o') region = "RO";
            else if (c == 'u') region = "RU";
            break;
        case 's':
            switch (c) {
                case 'e': region = "NO"; break;
                case 'h': region = "YU"; break;
                case 'k': region = "SK"; break;
                case 'l': region = "SI"; break;
                case 'o': region = "ET"; break;
                case 'q': region = "AL"; break;
                case 't': region = "ZA"; break;
                case 'v': region = "SE"; break;
            }
            break;
        case 't':
            if (c == 'a' || c == 'e') region = "IN";
            else if (c == 'h') region = "TH";
            else if (c == 'i') region = "ER";
            else if (c == 'r') region = "TR";
            else if (c == 't') region = "RU";
            break;
        case 'u':
            if (c == 'k') region = "UA";
            else if (c == 'r') region = "PK";
            break;
        case 'v':
            if (c == 'i') region = "VN";
            break;
        case 'w':
            if (c == 'a') region = "BE";
            break;
        case 'x':
            if (c == 'h') region = "ZA";
            break;
        case 'z':
            if (c == 'h') region = "CN";
            else if (c == 'u') region = "ZA";
            break;
    }
    return((xmlChar *)region);
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
          int _len_localeName0 = 1;
          const int * localeName = (const int *) malloc(_len_localeName0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_localeName0; _i0++) {
            localeName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = xsltDefaultRegion(localeName);
          printf("%d\n", (*benchRet)); 
          free(localeName);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_localeName0 = 65025;
          const int * localeName = (const int *) malloc(_len_localeName0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_localeName0; _i0++) {
            localeName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = xsltDefaultRegion(localeName);
          printf("%d\n", (*benchRet)); 
          free(localeName);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_localeName0 = 100;
          const int * localeName = (const int *) malloc(_len_localeName0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_localeName0; _i0++) {
            localeName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = xsltDefaultRegion(localeName);
          printf("%d\n", (*benchRet)); 
          free(localeName);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
