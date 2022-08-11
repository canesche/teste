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
struct mg_str {char const* p; int len; } ;

/* Variables and functions */

__attribute__((used)) static void parse_uri_component(const char **p, const char *end,
                                const char *seps, struct mg_str *res) {
  const char *q;
  res->p = *p;
  for (; *p < end; (*p)++) {
    for (q = seps; *q != '\0'; q++) {
      if (**p == *q) break;
    }
    if (*q != '\0') break;
  }
  res->len = (*p) - res->p;
  if (*p < end) (*p)++;
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
          int _len_p0 = 1;
          const char ** p = (const char **) malloc(_len_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (const char *) malloc(_len_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end0 = 1;
          const char * end = (const char *) malloc(_len_end0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seps0 = 1;
          const char * seps = (const char *) malloc(_len_seps0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_seps0; _i0++) {
            seps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 1;
          struct mg_str * res = (struct mg_str *) malloc(_len_res0*sizeof(struct mg_str));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              int _len_res__i0__p0 = 1;
          res[_i0].p = (const char *) malloc(_len_res__i0__p0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_res__i0__p0; _j0++) {
            res[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        res[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parse_uri_component(p,end,seps,res);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          free(end);
          free(seps);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].p);
          }
          free(res);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          const char ** p = (const char **) malloc(_len_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (const char *) malloc(_len_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end0 = 65025;
          const char * end = (const char *) malloc(_len_end0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seps0 = 65025;
          const char * seps = (const char *) malloc(_len_seps0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_seps0; _i0++) {
            seps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 65025;
          struct mg_str * res = (struct mg_str *) malloc(_len_res0*sizeof(struct mg_str));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              int _len_res__i0__p0 = 1;
          res[_i0].p = (const char *) malloc(_len_res__i0__p0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_res__i0__p0; _j0++) {
            res[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        res[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parse_uri_component(p,end,seps,res);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          free(end);
          free(seps);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].p);
          }
          free(res);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          const char ** p = (const char **) malloc(_len_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (const char *) malloc(_len_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end0 = 100;
          const char * end = (const char *) malloc(_len_end0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seps0 = 100;
          const char * seps = (const char *) malloc(_len_seps0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_seps0; _i0++) {
            seps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 100;
          struct mg_str * res = (struct mg_str *) malloc(_len_res0*sizeof(struct mg_str));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              int _len_res__i0__p0 = 1;
          res[_i0].p = (const char *) malloc(_len_res__i0__p0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_res__i0__p0; _j0++) {
            res[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        res[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parse_uri_component(p,end,seps,res);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          free(end);
          free(seps);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].p);
          }
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
