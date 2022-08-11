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
struct alsa_fmt {int mp_format; } ;

/* Variables and functions */
 struct alsa_fmt const* mp_alsa_formats ; 

__attribute__((used)) static const struct alsa_fmt *find_alsa_format(int mp_format)
{
    for (int n = 0; mp_alsa_formats[n].mp_format; n++) {
        if (mp_alsa_formats[n].mp_format == mp_format)
            return &mp_alsa_formats[n];
    }
    return NULL;
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
          int mp_format = 100;
          const struct alsa_fmt * benchRet = find_alsa_format(mp_format);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mp_format = 255;
          const struct alsa_fmt * benchRet = find_alsa_format(mp_format);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mp_format = 10;
          const struct alsa_fmt * benchRet = find_alsa_format(mp_format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
