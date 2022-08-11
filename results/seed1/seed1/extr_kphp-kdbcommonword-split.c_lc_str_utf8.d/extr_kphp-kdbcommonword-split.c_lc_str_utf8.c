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
 void** l_case_utf8 ; 

void lc_str_utf8 (char *to, const char *from, int len) {
  while (len > 0) {
    int c = (unsigned char) *from++;
    if (c >= 0xc2 && c < 0xe0 && len > 1 && (signed char) *from < -0x40) {
      c = ((c & 0x1f) << 6) | (*from++ & 0x3f);
      int d = l_case_utf8[c];
      *to++ = 0xc0 + (d >> 6);
      *to++ = 0x80 + (d & 0x3f);
      len -= 2;
    } else if (c < 0x80) {
      *to++ = l_case_utf8[c];
      len--;
    } else {
      *to++ = c;
      len--;
    }
  }
  *to = 0;
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
          int _len_to0 = 1;
          char * to = (char *) malloc(_len_to0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_from0 = 1;
          const char * from = (const char *) malloc(_len_from0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lc_str_utf8(to,from,len);
          free(to);
          free(from);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_to0 = 65025;
          char * to = (char *) malloc(_len_to0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_from0 = 65025;
          const char * from = (const char *) malloc(_len_from0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lc_str_utf8(to,from,len);
          free(to);
          free(from);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_to0 = 100;
          char * to = (char *) malloc(_len_to0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_from0 = 100;
          const char * from = (const char *) malloc(_len_from0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lc_str_utf8(to,from,len);
          free(to);
          free(from);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
