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
typedef  int /*<<< orphan*/  u64 ;
struct rtl_priv {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void RT_PRINT_DATA(struct rtl_priv *rtlpriv,
				 u64 comp, int level,
				 const char *titlestring,
				 const void *hexdata, size_t hexdatalen)
{
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
          int comp = 100;
          int level = 100;
          unsigned long hexdatalen = 100;
          int _len_rtlpriv0 = 1;
          struct rtl_priv * rtlpriv = (struct rtl_priv *) malloc(_len_rtlpriv0*sizeof(struct rtl_priv));
          for(int _i0 = 0; _i0 < _len_rtlpriv0; _i0++) {
            rtlpriv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_titlestring0 = 1;
          const char * titlestring = (const char *) malloc(_len_titlestring0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_titlestring0; _i0++) {
            titlestring[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hexdata0 = 1;
          const void * hexdata = (const void *) malloc(_len_hexdata0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_hexdata0; _i0++) {
            hexdata[_i0] = 0;
          }
          RT_PRINT_DATA(rtlpriv,comp,level,titlestring,hexdata,hexdatalen);
          free(rtlpriv);
          free(titlestring);
          free(hexdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int comp = 255;
          int level = 255;
          unsigned long hexdatalen = 255;
          int _len_rtlpriv0 = 65025;
          struct rtl_priv * rtlpriv = (struct rtl_priv *) malloc(_len_rtlpriv0*sizeof(struct rtl_priv));
          for(int _i0 = 0; _i0 < _len_rtlpriv0; _i0++) {
            rtlpriv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_titlestring0 = 65025;
          const char * titlestring = (const char *) malloc(_len_titlestring0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_titlestring0; _i0++) {
            titlestring[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hexdata0 = 65025;
          const void * hexdata = (const void *) malloc(_len_hexdata0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_hexdata0; _i0++) {
            hexdata[_i0] = 0;
          }
          RT_PRINT_DATA(rtlpriv,comp,level,titlestring,hexdata,hexdatalen);
          free(rtlpriv);
          free(titlestring);
          free(hexdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int comp = 10;
          int level = 10;
          unsigned long hexdatalen = 10;
          int _len_rtlpriv0 = 100;
          struct rtl_priv * rtlpriv = (struct rtl_priv *) malloc(_len_rtlpriv0*sizeof(struct rtl_priv));
          for(int _i0 = 0; _i0 < _len_rtlpriv0; _i0++) {
            rtlpriv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_titlestring0 = 100;
          const char * titlestring = (const char *) malloc(_len_titlestring0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_titlestring0; _i0++) {
            titlestring[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hexdata0 = 100;
          const void * hexdata = (const void *) malloc(_len_hexdata0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_hexdata0; _i0++) {
            hexdata[_i0] = 0;
          }
          RT_PRINT_DATA(rtlpriv,comp,level,titlestring,hexdata,hexdatalen);
          free(rtlpriv);
          free(titlestring);
          free(hexdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
