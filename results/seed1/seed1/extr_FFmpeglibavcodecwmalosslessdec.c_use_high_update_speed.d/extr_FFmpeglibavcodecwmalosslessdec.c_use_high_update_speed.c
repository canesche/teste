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
struct TYPE_5__ {int* cdlms_ttl; int* update_speed; TYPE_1__** cdlms; scalar_t__ bV3RTM; } ;
typedef  TYPE_2__ WmallDecodeCtx ;
struct TYPE_4__ {int recent; int order; int* lms_updates; } ;

/* Variables and functions */

__attribute__((used)) static void use_high_update_speed(WmallDecodeCtx *s, int ich)
{
    int ilms, recent, icoef;
    for (ilms = s->cdlms_ttl[ich] - 1; ilms >= 0; ilms--) {
        recent = s->cdlms[ich][ilms].recent;
        if (s->update_speed[ich] == 16)
            continue;
        if (s->bV3RTM) {
            for (icoef = 0; icoef < s->cdlms[ich][ilms].order; icoef++)
                s->cdlms[ich][ilms].lms_updates[icoef + recent] *= 2;
        } else {
            for (icoef = 0; icoef < s->cdlms[ich][ilms].order; icoef++)
                s->cdlms[ich][ilms].lms_updates[icoef] *= 2;
        }
    }
    s->update_speed[ich] = 16;
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
          int ich = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__cdlms_ttl0 = 1;
          s[_i0].cdlms_ttl = (int *) malloc(_len_s__i0__cdlms_ttl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms_ttl0; _j0++) {
            s[_i0].cdlms_ttl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__update_speed0 = 1;
          s[_i0].update_speed = (int *) malloc(_len_s__i0__update_speed0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__update_speed0; _j0++) {
            s[_i0].update_speed[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__cdlms0 = 1;
          s[_i0].cdlms = (struct TYPE_4__ **) malloc(_len_s__i0__cdlms0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms0; _j0++) {
            int _len_s__i0__cdlms1 = 1;
            s[_i0].cdlms[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__cdlms1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__cdlms1; _j1++) {
              s[_i0].cdlms[_j0]->recent = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cdlms[_j0]->order = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cdlms__j0__lms_updates0 = 1;
          s[_i0].cdlms[_j0]->lms_updates = (int *) malloc(_len_s__i0__cdlms__j0__lms_updates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms__j0__lms_updates0; _j0++) {
            s[_i0].cdlms[_j0]->lms_updates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
        s[_i0].bV3RTM = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          use_high_update_speed(s,ich);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cdlms_ttl);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].update_speed);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].cdlms));
        free(s[_aux].cdlms);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ich = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__cdlms_ttl0 = 1;
          s[_i0].cdlms_ttl = (int *) malloc(_len_s__i0__cdlms_ttl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms_ttl0; _j0++) {
            s[_i0].cdlms_ttl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__update_speed0 = 1;
          s[_i0].update_speed = (int *) malloc(_len_s__i0__update_speed0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__update_speed0; _j0++) {
            s[_i0].update_speed[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__cdlms0 = 1;
          s[_i0].cdlms = (struct TYPE_4__ **) malloc(_len_s__i0__cdlms0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms0; _j0++) {
            int _len_s__i0__cdlms1 = 1;
            s[_i0].cdlms[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__cdlms1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__cdlms1; _j1++) {
              s[_i0].cdlms[_j0]->recent = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cdlms[_j0]->order = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cdlms__j0__lms_updates0 = 1;
          s[_i0].cdlms[_j0]->lms_updates = (int *) malloc(_len_s__i0__cdlms__j0__lms_updates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms__j0__lms_updates0; _j0++) {
            s[_i0].cdlms[_j0]->lms_updates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
        s[_i0].bV3RTM = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          use_high_update_speed(s,ich);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cdlms_ttl);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].update_speed);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].cdlms));
        free(s[_aux].cdlms);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ich = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__cdlms_ttl0 = 1;
          s[_i0].cdlms_ttl = (int *) malloc(_len_s__i0__cdlms_ttl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms_ttl0; _j0++) {
            s[_i0].cdlms_ttl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__update_speed0 = 1;
          s[_i0].update_speed = (int *) malloc(_len_s__i0__update_speed0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__update_speed0; _j0++) {
            s[_i0].update_speed[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__cdlms0 = 1;
          s[_i0].cdlms = (struct TYPE_4__ **) malloc(_len_s__i0__cdlms0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms0; _j0++) {
            int _len_s__i0__cdlms1 = 1;
            s[_i0].cdlms[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__cdlms1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__cdlms1; _j1++) {
              s[_i0].cdlms[_j0]->recent = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cdlms[_j0]->order = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cdlms__j0__lms_updates0 = 1;
          s[_i0].cdlms[_j0]->lms_updates = (int *) malloc(_len_s__i0__cdlms__j0__lms_updates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms__j0__lms_updates0; _j0++) {
            s[_i0].cdlms[_j0]->lms_updates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
        s[_i0].bV3RTM = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          use_high_update_speed(s,ich);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cdlms_ttl);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].update_speed);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].cdlms));
        free(s[_aux].cdlms);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
