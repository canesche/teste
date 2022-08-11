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
typedef  int /*<<< orphan*/  SMBCCTX ;

/* Variables and functions */

__attribute__((used)) static void libsmbc_get_auth_data(SMBCCTX *c, const char *server, const char *share,
                                  char *workgroup, int workgroup_len,
                                  char *username, int username_len,
                                  char *password, int password_len)
{
    /* Do nothing yet. Credentials are passed via url.
     * Callback must exists, there might be a segmentation fault otherwise. */
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
          int workgroup_len = 100;
          int username_len = 100;
          int password_len = 100;
          int _len_c0 = 1;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_server0 = 1;
          const char * server = (const char *) malloc(_len_server0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_share0 = 1;
          const char * share = (const char *) malloc(_len_share0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_share0; _i0++) {
            share[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_workgroup0 = 1;
          char * workgroup = (char *) malloc(_len_workgroup0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_workgroup0; _i0++) {
            workgroup[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_username0 = 1;
          char * username = (char *) malloc(_len_username0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_username0; _i0++) {
            username[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_password0 = 1;
          char * password = (char *) malloc(_len_password0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_password0; _i0++) {
            password[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          libsmbc_get_auth_data(c,server,share,workgroup,workgroup_len,username,username_len,password,password_len);
          free(c);
          free(server);
          free(share);
          free(workgroup);
          free(username);
          free(password);
        
        break;
    }
    // big-arr
    case 1:
    {
          int workgroup_len = 255;
          int username_len = 255;
          int password_len = 255;
          int _len_c0 = 65025;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_server0 = 65025;
          const char * server = (const char *) malloc(_len_server0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_share0 = 65025;
          const char * share = (const char *) malloc(_len_share0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_share0; _i0++) {
            share[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_workgroup0 = 65025;
          char * workgroup = (char *) malloc(_len_workgroup0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_workgroup0; _i0++) {
            workgroup[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_username0 = 65025;
          char * username = (char *) malloc(_len_username0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_username0; _i0++) {
            username[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_password0 = 65025;
          char * password = (char *) malloc(_len_password0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_password0; _i0++) {
            password[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          libsmbc_get_auth_data(c,server,share,workgroup,workgroup_len,username,username_len,password,password_len);
          free(c);
          free(server);
          free(share);
          free(workgroup);
          free(username);
          free(password);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int workgroup_len = 10;
          int username_len = 10;
          int password_len = 10;
          int _len_c0 = 100;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_server0 = 100;
          const char * server = (const char *) malloc(_len_server0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_share0 = 100;
          const char * share = (const char *) malloc(_len_share0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_share0; _i0++) {
            share[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_workgroup0 = 100;
          char * workgroup = (char *) malloc(_len_workgroup0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_workgroup0; _i0++) {
            workgroup[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_username0 = 100;
          char * username = (char *) malloc(_len_username0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_username0; _i0++) {
            username[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_password0 = 100;
          char * password = (char *) malloc(_len_password0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_password0; _i0++) {
            password[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          libsmbc_get_auth_data(c,server,share,workgroup,workgroup_len,username,username_len,password,password_len);
          free(c);
          free(server);
          free(share);
          free(workgroup);
          free(username);
          free(password);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
