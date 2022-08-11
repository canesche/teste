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

/* Variables and functions */

__attribute__((used)) static inline void eat_at (const char *key, int key_len, char **new_key, int *new_len) {
  *new_key = (char *)key;
  *new_len = key_len;

  if ((*key >= '0' && *key <= '9') || (*key == '-' && key[1] >= '0' && key[1] <= '9')) {
    key++;
    while (*key >= '0' && *key <= '9') {
      key++;
    }
    if (*key++ == '@') {
      *new_len = key + key_len - *new_key;
      *new_key = (char *)key;
    }
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
          int key_len = 100;
          int _len_key0 = 1;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_key0 = 1;
          char ** new_key = (char **) malloc(_len_new_key0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_new_key0; _i0++) {
            int _len_new_key1 = 1;
            new_key[_i0] = (char *) malloc(_len_new_key1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_new_key1; _i1++) {
              new_key[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_new_len0 = 1;
          int * new_len = (int *) malloc(_len_new_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_len0; _i0++) {
            new_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          eat_at(key,key_len,new_key,new_len);
          free(key);
          for(int i1 = 0; i1 < _len_new_key0; i1++) {
            int _len_new_key1 = 1;
              free(new_key[i1]);
          }
          free(new_key);
          free(new_len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int key_len = 255;
          int _len_key0 = 65025;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_key0 = 65025;
          char ** new_key = (char **) malloc(_len_new_key0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_new_key0; _i0++) {
            int _len_new_key1 = 1;
            new_key[_i0] = (char *) malloc(_len_new_key1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_new_key1; _i1++) {
              new_key[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_new_len0 = 65025;
          int * new_len = (int *) malloc(_len_new_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_len0; _i0++) {
            new_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          eat_at(key,key_len,new_key,new_len);
          free(key);
          for(int i1 = 0; i1 < _len_new_key0; i1++) {
            int _len_new_key1 = 1;
              free(new_key[i1]);
          }
          free(new_key);
          free(new_len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int key_len = 10;
          int _len_key0 = 100;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_key0 = 100;
          char ** new_key = (char **) malloc(_len_new_key0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_new_key0; _i0++) {
            int _len_new_key1 = 1;
            new_key[_i0] = (char *) malloc(_len_new_key1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_new_key1; _i1++) {
              new_key[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_new_len0 = 100;
          int * new_len = (int *) malloc(_len_new_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_len0; _i0++) {
            new_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          eat_at(key,key_len,new_key,new_len);
          free(key);
          for(int i1 = 0; i1 < _len_new_key0; i1++) {
            int _len_new_key1 = 1;
              free(new_key[i1]);
          }
          free(new_key);
          free(new_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
