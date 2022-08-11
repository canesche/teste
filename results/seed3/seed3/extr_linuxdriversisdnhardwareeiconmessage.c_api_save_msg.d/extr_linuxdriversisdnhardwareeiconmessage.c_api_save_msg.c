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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  size_t word ;
typedef  char byte ;
struct TYPE_8__ {int /*<<< orphan*/ * info; scalar_t__ length; } ;
struct TYPE_7__ {char* info; TYPE_1__* parms; } ;
struct TYPE_6__ {char* info; scalar_t__ length; } ;
typedef  TYPE_2__ API_SAVE ;
typedef  TYPE_3__ API_PARSE ;

/* Variables and functions */

__attribute__((used)) static void api_save_msg(API_PARSE *in, byte *format, API_SAVE *out)
{
	word i, j, n = 0;
	byte *p;

	p = out->info;
	for (i = 0; format[i] != '\0'; i++)
	{
		out->parms[i].info = p;
		out->parms[i].length = in[i].length;
		switch (format[i])
		{
		case 'b':
			n = 1;
			break;
		case 'w':
			n = 2;
			break;
		case 'd':
			n = 4;
			break;
		case 's':
			n = in[i].length + 1;
			break;
		}
		for (j = 0; j < n; j++)
			*(p++) = in[i].info[j];
	}
	out->parms[i].info = NULL;
	out->parms[i].length = 0;
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
          int _len_in0 = 1;
          struct TYPE_8__ * in = (struct TYPE_8__ *) malloc(_len_in0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              int _len_in__i0__info0 = 1;
          in[_i0].info = (int *) malloc(_len_in__i0__info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in__i0__info0; _j0++) {
            in[_i0].info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        in[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_format0 = 1;
          char * format = (char *) malloc(_len_format0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          struct TYPE_7__ * out = (struct TYPE_7__ *) malloc(_len_out0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__info0 = 1;
          out[_i0].info = (char *) malloc(_len_out__i0__info0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_out__i0__info0; _j0++) {
            out[_i0].info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__parms0 = 1;
          out[_i0].parms = (struct TYPE_6__ *) malloc(_len_out__i0__parms0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_out__i0__parms0; _j0++) {
              int _len_out__i0__parms_info0 = 1;
          out[_i0].parms->info = (char *) malloc(_len_out__i0__parms_info0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_out__i0__parms_info0; _j0++) {
            out[_i0].parms->info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        out[_i0].parms->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          api_save_msg(in,format,out);
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(in[_aux].info);
          }
          free(in);
          free(format);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].info);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].parms);
          }
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_in0 = 65025;
          struct TYPE_8__ * in = (struct TYPE_8__ *) malloc(_len_in0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              int _len_in__i0__info0 = 1;
          in[_i0].info = (int *) malloc(_len_in__i0__info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in__i0__info0; _j0++) {
            in[_i0].info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        in[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_format0 = 65025;
          char * format = (char *) malloc(_len_format0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          struct TYPE_7__ * out = (struct TYPE_7__ *) malloc(_len_out0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__info0 = 1;
          out[_i0].info = (char *) malloc(_len_out__i0__info0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_out__i0__info0; _j0++) {
            out[_i0].info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__parms0 = 1;
          out[_i0].parms = (struct TYPE_6__ *) malloc(_len_out__i0__parms0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_out__i0__parms0; _j0++) {
              int _len_out__i0__parms_info0 = 1;
          out[_i0].parms->info = (char *) malloc(_len_out__i0__parms_info0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_out__i0__parms_info0; _j0++) {
            out[_i0].parms->info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        out[_i0].parms->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          api_save_msg(in,format,out);
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(in[_aux].info);
          }
          free(in);
          free(format);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].info);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].parms);
          }
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_in0 = 100;
          struct TYPE_8__ * in = (struct TYPE_8__ *) malloc(_len_in0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              int _len_in__i0__info0 = 1;
          in[_i0].info = (int *) malloc(_len_in__i0__info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in__i0__info0; _j0++) {
            in[_i0].info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        in[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_format0 = 100;
          char * format = (char *) malloc(_len_format0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          struct TYPE_7__ * out = (struct TYPE_7__ *) malloc(_len_out0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__info0 = 1;
          out[_i0].info = (char *) malloc(_len_out__i0__info0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_out__i0__info0; _j0++) {
            out[_i0].info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__parms0 = 1;
          out[_i0].parms = (struct TYPE_6__ *) malloc(_len_out__i0__parms0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_out__i0__parms0; _j0++) {
              int _len_out__i0__parms_info0 = 1;
          out[_i0].parms->info = (char *) malloc(_len_out__i0__parms_info0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_out__i0__parms_info0; _j0++) {
            out[_i0].parms->info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        out[_i0].parms->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          api_save_msg(in,format,out);
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(in[_aux].info);
          }
          free(in);
          free(format);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].info);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].parms);
          }
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
