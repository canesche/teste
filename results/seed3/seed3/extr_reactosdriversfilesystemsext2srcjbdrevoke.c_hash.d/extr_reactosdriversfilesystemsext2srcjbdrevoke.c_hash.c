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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct jbd_revoke_table_s {int hash_shift; int hash_size; } ;
struct TYPE_3__ {struct jbd_revoke_table_s* j_revoke; } ;
typedef  TYPE_1__ journal_t ;

/* Variables and functions */

__attribute__((used)) static inline int hash(journal_t *journal, unsigned long block)
{
    struct jbd_revoke_table_s *table = journal->j_revoke;
    int hash_shift = table->hash_shift;

    return ((block << (hash_shift - 6)) ^
            (block >> 13) ^
            (block << (hash_shift - 12))) & (table->hash_size - 1);
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
          unsigned long block = 100;
          int _len_journal0 = 1;
          struct TYPE_3__ * journal = (struct TYPE_3__ *) malloc(_len_journal0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_journal0; _i0++) {
              int _len_journal__i0__j_revoke0 = 1;
          journal[_i0].j_revoke = (struct jbd_revoke_table_s *) malloc(_len_journal__i0__j_revoke0*sizeof(struct jbd_revoke_table_s));
          for(int _j0 = 0; _j0 < _len_journal__i0__j_revoke0; _j0++) {
            journal[_i0].j_revoke->hash_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        journal[_i0].j_revoke->hash_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hash(journal,block);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_journal0; _aux++) {
          free(journal[_aux].j_revoke);
          }
          free(journal);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long block = 255;
          int _len_journal0 = 65025;
          struct TYPE_3__ * journal = (struct TYPE_3__ *) malloc(_len_journal0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_journal0; _i0++) {
              int _len_journal__i0__j_revoke0 = 1;
          journal[_i0].j_revoke = (struct jbd_revoke_table_s *) malloc(_len_journal__i0__j_revoke0*sizeof(struct jbd_revoke_table_s));
          for(int _j0 = 0; _j0 < _len_journal__i0__j_revoke0; _j0++) {
            journal[_i0].j_revoke->hash_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        journal[_i0].j_revoke->hash_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hash(journal,block);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_journal0; _aux++) {
          free(journal[_aux].j_revoke);
          }
          free(journal);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long block = 10;
          int _len_journal0 = 100;
          struct TYPE_3__ * journal = (struct TYPE_3__ *) malloc(_len_journal0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_journal0; _i0++) {
              int _len_journal__i0__j_revoke0 = 1;
          journal[_i0].j_revoke = (struct jbd_revoke_table_s *) malloc(_len_journal__i0__j_revoke0*sizeof(struct jbd_revoke_table_s));
          for(int _j0 = 0; _j0 < _len_journal__i0__j_revoke0; _j0++) {
            journal[_i0].j_revoke->hash_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        journal[_i0].j_revoke->hash_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hash(journal,block);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_journal0; _aux++) {
          free(journal[_aux].j_revoke);
          }
          free(journal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
