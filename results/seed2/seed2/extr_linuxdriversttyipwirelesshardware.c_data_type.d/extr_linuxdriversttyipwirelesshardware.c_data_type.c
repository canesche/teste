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
struct nl_packet_header {int packet_rank; int protocol; } ;

/* Variables and functions */
 int NL_FIRST_PACKET ; 
#define  TL_PROTOCOLID_COM_CTRL 130 
#define  TL_PROTOCOLID_COM_DATA 129 
#define  TL_PROTOCOLID_SETUP 128 

__attribute__((used)) static char *data_type(const unsigned char *buf, unsigned length)
{
	struct nl_packet_header *hdr = (struct nl_packet_header *) buf;

	if (length == 0)
		return "     ";

	if (hdr->packet_rank & NL_FIRST_PACKET) {
		switch (hdr->protocol) {
		case TL_PROTOCOLID_COM_DATA:	return "DATA ";
		case TL_PROTOCOLID_COM_CTRL:	return "CTRL ";
		case TL_PROTOCOLID_SETUP:	return "SETUP";
		default: return "???? ";
		}
	} else
		return "     ";
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
          unsigned int length = 100;
          int _len_buf0 = 1;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = data_type(buf,length);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int length = 255;
          int _len_buf0 = 65025;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = data_type(buf,length);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int length = 10;
          int _len_buf0 = 100;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = data_type(buf,length);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
