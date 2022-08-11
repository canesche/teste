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
struct remote {int pushurl_nr; char** pushurl; char** url; int url_nr; } ;

/* Variables and functions */

__attribute__((used)) static int push_url_of_remote(struct remote *remote, const char ***url_p)
{
	if (remote->pushurl_nr) {
		*url_p = remote->pushurl;
		return remote->pushurl_nr;
	}
	*url_p = remote->url;
	return remote->url_nr;
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
          int _len_remote0 = 1;
          struct remote * remote = (struct remote *) malloc(_len_remote0*sizeof(struct remote));
          for(int _i0 = 0; _i0 < _len_remote0; _i0++) {
            remote[_i0].pushurl_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_remote__i0__pushurl0 = 1;
          remote[_i0].pushurl = (char **) malloc(_len_remote__i0__pushurl0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_remote__i0__pushurl0; _j0++) {
            int _len_remote__i0__pushurl1 = 1;
            remote[_i0].pushurl[_j0] = (char *) malloc(_len_remote__i0__pushurl1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_remote__i0__pushurl1; _j1++) {
              remote[_i0].pushurl[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_remote__i0__url0 = 1;
          remote[_i0].url = (char **) malloc(_len_remote__i0__url0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_remote__i0__url0; _j0++) {
            int _len_remote__i0__url1 = 1;
            remote[_i0].url[_j0] = (char *) malloc(_len_remote__i0__url1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_remote__i0__url1; _j1++) {
              remote[_i0].url[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        remote[_i0].url_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_url_p0 = 1;
          const char *** url_p = (const char ***) malloc(_len_url_p0*sizeof(const char **));
          for(int _i0 = 0; _i0 < _len_url_p0; _i0++) {
            int _len_url_p1 = 1;
            url_p[_i0] = (const char **) malloc(_len_url_p1*sizeof(const char *));
            for(int _i1 = 0; _i1 < _len_url_p1; _i1++) {
              int _len_url_p2 = 1;
              url_p[_i0][_i1] = (const char *) malloc(_len_url_p2*sizeof(const char));
              for(int _i2 = 0; _i2 < _len_url_p2; _i2++) {
                url_p[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int benchRet = push_url_of_remote(remote,url_p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_remote0; _aux++) {
          free(*(remote[_aux].pushurl));
        free(remote[_aux].pushurl);
          }
          for(int _aux = 0; _aux < _len_remote0; _aux++) {
          free(*(remote[_aux].url));
        free(remote[_aux].url);
          }
          free(remote);
          for(int i1 = 0; i1 < _len_url_p0; i1++) {
            int _len_url_p1 = 1;
              for(int i2 = 0; i2 < _len_url_p1; i2++) {
            int _len_url_p2 = 1;
              free(url_p[i1][i2]);
          }
          free(url_p[i1]);
          }
          free(url_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_remote0 = 65025;
          struct remote * remote = (struct remote *) malloc(_len_remote0*sizeof(struct remote));
          for(int _i0 = 0; _i0 < _len_remote0; _i0++) {
            remote[_i0].pushurl_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_remote__i0__pushurl0 = 1;
          remote[_i0].pushurl = (char **) malloc(_len_remote__i0__pushurl0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_remote__i0__pushurl0; _j0++) {
            int _len_remote__i0__pushurl1 = 1;
            remote[_i0].pushurl[_j0] = (char *) malloc(_len_remote__i0__pushurl1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_remote__i0__pushurl1; _j1++) {
              remote[_i0].pushurl[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_remote__i0__url0 = 1;
          remote[_i0].url = (char **) malloc(_len_remote__i0__url0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_remote__i0__url0; _j0++) {
            int _len_remote__i0__url1 = 1;
            remote[_i0].url[_j0] = (char *) malloc(_len_remote__i0__url1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_remote__i0__url1; _j1++) {
              remote[_i0].url[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        remote[_i0].url_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_url_p0 = 65025;
          const char *** url_p = (const char ***) malloc(_len_url_p0*sizeof(const char **));
          for(int _i0 = 0; _i0 < _len_url_p0; _i0++) {
            int _len_url_p1 = 1;
            url_p[_i0] = (const char **) malloc(_len_url_p1*sizeof(const char *));
            for(int _i1 = 0; _i1 < _len_url_p1; _i1++) {
              int _len_url_p2 = 1;
              url_p[_i0][_i1] = (const char *) malloc(_len_url_p2*sizeof(const char));
              for(int _i2 = 0; _i2 < _len_url_p2; _i2++) {
                url_p[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int benchRet = push_url_of_remote(remote,url_p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_remote0; _aux++) {
          free(*(remote[_aux].pushurl));
        free(remote[_aux].pushurl);
          }
          for(int _aux = 0; _aux < _len_remote0; _aux++) {
          free(*(remote[_aux].url));
        free(remote[_aux].url);
          }
          free(remote);
          for(int i1 = 0; i1 < _len_url_p0; i1++) {
            int _len_url_p1 = 1;
              for(int i2 = 0; i2 < _len_url_p1; i2++) {
            int _len_url_p2 = 1;
              free(url_p[i1][i2]);
          }
          free(url_p[i1]);
          }
          free(url_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_remote0 = 100;
          struct remote * remote = (struct remote *) malloc(_len_remote0*sizeof(struct remote));
          for(int _i0 = 0; _i0 < _len_remote0; _i0++) {
            remote[_i0].pushurl_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_remote__i0__pushurl0 = 1;
          remote[_i0].pushurl = (char **) malloc(_len_remote__i0__pushurl0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_remote__i0__pushurl0; _j0++) {
            int _len_remote__i0__pushurl1 = 1;
            remote[_i0].pushurl[_j0] = (char *) malloc(_len_remote__i0__pushurl1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_remote__i0__pushurl1; _j1++) {
              remote[_i0].pushurl[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_remote__i0__url0 = 1;
          remote[_i0].url = (char **) malloc(_len_remote__i0__url0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_remote__i0__url0; _j0++) {
            int _len_remote__i0__url1 = 1;
            remote[_i0].url[_j0] = (char *) malloc(_len_remote__i0__url1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_remote__i0__url1; _j1++) {
              remote[_i0].url[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        remote[_i0].url_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_url_p0 = 100;
          const char *** url_p = (const char ***) malloc(_len_url_p0*sizeof(const char **));
          for(int _i0 = 0; _i0 < _len_url_p0; _i0++) {
            int _len_url_p1 = 1;
            url_p[_i0] = (const char **) malloc(_len_url_p1*sizeof(const char *));
            for(int _i1 = 0; _i1 < _len_url_p1; _i1++) {
              int _len_url_p2 = 1;
              url_p[_i0][_i1] = (const char *) malloc(_len_url_p2*sizeof(const char));
              for(int _i2 = 0; _i2 < _len_url_p2; _i2++) {
                url_p[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int benchRet = push_url_of_remote(remote,url_p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_remote0; _aux++) {
          free(*(remote[_aux].pushurl));
        free(remote[_aux].pushurl);
          }
          for(int _aux = 0; _aux < _len_remote0; _aux++) {
          free(*(remote[_aux].url));
        free(remote[_aux].url);
          }
          free(remote);
          for(int i1 = 0; i1 < _len_url_p0; i1++) {
            int _len_url_p1 = 1;
              for(int i2 = 0; i2 < _len_url_p1; i2++) {
            int _len_url_p2 = 1;
              free(url_p[i1][i2]);
          }
          free(url_p[i1]);
          }
          free(url_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
