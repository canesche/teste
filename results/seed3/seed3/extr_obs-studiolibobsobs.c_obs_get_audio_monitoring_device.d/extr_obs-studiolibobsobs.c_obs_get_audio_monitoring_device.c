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
struct TYPE_3__ {char* monitoring_device_name; char* monitoring_device_id; } ;
struct TYPE_4__ {TYPE_1__ audio; } ;

/* Variables and functions */
 TYPE_2__* obs ; 

void obs_get_audio_monitoring_device(const char **name, const char **id)
{
	if (!obs)
		return;

	if (name)
		*name = obs->audio.monitoring_device_name;
	if (id)
		*id = obs->audio.monitoring_device_id;
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
          int _len_name0 = 1;
          const char ** name = (const char **) malloc(_len_name0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            int _len_name1 = 1;
            name[_i0] = (const char *) malloc(_len_name1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_name1; _i1++) {
              name[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_id0 = 1;
          const char ** id = (const char **) malloc(_len_id0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            int _len_id1 = 1;
            id[_i0] = (const char *) malloc(_len_id1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_id1; _i1++) {
              id[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          obs_get_audio_monitoring_device(name,id);
          for(int i1 = 0; i1 < _len_name0; i1++) {
            int _len_name1 = 1;
              free(name[i1]);
          }
          free(name);
          for(int i1 = 0; i1 < _len_id0; i1++) {
            int _len_id1 = 1;
              free(id[i1]);
          }
          free(id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_name0 = 65025;
          const char ** name = (const char **) malloc(_len_name0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            int _len_name1 = 1;
            name[_i0] = (const char *) malloc(_len_name1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_name1; _i1++) {
              name[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_id0 = 65025;
          const char ** id = (const char **) malloc(_len_id0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            int _len_id1 = 1;
            id[_i0] = (const char *) malloc(_len_id1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_id1; _i1++) {
              id[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          obs_get_audio_monitoring_device(name,id);
          for(int i1 = 0; i1 < _len_name0; i1++) {
            int _len_name1 = 1;
              free(name[i1]);
          }
          free(name);
          for(int i1 = 0; i1 < _len_id0; i1++) {
            int _len_id1 = 1;
              free(id[i1]);
          }
          free(id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_name0 = 100;
          const char ** name = (const char **) malloc(_len_name0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            int _len_name1 = 1;
            name[_i0] = (const char *) malloc(_len_name1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_name1; _i1++) {
              name[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_id0 = 100;
          const char ** id = (const char **) malloc(_len_id0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            int _len_id1 = 1;
            id[_i0] = (const char *) malloc(_len_id1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_id1; _i1++) {
              id[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          obs_get_audio_monitoring_device(name,id);
          for(int i1 = 0; i1 < _len_name0; i1++) {
            int _len_name1 = 1;
              free(name[i1]);
          }
          free(name);
          for(int i1 = 0; i1 < _len_id0; i1++) {
            int _len_id1 = 1;
              free(id[i1]);
          }
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
