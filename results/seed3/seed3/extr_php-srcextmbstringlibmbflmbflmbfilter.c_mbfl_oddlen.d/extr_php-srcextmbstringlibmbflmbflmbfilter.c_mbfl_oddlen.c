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
struct TYPE_4__ {unsigned char* val; size_t len; TYPE_2__* encoding; } ;
typedef  TYPE_1__ mbfl_string ;
struct TYPE_5__ {int flag; unsigned char* mblen_table; } ;
typedef  TYPE_2__ mbfl_encoding ;

/* Variables and functions */
 int MBFL_ENCTYPE_SBCS ; 
 int MBFL_ENCTYPE_WCS2BE ; 
 int MBFL_ENCTYPE_WCS2LE ; 
 int MBFL_ENCTYPE_WCS4BE ; 
 int MBFL_ENCTYPE_WCS4LE ; 

size_t
mbfl_oddlen(mbfl_string *string)
{
	size_t len, n, k;
	unsigned char *p;
	const mbfl_encoding *encoding = string->encoding;

	len = 0;
	if (encoding->flag & MBFL_ENCTYPE_SBCS) {
		return 0;
	} else if (encoding->flag & (MBFL_ENCTYPE_WCS2BE | MBFL_ENCTYPE_WCS2LE)) {
		return len % 2;
	} else if (encoding->flag & (MBFL_ENCTYPE_WCS4BE | MBFL_ENCTYPE_WCS4LE)) {
		return len % 4;
	} else if (encoding->mblen_table != NULL) {
		const unsigned char *mbtab = encoding->mblen_table;
 		n = 0;
		p = string->val;
		k = string->len;
		/* count */
		if (p != NULL) {
			while (n < k) {
				unsigned m = mbtab[*p];
				n += m;
				p += m;
			};
		}
		return n-k;
	} else {
		/* how can i do ? */
		return 0;
	}
	/* NOT REACHED */
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
          struct TYPE_4__ * string = (struct TYPE_4__ *) malloc(_len_string0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
              int _len_string__i0__val0 = 1;
          string[_i0].val = (unsigned char *) malloc(_len_string__i0__val0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_string__i0__val0; _j0++) {
            string[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        string[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_string__i0__encoding0 = 1;
          string[_i0].encoding = (struct TYPE_5__ *) malloc(_len_string__i0__encoding0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_string__i0__encoding0; _j0++) {
            string[_i0].encoding->flag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_string__i0__encoding_mblen_table0 = 1;
          string[_i0].encoding->mblen_table = (unsigned char *) malloc(_len_string__i0__encoding_mblen_table0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_string__i0__encoding_mblen_table0; _j0++) {
            string[_i0].encoding->mblen_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = mbfl_oddlen(string);
          printf("%lu\n", benchRet); 
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
          struct TYPE_4__ * string = (struct TYPE_4__ *) malloc(_len_string0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
              int _len_string__i0__val0 = 1;
          string[_i0].val = (unsigned char *) malloc(_len_string__i0__val0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_string__i0__val0; _j0++) {
            string[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        string[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_string__i0__encoding0 = 1;
          string[_i0].encoding = (struct TYPE_5__ *) malloc(_len_string__i0__encoding0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_string__i0__encoding0; _j0++) {
            string[_i0].encoding->flag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_string__i0__encoding_mblen_table0 = 1;
          string[_i0].encoding->mblen_table = (unsigned char *) malloc(_len_string__i0__encoding_mblen_table0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_string__i0__encoding_mblen_table0; _j0++) {
            string[_i0].encoding->mblen_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = mbfl_oddlen(string);
          printf("%lu\n", benchRet); 
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
          struct TYPE_4__ * string = (struct TYPE_4__ *) malloc(_len_string0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
              int _len_string__i0__val0 = 1;
          string[_i0].val = (unsigned char *) malloc(_len_string__i0__val0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_string__i0__val0; _j0++) {
            string[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        string[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_string__i0__encoding0 = 1;
          string[_i0].encoding = (struct TYPE_5__ *) malloc(_len_string__i0__encoding0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_string__i0__encoding0; _j0++) {
            string[_i0].encoding->flag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_string__i0__encoding_mblen_table0 = 1;
          string[_i0].encoding->mblen_table = (unsigned char *) malloc(_len_string__i0__encoding_mblen_table0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_string__i0__encoding_mblen_table0; _j0++) {
            string[_i0].encoding->mblen_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = mbfl_oddlen(string);
          printf("%lu\n", benchRet); 
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
