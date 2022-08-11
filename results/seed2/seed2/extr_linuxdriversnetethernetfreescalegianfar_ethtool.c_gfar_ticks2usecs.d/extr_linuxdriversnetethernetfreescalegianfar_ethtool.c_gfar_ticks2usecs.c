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
struct phy_device {int speed; } ;
struct net_device {struct phy_device* phydev; } ;
struct gfar_private {struct net_device* ndev; } ;

/* Variables and functions */
 unsigned int GFAR_100_TIME ; 
 unsigned int GFAR_10_TIME ; 
 unsigned int GFAR_GBIT_TIME ; 
#define  SPEED_10 130 
#define  SPEED_100 129 
#define  SPEED_1000 128 

__attribute__((used)) static unsigned int gfar_ticks2usecs(struct gfar_private *priv,
				     unsigned int ticks)
{
	struct net_device *ndev = priv->ndev;
	struct phy_device *phydev = ndev->phydev;
	unsigned int count;

	/* The timer is different, depending on the interface speed */
	switch (phydev->speed) {
	case SPEED_1000:
		count = GFAR_GBIT_TIME;
		break;
	case SPEED_100:
		count = GFAR_100_TIME;
		break;
	case SPEED_10:
	default:
		count = GFAR_10_TIME;
		break;
	}

	/* Make sure we return a number greater than 0 */
	/* if ticks is > 0 */
	return (ticks * count) / 1000;
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
          unsigned int ticks = 100;
          int _len_priv0 = 1;
          struct gfar_private * priv = (struct gfar_private *) malloc(_len_priv0*sizeof(struct gfar_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__ndev0 = 1;
          priv[_i0].ndev = (struct net_device *) malloc(_len_priv__i0__ndev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_priv__i0__ndev0; _j0++) {
              int _len_priv__i0__ndev_phydev0 = 1;
          priv[_i0].ndev->phydev = (struct phy_device *) malloc(_len_priv__i0__ndev_phydev0*sizeof(struct phy_device));
          for(int _j0 = 0; _j0 < _len_priv__i0__ndev_phydev0; _j0++) {
            priv[_i0].ndev->phydev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = gfar_ticks2usecs(priv,ticks);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].ndev);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int ticks = 255;
          int _len_priv0 = 65025;
          struct gfar_private * priv = (struct gfar_private *) malloc(_len_priv0*sizeof(struct gfar_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__ndev0 = 1;
          priv[_i0].ndev = (struct net_device *) malloc(_len_priv__i0__ndev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_priv__i0__ndev0; _j0++) {
              int _len_priv__i0__ndev_phydev0 = 1;
          priv[_i0].ndev->phydev = (struct phy_device *) malloc(_len_priv__i0__ndev_phydev0*sizeof(struct phy_device));
          for(int _j0 = 0; _j0 < _len_priv__i0__ndev_phydev0; _j0++) {
            priv[_i0].ndev->phydev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = gfar_ticks2usecs(priv,ticks);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].ndev);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int ticks = 10;
          int _len_priv0 = 100;
          struct gfar_private * priv = (struct gfar_private *) malloc(_len_priv0*sizeof(struct gfar_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__ndev0 = 1;
          priv[_i0].ndev = (struct net_device *) malloc(_len_priv__i0__ndev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_priv__i0__ndev0; _j0++) {
              int _len_priv__i0__ndev_phydev0 = 1;
          priv[_i0].ndev->phydev = (struct phy_device *) malloc(_len_priv__i0__ndev_phydev0*sizeof(struct phy_device));
          for(int _j0 = 0; _j0 < _len_priv__i0__ndev_phydev0; _j0++) {
            priv[_i0].ndev->phydev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = gfar_ticks2usecs(priv,ticks);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].ndev);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
