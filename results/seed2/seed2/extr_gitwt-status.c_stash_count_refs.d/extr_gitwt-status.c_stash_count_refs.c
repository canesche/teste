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
typedef  int /*<<< orphan*/  timestamp_t ;
struct object_id {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int stash_count_refs(struct object_id *ooid, struct object_id *noid,
			    const char *email, timestamp_t timestamp, int tz,
			    const char *message, void *cb_data)
{
	int *c = cb_data;
	(*c)++;
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
          int timestamp = 100;
          int tz = 100;
          int _len_ooid0 = 1;
          struct object_id * ooid = (struct object_id *) malloc(_len_ooid0*sizeof(struct object_id));
          for(int _i0 = 0; _i0 < _len_ooid0; _i0++) {
            ooid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_noid0 = 1;
          struct object_id * noid = (struct object_id *) malloc(_len_noid0*sizeof(struct object_id));
          for(int _i0 = 0; _i0 < _len_noid0; _i0++) {
            noid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_email0 = 1;
          const char * email = (const char *) malloc(_len_email0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_email0; _i0++) {
            email[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_message0 = 1;
          const char * message = (const char *) malloc(_len_message0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_message0; _i0++) {
            message[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * cb_data;
          int benchRet = stash_count_refs(ooid,noid,email,timestamp,tz,message,cb_data);
          printf("%d\n", benchRet); 
          free(ooid);
          free(noid);
          free(email);
          free(message);
        
        break;
    }
    // big-arr
    case 1:
    {
          int timestamp = 255;
          int tz = 255;
          int _len_ooid0 = 65025;
          struct object_id * ooid = (struct object_id *) malloc(_len_ooid0*sizeof(struct object_id));
          for(int _i0 = 0; _i0 < _len_ooid0; _i0++) {
            ooid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_noid0 = 65025;
          struct object_id * noid = (struct object_id *) malloc(_len_noid0*sizeof(struct object_id));
          for(int _i0 = 0; _i0 < _len_noid0; _i0++) {
            noid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_email0 = 65025;
          const char * email = (const char *) malloc(_len_email0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_email0; _i0++) {
            email[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_message0 = 65025;
          const char * message = (const char *) malloc(_len_message0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_message0; _i0++) {
            message[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * cb_data;
          int benchRet = stash_count_refs(ooid,noid,email,timestamp,tz,message,cb_data);
          printf("%d\n", benchRet); 
          free(ooid);
          free(noid);
          free(email);
          free(message);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int timestamp = 10;
          int tz = 10;
          int _len_ooid0 = 100;
          struct object_id * ooid = (struct object_id *) malloc(_len_ooid0*sizeof(struct object_id));
          for(int _i0 = 0; _i0 < _len_ooid0; _i0++) {
            ooid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_noid0 = 100;
          struct object_id * noid = (struct object_id *) malloc(_len_noid0*sizeof(struct object_id));
          for(int _i0 = 0; _i0 < _len_noid0; _i0++) {
            noid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_email0 = 100;
          const char * email = (const char *) malloc(_len_email0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_email0; _i0++) {
            email[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_message0 = 100;
          const char * message = (const char *) malloc(_len_message0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_message0; _i0++) {
            message[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * cb_data;
          int benchRet = stash_count_refs(ooid,noid,email,timestamp,tz,message,cb_data);
          printf("%d\n", benchRet); 
          free(ooid);
          free(noid);
          free(email);
          free(message);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
