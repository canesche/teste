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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int length; int* data; } ;
typedef  TYPE_1__ mqtt_message_t ;
struct TYPE_6__ {int* buffer; TYPE_1__ message; } ;
typedef  TYPE_2__ mqtt_connection_t ;

/* Variables and functions */
 int MQTT_MAX_FIXED_HEADER_SIZE ; 

__attribute__((used)) static mqtt_message_t* fini_message(mqtt_connection_t* connection, int type, int dup, int qos, int retain)
{
  int remaining_length = connection->message.length - MQTT_MAX_FIXED_HEADER_SIZE;

  if(remaining_length > 127)
  {
    connection->buffer[0] = ((type & 0x0f) << 4) | ((dup & 1) << 3) | ((qos & 3) << 1) | (retain & 1);
    connection->buffer[1] = 0x80 | (remaining_length % 128);
    connection->buffer[2] = remaining_length / 128;
    connection->message.length = remaining_length + 3;
    connection->message.data = connection->buffer;
  }
  else
  {
    connection->buffer[1] = ((type & 0x0f) << 4) | ((dup & 1) << 3) | ((qos & 3) << 1) | (retain & 1);
    connection->buffer[2] = remaining_length;
    connection->message.length = remaining_length + 2;
    connection->message.data = connection->buffer + 1;
  }

  return &connection->message;
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
          int type = 100;
          int dup = 100;
          int qos = 100;
          int retain = 100;
          int _len_connection0 = 1;
          struct TYPE_6__ * connection = (struct TYPE_6__ *) malloc(_len_connection0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_connection0; _i0++) {
              int _len_connection__i0__buffer0 = 1;
          connection[_i0].buffer = (int *) malloc(_len_connection__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_connection__i0__buffer0; _j0++) {
            connection[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        connection[_i0].message.length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_connection__i0__message_data0 = 1;
          connection[_i0].message.data = (int *) malloc(_len_connection__i0__message_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_connection__i0__message_data0; _j0++) {
            connection[_i0].message.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_5__ * benchRet = fini_message(connection,type,dup,qos,retain);
          printf("%d\n", (*benchRet).length);
          for(int _aux = 0; _aux < _len_connection0; _aux++) {
          free(connection[_aux].buffer);
          }
          free(connection);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int dup = 255;
          int qos = 255;
          int retain = 255;
          int _len_connection0 = 65025;
          struct TYPE_6__ * connection = (struct TYPE_6__ *) malloc(_len_connection0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_connection0; _i0++) {
              int _len_connection__i0__buffer0 = 1;
          connection[_i0].buffer = (int *) malloc(_len_connection__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_connection__i0__buffer0; _j0++) {
            connection[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        connection[_i0].message.length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_connection__i0__message_data0 = 1;
          connection[_i0].message.data = (int *) malloc(_len_connection__i0__message_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_connection__i0__message_data0; _j0++) {
            connection[_i0].message.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_5__ * benchRet = fini_message(connection,type,dup,qos,retain);
          printf("%d\n", (*benchRet).length);
          for(int _aux = 0; _aux < _len_connection0; _aux++) {
          free(connection[_aux].buffer);
          }
          free(connection);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int dup = 10;
          int qos = 10;
          int retain = 10;
          int _len_connection0 = 100;
          struct TYPE_6__ * connection = (struct TYPE_6__ *) malloc(_len_connection0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_connection0; _i0++) {
              int _len_connection__i0__buffer0 = 1;
          connection[_i0].buffer = (int *) malloc(_len_connection__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_connection__i0__buffer0; _j0++) {
            connection[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        connection[_i0].message.length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_connection__i0__message_data0 = 1;
          connection[_i0].message.data = (int *) malloc(_len_connection__i0__message_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_connection__i0__message_data0; _j0++) {
            connection[_i0].message.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_5__ * benchRet = fini_message(connection,type,dup,qos,retain);
          printf("%d\n", (*benchRet).length);
          for(int _aux = 0; _aux < _len_connection0; _aux++) {
          free(connection[_aux].buffer);
          }
          free(connection);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
