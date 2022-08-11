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
typedef  int /*<<< orphan*/  mp_uint_t ;
struct TYPE_3__ {int /*<<< orphan*/  const* const_table; int /*<<< orphan*/  const* fun_data; int /*<<< orphan*/  scope_flags; int /*<<< orphan*/  kind; } ;
typedef  TYPE_1__ mp_raw_code_t ;
typedef  int /*<<< orphan*/  byte ;

/* Variables and functions */
 int /*<<< orphan*/  MP_CODE_BYTECODE ; 

void mp_emit_glue_assign_bytecode(mp_raw_code_t *rc, const byte *code,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    size_t len,
    #endif
    const mp_uint_t *const_table,
    #if MICROPY_PERSISTENT_CODE_SAVE
    uint16_t n_obj, uint16_t n_raw_code,
    #endif
    mp_uint_t scope_flags) {

    rc->kind = MP_CODE_BYTECODE;
    rc->scope_flags = scope_flags;
    rc->fun_data = code;
    rc->const_table = const_table;
    #if MICROPY_PERSISTENT_CODE_SAVE
    rc->fun_data_len = len;
    rc->n_obj = n_obj;
    rc->n_raw_code = n_raw_code;
    #endif

#ifdef DEBUG_PRINT
    #if !MICROPY_DEBUG_PRINTERS
    const size_t len = 0;
    #endif
    DEBUG_printf("assign byte code: code=%p len=" UINT_FMT " flags=%x\n", code, len, (uint)scope_flags);
#endif
#if MICROPY_DEBUG_PRINTERS
    if (mp_verbose_flag >= 2) {
        mp_bytecode_print(rc, code, len, const_table);
    }
#endif
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
          int scope_flags = 100;
          int _len_rc0 = 1;
          struct TYPE_3__ * rc = (struct TYPE_3__ *) malloc(_len_rc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
              int _len_rc__i0__const_table0 = 1;
          rc[_i0].const_table = (const int *) malloc(_len_rc__i0__const_table0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_rc__i0__const_table0; _j0++) {
            rc[_i0].const_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc__i0__fun_data0 = 1;
          rc[_i0].fun_data = (const int *) malloc(_len_rc__i0__fun_data0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_rc__i0__fun_data0; _j0++) {
            rc[_i0].fun_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rc[_i0].scope_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 1;
          const int * code = (const int *) malloc(_len_code0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_const_table0 = 1;
          const int * const_table = (const int *) malloc(_len_const_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_const_table0; _i0++) {
            const_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_emit_glue_assign_bytecode(rc,code,const_table,scope_flags);
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(rc[_aux].const_table);
          }
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(rc[_aux].fun_data);
          }
          free(rc);
          free(code);
          free(const_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int scope_flags = 255;
          int _len_rc0 = 65025;
          struct TYPE_3__ * rc = (struct TYPE_3__ *) malloc(_len_rc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
              int _len_rc__i0__const_table0 = 1;
          rc[_i0].const_table = (const int *) malloc(_len_rc__i0__const_table0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_rc__i0__const_table0; _j0++) {
            rc[_i0].const_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc__i0__fun_data0 = 1;
          rc[_i0].fun_data = (const int *) malloc(_len_rc__i0__fun_data0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_rc__i0__fun_data0; _j0++) {
            rc[_i0].fun_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rc[_i0].scope_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 65025;
          const int * code = (const int *) malloc(_len_code0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_const_table0 = 65025;
          const int * const_table = (const int *) malloc(_len_const_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_const_table0; _i0++) {
            const_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_emit_glue_assign_bytecode(rc,code,const_table,scope_flags);
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(rc[_aux].const_table);
          }
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(rc[_aux].fun_data);
          }
          free(rc);
          free(code);
          free(const_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int scope_flags = 10;
          int _len_rc0 = 100;
          struct TYPE_3__ * rc = (struct TYPE_3__ *) malloc(_len_rc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
              int _len_rc__i0__const_table0 = 1;
          rc[_i0].const_table = (const int *) malloc(_len_rc__i0__const_table0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_rc__i0__const_table0; _j0++) {
            rc[_i0].const_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc__i0__fun_data0 = 1;
          rc[_i0].fun_data = (const int *) malloc(_len_rc__i0__fun_data0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_rc__i0__fun_data0; _j0++) {
            rc[_i0].fun_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rc[_i0].scope_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 100;
          const int * code = (const int *) malloc(_len_code0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_const_table0 = 100;
          const int * const_table = (const int *) malloc(_len_const_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_const_table0; _i0++) {
            const_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_emit_glue_assign_bytecode(rc,code,const_table,scope_flags);
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(rc[_aux].const_table);
          }
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(rc[_aux].fun_data);
          }
          free(rc);
          free(code);
          free(const_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
