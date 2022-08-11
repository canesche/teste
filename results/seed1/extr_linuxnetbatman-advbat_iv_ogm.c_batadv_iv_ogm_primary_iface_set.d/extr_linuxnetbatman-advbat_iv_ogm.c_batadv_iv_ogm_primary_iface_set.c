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
struct batadv_ogm_packet {int /*<<< orphan*/  ttl; } ;
struct TYPE_2__ {unsigned char* ogm_buff; } ;
struct batadv_hard_iface {TYPE_1__ bat_iv; } ;

/* Variables and functions */
 int /*<<< orphan*/  BATADV_TTL ; 

__attribute__((used)) static void
batadv_iv_ogm_primary_iface_set(struct batadv_hard_iface *hard_iface)
{
	struct batadv_ogm_packet *batadv_ogm_packet;
	unsigned char *ogm_buff = hard_iface->bat_iv.ogm_buff;

	batadv_ogm_packet = (struct batadv_ogm_packet *)ogm_buff;
	batadv_ogm_packet->ttl = BATADV_TTL;
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
          int _len_hard_iface0 = 1;
          struct batadv_hard_iface * hard_iface = (struct batadv_hard_iface *) malloc(_len_hard_iface0*sizeof(struct batadv_hard_iface));
          for(int _i0 = 0; _i0 < _len_hard_iface0; _i0++) {
              int _len_hard_iface__i0__bat_iv_ogm_buff0 = 1;
          hard_iface[_i0].bat_iv.ogm_buff = (unsigned char *) malloc(_len_hard_iface__i0__bat_iv_ogm_buff0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_hard_iface__i0__bat_iv_ogm_buff0; _j0++) {
            hard_iface[_i0].bat_iv.ogm_buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          batadv_iv_ogm_primary_iface_set(hard_iface);
          free(hard_iface);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hard_iface0 = 65025;
          struct batadv_hard_iface * hard_iface = (struct batadv_hard_iface *) malloc(_len_hard_iface0*sizeof(struct batadv_hard_iface));
          for(int _i0 = 0; _i0 < _len_hard_iface0; _i0++) {
              int _len_hard_iface__i0__bat_iv_ogm_buff0 = 1;
          hard_iface[_i0].bat_iv.ogm_buff = (unsigned char *) malloc(_len_hard_iface__i0__bat_iv_ogm_buff0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_hard_iface__i0__bat_iv_ogm_buff0; _j0++) {
            hard_iface[_i0].bat_iv.ogm_buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          batadv_iv_ogm_primary_iface_set(hard_iface);
          free(hard_iface);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hard_iface0 = 100;
          struct batadv_hard_iface * hard_iface = (struct batadv_hard_iface *) malloc(_len_hard_iface0*sizeof(struct batadv_hard_iface));
          for(int _i0 = 0; _i0 < _len_hard_iface0; _i0++) {
              int _len_hard_iface__i0__bat_iv_ogm_buff0 = 1;
          hard_iface[_i0].bat_iv.ogm_buff = (unsigned char *) malloc(_len_hard_iface__i0__bat_iv_ogm_buff0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_hard_iface__i0__bat_iv_ogm_buff0; _j0++) {
            hard_iface[_i0].bat_iv.ogm_buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          batadv_iv_ogm_primary_iface_set(hard_iface);
          free(hard_iface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
