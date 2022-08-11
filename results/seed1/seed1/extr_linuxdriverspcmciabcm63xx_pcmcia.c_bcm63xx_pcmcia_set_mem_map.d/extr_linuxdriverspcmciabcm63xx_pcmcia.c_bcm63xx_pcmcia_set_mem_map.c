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
struct resource {scalar_t__ start; } ;
struct pcmcia_socket {struct bcm63xx_pcmcia_socket* driver_data; } ;
struct pccard_mem_map {int flags; scalar_t__ card_start; scalar_t__ static_start; } ;
struct bcm63xx_pcmcia_socket {struct resource* common_res; struct resource* attr_res; } ;

/* Variables and functions */
 int MAP_ATTRIB ; 

__attribute__((used)) static int bcm63xx_pcmcia_set_mem_map(struct pcmcia_socket *sock,
				      struct pccard_mem_map *map)
{
	struct bcm63xx_pcmcia_socket *skt;
	struct resource *res;

	skt = sock->driver_data;
	if (map->flags & MAP_ATTRIB)
		res = skt->attr_res;
	else
		res = skt->common_res;

	map->static_start = res->start + map->card_start;
	return 0;
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
          int _len_sock0 = 1;
          struct pcmcia_socket * sock = (struct pcmcia_socket *) malloc(_len_sock0*sizeof(struct pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              int _len_sock__i0__driver_data0 = 1;
          sock[_i0].driver_data = (struct bcm63xx_pcmcia_socket *) malloc(_len_sock__i0__driver_data0*sizeof(struct bcm63xx_pcmcia_socket));
          for(int _j0 = 0; _j0 < _len_sock__i0__driver_data0; _j0++) {
              int _len_sock__i0__driver_data_common_res0 = 1;
          sock[_i0].driver_data->common_res = (struct resource *) malloc(_len_sock__i0__driver_data_common_res0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_sock__i0__driver_data_common_res0; _j0++) {
            sock[_i0].driver_data->common_res->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sock__i0__driver_data_attr_res0 = 1;
          sock[_i0].driver_data->attr_res = (struct resource *) malloc(_len_sock__i0__driver_data_attr_res0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_sock__i0__driver_data_attr_res0; _j0++) {
            sock[_i0].driver_data->attr_res->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_map0 = 1;
          struct pccard_mem_map * map = (struct pccard_mem_map *) malloc(_len_map0*sizeof(struct pccard_mem_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].card_start = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].static_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bcm63xx_pcmcia_set_mem_map(sock,map);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sock0; _aux++) {
          free(sock[_aux].driver_data);
          }
          free(sock);
          free(map);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sock0 = 65025;
          struct pcmcia_socket * sock = (struct pcmcia_socket *) malloc(_len_sock0*sizeof(struct pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              int _len_sock__i0__driver_data0 = 1;
          sock[_i0].driver_data = (struct bcm63xx_pcmcia_socket *) malloc(_len_sock__i0__driver_data0*sizeof(struct bcm63xx_pcmcia_socket));
          for(int _j0 = 0; _j0 < _len_sock__i0__driver_data0; _j0++) {
              int _len_sock__i0__driver_data_common_res0 = 1;
          sock[_i0].driver_data->common_res = (struct resource *) malloc(_len_sock__i0__driver_data_common_res0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_sock__i0__driver_data_common_res0; _j0++) {
            sock[_i0].driver_data->common_res->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sock__i0__driver_data_attr_res0 = 1;
          sock[_i0].driver_data->attr_res = (struct resource *) malloc(_len_sock__i0__driver_data_attr_res0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_sock__i0__driver_data_attr_res0; _j0++) {
            sock[_i0].driver_data->attr_res->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_map0 = 65025;
          struct pccard_mem_map * map = (struct pccard_mem_map *) malloc(_len_map0*sizeof(struct pccard_mem_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].card_start = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].static_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bcm63xx_pcmcia_set_mem_map(sock,map);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sock0; _aux++) {
          free(sock[_aux].driver_data);
          }
          free(sock);
          free(map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sock0 = 100;
          struct pcmcia_socket * sock = (struct pcmcia_socket *) malloc(_len_sock0*sizeof(struct pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              int _len_sock__i0__driver_data0 = 1;
          sock[_i0].driver_data = (struct bcm63xx_pcmcia_socket *) malloc(_len_sock__i0__driver_data0*sizeof(struct bcm63xx_pcmcia_socket));
          for(int _j0 = 0; _j0 < _len_sock__i0__driver_data0; _j0++) {
              int _len_sock__i0__driver_data_common_res0 = 1;
          sock[_i0].driver_data->common_res = (struct resource *) malloc(_len_sock__i0__driver_data_common_res0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_sock__i0__driver_data_common_res0; _j0++) {
            sock[_i0].driver_data->common_res->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sock__i0__driver_data_attr_res0 = 1;
          sock[_i0].driver_data->attr_res = (struct resource *) malloc(_len_sock__i0__driver_data_attr_res0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_sock__i0__driver_data_attr_res0; _j0++) {
            sock[_i0].driver_data->attr_res->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_map0 = 100;
          struct pccard_mem_map * map = (struct pccard_mem_map *) malloc(_len_map0*sizeof(struct pccard_mem_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].card_start = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].static_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bcm63xx_pcmcia_set_mem_map(sock,map);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sock0; _aux++) {
          free(sock[_aux].driver_data);
          }
          free(sock);
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
