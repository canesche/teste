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
struct cifs_sb_info {int dummy; } ;
struct cifs_fattr {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

__attribute__((used)) static int cifs_sfu_mode(struct cifs_fattr *fattr, const unsigned char *path,
			 struct cifs_sb_info *cifs_sb, unsigned int xid)
{
#ifdef CONFIG_CIFS_XATTR
	ssize_t rc;
	char ea_value[4];
	__u32 mode;
	struct tcon_link *tlink;
	struct cifs_tcon *tcon;

	tlink = cifs_sb_tlink(cifs_sb);
	if (IS_ERR(tlink))
		return PTR_ERR(tlink);
	tcon = tlink_tcon(tlink);

	if (tcon->ses->server->ops->query_all_EAs == NULL) {
		cifs_put_tlink(tlink);
		return -EOPNOTSUPP;
	}

	rc = tcon->ses->server->ops->query_all_EAs(xid, tcon, path,
			"SETFILEBITS", ea_value, 4 /* size of buf */,
			cifs_sb);
	cifs_put_tlink(tlink);
	if (rc < 0)
		return (int)rc;
	else if (rc > 3) {
		mode = le32_to_cpu(*((__le32 *)ea_value));
		fattr->cf_mode &= ~SFBITS_MASK;
		cifs_dbg(FYI, "special bits 0%o org mode 0%o\n",
			 mode, fattr->cf_mode);
		fattr->cf_mode = (mode & SFBITS_MASK) | fattr->cf_mode;
		cifs_dbg(FYI, "special mode bits 0%o\n", mode);
	}

	return 0;
#else
	return -EOPNOTSUPP;
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
          unsigned int xid = 100;
          int _len_fattr0 = 1;
          struct cifs_fattr * fattr = (struct cifs_fattr *) malloc(_len_fattr0*sizeof(struct cifs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
            fattr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path0 = 1;
          const unsigned char * path = (const unsigned char *) malloc(_len_path0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cifs_sb0 = 1;
          struct cifs_sb_info * cifs_sb = (struct cifs_sb_info *) malloc(_len_cifs_sb0*sizeof(struct cifs_sb_info));
          for(int _i0 = 0; _i0 < _len_cifs_sb0; _i0++) {
            cifs_sb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cifs_sfu_mode(fattr,path,cifs_sb,xid);
          printf("%d\n", benchRet); 
          free(fattr);
          free(path);
          free(cifs_sb);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int xid = 255;
          int _len_fattr0 = 65025;
          struct cifs_fattr * fattr = (struct cifs_fattr *) malloc(_len_fattr0*sizeof(struct cifs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
            fattr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path0 = 65025;
          const unsigned char * path = (const unsigned char *) malloc(_len_path0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cifs_sb0 = 65025;
          struct cifs_sb_info * cifs_sb = (struct cifs_sb_info *) malloc(_len_cifs_sb0*sizeof(struct cifs_sb_info));
          for(int _i0 = 0; _i0 < _len_cifs_sb0; _i0++) {
            cifs_sb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cifs_sfu_mode(fattr,path,cifs_sb,xid);
          printf("%d\n", benchRet); 
          free(fattr);
          free(path);
          free(cifs_sb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int xid = 10;
          int _len_fattr0 = 100;
          struct cifs_fattr * fattr = (struct cifs_fattr *) malloc(_len_fattr0*sizeof(struct cifs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
            fattr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path0 = 100;
          const unsigned char * path = (const unsigned char *) malloc(_len_path0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cifs_sb0 = 100;
          struct cifs_sb_info * cifs_sb = (struct cifs_sb_info *) malloc(_len_cifs_sb0*sizeof(struct cifs_sb_info));
          for(int _i0 = 0; _i0 < _len_cifs_sb0; _i0++) {
            cifs_sb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cifs_sfu_mode(fattr,path,cifs_sb,xid);
          printf("%d\n", benchRet); 
          free(fattr);
          free(path);
          free(cifs_sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
