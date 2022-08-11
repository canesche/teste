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
typedef  union socket_address {int dummy; } socket_address ;

/* Variables and functions */

int mg_resolve_from_hosts_file(const char *name, union socket_address *usa) {
#if MG_ENABLE_FILESYSTEM && defined(MG_HOSTS_FILE_NAME)
  /* TODO(mkm) cache /etc/hosts */
  FILE *fp;
  char line[1024];
  char *p;
  char alias[256];
  unsigned int a, b, c, d;
  int len = 0;

  if ((fp = mg_fopen(MG_HOSTS_FILE_NAME, "r")) == NULL) {
    return -1;
  }

  for (; fgets(line, sizeof(line), fp) != NULL;) {
    if (line[0] == '#') continue;

    if (sscanf(line, "%u.%u.%u.%u%n", &a, &b, &c, &d, &len) == 0) {
      /* TODO(mkm): handle ipv6 */
      continue;
    }
    for (p = line + len; sscanf(p, "%s%n", alias, &len) == 1; p += len) {
      if (strcmp(alias, name) == 0) {
        usa->sin.sin_addr.s_addr = htonl(a << 24 | b << 16 | c << 8 | d);
        fclose(fp);
        return 0;
      }
    }
  }

  fclose(fp);
#else
  (void) name;
  (void) usa;
#endif

  return -1;
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
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usa0 = 1;
          union socket_address * usa = (union socket_address *) malloc(_len_usa0*sizeof(union socket_address));
          for(int _i0 = 0; _i0 < _len_usa0; _i0++) {
            usa[_i0] = 0;
          }
          int benchRet = mg_resolve_from_hosts_file(name,usa);
          printf("%d\n", benchRet); 
          free(name);
          free(usa);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usa0 = 65025;
          union socket_address * usa = (union socket_address *) malloc(_len_usa0*sizeof(union socket_address));
          for(int _i0 = 0; _i0 < _len_usa0; _i0++) {
            usa[_i0] = 0;
          }
          int benchRet = mg_resolve_from_hosts_file(name,usa);
          printf("%d\n", benchRet); 
          free(name);
          free(usa);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usa0 = 100;
          union socket_address * usa = (union socket_address *) malloc(_len_usa0*sizeof(union socket_address));
          for(int _i0 = 0; _i0 < _len_usa0; _i0++) {
            usa[_i0] = 0;
          }
          int benchRet = mg_resolve_from_hosts_file(name,usa);
          printf("%d\n", benchRet); 
          free(name);
          free(usa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
