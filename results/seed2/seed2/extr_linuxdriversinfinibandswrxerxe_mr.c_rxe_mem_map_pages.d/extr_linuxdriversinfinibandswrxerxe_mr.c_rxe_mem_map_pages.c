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
typedef  void* u64 ;
struct rxe_phys_buf {int size; int /*<<< orphan*/  addr; } ;
struct rxe_mem {int max_buf; int page_shift; int length; int /*<<< orphan*/  state; void* va; void* iova; struct rxe_map** map; } ;
struct rxe_map {struct rxe_phys_buf* buf; } ;
struct rxe_dev {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int RXE_BUF_PER_MAP ; 
 int /*<<< orphan*/  RXE_MEM_STATE_VALID ; 

int rxe_mem_map_pages(struct rxe_dev *rxe, struct rxe_mem *mem,
		      u64 *page, int num_pages, u64 iova)
{
	int i;
	int num_buf;
	int err;
	struct rxe_map **map;
	struct rxe_phys_buf *buf;
	int page_size;

	if (num_pages > mem->max_buf) {
		err = -EINVAL;
		goto err1;
	}

	num_buf		= 0;
	page_size	= 1 << mem->page_shift;
	map		= mem->map;
	buf		= map[0]->buf;

	for (i = 0; i < num_pages; i++) {
		buf->addr = *page++;
		buf->size = page_size;
		buf++;
		num_buf++;

		if (num_buf == RXE_BUF_PER_MAP) {
			map++;
			buf = map[0]->buf;
			num_buf = 0;
		}
	}

	mem->iova	= iova;
	mem->va		= iova;
	mem->length	= num_pages << mem->page_shift;
	mem->state	= RXE_MEM_STATE_VALID;

	return 0;

err1:
	return err;
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
          int num_pages = 100;
          int _len_rxe0 = 1;
          struct rxe_dev * rxe = (struct rxe_dev *) malloc(_len_rxe0*sizeof(struct rxe_dev));
          for(int _i0 = 0; _i0 < _len_rxe0; _i0++) {
            rxe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mem0 = 1;
          struct rxe_mem * mem = (struct rxe_mem *) malloc(_len_mem0*sizeof(struct rxe_mem));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].max_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].page_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mem__i0__map0 = 1;
          mem[_i0].map = (struct rxe_map **) malloc(_len_mem__i0__map0*sizeof(struct rxe_map *));
          for(int _j0 = 0; _j0 < _len_mem__i0__map0; _j0++) {
            int _len_mem__i0__map1 = 1;
            mem[_i0].map[_j0] = (struct rxe_map *) malloc(_len_mem__i0__map1*sizeof(struct rxe_map));
            for(int _j1 = 0; _j1 < _len_mem__i0__map1; _j1++) {
                int _len_mem__i0__map__j0__buf0 = 1;
          mem[_i0].map[_j0]->buf = (struct rxe_phys_buf *) malloc(_len_mem__i0__map__j0__buf0*sizeof(struct rxe_phys_buf));
          for(int _j0 = 0; _j0 < _len_mem__i0__map__j0__buf0; _j0++) {
            mem[_i0].map[_j0]->buf->size = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].map[_j0]->buf->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_page0 = 1;
          void ** page = (void **) malloc(_len_page0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
          }
          void * iova;
          int benchRet = rxe_mem_map_pages(rxe,mem,page,num_pages,iova);
          printf("%d\n", benchRet); 
          free(rxe);
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(*(mem[_aux].map));
        free(mem[_aux].map);
          }
          free(mem);
          for(int i1 = 0; i1 < _len_page0; i1++) {
            int _len_page1 = 1;
              }
          free(page);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_pages = 255;
          int _len_rxe0 = 65025;
          struct rxe_dev * rxe = (struct rxe_dev *) malloc(_len_rxe0*sizeof(struct rxe_dev));
          for(int _i0 = 0; _i0 < _len_rxe0; _i0++) {
            rxe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mem0 = 65025;
          struct rxe_mem * mem = (struct rxe_mem *) malloc(_len_mem0*sizeof(struct rxe_mem));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].max_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].page_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mem__i0__map0 = 1;
          mem[_i0].map = (struct rxe_map **) malloc(_len_mem__i0__map0*sizeof(struct rxe_map *));
          for(int _j0 = 0; _j0 < _len_mem__i0__map0; _j0++) {
            int _len_mem__i0__map1 = 1;
            mem[_i0].map[_j0] = (struct rxe_map *) malloc(_len_mem__i0__map1*sizeof(struct rxe_map));
            for(int _j1 = 0; _j1 < _len_mem__i0__map1; _j1++) {
                int _len_mem__i0__map__j0__buf0 = 1;
          mem[_i0].map[_j0]->buf = (struct rxe_phys_buf *) malloc(_len_mem__i0__map__j0__buf0*sizeof(struct rxe_phys_buf));
          for(int _j0 = 0; _j0 < _len_mem__i0__map__j0__buf0; _j0++) {
            mem[_i0].map[_j0]->buf->size = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].map[_j0]->buf->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_page0 = 65025;
          void ** page = (void **) malloc(_len_page0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
          }
          void * iova;
          int benchRet = rxe_mem_map_pages(rxe,mem,page,num_pages,iova);
          printf("%d\n", benchRet); 
          free(rxe);
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(*(mem[_aux].map));
        free(mem[_aux].map);
          }
          free(mem);
          for(int i1 = 0; i1 < _len_page0; i1++) {
            int _len_page1 = 1;
              }
          free(page);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_pages = 10;
          int _len_rxe0 = 100;
          struct rxe_dev * rxe = (struct rxe_dev *) malloc(_len_rxe0*sizeof(struct rxe_dev));
          for(int _i0 = 0; _i0 < _len_rxe0; _i0++) {
            rxe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mem0 = 100;
          struct rxe_mem * mem = (struct rxe_mem *) malloc(_len_mem0*sizeof(struct rxe_mem));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].max_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].page_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mem__i0__map0 = 1;
          mem[_i0].map = (struct rxe_map **) malloc(_len_mem__i0__map0*sizeof(struct rxe_map *));
          for(int _j0 = 0; _j0 < _len_mem__i0__map0; _j0++) {
            int _len_mem__i0__map1 = 1;
            mem[_i0].map[_j0] = (struct rxe_map *) malloc(_len_mem__i0__map1*sizeof(struct rxe_map));
            for(int _j1 = 0; _j1 < _len_mem__i0__map1; _j1++) {
                int _len_mem__i0__map__j0__buf0 = 1;
          mem[_i0].map[_j0]->buf = (struct rxe_phys_buf *) malloc(_len_mem__i0__map__j0__buf0*sizeof(struct rxe_phys_buf));
          for(int _j0 = 0; _j0 < _len_mem__i0__map__j0__buf0; _j0++) {
            mem[_i0].map[_j0]->buf->size = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].map[_j0]->buf->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_page0 = 100;
          void ** page = (void **) malloc(_len_page0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
          }
          void * iova;
          int benchRet = rxe_mem_map_pages(rxe,mem,page,num_pages,iova);
          printf("%d\n", benchRet); 
          free(rxe);
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(*(mem[_aux].map));
        free(mem[_aux].map);
          }
          free(mem);
          for(int i1 = 0; i1 < _len_page0; i1++) {
            int _len_page1 = 1;
              }
          free(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
