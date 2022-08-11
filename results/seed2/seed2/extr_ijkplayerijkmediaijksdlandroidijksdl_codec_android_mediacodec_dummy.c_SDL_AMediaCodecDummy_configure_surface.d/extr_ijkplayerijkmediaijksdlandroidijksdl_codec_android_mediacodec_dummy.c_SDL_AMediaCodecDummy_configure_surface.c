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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  sdl_amedia_status_t ;
typedef  int /*<<< orphan*/  jobject ;
typedef  int /*<<< orphan*/  SDL_AMediaFormat ;
typedef  int /*<<< orphan*/  SDL_AMediaCrypto ;
typedef  int /*<<< orphan*/  SDL_AMediaCodec ;
typedef  int /*<<< orphan*/  JNIEnv ;

/* Variables and functions */
 int /*<<< orphan*/  SDL_AMEDIA_OK ; 

__attribute__((used)) static sdl_amedia_status_t SDL_AMediaCodecDummy_configure_surface(
    JNIEnv*env,
    SDL_AMediaCodec* acodec,
    const SDL_AMediaFormat* aformat,
    jobject android_surface,
    SDL_AMediaCrypto *crypto,
    uint32_t flags)
{
    return SDL_AMEDIA_OK;
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
          int android_surface = 100;
          int flags = 100;
          int _len_env0 = 1;
          int * env = (int *) malloc(_len_env0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_acodec0 = 1;
          int * acodec = (int *) malloc(_len_acodec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_acodec0; _i0++) {
            acodec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aformat0 = 1;
          const int * aformat = (const int *) malloc(_len_aformat0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_aformat0; _i0++) {
            aformat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crypto0 = 1;
          int * crypto = (int *) malloc(_len_crypto0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_crypto0; _i0++) {
            crypto[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SDL_AMediaCodecDummy_configure_surface(env,acodec,aformat,android_surface,crypto,flags);
          printf("%d\n", benchRet); 
          free(env);
          free(acodec);
          free(aformat);
          free(crypto);
        
        break;
    }
    // big-arr
    case 1:
    {
          int android_surface = 255;
          int flags = 255;
          int _len_env0 = 65025;
          int * env = (int *) malloc(_len_env0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_acodec0 = 65025;
          int * acodec = (int *) malloc(_len_acodec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_acodec0; _i0++) {
            acodec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aformat0 = 65025;
          const int * aformat = (const int *) malloc(_len_aformat0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_aformat0; _i0++) {
            aformat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crypto0 = 65025;
          int * crypto = (int *) malloc(_len_crypto0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_crypto0; _i0++) {
            crypto[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SDL_AMediaCodecDummy_configure_surface(env,acodec,aformat,android_surface,crypto,flags);
          printf("%d\n", benchRet); 
          free(env);
          free(acodec);
          free(aformat);
          free(crypto);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int android_surface = 10;
          int flags = 10;
          int _len_env0 = 100;
          int * env = (int *) malloc(_len_env0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_acodec0 = 100;
          int * acodec = (int *) malloc(_len_acodec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_acodec0; _i0++) {
            acodec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aformat0 = 100;
          const int * aformat = (const int *) malloc(_len_aformat0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_aformat0; _i0++) {
            aformat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crypto0 = 100;
          int * crypto = (int *) malloc(_len_crypto0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_crypto0; _i0++) {
            crypto[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SDL_AMediaCodecDummy_configure_surface(env,acodec,aformat,android_surface,crypto,flags);
          printf("%d\n", benchRet); 
          free(env);
          free(acodec);
          free(aformat);
          free(crypto);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
