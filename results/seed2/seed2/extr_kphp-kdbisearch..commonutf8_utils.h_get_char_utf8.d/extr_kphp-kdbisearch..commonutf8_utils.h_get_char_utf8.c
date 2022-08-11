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

__attribute__((used)) static inline int get_char_utf8 (unsigned int *x, const char *s) {
#define CHECK(condition) if (!(condition)) {*x = 0xFFFFFFFF; return -1;}
  int a = (unsigned char)s[0];
  if ((a & 0x80) == 0) {
    *x = a;
    return (a != 0);
  }

  CHECK ((a & 0x40) != 0);

  int b = (unsigned char)s[1];
  CHECK((b & 0xc0) == 0x80);
  if ((a & 0x20) == 0) {
    CHECK((a & 0x1e) > 0);
    *x = (((a & 0x1f) << 6) | (b & 0x3f));
    return 2;
  }

  int c = (unsigned char)s[2];
  CHECK((c & 0xc0) == 0x80);
  if ((a & 0x10) == 0) {
    CHECK(((a & 0x0f) | (b & 0x20)) > 0);
    *x = (((a & 0x0f) << 12) | ((b & 0x3f) << 6) | (c & 0x3f));
    return 3;
  }

  int d = (unsigned char)s[3];
  CHECK((d & 0xc0) == 0x80);
  if ((a & 0x08) == 0) {
    CHECK(((a & 0x07) | (b & 0x30)) > 0);
    *x = (((a & 0x07) << 18) | ((b & 0x3f) << 12) | ((c & 0x3f) << 6) | (d & 0x3f));
    return 4;
  }
  
  int e = (unsigned char)s[4];
  CHECK((e & 0xc0) == 0x80);
  if ((a & 0x04) == 0) {
    CHECK(((a & 0x03) | (b & 0x38)) > 0);
    *x = (((a & 0x03) << 24) | ((b & 0x3f) << 18) | ((c & 0x3f) << 12) | ((d & 0x3f) << 6) | (e & 0x3f));
    return 5;
  }
  
  int f = (unsigned char)s[5];
  CHECK((f & 0xc0) == 0x80);
  if ((a & 0x02) == 0) {
    CHECK(((a & 0x01) | (b & 0x3c)) > 0);
    *x = (((a & 0x01) << 30) | ((b & 0x3f) << 24) | ((c & 0x3f) << 18) | ((d & 0x3f) << 12) | ((e & 0x3f) << 6) | (f & 0x3f));
    return 6;
  }

  CHECK(0);
#undef CHECK
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
          int _len_x0 = 1;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_char_utf8(x,s);
          printf("%d\n", benchRet); 
          free(x);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_x0 = 65025;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 65025;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_char_utf8(x,s);
          printf("%d\n", benchRet); 
          free(x);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_x0 = 100;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 100;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_char_utf8(x,s);
          printf("%d\n", benchRet); 
          free(x);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
