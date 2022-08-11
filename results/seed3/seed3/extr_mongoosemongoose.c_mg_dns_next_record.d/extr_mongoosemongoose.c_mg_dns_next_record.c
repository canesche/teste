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
struct mg_dns_resource_record {int rtype; } ;
struct mg_dns_message {int num_answers; struct mg_dns_resource_record* answers; } ;

/* Variables and functions */

struct mg_dns_resource_record *mg_dns_next_record(
    struct mg_dns_message *msg, int query,
    struct mg_dns_resource_record *prev) {
  struct mg_dns_resource_record *rr;

  for (rr = (prev == NULL ? msg->answers : prev + 1);
       rr - msg->answers < msg->num_answers; rr++) {
    if (rr->rtype == query) {
      return rr;
    }
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
          int query = 100;
          int _len_msg0 = 1;
          struct mg_dns_message * msg = (struct mg_dns_message *) malloc(_len_msg0*sizeof(struct mg_dns_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].num_answers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msg__i0__answers0 = 1;
          msg[_i0].answers = (struct mg_dns_resource_record *) malloc(_len_msg__i0__answers0*sizeof(struct mg_dns_resource_record));
          for(int _j0 = 0; _j0 < _len_msg__i0__answers0; _j0++) {
            msg[_i0].answers->rtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_prev0 = 1;
          struct mg_dns_resource_record * prev = (struct mg_dns_resource_record *) malloc(_len_prev0*sizeof(struct mg_dns_resource_record));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].rtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mg_dns_resource_record * benchRet = mg_dns_next_record(msg,query,prev);
          printf("%d\n", (*benchRet).rtype);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].answers);
          }
          free(msg);
          free(prev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int query = 255;
          int _len_msg0 = 65025;
          struct mg_dns_message * msg = (struct mg_dns_message *) malloc(_len_msg0*sizeof(struct mg_dns_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].num_answers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msg__i0__answers0 = 1;
          msg[_i0].answers = (struct mg_dns_resource_record *) malloc(_len_msg__i0__answers0*sizeof(struct mg_dns_resource_record));
          for(int _j0 = 0; _j0 < _len_msg__i0__answers0; _j0++) {
            msg[_i0].answers->rtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_prev0 = 65025;
          struct mg_dns_resource_record * prev = (struct mg_dns_resource_record *) malloc(_len_prev0*sizeof(struct mg_dns_resource_record));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].rtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mg_dns_resource_record * benchRet = mg_dns_next_record(msg,query,prev);
          printf("%d\n", (*benchRet).rtype);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].answers);
          }
          free(msg);
          free(prev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int query = 10;
          int _len_msg0 = 100;
          struct mg_dns_message * msg = (struct mg_dns_message *) malloc(_len_msg0*sizeof(struct mg_dns_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].num_answers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msg__i0__answers0 = 1;
          msg[_i0].answers = (struct mg_dns_resource_record *) malloc(_len_msg__i0__answers0*sizeof(struct mg_dns_resource_record));
          for(int _j0 = 0; _j0 < _len_msg__i0__answers0; _j0++) {
            msg[_i0].answers->rtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_prev0 = 100;
          struct mg_dns_resource_record * prev = (struct mg_dns_resource_record *) malloc(_len_prev0*sizeof(struct mg_dns_resource_record));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].rtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mg_dns_resource_record * benchRet = mg_dns_next_record(msg,query,prev);
          printf("%d\n", (*benchRet).rtype);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].answers);
          }
          free(msg);
          free(prev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
