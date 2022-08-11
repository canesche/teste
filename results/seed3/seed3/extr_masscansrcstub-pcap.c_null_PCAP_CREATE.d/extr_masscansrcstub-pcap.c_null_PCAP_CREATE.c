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
typedef  int /*<<< orphan*/  pcap_t ;

/* Variables and functions */

__attribute__((used)) static pcap_t *null_PCAP_CREATE(const char *source, char *errbuf) {return 0;}


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
          int _len_source0 = 1;
          const char * source = (const char *) malloc(_len_source0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_errbuf0 = 1;
          char * errbuf = (char *) malloc(_len_errbuf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_errbuf0; _i0++) {
            errbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = null_PCAP_CREATE(source,errbuf);
          printf("%d\n", (*benchRet)); 
          free(source);
          free(errbuf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_source0 = 65025;
          const char * source = (const char *) malloc(_len_source0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_errbuf0 = 65025;
          char * errbuf = (char *) malloc(_len_errbuf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_errbuf0; _i0++) {
            errbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = null_PCAP_CREATE(source,errbuf);
          printf("%d\n", (*benchRet)); 
          free(source);
          free(errbuf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_source0 = 100;
          const char * source = (const char *) malloc(_len_source0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_errbuf0 = 100;
          char * errbuf = (char *) malloc(_len_errbuf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_errbuf0; _i0++) {
            errbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = null_PCAP_CREATE(source,errbuf);
          printf("%d\n", (*benchRet)); 
          free(source);
          free(errbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
