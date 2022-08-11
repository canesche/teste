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
struct kobject {int dummy; } ;
struct kobj_uevent_env {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int kobject_uevent_net_broadcast(struct kobject *kobj,
					struct kobj_uevent_env *env,
					const char *action_string,
					const char *devpath)
{
	int ret = 0;

#ifdef CONFIG_NET
	const struct kobj_ns_type_operations *ops;
	const struct net *net = NULL;

	ops = kobj_ns_ops(kobj);
	if (!ops && kobj->kset) {
		struct kobject *ksobj = &kobj->kset->kobj;
		if (ksobj->parent != NULL)
			ops = kobj_ns_ops(ksobj->parent);
	}

	/* kobjects currently only carry network namespace tags and they
	 * are the only tag relevant here since we want to decide which
	 * network namespaces to broadcast the uevent into.
	 */
	if (ops && ops->netlink_ns && kobj->ktype->namespace)
		if (ops->type == KOBJ_NS_TYPE_NET)
			net = kobj->ktype->namespace(kobj);

	if (!net)
		ret = uevent_net_broadcast_untagged(env, action_string,
						    devpath);
	else
		ret = uevent_net_broadcast_tagged(net->uevent_sock->sk, env,
						  action_string, devpath);
#endif

	return ret;
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
          int _len_kobj0 = 1;
          struct kobject * kobj = (struct kobject *) malloc(_len_kobj0*sizeof(struct kobject));
          for(int _i0 = 0; _i0 < _len_kobj0; _i0++) {
            kobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_env0 = 1;
          struct kobj_uevent_env * env = (struct kobj_uevent_env *) malloc(_len_env0*sizeof(struct kobj_uevent_env));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action_string0 = 1;
          const char * action_string = (const char *) malloc(_len_action_string0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_action_string0; _i0++) {
            action_string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_devpath0 = 1;
          const char * devpath = (const char *) malloc(_len_devpath0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_devpath0; _i0++) {
            devpath[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kobject_uevent_net_broadcast(kobj,env,action_string,devpath);
          printf("%d\n", benchRet); 
          free(kobj);
          free(env);
          free(action_string);
          free(devpath);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_kobj0 = 65025;
          struct kobject * kobj = (struct kobject *) malloc(_len_kobj0*sizeof(struct kobject));
          for(int _i0 = 0; _i0 < _len_kobj0; _i0++) {
            kobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_env0 = 65025;
          struct kobj_uevent_env * env = (struct kobj_uevent_env *) malloc(_len_env0*sizeof(struct kobj_uevent_env));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action_string0 = 65025;
          const char * action_string = (const char *) malloc(_len_action_string0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_action_string0; _i0++) {
            action_string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_devpath0 = 65025;
          const char * devpath = (const char *) malloc(_len_devpath0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_devpath0; _i0++) {
            devpath[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kobject_uevent_net_broadcast(kobj,env,action_string,devpath);
          printf("%d\n", benchRet); 
          free(kobj);
          free(env);
          free(action_string);
          free(devpath);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_kobj0 = 100;
          struct kobject * kobj = (struct kobject *) malloc(_len_kobj0*sizeof(struct kobject));
          for(int _i0 = 0; _i0 < _len_kobj0; _i0++) {
            kobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_env0 = 100;
          struct kobj_uevent_env * env = (struct kobj_uevent_env *) malloc(_len_env0*sizeof(struct kobj_uevent_env));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action_string0 = 100;
          const char * action_string = (const char *) malloc(_len_action_string0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_action_string0; _i0++) {
            action_string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_devpath0 = 100;
          const char * devpath = (const char *) malloc(_len_devpath0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_devpath0; _i0++) {
            devpath[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kobject_uevent_net_broadcast(kobj,env,action_string,devpath);
          printf("%d\n", benchRet); 
          free(kobj);
          free(env);
          free(action_string);
          free(devpath);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
