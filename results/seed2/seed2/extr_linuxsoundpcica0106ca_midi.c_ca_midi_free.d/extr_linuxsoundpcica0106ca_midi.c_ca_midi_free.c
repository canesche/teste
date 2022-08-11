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
struct snd_ca_midi {int /*<<< orphan*/ * rmidi; int /*<<< orphan*/ * get_dev_id_port; int /*<<< orphan*/ * get_dev_id_card; int /*<<< orphan*/ * write; int /*<<< orphan*/ * read; int /*<<< orphan*/ * interrupt_disable; int /*<<< orphan*/ * interrupt_enable; int /*<<< orphan*/ * interrupt; } ;

/* Variables and functions */

__attribute__((used)) static void ca_midi_free(struct snd_ca_midi *midi)
{
	midi->interrupt = NULL;
	midi->interrupt_enable = NULL;
	midi->interrupt_disable = NULL;
	midi->read = NULL;
	midi->write = NULL;
	midi->get_dev_id_card = NULL;
	midi->get_dev_id_port = NULL;
	midi->rmidi = NULL;
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
          int _len_midi0 = 1;
          struct snd_ca_midi * midi = (struct snd_ca_midi *) malloc(_len_midi0*sizeof(struct snd_ca_midi));
          for(int _i0 = 0; _i0 < _len_midi0; _i0++) {
              int _len_midi__i0__rmidi0 = 1;
          midi[_i0].rmidi = (int *) malloc(_len_midi__i0__rmidi0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__rmidi0; _j0++) {
            midi[_i0].rmidi[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__get_dev_id_port0 = 1;
          midi[_i0].get_dev_id_port = (int *) malloc(_len_midi__i0__get_dev_id_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__get_dev_id_port0; _j0++) {
            midi[_i0].get_dev_id_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__get_dev_id_card0 = 1;
          midi[_i0].get_dev_id_card = (int *) malloc(_len_midi__i0__get_dev_id_card0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__get_dev_id_card0; _j0++) {
            midi[_i0].get_dev_id_card[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__write0 = 1;
          midi[_i0].write = (int *) malloc(_len_midi__i0__write0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__write0; _j0++) {
            midi[_i0].write[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__read0 = 1;
          midi[_i0].read = (int *) malloc(_len_midi__i0__read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__read0; _j0++) {
            midi[_i0].read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__interrupt_disable0 = 1;
          midi[_i0].interrupt_disable = (int *) malloc(_len_midi__i0__interrupt_disable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__interrupt_disable0; _j0++) {
            midi[_i0].interrupt_disable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__interrupt_enable0 = 1;
          midi[_i0].interrupt_enable = (int *) malloc(_len_midi__i0__interrupt_enable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__interrupt_enable0; _j0++) {
            midi[_i0].interrupt_enable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__interrupt0 = 1;
          midi[_i0].interrupt = (int *) malloc(_len_midi__i0__interrupt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__interrupt0; _j0++) {
            midi[_i0].interrupt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ca_midi_free(midi);
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].rmidi);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].get_dev_id_port);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].get_dev_id_card);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].write);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].read);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].interrupt_disable);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].interrupt_enable);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].interrupt);
          }
          free(midi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_midi0 = 65025;
          struct snd_ca_midi * midi = (struct snd_ca_midi *) malloc(_len_midi0*sizeof(struct snd_ca_midi));
          for(int _i0 = 0; _i0 < _len_midi0; _i0++) {
              int _len_midi__i0__rmidi0 = 1;
          midi[_i0].rmidi = (int *) malloc(_len_midi__i0__rmidi0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__rmidi0; _j0++) {
            midi[_i0].rmidi[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__get_dev_id_port0 = 1;
          midi[_i0].get_dev_id_port = (int *) malloc(_len_midi__i0__get_dev_id_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__get_dev_id_port0; _j0++) {
            midi[_i0].get_dev_id_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__get_dev_id_card0 = 1;
          midi[_i0].get_dev_id_card = (int *) malloc(_len_midi__i0__get_dev_id_card0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__get_dev_id_card0; _j0++) {
            midi[_i0].get_dev_id_card[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__write0 = 1;
          midi[_i0].write = (int *) malloc(_len_midi__i0__write0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__write0; _j0++) {
            midi[_i0].write[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__read0 = 1;
          midi[_i0].read = (int *) malloc(_len_midi__i0__read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__read0; _j0++) {
            midi[_i0].read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__interrupt_disable0 = 1;
          midi[_i0].interrupt_disable = (int *) malloc(_len_midi__i0__interrupt_disable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__interrupt_disable0; _j0++) {
            midi[_i0].interrupt_disable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__interrupt_enable0 = 1;
          midi[_i0].interrupt_enable = (int *) malloc(_len_midi__i0__interrupt_enable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__interrupt_enable0; _j0++) {
            midi[_i0].interrupt_enable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__interrupt0 = 1;
          midi[_i0].interrupt = (int *) malloc(_len_midi__i0__interrupt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__interrupt0; _j0++) {
            midi[_i0].interrupt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ca_midi_free(midi);
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].rmidi);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].get_dev_id_port);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].get_dev_id_card);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].write);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].read);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].interrupt_disable);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].interrupt_enable);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].interrupt);
          }
          free(midi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_midi0 = 100;
          struct snd_ca_midi * midi = (struct snd_ca_midi *) malloc(_len_midi0*sizeof(struct snd_ca_midi));
          for(int _i0 = 0; _i0 < _len_midi0; _i0++) {
              int _len_midi__i0__rmidi0 = 1;
          midi[_i0].rmidi = (int *) malloc(_len_midi__i0__rmidi0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__rmidi0; _j0++) {
            midi[_i0].rmidi[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__get_dev_id_port0 = 1;
          midi[_i0].get_dev_id_port = (int *) malloc(_len_midi__i0__get_dev_id_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__get_dev_id_port0; _j0++) {
            midi[_i0].get_dev_id_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__get_dev_id_card0 = 1;
          midi[_i0].get_dev_id_card = (int *) malloc(_len_midi__i0__get_dev_id_card0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__get_dev_id_card0; _j0++) {
            midi[_i0].get_dev_id_card[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__write0 = 1;
          midi[_i0].write = (int *) malloc(_len_midi__i0__write0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__write0; _j0++) {
            midi[_i0].write[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__read0 = 1;
          midi[_i0].read = (int *) malloc(_len_midi__i0__read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__read0; _j0++) {
            midi[_i0].read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__interrupt_disable0 = 1;
          midi[_i0].interrupt_disable = (int *) malloc(_len_midi__i0__interrupt_disable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__interrupt_disable0; _j0++) {
            midi[_i0].interrupt_disable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__interrupt_enable0 = 1;
          midi[_i0].interrupt_enable = (int *) malloc(_len_midi__i0__interrupt_enable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__interrupt_enable0; _j0++) {
            midi[_i0].interrupt_enable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_midi__i0__interrupt0 = 1;
          midi[_i0].interrupt = (int *) malloc(_len_midi__i0__interrupt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_midi__i0__interrupt0; _j0++) {
            midi[_i0].interrupt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ca_midi_free(midi);
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].rmidi);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].get_dev_id_port);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].get_dev_id_card);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].write);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].read);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].interrupt_disable);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].interrupt_enable);
          }
          for(int _aux = 0; _aux < _len_midi0; _aux++) {
          free(midi[_aux].interrupt);
          }
          free(midi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
