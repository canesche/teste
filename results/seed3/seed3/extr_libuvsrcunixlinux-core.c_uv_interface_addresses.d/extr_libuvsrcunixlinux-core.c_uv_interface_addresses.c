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
typedef  int /*<<< orphan*/  uv_interface_address_t ;

/* Variables and functions */
 int UV_ENOSYS ; 

int uv_interface_addresses(uv_interface_address_t** addresses, int* count) {
#ifndef HAVE_IFADDRS_H
  *count = 0;
  *addresses = NULL;
  return UV_ENOSYS;
#else
  struct ifaddrs *addrs, *ent;
  uv_interface_address_t* address;
  int i;
  struct sockaddr_ll *sll;

  *count = 0;
  *addresses = NULL;

  if (getifaddrs(&addrs))
    return UV__ERR(errno);

  /* Count the number of interfaces */
  for (ent = addrs; ent != NULL; ent = ent->ifa_next) {
    if (uv__ifaddr_exclude(ent, UV__EXCLUDE_IFADDR))
      continue;

    (*count)++;
  }

  if (*count == 0) {
    freeifaddrs(addrs);
    return 0;
  }

  /* Make sure the memory is initiallized to zero using calloc() */
  *addresses = uv__calloc(*count, sizeof(**addresses));
  if (!(*addresses)) {
    freeifaddrs(addrs);
    return UV_ENOMEM;
  }

  address = *addresses;

  for (ent = addrs; ent != NULL; ent = ent->ifa_next) {
    if (uv__ifaddr_exclude(ent, UV__EXCLUDE_IFADDR))
      continue;

    address->name = uv__strdup(ent->ifa_name);

    if (ent->ifa_addr->sa_family == AF_INET6) {
      address->address.address6 = *((struct sockaddr_in6*) ent->ifa_addr);
    } else {
      address->address.address4 = *((struct sockaddr_in*) ent->ifa_addr);
    }

    if (ent->ifa_netmask->sa_family == AF_INET6) {
      address->netmask.netmask6 = *((struct sockaddr_in6*) ent->ifa_netmask);
    } else {
      address->netmask.netmask4 = *((struct sockaddr_in*) ent->ifa_netmask);
    }

    address->is_internal = !!(ent->ifa_flags & IFF_LOOPBACK);

    address++;
  }

  /* Fill in physical addresses for each interface */
  for (ent = addrs; ent != NULL; ent = ent->ifa_next) {
    if (uv__ifaddr_exclude(ent, UV__EXCLUDE_IFPHYS))
      continue;

    address = *addresses;

    for (i = 0; i < (*count); i++) {
      size_t namelen = strlen(ent->ifa_name);
      /* Alias interface share the same physical address */
      if (strncmp(address->name, ent->ifa_name, namelen) == 0 &&
          (address->name[namelen] == 0 || address->name[namelen] == ':')) {
        sll = (struct sockaddr_ll*)ent->ifa_addr;
        memcpy(address->phys_addr, sll->sll_addr, sizeof(address->phys_addr));
      }
      address++;
    }
  }

  freeifaddrs(addrs);

  return 0;
#endif
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
          int _len_addresses0 = 1;
          int ** addresses = (int **) malloc(_len_addresses0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_addresses0; _i0++) {
            int _len_addresses1 = 1;
            addresses[_i0] = (int *) malloc(_len_addresses1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_addresses1; _i1++) {
              addresses[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_count0 = 1;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv_interface_addresses(addresses,count);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_addresses0; i1++) {
            int _len_addresses1 = 1;
              free(addresses[i1]);
          }
          free(addresses);
          free(count);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_addresses0 = 65025;
          int ** addresses = (int **) malloc(_len_addresses0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_addresses0; _i0++) {
            int _len_addresses1 = 1;
            addresses[_i0] = (int *) malloc(_len_addresses1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_addresses1; _i1++) {
              addresses[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_count0 = 65025;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv_interface_addresses(addresses,count);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_addresses0; i1++) {
            int _len_addresses1 = 1;
              free(addresses[i1]);
          }
          free(addresses);
          free(count);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_addresses0 = 100;
          int ** addresses = (int **) malloc(_len_addresses0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_addresses0; _i0++) {
            int _len_addresses1 = 1;
            addresses[_i0] = (int *) malloc(_len_addresses1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_addresses1; _i1++) {
              addresses[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_count0 = 100;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv_interface_addresses(addresses,count);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_addresses0; i1++) {
            int _len_addresses1 = 1;
              free(addresses[i1]);
          }
          free(addresses);
          free(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
