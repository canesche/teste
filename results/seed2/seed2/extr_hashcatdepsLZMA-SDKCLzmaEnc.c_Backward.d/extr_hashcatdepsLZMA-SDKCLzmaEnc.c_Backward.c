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
typedef  int UInt32 ;
struct TYPE_5__ {unsigned int optEnd; int backRes; unsigned int optCur; TYPE_1__* opt; } ;
struct TYPE_4__ {int dist; int len; int extra; } ;
typedef  TYPE_2__ CLzmaEnc ;

/* Variables and functions */
 void* MARK_LIT ; 

__attribute__((used)) static unsigned Backward(CLzmaEnc *p, unsigned cur)
{
  unsigned wr = cur + 1;
  p->optEnd = wr;

  for (;;)
  {
    UInt32 dist = p->opt[cur].dist;
    UInt32 len = p->opt[cur].len;
    UInt32 extra = p->opt[cur].extra;
    cur -= len;

    if (extra)
    {
      wr--;
      p->opt[wr].len = len;
      cur -= extra;
      len = extra;
      if (extra == 1)
      {
        p->opt[wr].dist = dist;
        dist = MARK_LIT;
      }
      else
      {
        p->opt[wr].dist = 0;
        len--;
        wr--;
        p->opt[wr].dist = MARK_LIT;
        p->opt[wr].len = 1;
      }
    }

    if (cur == 0)
    {
      p->backRes = dist;
      p->optCur = wr;
      return len;
    }
    
    wr--;
    p->opt[wr].dist = dist;
    p->opt[wr].len = len;
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
          unsigned int cur = 100;
          int _len_p0 = 1;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].optEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].backRes = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].optCur = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__opt0 = 1;
          p[_i0].opt = (struct TYPE_4__ *) malloc(_len_p__i0__opt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__opt0; _j0++) {
            p[_i0].opt->dist = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].opt->len = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].opt->extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = Backward(p,cur);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].opt);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int cur = 255;
          int _len_p0 = 65025;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].optEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].backRes = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].optCur = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__opt0 = 1;
          p[_i0].opt = (struct TYPE_4__ *) malloc(_len_p__i0__opt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__opt0; _j0++) {
            p[_i0].opt->dist = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].opt->len = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].opt->extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = Backward(p,cur);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].opt);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int cur = 10;
          int _len_p0 = 100;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].optEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].backRes = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].optCur = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__opt0 = 1;
          p[_i0].opt = (struct TYPE_4__ *) malloc(_len_p__i0__opt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__opt0; _j0++) {
            p[_i0].opt->dist = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].opt->len = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].opt->extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = Backward(p,cur);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].opt);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
