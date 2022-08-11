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
struct lpfc_vport {int /*<<< orphan*/  port_state; struct fc_vport* fc_vport; } ;
struct fc_vport {int vport_last_state; int vport_state; } ;
typedef  enum fc_vport_state { ____Placeholder_fc_vport_state } fc_vport_state ;

/* Variables and functions */
#define  FC_VPORT_FABRIC_LOGOUT 133 
#define  FC_VPORT_FABRIC_REJ_WWN 132 
#define  FC_VPORT_FAILED 131 
 int FC_VPORT_INITIALIZING ; 
#define  FC_VPORT_LINKDOWN 130 
#define  FC_VPORT_NO_FABRIC_RSCS 129 
#define  FC_VPORT_NO_FABRIC_SUPP 128 
 int /*<<< orphan*/  LPFC_VPORT_FAILED ; 
 int /*<<< orphan*/  LPFC_VPORT_UNKNOWN ; 

inline void lpfc_vport_set_state(struct lpfc_vport *vport,
				 enum fc_vport_state new_state)
{
	struct fc_vport *fc_vport = vport->fc_vport;

	if (fc_vport) {
		/*
		 * When the transport defines fc_vport_set state we will replace
		 * this code with the following line
		 */
		/* fc_vport_set_state(fc_vport, new_state); */
		if (new_state != FC_VPORT_INITIALIZING)
			fc_vport->vport_last_state = fc_vport->vport_state;
		fc_vport->vport_state = new_state;
	}

	/* for all the error states we will set the invternal state to FAILED */
	switch (new_state) {
	case FC_VPORT_NO_FABRIC_SUPP:
	case FC_VPORT_NO_FABRIC_RSCS:
	case FC_VPORT_FABRIC_LOGOUT:
	case FC_VPORT_FABRIC_REJ_WWN:
	case FC_VPORT_FAILED:
		vport->port_state = LPFC_VPORT_FAILED;
		break;
	case FC_VPORT_LINKDOWN:
		vport->port_state = LPFC_VPORT_UNKNOWN;
		break;
	default:
		/* do nothing */
		break;
	}
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
          enum fc_vport_state new_state = 0;
          int _len_vport0 = 1;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
            vport[_i0].port_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vport__i0__fc_vport0 = 1;
          vport[_i0].fc_vport = (struct fc_vport *) malloc(_len_vport__i0__fc_vport0*sizeof(struct fc_vport));
          for(int _j0 = 0; _j0 < _len_vport__i0__fc_vport0; _j0++) {
            vport[_i0].fc_vport->vport_last_state = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].fc_vport->vport_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lpfc_vport_set_state(vport,new_state);
          for(int _aux = 0; _aux < _len_vport0; _aux++) {
          free(vport[_aux].fc_vport);
          }
          free(vport);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum fc_vport_state new_state = 0;
          int _len_vport0 = 65025;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
            vport[_i0].port_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vport__i0__fc_vport0 = 1;
          vport[_i0].fc_vport = (struct fc_vport *) malloc(_len_vport__i0__fc_vport0*sizeof(struct fc_vport));
          for(int _j0 = 0; _j0 < _len_vport__i0__fc_vport0; _j0++) {
            vport[_i0].fc_vport->vport_last_state = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].fc_vport->vport_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lpfc_vport_set_state(vport,new_state);
          for(int _aux = 0; _aux < _len_vport0; _aux++) {
          free(vport[_aux].fc_vport);
          }
          free(vport);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum fc_vport_state new_state = 0;
          int _len_vport0 = 100;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
            vport[_i0].port_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vport__i0__fc_vport0 = 1;
          vport[_i0].fc_vport = (struct fc_vport *) malloc(_len_vport__i0__fc_vport0*sizeof(struct fc_vport));
          for(int _j0 = 0; _j0 < _len_vport__i0__fc_vport0; _j0++) {
            vport[_i0].fc_vport->vport_last_state = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].fc_vport->vport_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lpfc_vport_set_state(vport,new_state);
          for(int _aux = 0; _aux < _len_vport0; _aux++) {
          free(vport[_aux].fc_vport);
          }
          free(vport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
