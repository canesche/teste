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
typedef  struct TYPE_17__   TYPE_7__ ;
typedef  struct TYPE_16__   TYPE_6__ ;
typedef  struct TYPE_15__   TYPE_5__ ;
typedef  struct TYPE_14__   TYPE_4__ ;
typedef  struct TYPE_13__   TYPE_3__ ;
typedef  struct TYPE_12__   TYPE_2__ ;
typedef  struct TYPE_11__   TYPE_1__ ;

/* Type definitions */
typedef  int int64_t ;
struct TYPE_17__ {TYPE_4__* oc; } ;
struct TYPE_11__ {int** gain; } ;
struct TYPE_16__ {TYPE_2__* ch; TYPE_1__ coup; } ;
struct TYPE_15__ {unsigned int* ret; } ;
struct TYPE_13__ {int sbr; } ;
struct TYPE_14__ {TYPE_3__ m4ac; } ;
struct TYPE_12__ {int* ret; } ;
typedef  TYPE_5__ SingleChannelElement ;
typedef  TYPE_6__ ChannelElement ;
typedef  TYPE_7__ AACContext ;

/* Variables and functions */
 int* cce_scale_fixed ; 

__attribute__((used)) static void apply_independent_coupling_fixed(AACContext *ac,
                                       SingleChannelElement *target,
                                       ChannelElement *cce, int index)
{
    int i, c, shift, round, tmp;
    const int gain = cce->coup.gain[index][0];
    const int *src = cce->ch[0].ret;
    unsigned int *dest = target->ret;
    const int len = 1024 << (ac->oc[1].m4ac.sbr == 1);

    c = cce_scale_fixed[gain & 7];
    shift = (gain-1024) >> 3;
    if (shift < -31) {
        return;
    } else if (shift < 0) {
        shift = -shift;
        round = 1 << (shift - 1);

        for (i = 0; i < len; i++) {
            tmp = (int)(((int64_t)src[i] * c + (int64_t)0x1000000000) >> 37);
            dest[i] += (tmp + round) >> shift;
        }
    }
    else {
      for (i = 0; i < len; i++) {
          tmp = (int)(((int64_t)src[i] * c + (int64_t)0x1000000000) >> 37);
          dest[i] += tmp * (1U << shift);
      }
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
          int index = 100;
          int _len_ac0 = 1;
          struct TYPE_17__ * ac = (struct TYPE_17__ *) malloc(_len_ac0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_ac0; _i0++) {
              int _len_ac__i0__oc0 = 1;
          ac[_i0].oc = (struct TYPE_14__ *) malloc(_len_ac__i0__oc0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_ac__i0__oc0; _j0++) {
            ac[_i0].oc->m4ac.sbr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_target0 = 1;
          struct TYPE_15__ * target = (struct TYPE_15__ *) malloc(_len_target0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              int _len_target__i0__ret0 = 1;
          target[_i0].ret = (unsigned int *) malloc(_len_target__i0__ret0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_target__i0__ret0; _j0++) {
            target[_i0].ret[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cce0 = 1;
          struct TYPE_16__ * cce = (struct TYPE_16__ *) malloc(_len_cce0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_cce0; _i0++) {
              int _len_cce__i0__ch0 = 1;
          cce[_i0].ch = (struct TYPE_12__ *) malloc(_len_cce__i0__ch0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_cce__i0__ch0; _j0++) {
              int _len_cce__i0__ch_ret0 = 1;
          cce[_i0].ch->ret = (int *) malloc(_len_cce__i0__ch_ret0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cce__i0__ch_ret0; _j0++) {
            cce[_i0].ch->ret[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cce__i0__coup_gain0 = 1;
          cce[_i0].coup.gain = (int **) malloc(_len_cce__i0__coup_gain0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_cce__i0__coup_gain0; _j0++) {
            int _len_cce__i0__coup_gain1 = 1;
            cce[_i0].coup.gain[_j0] = (int *) malloc(_len_cce__i0__coup_gain1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_cce__i0__coup_gain1; _j1++) {
              cce[_i0].coup.gain[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          apply_independent_coupling_fixed(ac,target,cce,index);
          for(int _aux = 0; _aux < _len_ac0; _aux++) {
          free(ac[_aux].oc);
          }
          free(ac);
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].ret);
          }
          free(target);
          for(int _aux = 0; _aux < _len_cce0; _aux++) {
          free(cce[_aux].ch);
          }
          free(cce);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_ac0 = 65025;
          struct TYPE_17__ * ac = (struct TYPE_17__ *) malloc(_len_ac0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_ac0; _i0++) {
              int _len_ac__i0__oc0 = 1;
          ac[_i0].oc = (struct TYPE_14__ *) malloc(_len_ac__i0__oc0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_ac__i0__oc0; _j0++) {
            ac[_i0].oc->m4ac.sbr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_target0 = 65025;
          struct TYPE_15__ * target = (struct TYPE_15__ *) malloc(_len_target0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              int _len_target__i0__ret0 = 1;
          target[_i0].ret = (unsigned int *) malloc(_len_target__i0__ret0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_target__i0__ret0; _j0++) {
            target[_i0].ret[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cce0 = 65025;
          struct TYPE_16__ * cce = (struct TYPE_16__ *) malloc(_len_cce0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_cce0; _i0++) {
              int _len_cce__i0__ch0 = 1;
          cce[_i0].ch = (struct TYPE_12__ *) malloc(_len_cce__i0__ch0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_cce__i0__ch0; _j0++) {
              int _len_cce__i0__ch_ret0 = 1;
          cce[_i0].ch->ret = (int *) malloc(_len_cce__i0__ch_ret0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cce__i0__ch_ret0; _j0++) {
            cce[_i0].ch->ret[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cce__i0__coup_gain0 = 1;
          cce[_i0].coup.gain = (int **) malloc(_len_cce__i0__coup_gain0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_cce__i0__coup_gain0; _j0++) {
            int _len_cce__i0__coup_gain1 = 1;
            cce[_i0].coup.gain[_j0] = (int *) malloc(_len_cce__i0__coup_gain1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_cce__i0__coup_gain1; _j1++) {
              cce[_i0].coup.gain[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          apply_independent_coupling_fixed(ac,target,cce,index);
          for(int _aux = 0; _aux < _len_ac0; _aux++) {
          free(ac[_aux].oc);
          }
          free(ac);
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].ret);
          }
          free(target);
          for(int _aux = 0; _aux < _len_cce0; _aux++) {
          free(cce[_aux].ch);
          }
          free(cce);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_ac0 = 100;
          struct TYPE_17__ * ac = (struct TYPE_17__ *) malloc(_len_ac0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_ac0; _i0++) {
              int _len_ac__i0__oc0 = 1;
          ac[_i0].oc = (struct TYPE_14__ *) malloc(_len_ac__i0__oc0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_ac__i0__oc0; _j0++) {
            ac[_i0].oc->m4ac.sbr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_target0 = 100;
          struct TYPE_15__ * target = (struct TYPE_15__ *) malloc(_len_target0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              int _len_target__i0__ret0 = 1;
          target[_i0].ret = (unsigned int *) malloc(_len_target__i0__ret0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_target__i0__ret0; _j0++) {
            target[_i0].ret[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cce0 = 100;
          struct TYPE_16__ * cce = (struct TYPE_16__ *) malloc(_len_cce0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_cce0; _i0++) {
              int _len_cce__i0__ch0 = 1;
          cce[_i0].ch = (struct TYPE_12__ *) malloc(_len_cce__i0__ch0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_cce__i0__ch0; _j0++) {
              int _len_cce__i0__ch_ret0 = 1;
          cce[_i0].ch->ret = (int *) malloc(_len_cce__i0__ch_ret0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cce__i0__ch_ret0; _j0++) {
            cce[_i0].ch->ret[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cce__i0__coup_gain0 = 1;
          cce[_i0].coup.gain = (int **) malloc(_len_cce__i0__coup_gain0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_cce__i0__coup_gain0; _j0++) {
            int _len_cce__i0__coup_gain1 = 1;
            cce[_i0].coup.gain[_j0] = (int *) malloc(_len_cce__i0__coup_gain1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_cce__i0__coup_gain1; _j1++) {
              cce[_i0].coup.gain[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          apply_independent_coupling_fixed(ac,target,cce,index);
          for(int _aux = 0; _aux < _len_ac0; _aux++) {
          free(ac[_aux].oc);
          }
          free(ac);
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].ret);
          }
          free(target);
          for(int _aux = 0; _aux < _len_cce0; _aux++) {
          free(cce[_aux].ch);
          }
          free(cce);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
