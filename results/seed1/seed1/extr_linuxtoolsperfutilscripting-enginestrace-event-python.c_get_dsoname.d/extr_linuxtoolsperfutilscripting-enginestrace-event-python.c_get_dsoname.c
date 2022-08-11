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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct map {TYPE_1__* dso; } ;
struct TYPE_4__ {scalar_t__ show_kernel_path; } ;
struct TYPE_3__ {char* long_name; char* name; } ;

/* Variables and functions */
 TYPE_2__ symbol_conf ; 

__attribute__((used)) static const char *get_dsoname(struct map *map)
{
	const char *dsoname = "[unknown]";

	if (map && map->dso) {
		if (symbol_conf.show_kernel_path && map->dso->long_name)
			dsoname = map->dso->long_name;
		else
			dsoname = map->dso->name;
	}

	return dsoname;
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
          int _len_map0 = 1;
          struct map * map = (struct map *) malloc(_len_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              int _len_map__i0__dso0 = 1;
          map[_i0].dso = (struct TYPE_3__ *) malloc(_len_map__i0__dso0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_map__i0__dso0; _j0++) {
              int _len_map__i0__dso_long_name0 = 1;
          map[_i0].dso->long_name = (char *) malloc(_len_map__i0__dso_long_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_map__i0__dso_long_name0; _j0++) {
            map[_i0].dso->long_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_map__i0__dso_name0 = 1;
          map[_i0].dso->name = (char *) malloc(_len_map__i0__dso_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_map__i0__dso_name0; _j0++) {
            map[_i0].dso->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = get_dsoname(map);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].dso);
          }
          free(map);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_map0 = 65025;
          struct map * map = (struct map *) malloc(_len_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              int _len_map__i0__dso0 = 1;
          map[_i0].dso = (struct TYPE_3__ *) malloc(_len_map__i0__dso0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_map__i0__dso0; _j0++) {
              int _len_map__i0__dso_long_name0 = 1;
          map[_i0].dso->long_name = (char *) malloc(_len_map__i0__dso_long_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_map__i0__dso_long_name0; _j0++) {
            map[_i0].dso->long_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_map__i0__dso_name0 = 1;
          map[_i0].dso->name = (char *) malloc(_len_map__i0__dso_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_map__i0__dso_name0; _j0++) {
            map[_i0].dso->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = get_dsoname(map);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].dso);
          }
          free(map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_map0 = 100;
          struct map * map = (struct map *) malloc(_len_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              int _len_map__i0__dso0 = 1;
          map[_i0].dso = (struct TYPE_3__ *) malloc(_len_map__i0__dso0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_map__i0__dso0; _j0++) {
              int _len_map__i0__dso_long_name0 = 1;
          map[_i0].dso->long_name = (char *) malloc(_len_map__i0__dso_long_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_map__i0__dso_long_name0; _j0++) {
            map[_i0].dso->long_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_map__i0__dso_name0 = 1;
          map[_i0].dso->name = (char *) malloc(_len_map__i0__dso_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_map__i0__dso_name0; _j0++) {
            map[_i0].dso->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const char * benchRet = get_dsoname(map);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].dso);
          }
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
