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
struct traversal_context {int dummy; } ;
struct strbuf {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void process_gitlink(struct traversal_context *ctx,
			    const unsigned char *sha1,
			    struct strbuf *path,
			    const char *name)
{
	/* Nothing to do */
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
          int _len_ctx0 = 1;
          struct traversal_context * ctx = (struct traversal_context *) malloc(_len_ctx0*sizeof(struct traversal_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sha10 = 1;
          const unsigned char * sha1 = (const unsigned char *) malloc(_len_sha10*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_sha10; _i0++) {
            sha1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path0 = 1;
          struct strbuf * path = (struct strbuf *) malloc(_len_path0*sizeof(struct strbuf));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_gitlink(ctx,sha1,path,name);
          free(ctx);
          free(sha1);
          free(path);
          free(name);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct traversal_context * ctx = (struct traversal_context *) malloc(_len_ctx0*sizeof(struct traversal_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sha10 = 65025;
          const unsigned char * sha1 = (const unsigned char *) malloc(_len_sha10*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_sha10; _i0++) {
            sha1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path0 = 65025;
          struct strbuf * path = (struct strbuf *) malloc(_len_path0*sizeof(struct strbuf));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_gitlink(ctx,sha1,path,name);
          free(ctx);
          free(sha1);
          free(path);
          free(name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct traversal_context * ctx = (struct traversal_context *) malloc(_len_ctx0*sizeof(struct traversal_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sha10 = 100;
          const unsigned char * sha1 = (const unsigned char *) malloc(_len_sha10*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_sha10; _i0++) {
            sha1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path0 = 100;
          struct strbuf * path = (struct strbuf *) malloc(_len_path0*sizeof(struct strbuf));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_gitlink(ctx,sha1,path,name);
          free(ctx);
          free(sha1);
          free(path);
          free(name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
