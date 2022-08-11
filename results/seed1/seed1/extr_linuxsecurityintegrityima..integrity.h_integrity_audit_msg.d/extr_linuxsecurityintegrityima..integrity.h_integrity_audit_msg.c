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
struct inode {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void integrity_audit_msg(int audit_msgno, struct inode *inode,
				       const unsigned char *fname,
				       const char *op, const char *cause,
				       int result, int info)
{
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
          int audit_msgno = 100;
          int result = 100;
          int info = 100;
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fname0 = 1;
          const unsigned char * fname = (const unsigned char *) malloc(_len_fname0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_fname0; _i0++) {
            fname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 1;
          const char * op = (const char *) malloc(_len_op0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cause0 = 1;
          const char * cause = (const char *) malloc(_len_cause0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_cause0; _i0++) {
            cause[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          integrity_audit_msg(audit_msgno,inode,fname,op,cause,result,info);
          free(inode);
          free(fname);
          free(op);
          free(cause);
        
        break;
    }
    // big-arr
    case 1:
    {
          int audit_msgno = 255;
          int result = 255;
          int info = 255;
          int _len_inode0 = 65025;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fname0 = 65025;
          const unsigned char * fname = (const unsigned char *) malloc(_len_fname0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_fname0; _i0++) {
            fname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 65025;
          const char * op = (const char *) malloc(_len_op0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cause0 = 65025;
          const char * cause = (const char *) malloc(_len_cause0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_cause0; _i0++) {
            cause[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          integrity_audit_msg(audit_msgno,inode,fname,op,cause,result,info);
          free(inode);
          free(fname);
          free(op);
          free(cause);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int audit_msgno = 10;
          int result = 10;
          int info = 10;
          int _len_inode0 = 100;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fname0 = 100;
          const unsigned char * fname = (const unsigned char *) malloc(_len_fname0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_fname0; _i0++) {
            fname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 100;
          const char * op = (const char *) malloc(_len_op0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cause0 = 100;
          const char * cause = (const char *) malloc(_len_cause0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_cause0; _i0++) {
            cause[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          integrity_audit_msg(audit_msgno,inode,fname,op,cause,result,info);
          free(inode);
          free(fname);
          free(op);
          free(cause);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
