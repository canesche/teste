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
struct fscache_objlist_data {int /*<<< orphan*/  config; } ;

/* Variables and functions */
 int /*<<< orphan*/  ULONG_MAX ; 

__attribute__((used)) static void fscache_objlist_config(struct fscache_objlist_data *data)
{
#ifdef CONFIG_KEYS
	const struct user_key_payload *confkey;
	unsigned long config;
	struct key *key;
	const char *buf;
	int len;

	key = request_key(&key_type_user, "fscache:objlist", NULL);
	if (IS_ERR(key))
		goto no_config;

	config = 0;
	rcu_read_lock();

	confkey = user_key_payload_rcu(key);
	if (!confkey) {
		/* key was revoked */
		rcu_read_unlock();
		key_put(key);
		goto no_config;
	}

	buf = confkey->data;

	for (len = confkey->datalen - 1; len >= 0; len--) {
		switch (buf[len]) {
		case 'K': config |= FSCACHE_OBJLIST_CONFIG_KEY;		break;
		case 'A': config |= FSCACHE_OBJLIST_CONFIG_AUX;		break;
		case 'C': config |= FSCACHE_OBJLIST_CONFIG_COOKIE;	break;
		case 'c': config |= FSCACHE_OBJLIST_CONFIG_NOCOOKIE;	break;
		case 'B': config |= FSCACHE_OBJLIST_CONFIG_BUSY;	break;
		case 'b': config |= FSCACHE_OBJLIST_CONFIG_IDLE;	break;
		case 'W': config |= FSCACHE_OBJLIST_CONFIG_PENDWR;	break;
		case 'w': config |= FSCACHE_OBJLIST_CONFIG_NOPENDWR;	break;
		case 'R': config |= FSCACHE_OBJLIST_CONFIG_READS;	break;
		case 'r': config |= FSCACHE_OBJLIST_CONFIG_NOREADS;	break;
		case 'S': config |= FSCACHE_OBJLIST_CONFIG_WORK;	break;
		case 's': config |= FSCACHE_OBJLIST_CONFIG_NOWORK;	break;
		}
	}

	rcu_read_unlock();
	key_put(key);

	if (!(config & (FSCACHE_OBJLIST_CONFIG_COOKIE | FSCACHE_OBJLIST_CONFIG_NOCOOKIE)))
	    config   |= FSCACHE_OBJLIST_CONFIG_COOKIE | FSCACHE_OBJLIST_CONFIG_NOCOOKIE;
	if (!(config & (FSCACHE_OBJLIST_CONFIG_BUSY | FSCACHE_OBJLIST_CONFIG_IDLE)))
	    config   |= FSCACHE_OBJLIST_CONFIG_BUSY | FSCACHE_OBJLIST_CONFIG_IDLE;
	if (!(config & (FSCACHE_OBJLIST_CONFIG_PENDWR | FSCACHE_OBJLIST_CONFIG_NOPENDWR)))
	    config   |= FSCACHE_OBJLIST_CONFIG_PENDWR | FSCACHE_OBJLIST_CONFIG_NOPENDWR;
	if (!(config & (FSCACHE_OBJLIST_CONFIG_READS | FSCACHE_OBJLIST_CONFIG_NOREADS)))
	    config   |= FSCACHE_OBJLIST_CONFIG_READS | FSCACHE_OBJLIST_CONFIG_NOREADS;
	if (!(config & (FSCACHE_OBJLIST_CONFIG_EVENTS | FSCACHE_OBJLIST_CONFIG_NOEVENTS)))
	    config   |= FSCACHE_OBJLIST_CONFIG_EVENTS | FSCACHE_OBJLIST_CONFIG_NOEVENTS;
	if (!(config & (FSCACHE_OBJLIST_CONFIG_WORK | FSCACHE_OBJLIST_CONFIG_NOWORK)))
	    config   |= FSCACHE_OBJLIST_CONFIG_WORK | FSCACHE_OBJLIST_CONFIG_NOWORK;

	data->config = config;
	return;

no_config:
#endif
	data->config = ULONG_MAX;
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
          int _len_data0 = 1;
          struct fscache_objlist_data * data = (struct fscache_objlist_data *) malloc(_len_data0*sizeof(struct fscache_objlist_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fscache_objlist_config(data);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          struct fscache_objlist_data * data = (struct fscache_objlist_data *) malloc(_len_data0*sizeof(struct fscache_objlist_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fscache_objlist_config(data);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          struct fscache_objlist_data * data = (struct fscache_objlist_data *) malloc(_len_data0*sizeof(struct fscache_objlist_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fscache_objlist_config(data);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
