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

/* Variables and functions */

double
strtod(const char *s, char **sret)
{
  long double r;		/* result */
  int e;			/* exponent */
  long double d;		/* scale */
  int sign;			/* +- 1.0 */
  int esign;
  int i;
  int flags=0;

  r = 0.0;
  sign = 1;
  e = 0;
  esign = 1;

  if (s == NULL)
     return r;


  while ((*s == ' ') || (*s == '\t'))
    s++;

  if (*s == '+')
    s++;
  else if (*s == '-')
  {
    sign = -1;
    s++;
  }

  while ((*s >= '0') && (*s <= '9'))
  {
    flags |= 1;
    r *= 10.0;
    r += *s - '0';
    s++;
  }

  if (*s == '.')
  {
    d = 0.1L;
    s++;
    while ((*s >= '0') && (*s <= '9'))
    {
      flags |= 2;
      r += d * (*s - '0');
      s++;
      d *= 0.1L;
    }
  }

  if (flags == 0)
  {
    if (sret)
      *sret = (char *)s;
    return 0;
  }

  if ((*s == 'e') || (*s == 'E'))
  {
    s++;
    if (*s == '+')
      s++;
    else if (*s == '-')
    {
      s++;
      esign = -1;
    }
    if ((*s < '0') || (*s > '9'))
    {
      if (sret)
	*sret = (char *)s;
      return r;
    }

    while ((*s >= '0') && (*s <= '9'))
    {
      e *= 10;
      e += *s - '0';
      s++;
    }
  }

  if (esign < 0)
    for (i = 1; i <= e; i++)
      r *= 0.1L;
  else
    for (i = 1; i <= e; i++)
      r *= 10.0;

  if (sret)
    *sret = (char *)s;
  return r * sign;
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
          int _len_s0 = 1;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sret0 = 1;
          char ** sret = (char **) malloc(_len_sret0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_sret0; _i0++) {
            int _len_sret1 = 1;
            sret[_i0] = (char *) malloc(_len_sret1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_sret1; _i1++) {
              sret[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          double benchRet = strtod(s,sret);
          printf("%lf\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_sret0; i1++) {
            int _len_sret1 = 1;
              free(sret[i1]);
          }
          free(sret);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sret0 = 65025;
          char ** sret = (char **) malloc(_len_sret0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_sret0; _i0++) {
            int _len_sret1 = 1;
            sret[_i0] = (char *) malloc(_len_sret1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_sret1; _i1++) {
              sret[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          double benchRet = strtod(s,sret);
          printf("%lf\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_sret0; i1++) {
            int _len_sret1 = 1;
              free(sret[i1]);
          }
          free(sret);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sret0 = 100;
          char ** sret = (char **) malloc(_len_sret0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_sret0; _i0++) {
            int _len_sret1 = 1;
            sret[_i0] = (char *) malloc(_len_sret1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_sret1; _i1++) {
              sret[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          double benchRet = strtod(s,sret);
          printf("%lf\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_sret0; i1++) {
            int _len_sret1 = 1;
              free(sret[i1]);
          }
          free(sret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
