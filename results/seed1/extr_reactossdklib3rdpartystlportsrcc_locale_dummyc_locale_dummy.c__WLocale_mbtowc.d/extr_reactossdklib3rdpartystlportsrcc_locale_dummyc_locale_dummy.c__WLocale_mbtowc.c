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
typedef  char wchar_t ;
struct _Locale_codecvt {int dummy; } ;
typedef  int /*<<< orphan*/  mbstate_t ;

/* Variables and functions */

size_t _WLocale_mbtowc(struct _Locale_codecvt *lcodecvt,
                       wchar_t *to,
                       const char *from, size_t n,
                       mbstate_t *st)
{ *to = *from; return 1; }


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
          unsigned long n = 100;
          int _len_lcodecvt0 = 1;
          struct _Locale_codecvt * lcodecvt = (struct _Locale_codecvt *) malloc(_len_lcodecvt0*sizeof(struct _Locale_codecvt));
          for(int _i0 = 0; _i0 < _len_lcodecvt0; _i0++) {
            lcodecvt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          int _len_st0 = 1;
          int * st = (int *) malloc(_len_st0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = _WLocale_mbtowc(lcodecvt,to,from,n,st);
          printf("%lu\n", benchRet); 
          free(lcodecvt);
          free(to);
          free(from);
          free(st);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_lcodecvt0 = 65025;
          struct _Locale_codecvt * lcodecvt = (struct _Locale_codecvt *) malloc(_len_lcodecvt0*sizeof(struct _Locale_codecvt));
          for(int _i0 = 0; _i0 < _len_lcodecvt0; _i0++) {
            lcodecvt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          int _len_st0 = 65025;
          int * st = (int *) malloc(_len_st0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = _WLocale_mbtowc(lcodecvt,to,from,n,st);
          printf("%lu\n", benchRet); 
          free(lcodecvt);
          free(to);
          free(from);
          free(st);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_lcodecvt0 = 100;
          struct _Locale_codecvt * lcodecvt = (struct _Locale_codecvt *) malloc(_len_lcodecvt0*sizeof(struct _Locale_codecvt));
          for(int _i0 = 0; _i0 < _len_lcodecvt0; _i0++) {
            lcodecvt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          int _len_st0 = 100;
          int * st = (int *) malloc(_len_st0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = _WLocale_mbtowc(lcodecvt,to,from,n,st);
          printf("%lu\n", benchRet); 
          free(lcodecvt);
          free(to);
          free(from);
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
