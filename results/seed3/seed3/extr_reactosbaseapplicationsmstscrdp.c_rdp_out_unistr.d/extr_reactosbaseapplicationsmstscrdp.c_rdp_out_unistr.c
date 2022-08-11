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
struct TYPE_3__ {char* p; } ;
typedef  TYPE_1__* STREAM ;

/* Variables and functions */

void
rdp_out_unistr(STREAM s, char *string, int len)
{
	if (string == NULL || len == 0)
		return;

#ifdef HAVE_ICONV
	size_t ibl = strlen(string), obl = len + 2;
	static iconv_t iconv_h = (iconv_t) - 1;
	char *pin = string, *pout = (char *) s->p;

	memset(pout, 0, len + 4);

	if (g_iconv_works)
	{
		if (iconv_h == (iconv_t) - 1)
		{
			size_t i = 1, o = 4;
			if ((iconv_h = iconv_open(WINDOWS_CODEPAGE, g_codepage)) == (iconv_t) - 1)
			{
				warning("rdp_out_unistr: iconv_open[%s -> %s] fail %d\n",
					g_codepage, WINDOWS_CODEPAGE, (int) iconv_h);

				g_iconv_works = False;
				rdp_out_unistr(s, string, len);
				return;
			}
			if (iconv(iconv_h, (ICONV_CONST char **) &pin, &i, &pout, &o) ==
			    (size_t) - 1)
			{
				iconv_close(iconv_h);
				iconv_h = (iconv_t) - 1;
				warning("rdp_out_unistr: iconv(1) fail, errno %d\n", errno);

				g_iconv_works = False;
				rdp_out_unistr(s, string, len);
				return;
			}
			pin = string;
			pout = (char *) s->p;
		}

		if (iconv(iconv_h, (ICONV_CONST char **) &pin, &ibl, &pout, &obl) == (size_t) - 1)
		{
			iconv_close(iconv_h);
			iconv_h = (iconv_t) - 1;
			warning("rdp_out_unistr: iconv(2) fail, errno %d\n", errno);

			g_iconv_works = False;
			rdp_out_unistr(s, string, len);
			return;
		}

		s->p += len + 2;

	}
	else
#endif
	{
		int i = 0, j = 0;

		len += 2;

		while (i < len)
		{
			s->p[i++] = string[j++];
			s->p[i++] = 0;
		}

		s->p += len;
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
          int len = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__p0 = 1;
          s[_i0].p = (char *) malloc(_len_s__i0__p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_s__i0__p0; _j0++) {
            s[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_string0 = 1;
          char * string = (char *) malloc(_len_string0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rdp_out_unistr(s,string,len);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].p);
          }
          free(s);
          free(string);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__p0 = 1;
          s[_i0].p = (char *) malloc(_len_s__i0__p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_s__i0__p0; _j0++) {
            s[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_string0 = 65025;
          char * string = (char *) malloc(_len_string0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rdp_out_unistr(s,string,len);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].p);
          }
          free(s);
          free(string);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__p0 = 1;
          s[_i0].p = (char *) malloc(_len_s__i0__p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_s__i0__p0; _j0++) {
            s[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_string0 = 100;
          char * string = (char *) malloc(_len_string0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rdp_out_unistr(s,string,len);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].p);
          }
          free(s);
          free(string);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
