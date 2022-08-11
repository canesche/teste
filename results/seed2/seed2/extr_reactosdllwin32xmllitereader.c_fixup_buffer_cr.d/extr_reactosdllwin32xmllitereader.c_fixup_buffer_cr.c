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
struct TYPE_3__ {char const* data; int written; scalar_t__ prev_cr; } ;
typedef  TYPE_1__ encoded_buffer ;
typedef  char WCHAR ;
typedef  scalar_t__ BOOL ;

/* Variables and functions */
 scalar_t__ FALSE ; 
 scalar_t__ TRUE ; 

__attribute__((used)) static void fixup_buffer_cr(encoded_buffer *buffer, int off)
{
    BOOL prev_cr = buffer->prev_cr;
    const WCHAR *src;
    WCHAR *dest;

    src = dest = (WCHAR*)buffer->data + off;
    while ((const char*)src < buffer->data + buffer->written)
    {
        if (*src == '\r')
        {
            *dest++ = '\n';
            src++;
            prev_cr = TRUE;
            continue;
        }
        if(prev_cr && *src == '\n')
            src++;
        else
            *dest++ = *src++;
        prev_cr = FALSE;
    }

    buffer->written = (char*)dest - buffer->data;
    buffer->prev_cr = prev_cr;
    *dest = 0;
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
          int off = 100;
          int _len_buffer0 = 1;
          struct TYPE_3__ * buffer = (struct TYPE_3__ *) malloc(_len_buffer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__data0 = 1;
          buffer[_i0].data = (const char *) malloc(_len_buffer__i0__data0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_buffer__i0__data0; _j0++) {
            buffer[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        buffer[_i0].written = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].prev_cr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fixup_buffer_cr(buffer,off);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].data);
          }
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int off = 255;
          int _len_buffer0 = 65025;
          struct TYPE_3__ * buffer = (struct TYPE_3__ *) malloc(_len_buffer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__data0 = 1;
          buffer[_i0].data = (const char *) malloc(_len_buffer__i0__data0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_buffer__i0__data0; _j0++) {
            buffer[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        buffer[_i0].written = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].prev_cr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fixup_buffer_cr(buffer,off);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].data);
          }
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int off = 10;
          int _len_buffer0 = 100;
          struct TYPE_3__ * buffer = (struct TYPE_3__ *) malloc(_len_buffer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__data0 = 1;
          buffer[_i0].data = (const char *) malloc(_len_buffer__i0__data0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_buffer__i0__data0; _j0++) {
            buffer[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        buffer[_i0].written = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].prev_cr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fixup_buffer_cr(buffer,off);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].data);
          }
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
