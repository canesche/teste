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
typedef  int /*<<< orphan*/  ENetProtocol ;
typedef  int /*<<< orphan*/  ENetPeer ;
typedef  int /*<<< orphan*/  ENetHost ;

/* Variables and functions */

__attribute__((used)) static int
enet_protocol_handle_ping (ENetHost * host, ENetPeer * peer, const ENetProtocol * command)
{
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
          int _len_host0 = 1;
          int * host = (int *) malloc(_len_host0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer0 = 1;
          int * peer = (int *) malloc(_len_peer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
            peer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_command0 = 1;
          const int * command = (const int *) malloc(_len_command0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_command0; _i0++) {
            command[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = enet_protocol_handle_ping(host,peer,command);
          printf("%d\n", benchRet); 
          free(host);
          free(peer);
          free(command);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          int * host = (int *) malloc(_len_host0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer0 = 65025;
          int * peer = (int *) malloc(_len_peer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
            peer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_command0 = 65025;
          const int * command = (const int *) malloc(_len_command0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_command0; _i0++) {
            command[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = enet_protocol_handle_ping(host,peer,command);
          printf("%d\n", benchRet); 
          free(host);
          free(peer);
          free(command);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          int * host = (int *) malloc(_len_host0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer0 = 100;
          int * peer = (int *) malloc(_len_peer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
            peer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_command0 = 100;
          const int * command = (const int *) malloc(_len_command0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_command0; _i0++) {
            command[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = enet_protocol_handle_ping(host,peer,command);
          printf("%d\n", benchRet); 
          free(host);
          free(peer);
          free(command);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
