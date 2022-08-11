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
struct i2s_dai {struct i2s_dai* sec_dai; scalar_t__ pri_dai; } ;

/* Variables and functions */

__attribute__((used)) static inline struct i2s_dai *get_other_dai(struct i2s_dai *i2s)
{
	return i2s->pri_dai ? : i2s->sec_dai;
}


// ------------------------------------------------------------------------- //

struct i2s_dai *_allocate_i2s(int length, struct i2s_dai *aux_i2s[]) {
  struct i2s_dai *walker = (struct i2s_dai *)malloc(sizeof(struct i2s_dai));

  aux_i2s[0] = walker;
  walker->sec_dai = NULL;
walker->pri_dai = ((-2 * (next_i()%2)) + 1) * next_i();

  struct i2s_dai *head = walker;
  for(int i = 1; i < length; i++) {
    walker->sec_dai = (struct i2s_dai *)malloc(sizeof(struct i2s_dai));
    walker = walker->sec_dai;
    aux_i2s[i] = walker;
    walker->sec_dai = NULL;
walker->pri_dai = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_i2s(struct i2s_dai *aux_i2s[], int aux_i2s_size) {
  for(int i = 0; i < aux_i2s_size; i++) 
    if(aux_i2s[i])
      free(aux_i2s[i]);
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
          struct i2s_dai * aux_i2s[1];
          struct i2s_dai * i2s = _allocate_i2s(1, aux_i2s);
          struct i2s_dai * benchRet = get_other_dai(i2s);
          printf("%ld\n", (*benchRet).pri_dai);
          _delete_i2s(aux_i2s, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct i2s_dai * aux_i2s[10000];
          struct i2s_dai * i2s = _allocate_i2s(10000, aux_i2s);
          struct i2s_dai * benchRet = get_other_dai(i2s);
          printf("%ld\n", (*benchRet).pri_dai);
          _delete_i2s(aux_i2s, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
