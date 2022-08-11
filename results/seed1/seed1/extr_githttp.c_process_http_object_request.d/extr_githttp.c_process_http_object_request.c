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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct http_object_request {TYPE_1__* slot; int /*<<< orphan*/  http_code; int /*<<< orphan*/  curl_result; } ;
struct TYPE_2__ {int /*<<< orphan*/  http_code; int /*<<< orphan*/  curl_result; } ;

/* Variables and functions */

void process_http_object_request(struct http_object_request *freq)
{
	if (freq->slot == NULL)
		return;
	freq->curl_result = freq->slot->curl_result;
	freq->http_code = freq->slot->http_code;
	freq->slot = NULL;
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
          int _len_freq0 = 1;
          struct http_object_request * freq = (struct http_object_request *) malloc(_len_freq0*sizeof(struct http_object_request));
          for(int _i0 = 0; _i0 < _len_freq0; _i0++) {
              int _len_freq__i0__slot0 = 1;
          freq[_i0].slot = (struct TYPE_2__ *) malloc(_len_freq__i0__slot0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_freq__i0__slot0; _j0++) {
            freq[_i0].slot->http_code = ((-2 * (next_i()%2)) + 1) * next_i();
        freq[_i0].slot->curl_result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        freq[_i0].http_code = ((-2 * (next_i()%2)) + 1) * next_i();
        freq[_i0].curl_result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_http_object_request(freq);
          for(int _aux = 0; _aux < _len_freq0; _aux++) {
          free(freq[_aux].slot);
          }
          free(freq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_freq0 = 65025;
          struct http_object_request * freq = (struct http_object_request *) malloc(_len_freq0*sizeof(struct http_object_request));
          for(int _i0 = 0; _i0 < _len_freq0; _i0++) {
              int _len_freq__i0__slot0 = 1;
          freq[_i0].slot = (struct TYPE_2__ *) malloc(_len_freq__i0__slot0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_freq__i0__slot0; _j0++) {
            freq[_i0].slot->http_code = ((-2 * (next_i()%2)) + 1) * next_i();
        freq[_i0].slot->curl_result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        freq[_i0].http_code = ((-2 * (next_i()%2)) + 1) * next_i();
        freq[_i0].curl_result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_http_object_request(freq);
          for(int _aux = 0; _aux < _len_freq0; _aux++) {
          free(freq[_aux].slot);
          }
          free(freq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_freq0 = 100;
          struct http_object_request * freq = (struct http_object_request *) malloc(_len_freq0*sizeof(struct http_object_request));
          for(int _i0 = 0; _i0 < _len_freq0; _i0++) {
              int _len_freq__i0__slot0 = 1;
          freq[_i0].slot = (struct TYPE_2__ *) malloc(_len_freq__i0__slot0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_freq__i0__slot0; _j0++) {
            freq[_i0].slot->http_code = ((-2 * (next_i()%2)) + 1) * next_i();
        freq[_i0].slot->curl_result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        freq[_i0].http_code = ((-2 * (next_i()%2)) + 1) * next_i();
        freq[_i0].curl_result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_http_object_request(freq);
          for(int _aux = 0; _aux < _len_freq0; _aux++) {
          free(freq[_aux].slot);
          }
          free(freq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
