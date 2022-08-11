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
struct TYPE_3__ {char* multipart_boundary; int keep_alive; int /*<<< orphan*/ * on_query_string; int /*<<< orphan*/ * on_path; int /*<<< orphan*/ * on_fragment; int /*<<< orphan*/ * on_uri; int /*<<< orphan*/ * on_header_value; int /*<<< orphan*/ * on_header_field; int /*<<< orphan*/ * on_part_data; int /*<<< orphan*/ * on_part_data_complete; int /*<<< orphan*/ * on_multipart_header_value; int /*<<< orphan*/ * on_multipart_header_field; int /*<<< orphan*/ * on_multipart_headers_complete; int /*<<< orphan*/ * on_body; int /*<<< orphan*/ * on_headers_complete; int /*<<< orphan*/ * on_complete; scalar_t__ multipart_boundary_len; scalar_t__ number_of_multipart_headers; int /*<<< orphan*/  transfer_encoding; scalar_t__ number_of_headers; scalar_t__ version_minor; scalar_t__ version_major; scalar_t__ content_length; scalar_t__ body_read; scalar_t__ eating_body; int /*<<< orphan*/  expect_continue; } ;
typedef  TYPE_1__ ebb_request ;

/* Variables and functions */
 int /*<<< orphan*/  EBB_IDENTITY ; 
 int /*<<< orphan*/  FALSE ; 

