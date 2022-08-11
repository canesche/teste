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
struct TYPE_3__ {int state; int x; int y; int division; } ;
typedef  TYPE_1__ coord_parser_t ;

/* Variables and functions */
#define  s_coord_illegal 133 
#define  s_coord_start 132 
#define  s_coord_x_after_decimal 131 
#define  s_coord_x_before_decimal 130 
#define  s_coord_y_after_decimal 129 
#define  s_coord_y_before_decimal 128 

void coord_parser_execute(coord_parser_t* parser, const char* buf, size_t len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		int digit = buf[i] - '0';
		if ((digit < 0 || digit >= 10) && buf[i] != '.' && buf[i] != 'x' && buf[i] != 'X')
			parser->state = s_coord_illegal;
		switch (parser->state)
		{
			case s_coord_start:
				parser->x = parser->y = 0;
				parser->state = s_coord_x_before_decimal;
				/* fall-through */
			case s_coord_x_before_decimal:
				if (buf[i] != 'x' && buf[i] != 'X')
				{
					if (buf[i] != '.')
						parser->x = parser->x * 10 + digit;
					else
						parser->state = s_coord_x_after_decimal;
				} else
					parser->state = s_coord_y_before_decimal;
				break;
			case s_coord_x_after_decimal:
				if (buf[i] != 'x' && buf[i] != 'X')
				{
					if (buf[i] == '.')
					{
						parser->state = s_coord_illegal;
						break;
					}
					parser->x += digit * parser->division;
					parser->division *= 0.1;
				} else {
					parser->division = 0.1;
					parser->state = s_coord_y_before_decimal;
				}
				break;
			case s_coord_y_before_decimal:
				if (buf[i] == 'x' || buf[i] == 'X')
				{
					parser->state = s_coord_illegal;
					break;
				}
				if (buf[i] != '.')
					parser->y = parser->y * 10 + digit;
				else
					parser->state = s_coord_y_after_decimal;
				break;
			case s_coord_y_after_decimal:
				if (buf[i] == 'x' || buf[i] == 'X' || buf[i] == '.')
				{
					parser->state = s_coord_illegal;
					break;
				}
				parser->y += digit * parser->division;
				parser->division *= 0.1;
				break;
			case s_coord_illegal:
				break;
		}
		if (parser->state == s_coord_illegal)
			break;
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
          unsigned long len = 100;
          int _len_parser0 = 1;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].division = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          coord_parser_execute(parser,buf,len);
          free(parser);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_parser0 = 65025;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].division = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          coord_parser_execute(parser,buf,len);
          free(parser);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_parser0 = 100;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].division = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          coord_parser_execute(parser,buf,len);
          free(parser);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
