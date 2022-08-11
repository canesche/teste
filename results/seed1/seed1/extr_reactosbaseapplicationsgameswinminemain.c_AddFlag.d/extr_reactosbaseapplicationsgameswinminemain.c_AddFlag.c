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
struct TYPE_5__ {int /*<<< orphan*/  num_flags; TYPE_1__** box; int /*<<< orphan*/  IsMarkQ; } ;
struct TYPE_4__ {int FlagType; } ;
typedef  TYPE_2__ BOARD ;

/* Variables and functions */
 int COMPLETE ; 
#define  FLAG 129 
 void* NORMAL ; 
#define  QUESTION 128 

__attribute__((used)) static void AddFlag( BOARD *p_board, unsigned col, unsigned row )
{
    if( p_board->box[col][row].FlagType != COMPLETE ) {
        switch( p_board->box[col][row].FlagType ) {
        case FLAG:
            if( p_board->IsMarkQ )
                p_board->box[col][row].FlagType = QUESTION;
            else
                p_board->box[col][row].FlagType = NORMAL;
            p_board->num_flags--;
            break;

        case QUESTION:
            p_board->box[col][row].FlagType = NORMAL;
            break;

        default:
            p_board->box[col][row].FlagType = FLAG;
            p_board->num_flags++;
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
          unsigned int col = 100;
          unsigned int row = 100;
          int _len_p_board0 = 1;
          struct TYPE_5__ * p_board = (struct TYPE_5__ *) malloc(_len_p_board0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p_board0; _i0++) {
            p_board[_i0].num_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p_board__i0__box0 = 1;
          p_board[_i0].box = (struct TYPE_4__ **) malloc(_len_p_board__i0__box0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_p_board__i0__box0; _j0++) {
            int _len_p_board__i0__box1 = 1;
            p_board[_i0].box[_j0] = (struct TYPE_4__ *) malloc(_len_p_board__i0__box1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_p_board__i0__box1; _j1++) {
              p_board[_i0].box[_j0]->FlagType = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        p_board[_i0].IsMarkQ = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AddFlag(p_board,col,row);
          for(int _aux = 0; _aux < _len_p_board0; _aux++) {
          free(*(p_board[_aux].box));
        free(p_board[_aux].box);
          }
          free(p_board);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int col = 255;
          unsigned int row = 255;
          int _len_p_board0 = 65025;
          struct TYPE_5__ * p_board = (struct TYPE_5__ *) malloc(_len_p_board0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p_board0; _i0++) {
            p_board[_i0].num_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p_board__i0__box0 = 1;
          p_board[_i0].box = (struct TYPE_4__ **) malloc(_len_p_board__i0__box0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_p_board__i0__box0; _j0++) {
            int _len_p_board__i0__box1 = 1;
            p_board[_i0].box[_j0] = (struct TYPE_4__ *) malloc(_len_p_board__i0__box1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_p_board__i0__box1; _j1++) {
              p_board[_i0].box[_j0]->FlagType = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        p_board[_i0].IsMarkQ = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AddFlag(p_board,col,row);
          for(int _aux = 0; _aux < _len_p_board0; _aux++) {
          free(*(p_board[_aux].box));
        free(p_board[_aux].box);
          }
          free(p_board);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int col = 10;
          unsigned int row = 10;
          int _len_p_board0 = 100;
          struct TYPE_5__ * p_board = (struct TYPE_5__ *) malloc(_len_p_board0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p_board0; _i0++) {
            p_board[_i0].num_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p_board__i0__box0 = 1;
          p_board[_i0].box = (struct TYPE_4__ **) malloc(_len_p_board__i0__box0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_p_board__i0__box0; _j0++) {
            int _len_p_board__i0__box1 = 1;
            p_board[_i0].box[_j0] = (struct TYPE_4__ *) malloc(_len_p_board__i0__box1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_p_board__i0__box1; _j1++) {
              p_board[_i0].box[_j0]->FlagType = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        p_board[_i0].IsMarkQ = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AddFlag(p_board,col,row);
          for(int _aux = 0; _aux < _len_p_board0; _aux++) {
          free(*(p_board[_aux].box));
        free(p_board[_aux].box);
          }
          free(p_board);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
