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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  int int16_t ;
struct TYPE_7__ {TYPE_1__* avctx; } ;
struct TYPE_6__ {scalar_t__ out_format; int mb_height; int mb_stride; int mb_width; int* mb_type; scalar_t__ msmpeg4_version; TYPE_3__ me; } ;
struct TYPE_5__ {int me_range; } ;
typedef  TYPE_2__ MpegEncContext ;
typedef  TYPE_3__ MotionEstContext ;

/* Variables and functions */
 int CANDIDATE_MB_TYPE_INTRA ; 
 scalar_t__ FMT_MPEG1 ; 

void ff_fix_long_mvs(MpegEncContext * s, uint8_t *field_select_table, int field_select,
                     int16_t (*mv_table)[2], int f_code, int type, int truncate)
{
    MotionEstContext * const c= &s->me;
    int y, h_range, v_range;

    // RAL: 8 in MPEG-1, 16 in MPEG-4
    int range = (((s->out_format == FMT_MPEG1 || s->msmpeg4_version) ? 8 : 16) << f_code);

    if(c->avctx->me_range && range > c->avctx->me_range) range= c->avctx->me_range;

    h_range= range;
    v_range= field_select_table ? range>>1 : range;

    /* clip / convert to intra 16x16 type MVs */
    for(y=0; y<s->mb_height; y++){
        int x;
        int xy= y*s->mb_stride;
        for(x=0; x<s->mb_width; x++){
            if (s->mb_type[xy] & type){    // RAL: "type" test added...
                if (!field_select_table || field_select_table[xy] == field_select) {
                    if(   mv_table[xy][0] >=h_range || mv_table[xy][0] <-h_range
                       || mv_table[xy][1] >=v_range || mv_table[xy][1] <-v_range){

                        if(truncate){
                            if     (mv_table[xy][0] > h_range-1) mv_table[xy][0]=  h_range-1;
                            else if(mv_table[xy][0] < -h_range ) mv_table[xy][0]= -h_range;
                            if     (mv_table[xy][1] > v_range-1) mv_table[xy][1]=  v_range-1;
                            else if(mv_table[xy][1] < -v_range ) mv_table[xy][1]= -v_range;
                        }else{
                            s->mb_type[xy] &= ~type;
                            s->mb_type[xy] |= CANDIDATE_MB_TYPE_INTRA;
                            mv_table[xy][0]=
                            mv_table[xy][1]= 0;
                        }
                    }
                }
            }
            xy++;
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
          int field_select = 100;
          int f_code = 100;
          int type = 100;
          int truncate = 100;
          int _len_s0 = 1;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].out_format = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mb_type0 = 1;
          s[_i0].mb_type = (int *) malloc(_len_s__i0__mb_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__mb_type0; _j0++) {
            s[_i0].mb_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].msmpeg4_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__me_avctx0 = 1;
          s[_i0].me.avctx = (struct TYPE_5__ *) malloc(_len_s__i0__me_avctx0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__me_avctx0; _j0++) {
            s[_i0].me.avctx->me_range = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_field_select_table0 = 1;
          int * field_select_table = (int *) malloc(_len_field_select_table0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_field_select_table0; _i0++) {
            field_select_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mv_table0 = 2;
          int (*)* mv_table = (int (*)*) malloc(_len_mv_table0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_mv_table0; _i0++) {
            int _len_mv_table1 = 1;
            mv_table[_i0] = (int ()*) malloc(_len_mv_table1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_mv_table1; _i1++) {
              mv_table[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ff_fix_long_mvs(s,field_select_table,field_select,mv_table,f_code,type,truncate);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].mb_type);
          }
          free(s);
          free(field_select_table);
          for(int i1 = 0; i1 < _len_mv_table0; i1++) {
            int _len_mv_table1 = 1;
              free(mv_table[i1]);
          }
          free(mv_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int field_select = 255;
          int f_code = 255;
          int type = 255;
          int truncate = 255;
          int _len_s0 = 65025;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].out_format = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mb_type0 = 1;
          s[_i0].mb_type = (int *) malloc(_len_s__i0__mb_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__mb_type0; _j0++) {
            s[_i0].mb_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].msmpeg4_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__me_avctx0 = 1;
          s[_i0].me.avctx = (struct TYPE_5__ *) malloc(_len_s__i0__me_avctx0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__me_avctx0; _j0++) {
            s[_i0].me.avctx->me_range = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_field_select_table0 = 65025;
          int * field_select_table = (int *) malloc(_len_field_select_table0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_field_select_table0; _i0++) {
            field_select_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mv_table0 = 65025;
          int (*)* mv_table = (int (*)*) malloc(_len_mv_table0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_mv_table0; _i0++) {
            int _len_mv_table1 = 1;
            mv_table[_i0] = (int ()*) malloc(_len_mv_table1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_mv_table1; _i1++) {
              mv_table[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ff_fix_long_mvs(s,field_select_table,field_select,mv_table,f_code,type,truncate);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].mb_type);
          }
          free(s);
          free(field_select_table);
          for(int i1 = 0; i1 < _len_mv_table0; i1++) {
            int _len_mv_table1 = 1;
              free(mv_table[i1]);
          }
          free(mv_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int field_select = 10;
          int f_code = 10;
          int type = 10;
          int truncate = 10;
          int _len_s0 = 100;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].out_format = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mb_type0 = 1;
          s[_i0].mb_type = (int *) malloc(_len_s__i0__mb_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__mb_type0; _j0++) {
            s[_i0].mb_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].msmpeg4_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__me_avctx0 = 1;
          s[_i0].me.avctx = (struct TYPE_5__ *) malloc(_len_s__i0__me_avctx0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__me_avctx0; _j0++) {
            s[_i0].me.avctx->me_range = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_field_select_table0 = 100;
          int * field_select_table = (int *) malloc(_len_field_select_table0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_field_select_table0; _i0++) {
            field_select_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mv_table0 = 100;
          int (*)* mv_table = (int (*)*) malloc(_len_mv_table0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_mv_table0; _i0++) {
            int _len_mv_table1 = 1;
            mv_table[_i0] = (int ()*) malloc(_len_mv_table1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_mv_table1; _i1++) {
              mv_table[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ff_fix_long_mvs(s,field_select_table,field_select,mv_table,f_code,type,truncate);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].mb_type);
          }
          free(s);
          free(field_select_table);
          for(int i1 = 0; i1 < _len_mv_table0; i1++) {
            int _len_mv_table1 = 1;
              free(mv_table[i1]);
          }
          free(mv_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
