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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned int time_total; unsigned int inter_packet; unsigned int inter_packet_jumbo; } ;
struct TYPE_4__ {TYPE_1__ blkt; } ;
struct qeth_card {TYPE_2__ info; } ;

/* Variables and functions */
 char* _ascebc ; 

__attribute__((used)) static void qeth_create_qib_param_field_blkt(struct qeth_card *card,
		char *param_field)
{
	param_field[16] = _ascebc['B'];
	param_field[17] = _ascebc['L'];
	param_field[18] = _ascebc['K'];
	param_field[19] = _ascebc['T'];
	*((unsigned int *) (&param_field[20])) = card->info.blkt.time_total;
	*((unsigned int *) (&param_field[24])) = card->info.blkt.inter_packet;
	*((unsigned int *) (&param_field[28])) =
		card->info.blkt.inter_packet_jumbo;
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
          int _len_card0 = 1;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].info.blkt.time_total = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].info.blkt.inter_packet = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].info.blkt.inter_packet_jumbo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param_field0 = 1;
          char * param_field = (char *) malloc(_len_param_field0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_param_field0; _i0++) {
            param_field[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qeth_create_qib_param_field_blkt(card,param_field);
          free(card);
          free(param_field);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_card0 = 65025;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].info.blkt.time_total = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].info.blkt.inter_packet = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].info.blkt.inter_packet_jumbo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param_field0 = 65025;
          char * param_field = (char *) malloc(_len_param_field0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_param_field0; _i0++) {
            param_field[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qeth_create_qib_param_field_blkt(card,param_field);
          free(card);
          free(param_field);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_card0 = 100;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].info.blkt.time_total = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].info.blkt.inter_packet = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].info.blkt.inter_packet_jumbo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param_field0 = 100;
          char * param_field = (char *) malloc(_len_param_field0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_param_field0; _i0++) {
            param_field[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qeth_create_qib_param_field_blkt(card,param_field);
          free(card);
          free(param_field);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
