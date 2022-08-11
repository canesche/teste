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
typedef  int /*<<< orphan*/  GLvoid ;
typedef  int /*<<< orphan*/  GLushort ;
typedef  int GLuint ;
typedef  int /*<<< orphan*/  GLubyte ;
typedef  int GLsizei ;
typedef  int /*<<< orphan*/  GLshort ;
typedef  int /*<<< orphan*/  GLint ;
typedef  int /*<<< orphan*/  GLfloat ;
typedef  int GLenum ;
typedef  int /*<<< orphan*/  GLbyte ;

/* Variables and functions */
#define  GL_2_BYTES 137 
#define  GL_3_BYTES 136 
#define  GL_4_BYTES 135 
#define  GL_BYTE 134 
#define  GL_FLOAT 133 
#define  GL_INT 132 
#define  GL_SHORT 131 
#define  GL_UNSIGNED_BYTE 130 
#define  GL_UNSIGNED_INT 129 
#define  GL_UNSIGNED_SHORT 128 

__attribute__((used)) static GLuint translate_id( GLsizei n, GLenum type, const GLvoid *list )
{
   GLbyte *bptr;
   GLubyte *ubptr;
   GLshort *sptr;
   GLushort *usptr;
   GLint *iptr;
   GLuint *uiptr;
   GLfloat *fptr;

   switch (type) {
      case GL_BYTE:
         bptr = (GLbyte *) list;
         return (GLuint) *(bptr+n);
      case GL_UNSIGNED_BYTE:
         ubptr = (GLubyte *) list;
         return (GLuint) *(ubptr+n);
      case GL_SHORT:
         sptr = (GLshort *) list;
         return (GLuint) *(sptr+n);
      case GL_UNSIGNED_SHORT:
         usptr = (GLushort *) list;
         return (GLuint) *(usptr+n);
      case GL_INT:
         iptr = (GLint *) list;
         return (GLuint) *(iptr+n);
      case GL_UNSIGNED_INT:
         uiptr = (GLuint *) list;
         return (GLuint) *(uiptr+n);
      case GL_FLOAT:
         fptr = (GLfloat *) list;
         return (GLuint) *(fptr+n);
      case GL_2_BYTES:
         ubptr = ((GLubyte *) list) + 2*n;
         return (GLuint) *ubptr * 256 + (GLuint) *(ubptr+1);
      case GL_3_BYTES:
         ubptr = ((GLubyte *) list) + 3*n;
         return (GLuint) *ubptr * 65536
              + (GLuint) *(ubptr+1) * 256
              + (GLuint) *(ubptr+2);
      case GL_4_BYTES:
         ubptr = ((GLubyte *) list) + 4*n;
         return (GLuint) *ubptr * 16777216
              + (GLuint) *(ubptr+1) * 65536
              + (GLuint) *(ubptr+2) * 256
              + (GLuint) *(ubptr+3);
      default:
         return 0;
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
          int n = 100;
          int type = 100;
          int _len_list0 = 1;
          const int * list = (const int *) malloc(_len_list0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = translate_id(n,type,list);
          printf("%d\n", benchRet); 
          free(list);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int type = 255;
          int _len_list0 = 65025;
          const int * list = (const int *) malloc(_len_list0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = translate_id(n,type,list);
          printf("%d\n", benchRet); 
          free(list);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int type = 10;
          int _len_list0 = 100;
          const int * list = (const int *) malloc(_len_list0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = translate_id(n,type,list);
          printf("%d\n", benchRet); 
          free(list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
