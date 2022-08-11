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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct pc_maint {int dummy; } ;
struct TYPE_5__ {int /*<<< orphan*/  istream_wakeup; int /*<<< orphan*/  ram_in_dw; int /*<<< orphan*/  ram_out_dw; int /*<<< orphan*/  ram_offset; int /*<<< orphan*/  ram_inc; int /*<<< orphan*/  ram_out_buffer; int /*<<< orphan*/  ram_outw; int /*<<< orphan*/  ram_out; int /*<<< orphan*/  ram_look_ahead; int /*<<< orphan*/  ram_in_buffer; int /*<<< orphan*/  ram_inw; int /*<<< orphan*/  ram_in; } ;
struct TYPE_4__ {int /*<<< orphan*/  diva_isr_handler; int /*<<< orphan*/  trapFnc; int /*<<< orphan*/  stop; int /*<<< orphan*/  rstFnc; int /*<<< orphan*/  disIrq; int /*<<< orphan*/  load; struct pc_maint* pcm; int /*<<< orphan*/  clr_irq; int /*<<< orphan*/  tst_irq; int /*<<< orphan*/  dpc; int /*<<< orphan*/  out; TYPE_2__ a; } ;
typedef  TYPE_1__* PISDN_ADAPTER ;
typedef  TYPE_2__ ADAPTER ;

/* Variables and functions */
 scalar_t__ MIPS_MAINT_OFFS ; 
 scalar_t__ MP_SHARED_RAM_OFFSET ; 
 int /*<<< orphan*/  disable_pri_interrupt ; 
 int /*<<< orphan*/  load_pri_hardware ; 
 int /*<<< orphan*/  mem_in ; 
 int /*<<< orphan*/  mem_in_buffer ; 
 int /*<<< orphan*/  mem_in_dw ; 
 int /*<<< orphan*/  mem_inc ; 
 int /*<<< orphan*/  mem_inw ; 
 int /*<<< orphan*/  mem_look_ahead ; 
 int /*<<< orphan*/  mem_out ; 
 int /*<<< orphan*/  mem_out_buffer ; 
 int /*<<< orphan*/  mem_out_dw ; 
 int /*<<< orphan*/  mem_outw ; 
 int /*<<< orphan*/  pr_dpc ; 
 int /*<<< orphan*/  pr_out ; 
 int /*<<< orphan*/  pr_stream ; 
 int /*<<< orphan*/  pri_ISR ; 
 int /*<<< orphan*/  pri_cpu_trapped ; 
 int /*<<< orphan*/  pri_ram_offset ; 
 int /*<<< orphan*/  reset_pri_hardware ; 
 int /*<<< orphan*/  scom_clear_int ; 
 int /*<<< orphan*/  scom_test_int ; 
 int /*<<< orphan*/  stop_pri_hardware ; 

__attribute__((used)) static void prepare_common_pri_functions(PISDN_ADAPTER IoAdapter) {
	ADAPTER *a = &IoAdapter->a;
	a->ram_in           = mem_in;
	a->ram_inw          = mem_inw;
	a->ram_in_buffer    = mem_in_buffer;
	a->ram_look_ahead   = mem_look_ahead;
	a->ram_out          = mem_out;
	a->ram_outw         = mem_outw;
	a->ram_out_buffer   = mem_out_buffer;
	a->ram_inc          = mem_inc;
	a->ram_offset       = pri_ram_offset;
	a->ram_out_dw    = mem_out_dw;
	a->ram_in_dw    = mem_in_dw;
	a->istream_wakeup   = pr_stream;
	IoAdapter->out      = pr_out;
	IoAdapter->dpc      = pr_dpc;
	IoAdapter->tst_irq  = scom_test_int;
	IoAdapter->clr_irq  = scom_clear_int;
	IoAdapter->pcm      = (struct pc_maint *)(MIPS_MAINT_OFFS
						  - MP_SHARED_RAM_OFFSET);
	IoAdapter->load     = load_pri_hardware;
	IoAdapter->disIrq   = disable_pri_interrupt;
	IoAdapter->rstFnc   = reset_pri_hardware;
	IoAdapter->stop     = stop_pri_hardware;
	IoAdapter->trapFnc  = pri_cpu_trapped;
	IoAdapter->diva_isr_handler = pri_ISR;
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
          int _len_IoAdapter0 = 1;
          struct TYPE_4__ * IoAdapter = (struct TYPE_4__ *) malloc(_len_IoAdapter0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_IoAdapter0; _i0++) {
            IoAdapter[_i0].diva_isr_handler = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].trapFnc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].stop = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].rstFnc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].disIrq = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].load = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_IoAdapter__i0__pcm0 = 1;
          IoAdapter[_i0].pcm = (struct pc_maint *) malloc(_len_IoAdapter__i0__pcm0*sizeof(struct pc_maint));
          for(int _j0 = 0; _j0 < _len_IoAdapter__i0__pcm0; _j0++) {
            IoAdapter[_i0].pcm->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        IoAdapter[_i0].clr_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].tst_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].dpc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].out = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.istream_wakeup = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_in_dw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_out_dw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_inc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_out_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_outw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_out = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_look_ahead = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_in_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_inw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prepare_common_pri_functions(IoAdapter);
          for(int _aux = 0; _aux < _len_IoAdapter0; _aux++) {
          free(IoAdapter[_aux].pcm);
          }
          free(IoAdapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_IoAdapter0 = 65025;
          struct TYPE_4__ * IoAdapter = (struct TYPE_4__ *) malloc(_len_IoAdapter0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_IoAdapter0; _i0++) {
            IoAdapter[_i0].diva_isr_handler = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].trapFnc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].stop = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].rstFnc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].disIrq = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].load = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_IoAdapter__i0__pcm0 = 1;
          IoAdapter[_i0].pcm = (struct pc_maint *) malloc(_len_IoAdapter__i0__pcm0*sizeof(struct pc_maint));
          for(int _j0 = 0; _j0 < _len_IoAdapter__i0__pcm0; _j0++) {
            IoAdapter[_i0].pcm->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        IoAdapter[_i0].clr_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].tst_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].dpc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].out = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.istream_wakeup = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_in_dw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_out_dw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_inc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_out_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_outw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_out = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_look_ahead = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_in_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_inw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prepare_common_pri_functions(IoAdapter);
          for(int _aux = 0; _aux < _len_IoAdapter0; _aux++) {
          free(IoAdapter[_aux].pcm);
          }
          free(IoAdapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_IoAdapter0 = 100;
          struct TYPE_4__ * IoAdapter = (struct TYPE_4__ *) malloc(_len_IoAdapter0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_IoAdapter0; _i0++) {
            IoAdapter[_i0].diva_isr_handler = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].trapFnc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].stop = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].rstFnc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].disIrq = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].load = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_IoAdapter__i0__pcm0 = 1;
          IoAdapter[_i0].pcm = (struct pc_maint *) malloc(_len_IoAdapter__i0__pcm0*sizeof(struct pc_maint));
          for(int _j0 = 0; _j0 < _len_IoAdapter__i0__pcm0; _j0++) {
            IoAdapter[_i0].pcm->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        IoAdapter[_i0].clr_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].tst_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].dpc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].out = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.istream_wakeup = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_in_dw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_out_dw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_inc = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_out_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_outw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_out = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_look_ahead = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_in_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_inw = ((-2 * (next_i()%2)) + 1) * next_i();
        IoAdapter[_i0].a.ram_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prepare_common_pri_functions(IoAdapter);
          for(int _aux = 0; _aux < _len_IoAdapter0; _aux++) {
          free(IoAdapter[_aux].pcm);
          }
          free(IoAdapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
