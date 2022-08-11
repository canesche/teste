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
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int minus_flag; int /*<<< orphan*/  type; int /*<<< orphan*/  words; int /*<<< orphan*/ * H; } ;
typedef  TYPE_1__ watchcat_query_phrase_t ;
struct TYPE_7__ {struct TYPE_7__* next; int /*<<< orphan*/  type; int /*<<< orphan*/  words; int /*<<< orphan*/ * H; } ;
typedef  TYPE_2__ searchy_query_phrase_t ;
typedef  int /*<<< orphan*/  hash_t ;

/* Variables and functions */

watchcat_query_phrase_t *searchy_phrases_dump (watchcat_query_phrase_t *dest, searchy_query_phrase_t *cur,
  int minus_flag, hash_t *dest_words_buf, hash_t *src_words_buf) {
  while (cur != NULL) {
    dest->H = dest_words_buf + (cur->H - src_words_buf);
    dest->words = cur->words;
    dest->type = cur->type;
    dest->minus_flag = minus_flag;
    dest++;
    cur = cur->next;
  }
  return dest;
}


// ------------------------------------------------------------------------- //

struct TYPE_7__ *_allocate_cur(int length, struct TYPE_7__ *aux_cur[]) {
  struct TYPE_7__ *walker = (struct TYPE_7__ *)malloc(sizeof(struct TYPE_7__));

  aux_cur[0] = walker;
  walker->next = NULL;
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->words = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_H0 = 1;
  walker->H = (int *) malloc(_len_walker_H0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_H0; _i0++) {
    walker->H[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct TYPE_7__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_7__ *)malloc(sizeof(struct TYPE_7__));
    walker = walker->next;
    aux_cur[i] = walker;
    walker->next = NULL;
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->words = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_H0 = 1;
  walker->H = (int *) malloc(_len_walker_H0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_H0; _i0++) {
    walker->H[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_cur(struct TYPE_7__ *aux_cur[], int aux_cur_size) {
  for(int i = 0; i < aux_cur_size; i++) 
    if(aux_cur[i])
      free(aux_cur[i]);
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
          int minus_flag = 100;
          int _len_dest0 = 1;
          struct TYPE_6__ * dest = (struct TYPE_6__ *) malloc(_len_dest0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0].minus_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].words = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dest__i0__H0 = 1;
          dest[_i0].H = (int *) malloc(_len_dest__i0__H0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dest__i0__H0; _j0++) {
            dest[_i0].H[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_7__ * aux_cur[1];
          struct TYPE_7__ * cur = _allocate_cur(1, aux_cur);
          int _len_dest_words_buf0 = 1;
          int * dest_words_buf = (int *) malloc(_len_dest_words_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_words_buf0; _i0++) {
            dest_words_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_words_buf0 = 1;
          int * src_words_buf = (int *) malloc(_len_src_words_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_words_buf0; _i0++) {
            src_words_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = searchy_phrases_dump(dest,cur,minus_flag,dest_words_buf,src_words_buf);
          printf("%d\n", (*benchRet).minus_flag);
          printf("%d\n", (*benchRet).type);
          printf("%d\n", (*benchRet).words);
          for(int _aux = 0; _aux < _len_dest0; _aux++) {
          free(dest[_aux].H);
          }
          free(dest);
          _delete_cur(aux_cur, 1);
          free(dest_words_buf);
          free(src_words_buf);
        
        break;
    }
    // linked
    case 3:
    {
          int minus_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dest0 = 1;
          struct TYPE_6__ * dest = (struct TYPE_6__ *) malloc(_len_dest0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0].minus_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].words = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dest__i0__H0 = 1;
          dest[_i0].H = (int *) malloc(_len_dest__i0__H0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dest__i0__H0; _j0++) {
            dest[_i0].H[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_7__ * aux_cur[10000];
          struct TYPE_7__ * cur = _allocate_cur(10000, aux_cur);
          int _len_dest_words_buf0 = 1;
          int * dest_words_buf = (int *) malloc(_len_dest_words_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_words_buf0; _i0++) {
            dest_words_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_words_buf0 = 1;
          int * src_words_buf = (int *) malloc(_len_src_words_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_words_buf0; _i0++) {
            src_words_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = searchy_phrases_dump(dest,cur,minus_flag,dest_words_buf,src_words_buf);
          printf("%d\n", (*benchRet).minus_flag);
          printf("%d\n", (*benchRet).type);
          printf("%d\n", (*benchRet).words);
          for(int _aux = 0; _aux < _len_dest0; _aux++) {
          free(dest[_aux].H);
          }
          free(dest);
          _delete_cur(aux_cur, 10000);
          free(dest_words_buf);
          free(src_words_buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
