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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char* input_stream; char* eof; char* parse_point; char* string_storage; int string_storage_len; } ;
typedef  TYPE_1__ stb_lexer ;

/* Variables and functions */

void stb_c_lexer_init(stb_lexer *lexer, const char *input_stream, const char *input_stream_end, char *string_store, int store_length)
{
   lexer->input_stream = (char *) input_stream;
   lexer->eof = (char *) input_stream_end;
   lexer->parse_point = (char *) input_stream;
   lexer->string_storage = string_store;
   lexer->string_storage_len = store_length;
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
          int store_length = 100;
          int _len_lexer0 = 1;
          struct TYPE_3__ * lexer = (struct TYPE_3__ *) malloc(_len_lexer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lexer0; _i0++) {
              int _len_lexer__i0__input_stream0 = 1;
          lexer[_i0].input_stream = (char *) malloc(_len_lexer__i0__input_stream0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__input_stream0; _j0++) {
            lexer[_i0].input_stream[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lexer__i0__eof0 = 1;
          lexer[_i0].eof = (char *) malloc(_len_lexer__i0__eof0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__eof0; _j0++) {
            lexer[_i0].eof[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lexer__i0__parse_point0 = 1;
          lexer[_i0].parse_point = (char *) malloc(_len_lexer__i0__parse_point0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__parse_point0; _j0++) {
            lexer[_i0].parse_point[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lexer__i0__string_storage0 = 1;
          lexer[_i0].string_storage = (char *) malloc(_len_lexer__i0__string_storage0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__string_storage0; _j0++) {
            lexer[_i0].string_storage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lexer[_i0].string_storage_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input_stream0 = 1;
          const char * input_stream = (const char *) malloc(_len_input_stream0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_input_stream0; _i0++) {
            input_stream[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input_stream_end0 = 1;
          const char * input_stream_end = (const char *) malloc(_len_input_stream_end0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_input_stream_end0; _i0++) {
            input_stream_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_string_store0 = 1;
          char * string_store = (char *) malloc(_len_string_store0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string_store0; _i0++) {
            string_store[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stb_c_lexer_init(lexer,input_stream,input_stream_end,string_store,store_length);
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].input_stream);
          }
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].eof);
          }
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].parse_point);
          }
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].string_storage);
          }
          free(lexer);
          free(input_stream);
          free(input_stream_end);
          free(string_store);
        
        break;
    }
    // big-arr
    case 1:
    {
          int store_length = 255;
          int _len_lexer0 = 65025;
          struct TYPE_3__ * lexer = (struct TYPE_3__ *) malloc(_len_lexer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lexer0; _i0++) {
              int _len_lexer__i0__input_stream0 = 1;
          lexer[_i0].input_stream = (char *) malloc(_len_lexer__i0__input_stream0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__input_stream0; _j0++) {
            lexer[_i0].input_stream[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lexer__i0__eof0 = 1;
          lexer[_i0].eof = (char *) malloc(_len_lexer__i0__eof0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__eof0; _j0++) {
            lexer[_i0].eof[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lexer__i0__parse_point0 = 1;
          lexer[_i0].parse_point = (char *) malloc(_len_lexer__i0__parse_point0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__parse_point0; _j0++) {
            lexer[_i0].parse_point[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lexer__i0__string_storage0 = 1;
          lexer[_i0].string_storage = (char *) malloc(_len_lexer__i0__string_storage0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__string_storage0; _j0++) {
            lexer[_i0].string_storage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lexer[_i0].string_storage_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input_stream0 = 65025;
          const char * input_stream = (const char *) malloc(_len_input_stream0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_input_stream0; _i0++) {
            input_stream[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input_stream_end0 = 65025;
          const char * input_stream_end = (const char *) malloc(_len_input_stream_end0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_input_stream_end0; _i0++) {
            input_stream_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_string_store0 = 65025;
          char * string_store = (char *) malloc(_len_string_store0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string_store0; _i0++) {
            string_store[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stb_c_lexer_init(lexer,input_stream,input_stream_end,string_store,store_length);
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].input_stream);
          }
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].eof);
          }
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].parse_point);
          }
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].string_storage);
          }
          free(lexer);
          free(input_stream);
          free(input_stream_end);
          free(string_store);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int store_length = 10;
          int _len_lexer0 = 100;
          struct TYPE_3__ * lexer = (struct TYPE_3__ *) malloc(_len_lexer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lexer0; _i0++) {
              int _len_lexer__i0__input_stream0 = 1;
          lexer[_i0].input_stream = (char *) malloc(_len_lexer__i0__input_stream0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__input_stream0; _j0++) {
            lexer[_i0].input_stream[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lexer__i0__eof0 = 1;
          lexer[_i0].eof = (char *) malloc(_len_lexer__i0__eof0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__eof0; _j0++) {
            lexer[_i0].eof[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lexer__i0__parse_point0 = 1;
          lexer[_i0].parse_point = (char *) malloc(_len_lexer__i0__parse_point0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__parse_point0; _j0++) {
            lexer[_i0].parse_point[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lexer__i0__string_storage0 = 1;
          lexer[_i0].string_storage = (char *) malloc(_len_lexer__i0__string_storage0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lexer__i0__string_storage0; _j0++) {
            lexer[_i0].string_storage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lexer[_i0].string_storage_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input_stream0 = 100;
          const char * input_stream = (const char *) malloc(_len_input_stream0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_input_stream0; _i0++) {
            input_stream[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input_stream_end0 = 100;
          const char * input_stream_end = (const char *) malloc(_len_input_stream_end0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_input_stream_end0; _i0++) {
            input_stream_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_string_store0 = 100;
          char * string_store = (char *) malloc(_len_string_store0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string_store0; _i0++) {
            string_store[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stb_c_lexer_init(lexer,input_stream,input_stream_end,string_store,store_length);
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].input_stream);
          }
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].eof);
          }
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].parse_point);
          }
          for(int _aux = 0; _aux < _len_lexer0; _aux++) {
          free(lexer[_aux].string_storage);
          }
          free(lexer);
          free(input_stream);
          free(input_stream_end);
          free(string_store);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
