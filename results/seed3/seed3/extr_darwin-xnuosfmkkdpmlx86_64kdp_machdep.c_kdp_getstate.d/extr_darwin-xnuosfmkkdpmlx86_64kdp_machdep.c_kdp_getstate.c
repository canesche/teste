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
typedef  struct TYPE_9__   TYPE_5__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int /*<<< orphan*/  gs; int /*<<< orphan*/  fs; int /*<<< orphan*/  cs; int /*<<< orphan*/  rip; int /*<<< orphan*/  rflags; int /*<<< orphan*/  rsp; int /*<<< orphan*/  r15; int /*<<< orphan*/  r14; int /*<<< orphan*/  r13; int /*<<< orphan*/  r12; int /*<<< orphan*/  r11; int /*<<< orphan*/  r10; int /*<<< orphan*/  r9; int /*<<< orphan*/  r8; int /*<<< orphan*/  rbp; int /*<<< orphan*/  rsi; int /*<<< orphan*/  rdi; int /*<<< orphan*/  rdx; int /*<<< orphan*/  rcx; int /*<<< orphan*/  rbx; int /*<<< orphan*/  rax; } ;
typedef  TYPE_2__ x86_thread_state64_t ;
struct TYPE_6__ {int /*<<< orphan*/  cs; int /*<<< orphan*/  rip; int /*<<< orphan*/  rflags; int /*<<< orphan*/  rsp; } ;
struct TYPE_8__ {int /*<<< orphan*/  gs; int /*<<< orphan*/  fs; TYPE_1__ isf; int /*<<< orphan*/  r15; int /*<<< orphan*/  r14; int /*<<< orphan*/  r13; int /*<<< orphan*/  r12; int /*<<< orphan*/  r11; int /*<<< orphan*/  r10; int /*<<< orphan*/  r9; int /*<<< orphan*/  r8; int /*<<< orphan*/  rbp; int /*<<< orphan*/  rsi; int /*<<< orphan*/  rdi; int /*<<< orphan*/  rdx; int /*<<< orphan*/  rcx; int /*<<< orphan*/  rbx; int /*<<< orphan*/  rax; } ;
typedef  TYPE_3__ x86_saved_state64_t ;
struct TYPE_9__ {scalar_t__ saved_state; } ;

/* Variables and functions */
 TYPE_5__ kdp ; 

void
kdp_getstate(
    x86_thread_state64_t	*state
)
{
    x86_saved_state64_t	*saved_state;
    
    saved_state = (x86_saved_state64_t *)kdp.saved_state;
    
    state->rax = saved_state->rax;
    state->rbx = saved_state->rbx;
    state->rcx = saved_state->rcx;
    state->rdx = saved_state->rdx;
    state->rdi = saved_state->rdi;
    state->rsi = saved_state->rsi;
    state->rbp = saved_state->rbp;

    state->r8  = saved_state->r8;
    state->r9  = saved_state->r9;
    state->r10 = saved_state->r10;
    state->r11 = saved_state->r11;
    state->r12 = saved_state->r12;
    state->r13 = saved_state->r13;
    state->r14 = saved_state->r14;
    state->r15 = saved_state->r15;
    
    state->rsp = saved_state->isf.rsp;
    state->rflags = saved_state->isf.rflags;
    state->rip = saved_state->isf.rip;

    state->cs = saved_state->isf.cs;
    state->fs = saved_state->fs;
    state->gs = saved_state->gs;
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
          int _len_state0 = 1;
          struct TYPE_7__ * state = (struct TYPE_7__ *) malloc(_len_state0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].gs = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].fs = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rip = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rflags = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rsp = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r15 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r14 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r13 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r12 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r11 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r10 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r9 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r8 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rbp = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rsi = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rdi = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rdx = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rcx = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rbx = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kdp_getstate(state);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct TYPE_7__ * state = (struct TYPE_7__ *) malloc(_len_state0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].gs = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].fs = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rip = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rflags = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rsp = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r15 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r14 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r13 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r12 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r11 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r10 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r9 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r8 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rbp = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rsi = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rdi = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rdx = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rcx = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rbx = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kdp_getstate(state);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct TYPE_7__ * state = (struct TYPE_7__ *) malloc(_len_state0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].gs = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].fs = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rip = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rflags = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rsp = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r15 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r14 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r13 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r12 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r11 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r10 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r9 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].r8 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rbp = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rsi = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rdi = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rdx = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rcx = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rbx = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kdp_getstate(state);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
