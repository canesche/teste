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
typedef  int uint32_t ;
typedef  int /*<<< orphan*/  Tox ;
typedef  scalar_t__ TOX_FILE_CONTROL ;

/* Variables and functions */
 scalar_t__ TOX_FILE_CONTROL_RESUME ; 
 int sendf_ok ; 

void file_print_control(Tox *tox, uint32_t friend_number, uint32_t file_number, TOX_FILE_CONTROL control,
                        void *userdata)
{
    if (*((uint32_t *)userdata) != 974536)
        return;

    /* First send file num is 0.*/
    if (file_number == 0 && control == TOX_FILE_CONTROL_RESUME)
        sendf_ok = 1;
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
          int friend_number = 100;
          int file_number = 100;
          long control = 100;
          int _len_tox0 = 1;
          int * tox = (int *) malloc(_len_tox0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tox0; _i0++) {
            tox[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * userdata;
          file_print_control(tox,friend_number,file_number,control,userdata);
          free(tox);
        
        break;
    }
    // big-arr
    case 1:
    {
          int friend_number = 255;
          int file_number = 255;
          long control = 255;
          int _len_tox0 = 65025;
          int * tox = (int *) malloc(_len_tox0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tox0; _i0++) {
            tox[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * userdata;
          file_print_control(tox,friend_number,file_number,control,userdata);
          free(tox);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int friend_number = 10;
          int file_number = 10;
          long control = 10;
          int _len_tox0 = 100;
          int * tox = (int *) malloc(_len_tox0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tox0; _i0++) {
            tox[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * userdata;
          file_print_control(tox,friend_number,file_number,control,userdata);
          free(tox);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
