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
struct TYPE_3__ {int* tab; int finished; int sep; char const* p; } ;
typedef  TYPE_1__ ks_tokaux_t ;

/* Variables and functions */

char *kstrtok(const char *str, const char *sep, ks_tokaux_t *aux)
{
	const char *p, *start;
	if (sep) { // set up the table
		if (str == 0 && (aux->tab[0]&1)) return 0; // no need to set up if we have finished
		aux->finished = 0;
		if (sep[1]) {
			aux->sep = -1;
			aux->tab[0] = aux->tab[1] = aux->tab[2] = aux->tab[3] = 0;
			for (p = sep; *p; ++p) aux->tab[*p>>6] |= 1ull<<(*p&0x3f);
		} else aux->sep = sep[0];
	}
	if (aux->finished) return 0;
	else if (str) aux->p = str - 1, aux->finished = 0;
	if (aux->sep < 0) {
		for (p = start = aux->p + 1; *p; ++p)
			if (aux->tab[*p>>6]>>(*p&0x3f)&1) break;
	} else {
		for (p = start = aux->p + 1; *p; ++p)
			if (*p == aux->sep) break;
	}
	aux->p = p; // end of token
	if (*p == 0) aux->finished = 1; // no more tokens
	return (char*)start;
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
          int _len_str0 = 1;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sep0 = 1;
          const char * sep = (const char *) malloc(_len_sep0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_sep0; _i0++) {
            sep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aux0 = 1;
          struct TYPE_3__ * aux = (struct TYPE_3__ *) malloc(_len_aux0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_aux0; _i0++) {
              int _len_aux__i0__tab0 = 1;
          aux[_i0].tab = (int *) malloc(_len_aux__i0__tab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aux__i0__tab0; _j0++) {
            aux[_i0].tab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        aux[_i0].finished = ((-2 * (next_i()%2)) + 1) * next_i();
        aux[_i0].sep = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aux__i0__p0 = 1;
          aux[_i0].p = (const char *) malloc(_len_aux__i0__p0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_aux__i0__p0; _j0++) {
            aux[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = kstrtok(str,sep,aux);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(str);
          free(sep);
          for(int _aux = 0; _aux < _len_aux0; _aux++) {
          free(aux[_aux].tab);
          }
          for(int _aux = 0; _aux < _len_aux0; _aux++) {
          free(aux[_aux].p);
          }
          free(aux);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_str0 = 65025;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sep0 = 65025;
          const char * sep = (const char *) malloc(_len_sep0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_sep0; _i0++) {
            sep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aux0 = 65025;
          struct TYPE_3__ * aux = (struct TYPE_3__ *) malloc(_len_aux0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_aux0; _i0++) {
              int _len_aux__i0__tab0 = 1;
          aux[_i0].tab = (int *) malloc(_len_aux__i0__tab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aux__i0__tab0; _j0++) {
            aux[_i0].tab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        aux[_i0].finished = ((-2 * (next_i()%2)) + 1) * next_i();
        aux[_i0].sep = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aux__i0__p0 = 1;
          aux[_i0].p = (const char *) malloc(_len_aux__i0__p0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_aux__i0__p0; _j0++) {
            aux[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = kstrtok(str,sep,aux);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(str);
          free(sep);
          for(int _aux = 0; _aux < _len_aux0; _aux++) {
          free(aux[_aux].tab);
          }
          for(int _aux = 0; _aux < _len_aux0; _aux++) {
          free(aux[_aux].p);
          }
          free(aux);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_str0 = 100;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sep0 = 100;
          const char * sep = (const char *) malloc(_len_sep0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_sep0; _i0++) {
            sep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aux0 = 100;
          struct TYPE_3__ * aux = (struct TYPE_3__ *) malloc(_len_aux0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_aux0; _i0++) {
              int _len_aux__i0__tab0 = 1;
          aux[_i0].tab = (int *) malloc(_len_aux__i0__tab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aux__i0__tab0; _j0++) {
            aux[_i0].tab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        aux[_i0].finished = ((-2 * (next_i()%2)) + 1) * next_i();
        aux[_i0].sep = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aux__i0__p0 = 1;
          aux[_i0].p = (const char *) malloc(_len_aux__i0__p0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_aux__i0__p0; _j0++) {
            aux[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = kstrtok(str,sep,aux);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(str);
          free(sep);
          for(int _aux = 0; _aux < _len_aux0; _aux++) {
          free(aux[_aux].tab);
          }
          for(int _aux = 0; _aux < _len_aux0; _aux++) {
          free(aux[_aux].p);
          }
          free(aux);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
