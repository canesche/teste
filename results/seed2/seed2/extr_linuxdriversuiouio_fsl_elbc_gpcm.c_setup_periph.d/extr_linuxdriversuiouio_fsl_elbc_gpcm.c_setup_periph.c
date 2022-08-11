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
struct fsl_elbc_gpcm {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void setup_periph(struct fsl_elbc_gpcm *priv,
				   const char *type)
{
#ifdef CONFIG_UIO_FSL_ELBC_GPCM_NETX5152
	if (strcmp(type, "netx5152") == 0) {
		priv->irq_handler = netx5152_irq_handler;
		priv->init = netx5152_init;
		priv->shutdown = netx5152_shutdown;
		priv->name = "netX 51/52";
		return;
	}
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
          int _len_priv0 = 1;
          struct fsl_elbc_gpcm * priv = (struct fsl_elbc_gpcm *) malloc(_len_priv0*sizeof(struct fsl_elbc_gpcm));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 1;
          const char * type = (const char *) malloc(_len_type0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_periph(priv,type);
          free(priv);
          free(type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct fsl_elbc_gpcm * priv = (struct fsl_elbc_gpcm *) malloc(_len_priv0*sizeof(struct fsl_elbc_gpcm));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 65025;
          const char * type = (const char *) malloc(_len_type0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_periph(priv,type);
          free(priv);
          free(type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct fsl_elbc_gpcm * priv = (struct fsl_elbc_gpcm *) malloc(_len_priv0*sizeof(struct fsl_elbc_gpcm));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 100;
          const char * type = (const char *) malloc(_len_type0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_periph(priv,type);
          free(priv);
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
