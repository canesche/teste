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
typedef  int /*<<< orphan*/  curl_sslbackend ;
typedef  int /*<<< orphan*/  curl_ssl_backend ;
typedef  int /*<<< orphan*/  CURLsslset ;

/* Variables and functions */
 int /*<<< orphan*/  CURLSSLSET_NO_BACKENDS ; 

CURLsslset curl_global_sslset(curl_sslbackend id, const char *name,
                              const curl_ssl_backend ***avail)
{
  (void)id;
  (void)name;
  (void)avail;
  return CURLSSLSET_NO_BACKENDS;
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
          int id = 100;
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avail0 = 1;
          const int *** avail = (const int ***) malloc(_len_avail0*sizeof(const int **));
          for(int _i0 = 0; _i0 < _len_avail0; _i0++) {
            int _len_avail1 = 1;
            avail[_i0] = (const int **) malloc(_len_avail1*sizeof(const int *));
            for(int _i1 = 0; _i1 < _len_avail1; _i1++) {
              int _len_avail2 = 1;
              avail[_i0][_i1] = (const int *) malloc(_len_avail2*sizeof(const int));
              for(int _i2 = 0; _i2 < _len_avail2; _i2++) {
                avail[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int benchRet = curl_global_sslset(id,name,avail);
          printf("%d\n", benchRet); 
          free(name);
          for(int i1 = 0; i1 < _len_avail0; i1++) {
            int _len_avail1 = 1;
              for(int i2 = 0; i2 < _len_avail1; i2++) {
            int _len_avail2 = 1;
              free(avail[i1][i2]);
          }
          free(avail[i1]);
          }
          free(avail);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avail0 = 65025;
          const int *** avail = (const int ***) malloc(_len_avail0*sizeof(const int **));
          for(int _i0 = 0; _i0 < _len_avail0; _i0++) {
            int _len_avail1 = 1;
            avail[_i0] = (const int **) malloc(_len_avail1*sizeof(const int *));
            for(int _i1 = 0; _i1 < _len_avail1; _i1++) {
              int _len_avail2 = 1;
              avail[_i0][_i1] = (const int *) malloc(_len_avail2*sizeof(const int));
              for(int _i2 = 0; _i2 < _len_avail2; _i2++) {
                avail[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int benchRet = curl_global_sslset(id,name,avail);
          printf("%d\n", benchRet); 
          free(name);
          for(int i1 = 0; i1 < _len_avail0; i1++) {
            int _len_avail1 = 1;
              for(int i2 = 0; i2 < _len_avail1; i2++) {
            int _len_avail2 = 1;
              free(avail[i1][i2]);
          }
          free(avail[i1]);
          }
          free(avail);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avail0 = 100;
          const int *** avail = (const int ***) malloc(_len_avail0*sizeof(const int **));
          for(int _i0 = 0; _i0 < _len_avail0; _i0++) {
            int _len_avail1 = 1;
            avail[_i0] = (const int **) malloc(_len_avail1*sizeof(const int *));
            for(int _i1 = 0; _i1 < _len_avail1; _i1++) {
              int _len_avail2 = 1;
              avail[_i0][_i1] = (const int *) malloc(_len_avail2*sizeof(const int));
              for(int _i2 = 0; _i2 < _len_avail2; _i2++) {
                avail[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int benchRet = curl_global_sslset(id,name,avail);
          printf("%d\n", benchRet); 
          free(name);
          for(int i1 = 0; i1 < _len_avail0; i1++) {
            int _len_avail1 = 1;
              for(int i2 = 0; i2 < _len_avail1; i2++) {
            int _len_avail2 = 1;
              free(avail[i1][i2]);
          }
          free(avail[i1]);
          }
          free(avail);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
