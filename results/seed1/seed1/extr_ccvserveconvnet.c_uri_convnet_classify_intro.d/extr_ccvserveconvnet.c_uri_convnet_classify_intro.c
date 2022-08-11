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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  len; int /*<<< orphan*/  data; } ;
typedef  TYPE_2__ ebb_buf ;
struct TYPE_5__ {int /*<<< orphan*/  len; int /*<<< orphan*/  data; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;
typedef  TYPE_3__ convnet_context_t ;

/* Variables and functions */

int uri_convnet_classify_intro(const void* context, const void* parsed, ebb_buf* buf)
{
	convnet_context_t* convnet_context = (convnet_context_t*)context;
	buf->data = convnet_context->desc.data;
	buf->len = convnet_context->desc.len;
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
          int _len_context0 = 1;
          const void * context = (const void *) malloc(_len_context0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0] = 0;
          }
          int _len_parsed0 = 1;
          const void * parsed = (const void *) malloc(_len_parsed0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_parsed0; _i0++) {
            parsed[_i0] = 0;
          }
          int _len_buf0 = 1;
          struct TYPE_6__ * buf = (struct TYPE_6__ *) malloc(_len_buf0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uri_convnet_classify_intro(context,parsed,buf);
          printf("%d\n", benchRet); 
          free(context);
          free(parsed);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_context0 = 65025;
          const void * context = (const void *) malloc(_len_context0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0] = 0;
          }
          int _len_parsed0 = 65025;
          const void * parsed = (const void *) malloc(_len_parsed0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_parsed0; _i0++) {
            parsed[_i0] = 0;
          }
          int _len_buf0 = 65025;
          struct TYPE_6__ * buf = (struct TYPE_6__ *) malloc(_len_buf0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uri_convnet_classify_intro(context,parsed,buf);
          printf("%d\n", benchRet); 
          free(context);
          free(parsed);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_context0 = 100;
          const void * context = (const void *) malloc(_len_context0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0] = 0;
          }
          int _len_parsed0 = 100;
          const void * parsed = (const void *) malloc(_len_parsed0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_parsed0; _i0++) {
            parsed[_i0] = 0;
          }
          int _len_buf0 = 100;
          struct TYPE_6__ * buf = (struct TYPE_6__ *) malloc(_len_buf0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uri_convnet_classify_intro(context,parsed,buf);
          printf("%d\n", benchRet); 
          free(context);
          free(parsed);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
