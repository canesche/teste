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
typedef  int mrb_int ;

/* Variables and functions */
 int* utf8len_codepage ; 

__attribute__((used)) static mrb_int
utf8len(const char* p, const char* e)
{
  mrb_int len;
  mrb_int i;

  len = utf8len_codepage[(unsigned char)*p];
  if (p + len > e) return 1;
  for (i = 1; i < len; ++i)
    if ((p[i] & 0xc0) != 0x80)
      return 1;
  return len;
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
          int _len_p0 = 1;
          const char * p = (const char *) malloc(_len_p0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e0 = 1;
          const char * e = (const char *) malloc(_len_e0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8len(p,e);
          printf("%d\n", benchRet); 
          free(p);
          free(e);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          const char * p = (const char *) malloc(_len_p0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e0 = 65025;
          const char * e = (const char *) malloc(_len_e0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8len(p,e);
          printf("%d\n", benchRet); 
          free(p);
          free(e);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          const char * p = (const char *) malloc(_len_p0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e0 = 100;
          const char * e = (const char *) malloc(_len_e0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8len(p,e);
          printf("%d\n", benchRet); 
          free(p);
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
