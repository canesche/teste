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
struct dm_target {char* error; } ;
struct crypt_config {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int crypt_integrity_ctr(struct crypt_config *cc, struct dm_target *ti)
{
#ifdef CONFIG_BLK_DEV_INTEGRITY
	struct blk_integrity *bi = blk_get_integrity(cc->dev->bdev->bd_disk);

	/* From now we require underlying device with our integrity profile */
	if (!bi || strcasecmp(bi->profile->name, "DM-DIF-EXT-TAG")) {
		ti->error = "Integrity profile not supported.";
		return -EINVAL;
	}

	if (bi->tag_size != cc->on_disk_tag_size ||
	    bi->tuple_size != cc->on_disk_tag_size) {
		ti->error = "Integrity profile tag size mismatch.";
		return -EINVAL;
	}
	if (1 << bi->interval_exp != cc->sector_size) {
		ti->error = "Integrity profile sector size mismatch.";
		return -EINVAL;
	}

	if (crypt_integrity_aead(cc)) {
		cc->integrity_tag_size = cc->on_disk_tag_size - cc->integrity_iv_size;
		DMINFO("Integrity AEAD, tag size %u, IV size %u.",
		       cc->integrity_tag_size, cc->integrity_iv_size);

		if (crypto_aead_setauthsize(any_tfm_aead(cc), cc->integrity_tag_size)) {
			ti->error = "Integrity AEAD auth tag size is not supported.";
			return -EINVAL;
		}
	} else if (cc->integrity_iv_size)
		DMINFO("Additional per-sector space %u bytes for IV.",
		       cc->integrity_iv_size);

	if ((cc->integrity_tag_size + cc->integrity_iv_size) != bi->tag_size) {
		ti->error = "Not enough space for integrity tag in the profile.";
		return -EINVAL;
	}

	return 0;
#else
	ti->error = "Integrity profile not supported.";
	return -EINVAL;
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
          int _len_cc0 = 1;
          struct crypt_config * cc = (struct crypt_config *) malloc(_len_cc0*sizeof(struct crypt_config));
          for(int _i0 = 0; _i0 < _len_cc0; _i0++) {
            cc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ti0 = 1;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
              int _len_ti__i0__error0 = 1;
          ti[_i0].error = (char *) malloc(_len_ti__i0__error0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_ti__i0__error0; _j0++) {
            ti[_i0].error[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = crypt_integrity_ctr(cc,ti);
          printf("%d\n", benchRet); 
          free(cc);
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].error);
          }
          free(ti);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cc0 = 65025;
          struct crypt_config * cc = (struct crypt_config *) malloc(_len_cc0*sizeof(struct crypt_config));
          for(int _i0 = 0; _i0 < _len_cc0; _i0++) {
            cc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ti0 = 65025;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
              int _len_ti__i0__error0 = 1;
          ti[_i0].error = (char *) malloc(_len_ti__i0__error0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_ti__i0__error0; _j0++) {
            ti[_i0].error[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = crypt_integrity_ctr(cc,ti);
          printf("%d\n", benchRet); 
          free(cc);
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].error);
          }
          free(ti);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cc0 = 100;
          struct crypt_config * cc = (struct crypt_config *) malloc(_len_cc0*sizeof(struct crypt_config));
          for(int _i0 = 0; _i0 < _len_cc0; _i0++) {
            cc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ti0 = 100;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
              int _len_ti__i0__error0 = 1;
          ti[_i0].error = (char *) malloc(_len_ti__i0__error0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_ti__i0__error0; _j0++) {
            ti[_i0].error[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = crypt_integrity_ctr(cc,ti);
          printf("%d\n", benchRet); 
          free(cc);
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].error);
          }
          free(ti);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
