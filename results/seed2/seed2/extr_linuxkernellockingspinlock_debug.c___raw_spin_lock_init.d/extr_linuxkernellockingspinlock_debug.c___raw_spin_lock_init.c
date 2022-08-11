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
struct lock_class_key {int dummy; } ;
struct TYPE_3__ {int owner_cpu; int /*<<< orphan*/  owner; int /*<<< orphan*/  magic; scalar_t__ raw_lock; } ;
typedef  TYPE_1__ raw_spinlock_t ;
typedef  scalar_t__ arch_spinlock_t ;

/* Variables and functions */
 int /*<<< orphan*/  SPINLOCK_MAGIC ; 
 int /*<<< orphan*/  SPINLOCK_OWNER_INIT ; 
 scalar_t__ __ARCH_SPIN_LOCK_UNLOCKED ; 

void __raw_spin_lock_init(raw_spinlock_t *lock, const char *name,
			  struct lock_class_key *key)
{
#ifdef CONFIG_DEBUG_LOCK_ALLOC
	/*
	 * Make sure we are not reinitializing a held lock:
	 */
	debug_check_no_locks_freed((void *)lock, sizeof(*lock));
	lockdep_init_map(&lock->dep_map, name, key, 0);
#endif
	lock->raw_lock = (arch_spinlock_t)__ARCH_SPIN_LOCK_UNLOCKED;
	lock->magic = SPINLOCK_MAGIC;
	lock->owner = SPINLOCK_OWNER_INIT;
	lock->owner_cpu = -1;
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
          int _len_lock0 = 1;
          struct TYPE_3__ * lock = (struct TYPE_3__ *) malloc(_len_lock0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0].owner_cpu = ((-2 * (next_i()%2)) + 1) * next_i();
        lock[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
        lock[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
        lock[_i0].raw_lock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          __raw_spin_lock_init(lock,name,key);
          free(lock);
          free(name);
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lock0 = 65025;
          struct TYPE_3__ * lock = (struct TYPE_3__ *) malloc(_len_lock0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0].owner_cpu = ((-2 * (next_i()%2)) + 1) * next_i();
        lock[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
        lock[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
        lock[_i0].raw_lock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 65025;
          struct lock_class_key * key = (struct lock_class_key *) malloc(_len_key0*sizeof(struct lock_class_key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __raw_spin_lock_init(lock,name,key);
          free(lock);
          free(name);
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lock0 = 100;
          struct TYPE_3__ * lock = (struct TYPE_3__ *) malloc(_len_lock0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0].owner_cpu = ((-2 * (next_i()%2)) + 1) * next_i();
        lock[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
        lock[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
        lock[_i0].raw_lock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 100;
          struct lock_class_key * key = (struct lock_class_key *) malloc(_len_key0*sizeof(struct lock_class_key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __raw_spin_lock_init(lock,name,key);
          free(lock);
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
