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
 int ct_gif ; 
 int ct_jpeg ; 
 int ct_mov ; 
 int ct_mp3 ; 
 int ct_mp4 ; 
 int ct_partial ; 
 int ct_pdf ; 
 int ct_png ; 
 int ct_unknown ; 
 int ct_webp ; 

int ext_to_content_type (char ext[4]) {
  int r = ext[0];
  r <<= 8;
  r |= ext[1];
  r <<= 8;
  r |= ext[2];
  r |= 0x202020; /* lowercase */
  switch (r) {
    case 0x62696e: return ct_partial; /* bin */
    case 0x676966: return ct_gif;
    case 0x6a7067: return ct_jpeg;
    case 0x6d7033: return ct_mp3;
    case 0x6d7034: return ct_mp4;
    case 0x6d6f76: return ct_mov;
    case 0x706466: return ct_pdf;
    case 0x706e67: return ct_png;
    case 0x776270: return ct_webp; /* wbp */
  }
  return ct_unknown;
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
          int _len_ext0 = 4;
          char * ext = (char *) malloc(_len_ext0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ext0; _i0++) {
            ext[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext_to_content_type(ext);
          printf("%d\n", benchRet); 
          free(ext);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ext0 = 65025;
          char * ext = (char *) malloc(_len_ext0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ext0; _i0++) {
            ext[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext_to_content_type(ext);
          printf("%d\n", benchRet); 
          free(ext);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ext0 = 100;
          char * ext = (char *) malloc(_len_ext0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ext0; _i0++) {
            ext[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext_to_content_type(ext);
          printf("%d\n", benchRet); 
          free(ext);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
