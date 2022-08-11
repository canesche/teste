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
struct nfs4_label {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct nfs4_label *
nfs4_label_init_security(struct inode *dir, struct dentry *dentry,
	struct iattr *sattr, struct nfs4_label *l)
{ return NULL; }


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
          int _len_dir0 = 1;
          struct inode * dir = (struct inode *) malloc(_len_dir0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dentry0 = 1;
          struct dentry * dentry = (struct dentry *) malloc(_len_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_dentry0; _i0++) {
            dentry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sattr0 = 1;
          struct iattr * sattr = (struct iattr *) malloc(_len_sattr0*sizeof(struct iattr));
          for(int _i0 = 0; _i0 < _len_sattr0; _i0++) {
            sattr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l0 = 1;
          struct nfs4_label * l = (struct nfs4_label *) malloc(_len_l0*sizeof(struct nfs4_label));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nfs4_label * benchRet = nfs4_label_init_security(dir,dentry,sattr,l);
          printf("%d\n", (*benchRet).dummy);
          free(dir);
          free(dentry);
          free(sattr);
          free(l);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dir0 = 65025;
          struct inode * dir = (struct inode *) malloc(_len_dir0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dentry0 = 65025;
          struct dentry * dentry = (struct dentry *) malloc(_len_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_dentry0; _i0++) {
            dentry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sattr0 = 65025;
          struct iattr * sattr = (struct iattr *) malloc(_len_sattr0*sizeof(struct iattr));
          for(int _i0 = 0; _i0 < _len_sattr0; _i0++) {
            sattr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l0 = 65025;
          struct nfs4_label * l = (struct nfs4_label *) malloc(_len_l0*sizeof(struct nfs4_label));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nfs4_label * benchRet = nfs4_label_init_security(dir,dentry,sattr,l);
          printf("%d\n", (*benchRet).dummy);
          free(dir);
          free(dentry);
          free(sattr);
          free(l);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dir0 = 100;
          struct inode * dir = (struct inode *) malloc(_len_dir0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dentry0 = 100;
          struct dentry * dentry = (struct dentry *) malloc(_len_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_dentry0; _i0++) {
            dentry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sattr0 = 100;
          struct iattr * sattr = (struct iattr *) malloc(_len_sattr0*sizeof(struct iattr));
          for(int _i0 = 0; _i0 < _len_sattr0; _i0++) {
            sattr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l0 = 100;
          struct nfs4_label * l = (struct nfs4_label *) malloc(_len_l0*sizeof(struct nfs4_label));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nfs4_label * benchRet = nfs4_label_init_security(dir,dentry,sattr,l);
          printf("%d\n", (*benchRet).dummy);
          free(dir);
          free(dentry);
          free(sattr);
          free(l);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
