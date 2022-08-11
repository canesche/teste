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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {size_t ch; size_t lun; } ;
struct ppa_addr {TYPE_1__ a; } ;
struct nvm_tgt_dev {struct nvm_dev_map* map; } ;
struct nvm_dev_map {struct nvm_ch_map* chnls; } ;
struct nvm_ch_map {int* lun_offs; scalar_t__ ch_off; } ;

/* Variables and functions */

__attribute__((used)) static void nvm_map_to_dev(struct nvm_tgt_dev *tgt_dev, struct ppa_addr *p)
{
	struct nvm_dev_map *dev_map = tgt_dev->map;
	struct nvm_ch_map *ch_map = &dev_map->chnls[p->a.ch];
	int lun_off = ch_map->lun_offs[p->a.lun];

	p->a.ch += ch_map->ch_off;
	p->a.lun += lun_off;
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
          int _len_tgt_dev0 = 1;
          struct nvm_tgt_dev * tgt_dev = (struct nvm_tgt_dev *) malloc(_len_tgt_dev0*sizeof(struct nvm_tgt_dev));
          for(int _i0 = 0; _i0 < _len_tgt_dev0; _i0++) {
              int _len_tgt_dev__i0__map0 = 1;
          tgt_dev[_i0].map = (struct nvm_dev_map *) malloc(_len_tgt_dev__i0__map0*sizeof(struct nvm_dev_map));
          for(int _j0 = 0; _j0 < _len_tgt_dev__i0__map0; _j0++) {
              int _len_tgt_dev__i0__map_chnls0 = 1;
          tgt_dev[_i0].map->chnls = (struct nvm_ch_map *) malloc(_len_tgt_dev__i0__map_chnls0*sizeof(struct nvm_ch_map));
          for(int _j0 = 0; _j0 < _len_tgt_dev__i0__map_chnls0; _j0++) {
              int _len_tgt_dev__i0__map_chnls_lun_offs0 = 1;
          tgt_dev[_i0].map->chnls->lun_offs = (int *) malloc(_len_tgt_dev__i0__map_chnls_lun_offs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tgt_dev__i0__map_chnls_lun_offs0; _j0++) {
            tgt_dev[_i0].map->chnls->lun_offs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tgt_dev[_i0].map->chnls->ch_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_p0 = 1;
          struct ppa_addr * p = (struct ppa_addr *) malloc(_len_p0*sizeof(struct ppa_addr));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].a.ch = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].a.lun = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvm_map_to_dev(tgt_dev,p);
          for(int _aux = 0; _aux < _len_tgt_dev0; _aux++) {
          free(tgt_dev[_aux].map);
          }
          free(tgt_dev);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tgt_dev0 = 65025;
          struct nvm_tgt_dev * tgt_dev = (struct nvm_tgt_dev *) malloc(_len_tgt_dev0*sizeof(struct nvm_tgt_dev));
          for(int _i0 = 0; _i0 < _len_tgt_dev0; _i0++) {
              int _len_tgt_dev__i0__map0 = 1;
          tgt_dev[_i0].map = (struct nvm_dev_map *) malloc(_len_tgt_dev__i0__map0*sizeof(struct nvm_dev_map));
          for(int _j0 = 0; _j0 < _len_tgt_dev__i0__map0; _j0++) {
              int _len_tgt_dev__i0__map_chnls0 = 1;
          tgt_dev[_i0].map->chnls = (struct nvm_ch_map *) malloc(_len_tgt_dev__i0__map_chnls0*sizeof(struct nvm_ch_map));
          for(int _j0 = 0; _j0 < _len_tgt_dev__i0__map_chnls0; _j0++) {
              int _len_tgt_dev__i0__map_chnls_lun_offs0 = 1;
          tgt_dev[_i0].map->chnls->lun_offs = (int *) malloc(_len_tgt_dev__i0__map_chnls_lun_offs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tgt_dev__i0__map_chnls_lun_offs0; _j0++) {
            tgt_dev[_i0].map->chnls->lun_offs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tgt_dev[_i0].map->chnls->ch_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_p0 = 65025;
          struct ppa_addr * p = (struct ppa_addr *) malloc(_len_p0*sizeof(struct ppa_addr));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].a.ch = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].a.lun = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvm_map_to_dev(tgt_dev,p);
          for(int _aux = 0; _aux < _len_tgt_dev0; _aux++) {
          free(tgt_dev[_aux].map);
          }
          free(tgt_dev);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tgt_dev0 = 100;
          struct nvm_tgt_dev * tgt_dev = (struct nvm_tgt_dev *) malloc(_len_tgt_dev0*sizeof(struct nvm_tgt_dev));
          for(int _i0 = 0; _i0 < _len_tgt_dev0; _i0++) {
              int _len_tgt_dev__i0__map0 = 1;
          tgt_dev[_i0].map = (struct nvm_dev_map *) malloc(_len_tgt_dev__i0__map0*sizeof(struct nvm_dev_map));
          for(int _j0 = 0; _j0 < _len_tgt_dev__i0__map0; _j0++) {
              int _len_tgt_dev__i0__map_chnls0 = 1;
          tgt_dev[_i0].map->chnls = (struct nvm_ch_map *) malloc(_len_tgt_dev__i0__map_chnls0*sizeof(struct nvm_ch_map));
          for(int _j0 = 0; _j0 < _len_tgt_dev__i0__map_chnls0; _j0++) {
              int _len_tgt_dev__i0__map_chnls_lun_offs0 = 1;
          tgt_dev[_i0].map->chnls->lun_offs = (int *) malloc(_len_tgt_dev__i0__map_chnls_lun_offs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tgt_dev__i0__map_chnls_lun_offs0; _j0++) {
            tgt_dev[_i0].map->chnls->lun_offs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tgt_dev[_i0].map->chnls->ch_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_p0 = 100;
          struct ppa_addr * p = (struct ppa_addr *) malloc(_len_p0*sizeof(struct ppa_addr));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].a.ch = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].a.lun = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvm_map_to_dev(tgt_dev,p);
          for(int _aux = 0; _aux < _len_tgt_dev0; _aux++) {
          free(tgt_dev[_aux].map);
          }
          free(tgt_dev);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
