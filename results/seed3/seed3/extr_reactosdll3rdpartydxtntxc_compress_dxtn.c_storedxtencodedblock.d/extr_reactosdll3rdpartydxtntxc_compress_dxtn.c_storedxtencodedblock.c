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
typedef  int GLushort ;
typedef  int GLuint ;
typedef  int GLubyte ;
typedef  int GLint ;
typedef  scalar_t__ GLboolean ;

/* Variables and functions */
 int ALPHACUT ; 
 int BLUEWEIGHT ; 
 int GL_COMPRESSED_RGBA_S3TC_DXT1_EXT ; 
 int GL_COMPRESSED_RGB_S3TC_DXT1_EXT ; 
 int GREENWEIGHT ; 
 int REDWEIGHT ; 

__attribute__((used)) static void storedxtencodedblock( GLubyte *blkaddr, GLubyte srccolors[4][4][4], GLubyte *bestcolor[2],
                           GLint numxpixels, GLint numypixels, GLuint type, GLboolean haveAlpha)
{
   /* use same luminance-weighted distance metric to determine encoding as for finding the base colors */

   GLint i, j, colors;
   GLuint testerror, testerror2, pixerror, pixerrorbest;
   GLint colordist;
   GLushort color0, color1, tempcolor;
   GLuint bits = 0, bits2 = 0;
   GLubyte *colorptr;
   GLubyte enc = 0;
   GLubyte cv[4][4];

   bestcolor[0][0] = bestcolor[0][0] & 0xf8;
   bestcolor[0][1] = bestcolor[0][1] & 0xfc;
   bestcolor[0][2] = bestcolor[0][2] & 0xf8;
   bestcolor[1][0] = bestcolor[1][0] & 0xf8;
   bestcolor[1][1] = bestcolor[1][1] & 0xfc;
   bestcolor[1][2] = bestcolor[1][2] & 0xf8;

   color0 = bestcolor[0][0] << 8 | bestcolor[0][1] << 3 | bestcolor[0][2] >> 3;
   color1 = bestcolor[1][0] << 8 | bestcolor[1][1] << 3 | bestcolor[1][2] >> 3;
   if (color0 < color1) {
      tempcolor = color0; color0 = color1; color1 = tempcolor;
      colorptr = bestcolor[0]; bestcolor[0] = bestcolor[1]; bestcolor[1] = colorptr;
   }


   for (i = 0; i < 3; i++) {
      cv[0][i] = bestcolor[0][i];
      cv[1][i] = bestcolor[1][i];
      cv[2][i] = (bestcolor[0][i] * 2 + bestcolor[1][i]) / 3;
      cv[3][i] = (bestcolor[0][i] + bestcolor[1][i] * 2) / 3;
   }

   testerror = 0;
   for (j = 0; j < numypixels; j++) {
      for (i = 0; i < numxpixels; i++) {
         pixerrorbest = 0xffffffff;
         for (colors = 0; colors < 4; colors++) {
            colordist = srccolors[j][i][0] - cv[colors][0];
            pixerror = colordist * colordist * REDWEIGHT;
            colordist = srccolors[j][i][1] - cv[colors][1];
            pixerror += colordist * colordist * GREENWEIGHT;
            colordist = srccolors[j][i][2] - cv[colors][2];
            pixerror += colordist * colordist * BLUEWEIGHT;
            if (pixerror < pixerrorbest) {
               pixerrorbest = pixerror;
               enc = colors;
            }
         }
         testerror += pixerrorbest;
         bits |= enc << (2 * (j * 4 + i));
      }
   }
   /* some hw might disagree but actually decoding should always use 4-color encoding
      for non-dxt1 formats */
   if (type == GL_COMPRESSED_RGB_S3TC_DXT1_EXT || type == GL_COMPRESSED_RGBA_S3TC_DXT1_EXT) {
      for (i = 0; i < 3; i++) {
         cv[2][i] = (bestcolor[0][i] + bestcolor[1][i]) / 2;
         /* this isn't used. Looks like the black color constant can only be used
            with RGB_DXT1 if I read the spec correctly (note though that the radeon gpu disagrees,
            it will decode 3 to black even with DXT3/5), and due to how the color searching works
            it won't get used even then */
         cv[3][i] = 0;
      }
      testerror2 = 0;
      for (j = 0; j < numypixels; j++) {
         for (i = 0; i < numxpixels; i++) {
            pixerrorbest = 0xffffffff;
            if ((type == GL_COMPRESSED_RGBA_S3TC_DXT1_EXT) && (srccolors[j][i][3] <= ALPHACUT)) {
               enc = 3;
               pixerrorbest = 0; /* don't calculate error */
            }
            else {
               /* we're calculating the same what we have done already for colors 0-1 above... */
               for (colors = 0; colors < 3; colors++) {
                  colordist = srccolors[j][i][0] - cv[colors][0];
                  pixerror = colordist * colordist * REDWEIGHT;
                  colordist = srccolors[j][i][1] - cv[colors][1];
                  pixerror += colordist * colordist * GREENWEIGHT;
                  colordist = srccolors[j][i][2] - cv[colors][2];
                  pixerror += colordist * colordist * BLUEWEIGHT;
                  if (pixerror < pixerrorbest) {
                     pixerrorbest = pixerror;
                     /* need to exchange colors later */
                     if (colors > 1) enc = colors;
                     else enc = colors ^ 1;
                  }
               }
            }
            testerror2 += pixerrorbest;
            bits2 |= enc << (2 * (j * 4 + i));
         }
      }
   } else {
      testerror2 = 0xffffffff;
   }

   /* finally we're finished, write back colors and bits */
   if ((testerror > testerror2) || (haveAlpha)) {
      *blkaddr++ = color1 & 0xff;
      *blkaddr++ = color1 >> 8;
      *blkaddr++ = color0 & 0xff;
      *blkaddr++ = color0 >> 8;
      *blkaddr++ = bits2 & 0xff;
      *blkaddr++ = ( bits2 >> 8) & 0xff;
      *blkaddr++ = ( bits2 >> 16) & 0xff;
      *blkaddr = bits2 >> 24;
   }
   else {
      *blkaddr++ = color0 & 0xff;
      *blkaddr++ = color0 >> 8;
      *blkaddr++ = color1 & 0xff;
      *blkaddr++ = color1 >> 8;
      *blkaddr++ = bits & 0xff;
      *blkaddr++ = ( bits >> 8) & 0xff;
      *blkaddr++ = ( bits >> 16) & 0xff;
      *blkaddr = bits >> 24;
   }
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
          int numxpixels = 100;
          int numypixels = 100;
          int type = 100;
          long haveAlpha = 100;
          int _len_blkaddr0 = 1;
          int * blkaddr = (int *) malloc(_len_blkaddr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blkaddr0; _i0++) {
            blkaddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srccolors0 = 4;
          int *** srccolors = (int ***) malloc(_len_srccolors0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_srccolors0; _i0++) {
            int _len_srccolors1 = 4;
            srccolors[_i0] = (int **) malloc(_len_srccolors1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_srccolors1; _i1++) {
              int _len_srccolors2 = 4;
              srccolors[_i0][_i1] = (int *) malloc(_len_srccolors2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_srccolors2; _i2++) {
                srccolors[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_bestcolor0 = 2;
          int ** bestcolor = (int **) malloc(_len_bestcolor0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_bestcolor0; _i0++) {
            int _len_bestcolor1 = 1;
            bestcolor[_i0] = (int *) malloc(_len_bestcolor1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_bestcolor1; _i1++) {
              bestcolor[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          storedxtencodedblock(blkaddr,srccolors,bestcolor,numxpixels,numypixels,type,haveAlpha);
          free(blkaddr);
          for(int i1 = 0; i1 < _len_srccolors0; i1++) {
            int _len_srccolors1 = 4;
              for(int i2 = 0; i2 < _len_srccolors1; i2++) {
            int _len_srccolors2 = 4;
              free(srccolors[i1][i2]);
          }
          free(srccolors[i1]);
          }
          free(srccolors);
          for(int i1 = 0; i1 < _len_bestcolor0; i1++) {
            int _len_bestcolor1 = 1;
              free(bestcolor[i1]);
          }
          free(bestcolor);
        
        break;
    }
    // big-arr
    case 1:
    {
          int numxpixels = 255;
          int numypixels = 255;
          int type = 255;
          long haveAlpha = 255;
          int _len_blkaddr0 = 65025;
          int * blkaddr = (int *) malloc(_len_blkaddr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blkaddr0; _i0++) {
            blkaddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srccolors0 = 65025;
          int *** srccolors = (int ***) malloc(_len_srccolors0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_srccolors0; _i0++) {
            int _len_srccolors1 = 4;
            srccolors[_i0] = (int **) malloc(_len_srccolors1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_srccolors1; _i1++) {
              int _len_srccolors2 = 4;
              srccolors[_i0][_i1] = (int *) malloc(_len_srccolors2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_srccolors2; _i2++) {
                srccolors[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_bestcolor0 = 65025;
          int ** bestcolor = (int **) malloc(_len_bestcolor0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_bestcolor0; _i0++) {
            int _len_bestcolor1 = 1;
            bestcolor[_i0] = (int *) malloc(_len_bestcolor1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_bestcolor1; _i1++) {
              bestcolor[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          storedxtencodedblock(blkaddr,srccolors,bestcolor,numxpixels,numypixels,type,haveAlpha);
          free(blkaddr);
          for(int i1 = 0; i1 < _len_srccolors0; i1++) {
            int _len_srccolors1 = 4;
              for(int i2 = 0; i2 < _len_srccolors1; i2++) {
            int _len_srccolors2 = 4;
              free(srccolors[i1][i2]);
          }
          free(srccolors[i1]);
          }
          free(srccolors);
          for(int i1 = 0; i1 < _len_bestcolor0; i1++) {
            int _len_bestcolor1 = 1;
              free(bestcolor[i1]);
          }
          free(bestcolor);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int numxpixels = 10;
          int numypixels = 10;
          int type = 10;
          long haveAlpha = 10;
          int _len_blkaddr0 = 100;
          int * blkaddr = (int *) malloc(_len_blkaddr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blkaddr0; _i0++) {
            blkaddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srccolors0 = 100;
          int *** srccolors = (int ***) malloc(_len_srccolors0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_srccolors0; _i0++) {
            int _len_srccolors1 = 4;
            srccolors[_i0] = (int **) malloc(_len_srccolors1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_srccolors1; _i1++) {
              int _len_srccolors2 = 4;
              srccolors[_i0][_i1] = (int *) malloc(_len_srccolors2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_srccolors2; _i2++) {
                srccolors[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_bestcolor0 = 100;
          int ** bestcolor = (int **) malloc(_len_bestcolor0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_bestcolor0; _i0++) {
            int _len_bestcolor1 = 1;
            bestcolor[_i0] = (int *) malloc(_len_bestcolor1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_bestcolor1; _i1++) {
              bestcolor[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          storedxtencodedblock(blkaddr,srccolors,bestcolor,numxpixels,numypixels,type,haveAlpha);
          free(blkaddr);
          for(int i1 = 0; i1 < _len_srccolors0; i1++) {
            int _len_srccolors1 = 4;
              for(int i2 = 0; i2 < _len_srccolors1; i2++) {
            int _len_srccolors2 = 4;
              free(srccolors[i1][i2]);
          }
          free(srccolors[i1]);
          }
          free(srccolors);
          for(int i1 = 0; i1 < _len_bestcolor0; i1++) {
            int _len_bestcolor1 = 1;
              free(bestcolor[i1]);
          }
          free(bestcolor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
