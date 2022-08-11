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
       3            linked\n\
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
typedef  int u32 ;
typedef  size_t u16 ;
struct selinux_mapping {unsigned int num_perms; int* perms; } ;
struct selinux_map {size_t size; struct selinux_mapping* mapping; } ;
struct av_decision {int allowed; int auditallow; int auditdeny; } ;

/* Variables and functions */

__attribute__((used)) static void map_decision(struct selinux_map *map,
			 u16 tclass, struct av_decision *avd,
			 int allow_unknown)
{
	if (tclass < map->size) {
		struct selinux_mapping *mapping = &map->mapping[tclass];
		unsigned int i, n = mapping->num_perms;
		u32 result;

		for (i = 0, result = 0; i < n; i++) {
			if (avd->allowed & mapping->perms[i])
				result |= 1<<i;
			if (allow_unknown && !mapping->perms[i])
				result |= 1<<i;
		}
		avd->allowed = result;

		for (i = 0, result = 0; i < n; i++)
			if (avd->auditallow & mapping->perms[i])
				result |= 1<<i;
		avd->auditallow = result;

		for (i = 0, result = 0; i < n; i++) {
			if (avd->auditdeny & mapping->perms[i])
				result |= 1<<i;
			if (!allow_unknown && !mapping->perms[i])
				result |= 1<<i;
		}
		/*
		 * In case the kernel has a bug and requests a permission
		 * between num_perms and the maximum permission number, we
		 * should audit that denial
		 */
		for (; i < (sizeof(u32)*8); i++)
			result |= 1<<i;
		avd->auditdeny = result;
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
          unsigned long tclass = 100;
          int allow_unknown = 100;
          int _len_map0 = 1;
          struct selinux_map * map = (struct selinux_map *) malloc(_len_map0*sizeof(struct selinux_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__mapping0 = 1;
          map[_i0].mapping = (struct selinux_mapping *) malloc(_len_map__i0__mapping0*sizeof(struct selinux_mapping));
          for(int _j0 = 0; _j0 < _len_map__i0__mapping0; _j0++) {
            map[_i0].mapping->num_perms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__mapping_perms0 = 1;
          map[_i0].mapping->perms = (int *) malloc(_len_map__i0__mapping_perms0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_map__i0__mapping_perms0; _j0++) {
            map[_i0].mapping->perms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_avd0 = 1;
          struct av_decision * avd = (struct av_decision *) malloc(_len_avd0*sizeof(struct av_decision));
          for(int _i0 = 0; _i0 < _len_avd0; _i0++) {
            avd[_i0].allowed = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].auditallow = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].auditdeny = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_decision(map,tclass,avd,allow_unknown);
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].mapping);
          }
          free(map);
          free(avd);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long tclass = 255;
          int allow_unknown = 255;
          int _len_map0 = 65025;
          struct selinux_map * map = (struct selinux_map *) malloc(_len_map0*sizeof(struct selinux_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__mapping0 = 1;
          map[_i0].mapping = (struct selinux_mapping *) malloc(_len_map__i0__mapping0*sizeof(struct selinux_mapping));
          for(int _j0 = 0; _j0 < _len_map__i0__mapping0; _j0++) {
            map[_i0].mapping->num_perms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__mapping_perms0 = 1;
          map[_i0].mapping->perms = (int *) malloc(_len_map__i0__mapping_perms0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_map__i0__mapping_perms0; _j0++) {
            map[_i0].mapping->perms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_avd0 = 65025;
          struct av_decision * avd = (struct av_decision *) malloc(_len_avd0*sizeof(struct av_decision));
          for(int _i0 = 0; _i0 < _len_avd0; _i0++) {
            avd[_i0].allowed = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].auditallow = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].auditdeny = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_decision(map,tclass,avd,allow_unknown);
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].mapping);
          }
          free(map);
          free(avd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long tclass = 10;
          int allow_unknown = 10;
          int _len_map0 = 100;
          struct selinux_map * map = (struct selinux_map *) malloc(_len_map0*sizeof(struct selinux_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__mapping0 = 1;
          map[_i0].mapping = (struct selinux_mapping *) malloc(_len_map__i0__mapping0*sizeof(struct selinux_mapping));
          for(int _j0 = 0; _j0 < _len_map__i0__mapping0; _j0++) {
            map[_i0].mapping->num_perms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__mapping_perms0 = 1;
          map[_i0].mapping->perms = (int *) malloc(_len_map__i0__mapping_perms0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_map__i0__mapping_perms0; _j0++) {
            map[_i0].mapping->perms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_avd0 = 100;
          struct av_decision * avd = (struct av_decision *) malloc(_len_avd0*sizeof(struct av_decision));
          for(int _i0 = 0; _i0 < _len_avd0; _i0++) {
            avd[_i0].allowed = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].auditallow = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].auditdeny = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_decision(map,tclass,avd,allow_unknown);
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].mapping);
          }
          free(map);
          free(avd);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned long tclass = ((-2 * (next_i()%2)) + 1) * next_i();
          int allow_unknown = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map0 = 1;
          struct selinux_map * map = (struct selinux_map *) malloc(_len_map0*sizeof(struct selinux_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__mapping0 = 1;
          map[_i0].mapping = (struct selinux_mapping *) malloc(_len_map__i0__mapping0*sizeof(struct selinux_mapping));
          for(int _j0 = 0; _j0 < _len_map__i0__mapping0; _j0++) {
            map[_i0].mapping->num_perms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__mapping_perms0 = 1;
          map[_i0].mapping->perms = (int *) malloc(_len_map__i0__mapping_perms0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_map__i0__mapping_perms0; _j0++) {
            map[_i0].mapping->perms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_avd0 = 1;
          struct av_decision * avd = (struct av_decision *) malloc(_len_avd0*sizeof(struct av_decision));
          for(int _i0 = 0; _i0 < _len_avd0; _i0++) {
            avd[_i0].allowed = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].auditallow = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].auditdeny = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_decision(map,tclass,avd,allow_unknown);
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].mapping);
          }
          free(map);
          free(avd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
