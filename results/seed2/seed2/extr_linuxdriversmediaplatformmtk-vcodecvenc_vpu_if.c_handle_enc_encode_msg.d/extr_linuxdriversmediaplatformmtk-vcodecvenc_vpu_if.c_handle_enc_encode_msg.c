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
struct venc_vpu_ipi_msg_enc {int /*<<< orphan*/  is_key_frm; int /*<<< orphan*/  bs_size; int /*<<< orphan*/  state; } ;
struct venc_vpu_inst {int /*<<< orphan*/  is_key_frm; int /*<<< orphan*/  bs_size; int /*<<< orphan*/  state; } ;

/* Variables and functions */

__attribute__((used)) static void handle_enc_encode_msg(struct venc_vpu_inst *vpu, void *data)
{
	struct venc_vpu_ipi_msg_enc *msg = data;

	vpu->state = msg->state;
	vpu->bs_size = msg->bs_size;
	vpu->is_key_frm = msg->is_key_frm;
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
          int _len_vpu0 = 1;
          struct venc_vpu_inst * vpu = (struct venc_vpu_inst *) malloc(_len_vpu0*sizeof(struct venc_vpu_inst));
          for(int _i0 = 0; _i0 < _len_vpu0; _i0++) {
            vpu[_i0].is_key_frm = ((-2 * (next_i()%2)) + 1) * next_i();
        vpu[_i0].bs_size = ((-2 * (next_i()%2)) + 1) * next_i();
        vpu[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          handle_enc_encode_msg(vpu,data);
          free(vpu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vpu0 = 65025;
          struct venc_vpu_inst * vpu = (struct venc_vpu_inst *) malloc(_len_vpu0*sizeof(struct venc_vpu_inst));
          for(int _i0 = 0; _i0 < _len_vpu0; _i0++) {
            vpu[_i0].is_key_frm = ((-2 * (next_i()%2)) + 1) * next_i();
        vpu[_i0].bs_size = ((-2 * (next_i()%2)) + 1) * next_i();
        vpu[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          handle_enc_encode_msg(vpu,data);
          free(vpu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vpu0 = 100;
          struct venc_vpu_inst * vpu = (struct venc_vpu_inst *) malloc(_len_vpu0*sizeof(struct venc_vpu_inst));
          for(int _i0 = 0; _i0 < _len_vpu0; _i0++) {
            vpu[_i0].is_key_frm = ((-2 * (next_i()%2)) + 1) * next_i();
        vpu[_i0].bs_size = ((-2 * (next_i()%2)) + 1) * next_i();
        vpu[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          handle_enc_encode_msg(vpu,data);
          free(vpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
