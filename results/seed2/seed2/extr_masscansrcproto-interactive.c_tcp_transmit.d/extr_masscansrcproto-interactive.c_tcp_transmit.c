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
struct InteractiveData {unsigned int m_length; int is_payload_dynamic; void const* m_payload; } ;

/* Variables and functions */
 unsigned int TCPTRAN_DYNAMIC ; 

void
tcp_transmit(struct InteractiveData *more, const void *payload, size_t length, unsigned flags)
{
    more->m_payload = payload;
    more->m_length = (unsigned)length;
    
    if (flags & TCPTRAN_DYNAMIC)
        more->is_payload_dynamic = 1;
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
          unsigned long length = 100;
          unsigned int flags = 100;
          int _len_more0 = 1;
          struct InteractiveData * more = (struct InteractiveData *) malloc(_len_more0*sizeof(struct InteractiveData));
          for(int _i0 = 0; _i0 < _len_more0; _i0++) {
            more[_i0].m_length = ((-2 * (next_i()%2)) + 1) * next_i();
        more[_i0].is_payload_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_more__i0__m_payload0 = 1;
          more[_i0].m_payload = (const void *) malloc(_len_more__i0__m_payload0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_more__i0__m_payload0; _j0++) {
            more[_i0].m_payload[_j0] = 0;
          }
          }
          int _len_payload0 = 1;
          const void * payload = (const void *) malloc(_len_payload0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_payload0; _i0++) {
            payload[_i0] = 0;
          }
          tcp_transmit(more,payload,length,flags);
          free(more);
          free(payload);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          unsigned int flags = 255;
          int _len_more0 = 65025;
          struct InteractiveData * more = (struct InteractiveData *) malloc(_len_more0*sizeof(struct InteractiveData));
          for(int _i0 = 0; _i0 < _len_more0; _i0++) {
            more[_i0].m_length = ((-2 * (next_i()%2)) + 1) * next_i();
        more[_i0].is_payload_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_more__i0__m_payload0 = 1;
          more[_i0].m_payload = (const void *) malloc(_len_more__i0__m_payload0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_more__i0__m_payload0; _j0++) {
            more[_i0].m_payload[_j0] = 0;
          }
          }
          int _len_payload0 = 65025;
          const void * payload = (const void *) malloc(_len_payload0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_payload0; _i0++) {
            payload[_i0] = 0;
          }
          tcp_transmit(more,payload,length,flags);
          free(more);
          free(payload);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          unsigned int flags = 10;
          int _len_more0 = 100;
          struct InteractiveData * more = (struct InteractiveData *) malloc(_len_more0*sizeof(struct InteractiveData));
          for(int _i0 = 0; _i0 < _len_more0; _i0++) {
            more[_i0].m_length = ((-2 * (next_i()%2)) + 1) * next_i();
        more[_i0].is_payload_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_more__i0__m_payload0 = 1;
          more[_i0].m_payload = (const void *) malloc(_len_more__i0__m_payload0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_more__i0__m_payload0; _j0++) {
            more[_i0].m_payload[_j0] = 0;
          }
          }
          int _len_payload0 = 100;
          const void * payload = (const void *) malloc(_len_payload0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_payload0; _i0++) {
            payload[_i0] = 0;
          }
          tcp_transmit(more,payload,length,flags);
          free(more);
          free(payload);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
