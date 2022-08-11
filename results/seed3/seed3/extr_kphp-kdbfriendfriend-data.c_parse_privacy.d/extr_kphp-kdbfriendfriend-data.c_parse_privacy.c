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
 int CAT_FR_ALL ; 
 int CAT_FR_FR ; 
 size_t MAX_PRIVACY_LEN ; 
 int* P ; 
 size_t PL ; 
 int PL_M_ALLOW ; 
 int PL_M_CAT ; 
 int PL_M_DENY ; 
 int PL_M_MASK ; 
 int PL_M_USER ; 

__attribute__((used)) static int parse_privacy (const char *text, int len) {
  const char *end = text + len;
  int x, y;
  PL = 0;
  while (text < end) {
    switch (*text) {
    case '+':
      x = PL_M_USER | PL_M_ALLOW;
      break;
    case '*':
      x = PL_M_CAT | PL_M_ALLOW;
      break;
    case '-':
      x = PL_M_USER | PL_M_DENY;
      break;
    case '/':
      x = PL_M_CAT | PL_M_DENY;
      break;
    default:
      return -1;
    }
    if (++text >= end) {
      return -1;
    }
    if (*text > '9') {
      if (x & PL_M_CAT) {
        switch (*text) {
        case 'A':
          y = CAT_FR_ALL;
          break;
        case 'G':
          y = CAT_FR_FR;
          break;
        default:
          return -1;
        }
        text++;
      } else {
        return -1;
      }
    } else {
      if (*text < '0') {
        return -1;
      }
      y = 0;
      while (text < end && *text >= '0' && *text <= '9') {
        if (y > PL_M_MASK / 10) {
          return -1;
        }
        y = y * 10 + (*text++ - '0');
      }
      if (y > PL_M_MASK || ((x & PL_M_CAT) && y > 30)) {
        return -1;
      }
    }
    P[PL++] = x | y;  
    if (PL >= MAX_PRIVACY_LEN) {
      return -1;
    }
  }
  P[PL] = -1;
  return PL;
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
          int len = 100;
          int _len_text0 = 1;
          const char * text = (const char *) malloc(_len_text0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_privacy(text,len);
          printf("%d\n", benchRet); 
          free(text);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_text0 = 65025;
          const char * text = (const char *) malloc(_len_text0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_privacy(text,len);
          printf("%d\n", benchRet); 
          free(text);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_text0 = 100;
          const char * text = (const char *) malloc(_len_text0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_privacy(text,len);
          printf("%d\n", benchRet); 
          free(text);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
