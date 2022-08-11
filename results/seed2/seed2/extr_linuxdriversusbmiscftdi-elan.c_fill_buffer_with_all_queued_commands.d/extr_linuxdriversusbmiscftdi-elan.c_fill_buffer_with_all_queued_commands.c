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
typedef  int /*<<< orphan*/  u8 ;
struct usb_ftdi {int command_head; struct u132_command* command; } ;
struct u132_command {int follows; int header; int length; char address; char width; int /*<<< orphan*/ * buffer; } ;

/* Variables and functions */
 size_t COMMAND_MASK ; 

__attribute__((used)) static int fill_buffer_with_all_queued_commands(struct usb_ftdi *ftdi,
						char *buf, int command_size, int total_size)
{
	int ed_commands = 0;
	int b = 0;
	int I = command_size;
	int i = ftdi->command_head;
	while (I-- > 0) {
		struct u132_command *command = &ftdi->command[COMMAND_MASK &
							      i++];
		int F = command->follows;
		u8 *f = command->buffer;
		if (command->header & 0x80) {
			ed_commands |= 1 << (0x3 & (command->header >> 5));
		}
		buf[b++] = command->header;
		buf[b++] = (command->length >> 0) & 0x00FF;
		buf[b++] = (command->length >> 8) & 0x00FF;
		buf[b++] = command->address;
		buf[b++] = command->width;
		while (F-- > 0) {
			buf[b++] = *f++;
		}
	}
	return ed_commands;
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
          int command_size = 100;
          int total_size = 100;
          int _len_ftdi0 = 1;
          struct usb_ftdi * ftdi = (struct usb_ftdi *) malloc(_len_ftdi0*sizeof(struct usb_ftdi));
          for(int _i0 = 0; _i0 < _len_ftdi0; _i0++) {
            ftdi[_i0].command_head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ftdi__i0__command0 = 1;
          ftdi[_i0].command = (struct u132_command *) malloc(_len_ftdi__i0__command0*sizeof(struct u132_command));
          for(int _j0 = 0; _j0 < _len_ftdi__i0__command0; _j0++) {
            ftdi[_i0].command->follows = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->header = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->address = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ftdi__i0__command_buffer0 = 1;
          ftdi[_i0].command->buffer = (int *) malloc(_len_ftdi__i0__command_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ftdi__i0__command_buffer0; _j0++) {
            ftdi[_i0].command->buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fill_buffer_with_all_queued_commands(ftdi,buf,command_size,total_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ftdi0; _aux++) {
          free(ftdi[_aux].command);
          }
          free(ftdi);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int command_size = 255;
          int total_size = 255;
          int _len_ftdi0 = 65025;
          struct usb_ftdi * ftdi = (struct usb_ftdi *) malloc(_len_ftdi0*sizeof(struct usb_ftdi));
          for(int _i0 = 0; _i0 < _len_ftdi0; _i0++) {
            ftdi[_i0].command_head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ftdi__i0__command0 = 1;
          ftdi[_i0].command = (struct u132_command *) malloc(_len_ftdi__i0__command0*sizeof(struct u132_command));
          for(int _j0 = 0; _j0 < _len_ftdi__i0__command0; _j0++) {
            ftdi[_i0].command->follows = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->header = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->address = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ftdi__i0__command_buffer0 = 1;
          ftdi[_i0].command->buffer = (int *) malloc(_len_ftdi__i0__command_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ftdi__i0__command_buffer0; _j0++) {
            ftdi[_i0].command->buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fill_buffer_with_all_queued_commands(ftdi,buf,command_size,total_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ftdi0; _aux++) {
          free(ftdi[_aux].command);
          }
          free(ftdi);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int command_size = 10;
          int total_size = 10;
          int _len_ftdi0 = 100;
          struct usb_ftdi * ftdi = (struct usb_ftdi *) malloc(_len_ftdi0*sizeof(struct usb_ftdi));
          for(int _i0 = 0; _i0 < _len_ftdi0; _i0++) {
            ftdi[_i0].command_head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ftdi__i0__command0 = 1;
          ftdi[_i0].command = (struct u132_command *) malloc(_len_ftdi__i0__command0*sizeof(struct u132_command));
          for(int _j0 = 0; _j0 < _len_ftdi__i0__command0; _j0++) {
            ftdi[_i0].command->follows = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->header = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->address = ((-2 * (next_i()%2)) + 1) * next_i();
        ftdi[_i0].command->width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ftdi__i0__command_buffer0 = 1;
          ftdi[_i0].command->buffer = (int *) malloc(_len_ftdi__i0__command_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ftdi__i0__command_buffer0; _j0++) {
            ftdi[_i0].command->buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fill_buffer_with_all_queued_commands(ftdi,buf,command_size,total_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ftdi0; _aux++) {
          free(ftdi[_aux].command);
          }
          free(ftdi);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
