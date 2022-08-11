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
struct TYPE_3__ {char const* problem; size_t problem_offset; int problem_value; int /*<<< orphan*/  error; } ;
typedef  TYPE_1__ yaml_parser_t ;

/* Variables and functions */
 int /*<<< orphan*/  YAML_READER_ERROR ; 

__attribute__((used)) static int
yaml_parser_set_reader_error(yaml_parser_t *parser, const char *problem,
        size_t offset, int value)
{
    parser->error = YAML_READER_ERROR;
    parser->problem = problem;
    parser->problem_offset = offset;
    parser->problem_value = value;

    return 0;
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
          unsigned long offset = 100;
          int value = 100;
          int _len_parser0 = 1;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
              int _len_parser__i0__problem0 = 1;
          parser[_i0].problem = (const char *) malloc(_len_parser__i0__problem0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_parser__i0__problem0; _j0++) {
            parser[_i0].problem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parser[_i0].problem_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].problem_value = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_problem0 = 1;
          const char * problem = (const char *) malloc(_len_problem0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_problem0; _i0++) {
            problem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = yaml_parser_set_reader_error(parser,problem,offset,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].problem);
          }
          free(parser);
          free(problem);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long offset = 255;
          int value = 255;
          int _len_parser0 = 65025;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
              int _len_parser__i0__problem0 = 1;
          parser[_i0].problem = (const char *) malloc(_len_parser__i0__problem0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_parser__i0__problem0; _j0++) {
            parser[_i0].problem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parser[_i0].problem_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].problem_value = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_problem0 = 65025;
          const char * problem = (const char *) malloc(_len_problem0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_problem0; _i0++) {
            problem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = yaml_parser_set_reader_error(parser,problem,offset,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].problem);
          }
          free(parser);
          free(problem);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long offset = 10;
          int value = 10;
          int _len_parser0 = 100;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
              int _len_parser__i0__problem0 = 1;
          parser[_i0].problem = (const char *) malloc(_len_parser__i0__problem0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_parser__i0__problem0; _j0++) {
            parser[_i0].problem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parser[_i0].problem_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].problem_value = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_problem0 = 100;
          const char * problem = (const char *) malloc(_len_problem0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_problem0; _i0++) {
            problem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = yaml_parser_set_reader_error(parser,problem,offset,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].problem);
          }
          free(parser);
          free(problem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
