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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {struct TYPE_6__* next_bio; TYPE_1__* method; } ;
struct TYPE_5__ {int type; } ;
typedef  TYPE_2__ BIO ;

/* Variables and functions */

BIO *BIO_find_type(BIO *bio, int type)
{
    int mt, mask;

    if (bio == NULL)
        return NULL;
    mask = type & 0xff;
    do {
        if (bio->method != NULL) {
            mt = bio->method->type;

            if (!mask) {
                if (mt & type)
                    return bio;
            } else if (mt == type)
                return bio;
        }
        bio = bio->next_bio;
    } while (bio != NULL);
    return NULL;
}


// ------------------------------------------------------------------------- //

struct TYPE_6__ *_allocate_bio(int length, struct TYPE_6__ *aux_bio[]) {
  struct TYPE_6__ *walker = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));

  aux_bio[0] = walker;
  walker->next_bio = NULL;
  int _len_walker_method0 = 1;
  walker->method = (struct TYPE_5__ *) malloc(_len_walker_method0*sizeof(struct TYPE_5__));
  for(int _i0 = 0; _i0 < _len_walker_method0; _i0++) {
    walker->method.type = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct TYPE_6__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_bio = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));
    walker = walker->next_bio;
    aux_bio[i] = walker;
    walker->next_bio = NULL;
  int _len_walker_method0 = 1;
  walker->method = (struct TYPE_5__ *) malloc(_len_walker_method0*sizeof(struct TYPE_5__));
  for(int _i0 = 0; _i0 < _len_walker_method0; _i0++) {
    walker->method.type = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_bio(struct TYPE_6__ *aux_bio[], int aux_bio_size) {
  for(int i = 0; i < aux_bio_size; i++) 
    if(aux_bio[i])
      free(aux_bio[i]);
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
          int type = 100;
          struct TYPE_6__ * aux_bio[1];
          struct TYPE_6__ * bio = _allocate_bio(1, aux_bio);
          struct TYPE_6__ * benchRet = BIO_find_type(bio,type);
          _delete_bio(aux_bio, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int type = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_6__ * aux_bio[10000];
          struct TYPE_6__ * bio = _allocate_bio(10000, aux_bio);
          struct TYPE_6__ * benchRet = BIO_find_type(bio,type);
          _delete_bio(aux_bio, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
