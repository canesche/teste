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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned char* val; scalar_t__ len; int /*<<< orphan*/ * encoding; int /*<<< orphan*/  no_language; } ;
typedef  TYPE_1__ mbfl_string ;

/* Variables and functions */
 int /*<<< orphan*/  mbfl_encoding_pass ; 
 int /*<<< orphan*/  mbfl_no_language_uni ; 

void
mbfl_string_init(mbfl_string *string)
{
	if (string) {
		string->no_language = mbfl_no_language_uni;
		string->encoding = &mbfl_encoding_pass;
		string->val = (unsigned char*)NULL;
		string->len = 0;
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
          int _len_string0 = 1;
          struct TYPE_3__ * string = (struct TYPE_3__ *) malloc(_len_string0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
              int _len_string__i0__val0 = 1;
          string[_i0].val = (unsigned char *) malloc(_len_string__i0__val0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_string__i0__val0; _j0++) {
            string[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        string[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_string__i0__encoding0 = 1;
          string[_i0].encoding = (int *) malloc(_len_string__i0__encoding0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_string__i0__encoding0; _j0++) {
            string[_i0].encoding[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        string[_i0].no_language = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mbfl_string_init(string);
          for(int _aux = 0; _aux < _len_string0; _aux++) {
          free(string[_aux].val);
          }
          for(int _aux = 0; _aux < _len_string0; _aux++) {
          free(string[_aux].encoding);
          }
          free(string);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_string0 = 65025;
          struct TYPE_3__ * string = (struct TYPE_3__ *) malloc(_len_string0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
              int _len_string__i0__val0 = 1;
          string[_i0].val = (unsigned char *) malloc(_len_string__i0__val0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_string__i0__val0; _j0++) {
            string[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        string[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_string__i0__encoding0 = 1;
          string[_i0].encoding = (int *) malloc(_len_string__i0__encoding0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_string__i0__encoding0; _j0++) {
            string[_i0].encoding[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        string[_i0].no_language = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mbfl_string_init(string);
          for(int _aux = 0; _aux < _len_string0; _aux++) {
          free(string[_aux].val);
          }
          for(int _aux = 0; _aux < _len_string0; _aux++) {
          free(string[_aux].encoding);
          }
          free(string);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_string0 = 100;
          struct TYPE_3__ * string = (struct TYPE_3__ *) malloc(_len_string0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
              int _len_string__i0__val0 = 1;
          string[_i0].val = (unsigned char *) malloc(_len_string__i0__val0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_string__i0__val0; _j0++) {
            string[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        string[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_string__i0__encoding0 = 1;
          string[_i0].encoding = (int *) malloc(_len_string__i0__encoding0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_string__i0__encoding0; _j0++) {
            string[_i0].encoding[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        string[_i0].no_language = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mbfl_string_init(string);
          for(int _aux = 0; _aux < _len_string0; _aux++) {
          free(string[_aux].val);
          }
          for(int _aux = 0; _aux < _len_string0; _aux++) {
          free(string[_aux].encoding);
          }
          free(string);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