void ebb_request_init(ebb_request *request)
{
  request->expect_continue = FALSE;
  request->eating_body = 0;
  request->body_read = 0;
  request->content_length = 0;
  request->version_major = 0;
  request->version_minor = 0;
  request->number_of_headers = 0;
  request->transfer_encoding = EBB_IDENTITY;
  request->number_of_multipart_headers = 0;
  request->multipart_boundary_len = 0;
  request->multipart_boundary[0] = request->multipart_boundary[1] = '-';
  request->keep_alive = -1;

  request->on_complete = NULL;
  request->on_headers_complete = NULL;
  request->on_body = NULL;
  request->on_multipart_headers_complete = NULL;
  request->on_multipart_header_field = NULL;
  request->on_multipart_header_value = NULL;
  request->on_part_data_complete = NULL;
  request->on_part_data = NULL;
  request->on_header_field = NULL;
  request->on_header_value = NULL;
  request->on_uri = NULL;
  request->on_fragment = NULL;
  request->on_path = NULL;
  request->on_query_string = NULL;
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
          int _len_request0 = 1;
          struct TYPE_3__ * request = (struct TYPE_3__ *) malloc(_len_request0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
              int _len_request__i0__multipart_boundary0 = 1;
          request[_i0].multipart_boundary = (char *) malloc(_len_request__i0__multipart_boundary0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_request__i0__multipart_boundary0; _j0++) {
            request[_i0].multipart_boundary[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        request[_i0].keep_alive = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_request__i0__on_query_string0 = 1;
          request[_i0].on_query_string = (int *) malloc(_len_request__i0__on_query_string0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_query_string0; _j0++) {
            request[_i0].on_query_string[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_path0 = 1;
          request[_i0].on_path = (int *) malloc(_len_request__i0__on_path0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_path0; _j0++) {
            request[_i0].on_path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_fragment0 = 1;
          request[_i0].on_fragment = (int *) malloc(_len_request__i0__on_fragment0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_fragment0; _j0++) {
            request[_i0].on_fragment[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_uri0 = 1;
          request[_i0].on_uri = (int *) malloc(_len_request__i0__on_uri0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_uri0; _j0++) {
            request[_i0].on_uri[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_header_value0 = 1;
          request[_i0].on_header_value = (int *) malloc(_len_request__i0__on_header_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_header_value0; _j0++) {
            request[_i0].on_header_value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_header_field0 = 1;
          request[_i0].on_header_field = (int *) malloc(_len_request__i0__on_header_field0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_header_field0; _j0++) {
            request[_i0].on_header_field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_part_data0 = 1;
          request[_i0].on_part_data = (int *) malloc(_len_request__i0__on_part_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_part_data0; _j0++) {
            request[_i0].on_part_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_part_data_complete0 = 1;
          request[_i0].on_part_data_complete = (int *) malloc(_len_request__i0__on_part_data_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_part_data_complete0; _j0++) {
            request[_i0].on_part_data_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_multipart_header_value0 = 1;
          request[_i0].on_multipart_header_value = (int *) malloc(_len_request__i0__on_multipart_header_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_multipart_header_value0; _j0++) {
            request[_i0].on_multipart_header_value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_multipart_header_field0 = 1;
          request[_i0].on_multipart_header_field = (int *) malloc(_len_request__i0__on_multipart_header_field0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_multipart_header_field0; _j0++) {
            request[_i0].on_multipart_header_field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_multipart_headers_complete0 = 1;
          request[_i0].on_multipart_headers_complete = (int *) malloc(_len_request__i0__on_multipart_headers_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_multipart_headers_complete0; _j0++) {
            request[_i0].on_multipart_headers_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_body0 = 1;
          request[_i0].on_body = (int *) malloc(_len_request__i0__on_body0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_body0; _j0++) {
            request[_i0].on_body[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_headers_complete0 = 1;
          request[_i0].on_headers_complete = (int *) malloc(_len_request__i0__on_headers_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_headers_complete0; _j0++) {
            request[_i0].on_headers_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_complete0 = 1;
          request[_i0].on_complete = (int *) malloc(_len_request__i0__on_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_complete0; _j0++) {
            request[_i0].on_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        request[_i0].multipart_boundary_len = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].number_of_multipart_headers = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].transfer_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].number_of_headers = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].version_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].version_major = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].content_length = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].body_read = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].eating_body = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].expect_continue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ebb_request_init(request);
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].multipart_boundary);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_query_string);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_path);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_fragment);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_uri);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_header_value);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_header_field);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_part_data);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_part_data_complete);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_multipart_header_value);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_multipart_header_field);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_multipart_headers_complete);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_body);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_headers_complete);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_complete);
          }
          free(request);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_request0 = 65025;
          struct TYPE_3__ * request = (struct TYPE_3__ *) malloc(_len_request0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
              int _len_request__i0__multipart_boundary0 = 1;
          request[_i0].multipart_boundary = (char *) malloc(_len_request__i0__multipart_boundary0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_request__i0__multipart_boundary0; _j0++) {
            request[_i0].multipart_boundary[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        request[_i0].keep_alive = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_request__i0__on_query_string0 = 1;
          request[_i0].on_query_string = (int *) malloc(_len_request__i0__on_query_string0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_query_string0; _j0++) {
            request[_i0].on_query_string[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_path0 = 1;
          request[_i0].on_path = (int *) malloc(_len_request__i0__on_path0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_path0; _j0++) {
            request[_i0].on_path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_fragment0 = 1;
          request[_i0].on_fragment = (int *) malloc(_len_request__i0__on_fragment0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_fragment0; _j0++) {
            request[_i0].on_fragment[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_uri0 = 1;
          request[_i0].on_uri = (int *) malloc(_len_request__i0__on_uri0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_uri0; _j0++) {
            request[_i0].on_uri[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_header_value0 = 1;
          request[_i0].on_header_value = (int *) malloc(_len_request__i0__on_header_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_header_value0; _j0++) {
            request[_i0].on_header_value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_header_field0 = 1;
          request[_i0].on_header_field = (int *) malloc(_len_request__i0__on_header_field0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_header_field0; _j0++) {
            request[_i0].on_header_field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_part_data0 = 1;
          request[_i0].on_part_data = (int *) malloc(_len_request__i0__on_part_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_part_data0; _j0++) {
            request[_i0].on_part_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_part_data_complete0 = 1;
          request[_i0].on_part_data_complete = (int *) malloc(_len_request__i0__on_part_data_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_part_data_complete0; _j0++) {
            request[_i0].on_part_data_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_multipart_header_value0 = 1;
          request[_i0].on_multipart_header_value = (int *) malloc(_len_request__i0__on_multipart_header_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_multipart_header_value0; _j0++) {
            request[_i0].on_multipart_header_value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_multipart_header_field0 = 1;
          request[_i0].on_multipart_header_field = (int *) malloc(_len_request__i0__on_multipart_header_field0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_multipart_header_field0; _j0++) {
            request[_i0].on_multipart_header_field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_multipart_headers_complete0 = 1;
          request[_i0].on_multipart_headers_complete = (int *) malloc(_len_request__i0__on_multipart_headers_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_multipart_headers_complete0; _j0++) {
            request[_i0].on_multipart_headers_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_body0 = 1;
          request[_i0].on_body = (int *) malloc(_len_request__i0__on_body0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_body0; _j0++) {
            request[_i0].on_body[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_headers_complete0 = 1;
          request[_i0].on_headers_complete = (int *) malloc(_len_request__i0__on_headers_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_headers_complete0; _j0++) {
            request[_i0].on_headers_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_complete0 = 1;
          request[_i0].on_complete = (int *) malloc(_len_request__i0__on_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_complete0; _j0++) {
            request[_i0].on_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        request[_i0].multipart_boundary_len = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].number_of_multipart_headers = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].transfer_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].number_of_headers = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].version_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].version_major = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].content_length = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].body_read = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].eating_body = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].expect_continue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ebb_request_init(request);
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].multipart_boundary);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_query_string);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_path);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_fragment);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_uri);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_header_value);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_header_field);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_part_data);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_part_data_complete);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_multipart_header_value);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_multipart_header_field);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_multipart_headers_complete);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_body);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_headers_complete);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_complete);
          }
          free(request);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_request0 = 100;
          struct TYPE_3__ * request = (struct TYPE_3__ *) malloc(_len_request0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
              int _len_request__i0__multipart_boundary0 = 1;
          request[_i0].multipart_boundary = (char *) malloc(_len_request__i0__multipart_boundary0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_request__i0__multipart_boundary0; _j0++) {
            request[_i0].multipart_boundary[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        request[_i0].keep_alive = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_request__i0__on_query_string0 = 1;
          request[_i0].on_query_string = (int *) malloc(_len_request__i0__on_query_string0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_query_string0; _j0++) {
            request[_i0].on_query_string[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_path0 = 1;
          request[_i0].on_path = (int *) malloc(_len_request__i0__on_path0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_path0; _j0++) {
            request[_i0].on_path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_fragment0 = 1;
          request[_i0].on_fragment = (int *) malloc(_len_request__i0__on_fragment0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_fragment0; _j0++) {
            request[_i0].on_fragment[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_uri0 = 1;
          request[_i0].on_uri = (int *) malloc(_len_request__i0__on_uri0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_uri0; _j0++) {
            request[_i0].on_uri[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_header_value0 = 1;
          request[_i0].on_header_value = (int *) malloc(_len_request__i0__on_header_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_header_value0; _j0++) {
            request[_i0].on_header_value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_header_field0 = 1;
          request[_i0].on_header_field = (int *) malloc(_len_request__i0__on_header_field0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_header_field0; _j0++) {
            request[_i0].on_header_field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_part_data0 = 1;
          request[_i0].on_part_data = (int *) malloc(_len_request__i0__on_part_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_part_data0; _j0++) {
            request[_i0].on_part_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_part_data_complete0 = 1;
          request[_i0].on_part_data_complete = (int *) malloc(_len_request__i0__on_part_data_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_part_data_complete0; _j0++) {
            request[_i0].on_part_data_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_multipart_header_value0 = 1;
          request[_i0].on_multipart_header_value = (int *) malloc(_len_request__i0__on_multipart_header_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_multipart_header_value0; _j0++) {
            request[_i0].on_multipart_header_value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_multipart_header_field0 = 1;
          request[_i0].on_multipart_header_field = (int *) malloc(_len_request__i0__on_multipart_header_field0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_multipart_header_field0; _j0++) {
            request[_i0].on_multipart_header_field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_multipart_headers_complete0 = 1;
          request[_i0].on_multipart_headers_complete = (int *) malloc(_len_request__i0__on_multipart_headers_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_multipart_headers_complete0; _j0++) {
            request[_i0].on_multipart_headers_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_body0 = 1;
          request[_i0].on_body = (int *) malloc(_len_request__i0__on_body0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_body0; _j0++) {
            request[_i0].on_body[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_headers_complete0 = 1;
          request[_i0].on_headers_complete = (int *) malloc(_len_request__i0__on_headers_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_headers_complete0; _j0++) {
            request[_i0].on_headers_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request__i0__on_complete0 = 1;
          request[_i0].on_complete = (int *) malloc(_len_request__i0__on_complete0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_request__i0__on_complete0; _j0++) {
            request[_i0].on_complete[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        request[_i0].multipart_boundary_len = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].number_of_multipart_headers = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].transfer_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].number_of_headers = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].version_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].version_major = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].content_length = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].body_read = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].eating_body = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].expect_continue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ebb_request_init(request);
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].multipart_boundary);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_query_string);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_path);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_fragment);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_uri);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_header_value);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_header_field);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_part_data);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_part_data_complete);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_multipart_header_value);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_multipart_header_field);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_multipart_headers_complete);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_body);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_headers_complete);
          }
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(request[_aux].on_complete);
          }
          free(request);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
