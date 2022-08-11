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
typedef  int uint8_t ;
struct tlpm_node {size_t n_bits; int* key; struct tlpm_node* next; } ;

/* Variables and functions */

__attribute__((used)) static struct tlpm_node *tlpm_match(struct tlpm_node *list,
				    const uint8_t *key,
				    size_t n_bits)
{
	struct tlpm_node *best = NULL;
	size_t i;

	/* Perform longest prefix-match on @key/@n_bits. That is, iterate all
	 * entries and match each prefix against @key. Remember the "best"
	 * entry we find (i.e., the longest prefix that matches) and return it
	 * to the caller when done.
	 */

	for ( ; list; list = list->next) {
		for (i = 0; i < n_bits && i < list->n_bits; ++i) {
			if ((key[i / 8] & (1 << (7 - i % 8))) !=
			    (list->key[i / 8] & (1 << (7 - i % 8))))
				break;
		}

		if (i >= list->n_bits) {
			if (!best || i > best->n_bits)
				best = list;
		}
	}

	return best;
}


// ------------------------------------------------------------------------- //

struct tlpm_node *_allocate_list(int length, struct tlpm_node *aux_list[]) {
  struct tlpm_node *walker = (struct tlpm_node *)malloc(sizeof(struct tlpm_node));

  aux_list[0] = walker;
walker->n_bits = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_key0 = 1;
  walker->key = (int *) malloc(_len_walker_key0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_key0; _i0++) {
    walker->key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->next = NULL;

  struct tlpm_node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct tlpm_node *)malloc(sizeof(struct tlpm_node));
    walker = walker->next;
    aux_list[i] = walker;
walker->n_bits = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_key0 = 1;
  walker->key = (int *) malloc(_len_walker_key0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_key0; _i0++) {
    walker->key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->next = NULL;
  }

  return head;
}

void _delete_list(struct tlpm_node *aux_list[], int aux_list_size) {
  for(int i = 0; i < aux_list_size; i++) 
    if(aux_list[i])
      free(aux_list[i]);
}

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
          unsigned long n_bits = 100;
          struct tlpm_node * aux_list[1];
          struct tlpm_node * list = _allocate_list(1, aux_list);
          int _len_key0 = 1;
          const int * key = (const int *) malloc(_len_key0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct tlpm_node * benchRet = tlpm_match(list,key,n_bits);
          printf("%lu\n", (*benchRet).n_bits);
          _delete_list(aux_list, 1);
          free(key);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned long n_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          struct tlpm_node * aux_list[10000];
          struct tlpm_node * list = _allocate_list(10000, aux_list);
          int _len_key0 = 1;
          const int * key = (const int *) malloc(_len_key0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct tlpm_node * benchRet = tlpm_match(list,key,n_bits);
          printf("%lu\n", (*benchRet).n_bits);
          _delete_list(aux_list, 10000);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
