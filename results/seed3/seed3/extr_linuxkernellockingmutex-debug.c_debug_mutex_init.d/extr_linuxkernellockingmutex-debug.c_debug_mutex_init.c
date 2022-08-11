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
struct mutex {struct mutex* magic; } ;
struct lock_class_key {int dummy; } ;

/* Variables and functions */

void debug_mutex_init(struct mutex *lock, const char *name,
		      struct lock_class_key *key)
{
#ifdef CONFIG_DEBUG_LOCK_ALLOC
	/*
	 * Make sure we are not reinitializing a held lock:
	 */
	debug_check_no_locks_freed((void *)lock, sizeof(*lock));
	lockdep_init_map(&lock->dep_map, name, key, 0);
#endif
	lock->magic = lock;
}


// ------------------------------------------------------------------------- //

struct mutex *_allocate_lock(int length, struct mutex *aux_lock[]) {
  struct mutex *walker = (struct mutex *)malloc(sizeof(struct mutex));

  aux_lock[0] = walker;
  walker->magic = NULL;

  struct mutex *head = walker;
  for(int i = 1; i < length; i++) {
    walker->magic = (struct mutex *)malloc(sizeof(struct mutex));
    walker = walker->magic;
    aux_lock[i] = walker;
    walker->magic = NULL;
  }

  return head;
}

void _delete_lock(struct mutex *aux_lock[], int aux_lock_size) {
  for(int i = 0; i < aux_lock_size; i++) 
    if(aux_lock[i])
      free(aux_lock[i]);
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
          struct mutex * aux_lock[1];
          struct mutex * lock = _allocate_lock(1, aux_lock);
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          struct lock_class_key * key = (struct lock_class_key *) malloc(_len_key0*sizeof(struct lock_class_key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          debug_mutex_init(lock,name,key);
          _delete_lock(aux_lock, 1);
          free(name);
          free(key);
        
        break;
    }
    // linked
    case 3:
    {
          struct mutex * aux_lock[10000];
          struct mutex * lock = _allocate_lock(10000, aux_lock);
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          struct lock_class_key * key = (struct lock_class_key *) malloc(_len_key0*sizeof(struct lock_class_key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          debug_mutex_init(lock,name,key);
          _delete_lock(aux_lock, 10000);
          free(name);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
