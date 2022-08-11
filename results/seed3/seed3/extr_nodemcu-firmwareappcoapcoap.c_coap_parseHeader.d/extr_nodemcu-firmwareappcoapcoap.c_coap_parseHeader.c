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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct TYPE_3__ {int ver; int t; int tkl; int code; int* id; } ;
typedef  TYPE_1__ coap_header_t ;

/* Variables and functions */
 int COAP_ERR_HEADER_TOO_SHORT ; 
 int COAP_ERR_VERSION_NOT_1 ; 

int coap_parseHeader(coap_header_t *hdr, const uint8_t *buf, size_t buflen)
{
    if (buflen < 4)
        return COAP_ERR_HEADER_TOO_SHORT;
    hdr->ver = (buf[0] & 0xC0) >> 6;
    if (hdr->ver != 1)
        return COAP_ERR_VERSION_NOT_1;
    hdr->t = (buf[0] & 0x30) >> 4;
    hdr->tkl = buf[0] & 0x0F;
    hdr->code = buf[1];
    hdr->id[0] = buf[2];
    hdr->id[1] = buf[3];
    return 0;
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
          unsigned long buflen = 100;
          int _len_hdr0 = 1;
          struct TYPE_3__ * hdr = (struct TYPE_3__ *) malloc(_len_hdr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].ver = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].tkl = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdr__i0__id0 = 1;
          hdr[_i0].id = (int *) malloc(_len_hdr__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__id0; _j0++) {
            hdr[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = coap_parseHeader(hdr,buf,buflen);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].id);
          }
          free(hdr);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long buflen = 255;
          int _len_hdr0 = 65025;
          struct TYPE_3__ * hdr = (struct TYPE_3__ *) malloc(_len_hdr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].ver = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].tkl = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdr__i0__id0 = 1;
          hdr[_i0].id = (int *) malloc(_len_hdr__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__id0; _j0++) {
            hdr[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = coap_parseHeader(hdr,buf,buflen);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].id);
          }
          free(hdr);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long buflen = 10;
          int _len_hdr0 = 100;
          struct TYPE_3__ * hdr = (struct TYPE_3__ *) malloc(_len_hdr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].ver = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].tkl = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdr__i0__id0 = 1;
          hdr[_i0].id = (int *) malloc(_len_hdr__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__id0; _j0++) {
            hdr[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = coap_parseHeader(hdr,buf,buflen);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].id);
          }
          free(hdr);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
