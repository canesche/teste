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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct wined3d_sm4_data {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  count; } ;
struct wined3d_shader_instruction {TYPE_1__ declaration; } ;
typedef  int /*<<< orphan*/  DWORD ;

/* Variables and functions */

__attribute__((used)) static void shader_sm4_read_declaration_count(struct wined3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct wined3d_sm4_data *priv)
{
    ins->declaration.count = *tokens;
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
          int opcode = 100;
          int opcode_token = 100;
          unsigned int token_count = 100;
          int _len_ins0 = 1;
          struct wined3d_shader_instruction * ins = (struct wined3d_shader_instruction *) malloc(_len_ins0*sizeof(struct wined3d_shader_instruction));
          for(int _i0 = 0; _i0 < _len_ins0; _i0++) {
            ins[_i0].declaration.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tokens0 = 1;
          const int * tokens = (const int *) malloc(_len_tokens0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tokens0; _i0++) {
            tokens[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv0 = 1;
          struct wined3d_sm4_data * priv = (struct wined3d_sm4_data *) malloc(_len_priv0*sizeof(struct wined3d_sm4_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shader_sm4_read_declaration_count(ins,opcode,opcode_token,tokens,token_count,priv);
          free(ins);
          free(tokens);
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int opcode = 255;
          int opcode_token = 255;
          unsigned int token_count = 255;
          int _len_ins0 = 65025;
          struct wined3d_shader_instruction * ins = (struct wined3d_shader_instruction *) malloc(_len_ins0*sizeof(struct wined3d_shader_instruction));
          for(int _i0 = 0; _i0 < _len_ins0; _i0++) {
            ins[_i0].declaration.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tokens0 = 65025;
          const int * tokens = (const int *) malloc(_len_tokens0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tokens0; _i0++) {
            tokens[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv0 = 65025;
          struct wined3d_sm4_data * priv = (struct wined3d_sm4_data *) malloc(_len_priv0*sizeof(struct wined3d_sm4_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shader_sm4_read_declaration_count(ins,opcode,opcode_token,tokens,token_count,priv);
          free(ins);
          free(tokens);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int opcode = 10;
          int opcode_token = 10;
          unsigned int token_count = 10;
          int _len_ins0 = 100;
          struct wined3d_shader_instruction * ins = (struct wined3d_shader_instruction *) malloc(_len_ins0*sizeof(struct wined3d_shader_instruction));
          for(int _i0 = 0; _i0 < _len_ins0; _i0++) {
            ins[_i0].declaration.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tokens0 = 100;
          const int * tokens = (const int *) malloc(_len_tokens0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tokens0; _i0++) {
            tokens[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv0 = 100;
          struct wined3d_sm4_data * priv = (struct wined3d_sm4_data *) malloc(_len_priv0*sizeof(struct wined3d_sm4_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shader_sm4_read_declaration_count(ins,opcode,opcode_token,tokens,token_count,priv);
          free(ins);
          free(tokens);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
