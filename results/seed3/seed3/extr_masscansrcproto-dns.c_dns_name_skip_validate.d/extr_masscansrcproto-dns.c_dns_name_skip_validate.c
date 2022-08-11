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

__attribute__((used)) static unsigned
dns_name_skip_validate(const unsigned char *px, unsigned offset, unsigned length, unsigned name_length)
{
    unsigned ERROR = length + 1;
    unsigned result = offset + 2;
    unsigned recursion = 0;

    /* 'for all labels' */
    for (;;) {
        unsigned len;

        /* validate: the eventual uncompressed name will be less than 255 */
        if (name_length >= 255)
            return ERROR;

        /* validate: haven't gone off end of packet */
        if (offset >= length)
            return ERROR;

        /* grab length of next label */
        len = px[offset];

        /* Do two types of processing, either a compression code or a
         * original label. Note that we can alternate back and forth
         * between these two states. */
        if (len & 0xC0) {
            /* validate: top 2 bits are 11*/
            if ((len & 0xC0) != 0xC0)
                return ERROR;

            /* validate: enough bytes left for 2 byte compression field */
            if (offset + 1 >= length)
                return ERROR;

            /* follow the compression pointer to the next location */
            offset = (px[offset]&0x3F)<<8 | px[offset+1];

            /* validate: follow a max of 4 links */
            if (++recursion > 4)
                return ERROR;
        } else {
            /* we have a normal label */
            recursion = 0;

            /* If the label-length is zero, then that meaans we've reached
             * the end of the name */
            if (len == 0) {
                return result; /* end of domain name */
            }

            /* There are more labels to come, therefore skip this and go
             * to the next one */
            name_length += len + 1;
            offset += len + 1;
        }
    }
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
          unsigned int offset = 100;
          unsigned int length = 100;
          unsigned int name_length = 100;
          int _len_px0 = 1;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = dns_name_skip_validate(px,offset,length,name_length);
          printf("%u\n", benchRet); 
          free(px);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int offset = 255;
          unsigned int length = 255;
          unsigned int name_length = 255;
          int _len_px0 = 65025;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = dns_name_skip_validate(px,offset,length,name_length);
          printf("%u\n", benchRet); 
          free(px);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int offset = 10;
          unsigned int length = 10;
          unsigned int name_length = 10;
          int _len_px0 = 100;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = dns_name_skip_validate(px,offset,length,name_length);
          printf("%u\n", benchRet); 
          free(px);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
