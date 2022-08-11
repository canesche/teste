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
typedef  size_t uint32_t ;
typedef  size_t int32_t ;
struct TYPE_5__ {scalar_t__ num_chats; TYPE_1__* chats; } ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef  TYPE_2__ Group_Chats ;

/* Variables and functions */
 scalar_t__ GROUPCHAT_STATUS_NONE ; 

uint32_t copy_chatlist(Group_Chats *g_c, int32_t *out_list, uint32_t list_size)
{
    if (!out_list) {
        return 0;
    }

    if (g_c->num_chats == 0) {
        return 0;
    }

    uint32_t i, ret = 0;

    for (i = 0; i < g_c->num_chats; ++i) {
        if (ret >= list_size) {
            break;  /* Abandon ship */
        }

        if (g_c->chats[i].status > GROUPCHAT_STATUS_NONE) {
            out_list[ret] = i;
            ret++;
        }
    }

    return ret;
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
          unsigned long list_size = 100;
          int _len_g_c0 = 1;
          struct TYPE_5__ * g_c = (struct TYPE_5__ *) malloc(_len_g_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_g_c0; _i0++) {
            g_c[_i0].num_chats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g_c__i0__chats0 = 1;
          g_c[_i0].chats = (struct TYPE_4__ *) malloc(_len_g_c__i0__chats0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_g_c__i0__chats0; _j0++) {
            g_c[_i0].chats->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out_list0 = 1;
          unsigned long * out_list = (unsigned long *) malloc(_len_out_list0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_list0; _i0++) {
            out_list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = copy_chatlist(g_c,out_list,list_size);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_g_c0; _aux++) {
          free(g_c[_aux].chats);
          }
          free(g_c);
          free(out_list);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long list_size = 255;
          int _len_g_c0 = 65025;
          struct TYPE_5__ * g_c = (struct TYPE_5__ *) malloc(_len_g_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_g_c0; _i0++) {
            g_c[_i0].num_chats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g_c__i0__chats0 = 1;
          g_c[_i0].chats = (struct TYPE_4__ *) malloc(_len_g_c__i0__chats0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_g_c__i0__chats0; _j0++) {
            g_c[_i0].chats->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out_list0 = 65025;
          unsigned long * out_list = (unsigned long *) malloc(_len_out_list0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_list0; _i0++) {
            out_list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = copy_chatlist(g_c,out_list,list_size);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_g_c0; _aux++) {
          free(g_c[_aux].chats);
          }
          free(g_c);
          free(out_list);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long list_size = 10;
          int _len_g_c0 = 100;
          struct TYPE_5__ * g_c = (struct TYPE_5__ *) malloc(_len_g_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_g_c0; _i0++) {
            g_c[_i0].num_chats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g_c__i0__chats0 = 1;
          g_c[_i0].chats = (struct TYPE_4__ *) malloc(_len_g_c__i0__chats0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_g_c__i0__chats0; _j0++) {
            g_c[_i0].chats->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out_list0 = 100;
          unsigned long * out_list = (unsigned long *) malloc(_len_out_list0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_list0; _i0++) {
            out_list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = copy_chatlist(g_c,out_list,list_size);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_g_c0; _aux++) {
          free(g_c[_aux].chats);
          }
          free(g_c);
          free(out_list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
