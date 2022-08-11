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

void string_to_utf8 (const unsigned char *s, int *v) {
  int *tv = v;
#define CHECK(x) if (!(x)) {v = tv; break;}

  int a, b, c, d;

  while (*s) {
    a = *s++;
    if ((a & 0x80) == 0) {
      *v++ = a;
    } else if ((a & 0x40) == 0) {
      CHECK(0);
    } else if ((a & 0x20) == 0) {
      b = *s++;
      CHECK((b & 0xc0) == 0x80);
      CHECK((a & 0x1e) > 0);
      *v++ = ((a & 0x1f) << 6) | (b & 0x3f);
    } else if ((a & 0x10) == 0) {
      b = *s++;
      CHECK((b & 0xc0) == 0x80);
      c = *s++;
      CHECK((c & 0xc0) == 0x80);
      CHECK(((a & 0x0f) | (b & 0x20)) > 0);
      *v++ = ((a & 0x0f) << 12) | ((b & 0x3f) << 6) | (c & 0x3f);
    } else if ((a & 0x08) == 0) {
      b = *s++;
      CHECK((b & 0xc0) == 0x80);
      c = *s++;
      CHECK((c & 0xc0) == 0x80);
      d = *s++;
      CHECK((d & 0xc0) == 0x80);
      CHECK(((a & 0x07) | (b & 0x30)) > 0);
      *v++ = ((a & 0x07) << 18) | ((b & 0x3f) << 12) | ((c & 0x3f) << 6) | (d & 0x3f);
    } else {
      CHECK(0);
    }
  }
  *v = 0;
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
          int _len_s0 = 1;
          const unsigned char * s = (const unsigned char *) malloc(_len_s0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 1;
          int * v = (int *) malloc(_len_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          string_to_utf8(s,v);
          free(s);
          free(v);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          const unsigned char * s = (const unsigned char *) malloc(_len_s0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 65025;
          int * v = (int *) malloc(_len_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          string_to_utf8(s,v);
          free(s);
          free(v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          const unsigned char * s = (const unsigned char *) malloc(_len_s0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 100;
          int * v = (int *) malloc(_len_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          string_to_utf8(s,v);
          free(s);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
