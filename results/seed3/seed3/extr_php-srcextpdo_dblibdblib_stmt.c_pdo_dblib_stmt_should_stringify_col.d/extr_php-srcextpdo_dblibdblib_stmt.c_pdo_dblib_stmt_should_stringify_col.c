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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  zend_long ;
struct TYPE_7__ {TYPE_1__* dbh; scalar_t__ driver_data; } ;
typedef  TYPE_2__ pdo_stmt_t ;
struct TYPE_8__ {TYPE_4__* H; } ;
typedef  TYPE_3__ pdo_dblib_stmt ;
struct TYPE_9__ {int /*<<< orphan*/  datetime_convert; } ;
typedef  TYPE_4__ pdo_dblib_db_handle ;
struct TYPE_6__ {int /*<<< orphan*/  stringify; } ;
typedef  int /*<<< orphan*/  DBBIGINT ;

/* Variables and functions */
#define  SQLBIT 141 
#define  SQLDATETIM4 140 
#define  SQLDATETIME 139 
#define  SQLDECIMAL 138 
#define  SQLFLT4 137 
#define  SQLFLT8 136 
#define  SQLINT1 135 
#define  SQLINT2 134 
#define  SQLINT4 133 
#define  SQLINT8 132 
#define  SQLMONEY 131 
#define  SQLMONEY4 130 
#define  SQLMONEYN 129 
#define  SQLNUMERIC 128 

__attribute__((used)) static int pdo_dblib_stmt_should_stringify_col(pdo_stmt_t *stmt, int coltype)
{
	pdo_dblib_stmt *S = (pdo_dblib_stmt*)stmt->driver_data;
	pdo_dblib_db_handle *H = S->H;

	switch (coltype) {
		case SQLDECIMAL:
		case SQLNUMERIC:
		case SQLMONEY:
		case SQLMONEY4:
		case SQLMONEYN:
		case SQLFLT4:
		case SQLFLT8:
		case SQLINT4:
		case SQLINT2:
		case SQLINT1:
		case SQLBIT:
			if (stmt->dbh->stringify) {
				return 1;
			}
			break;

		case SQLINT8:
			if (stmt->dbh->stringify) {
				return 1;
			}

			/* force stringify if DBBIGINT won't fit in zend_long */
			/* this should only be an issue for 32-bit machines */
			if (sizeof(zend_long) < sizeof(DBBIGINT)) {
				return 1;
			}
			break;

#ifdef SQLMSDATETIME2
		case SQLMSDATETIME2:
#endif
		case SQLDATETIME:
		case SQLDATETIM4:
			if (H->datetime_convert) {
				return 1;
			}
			break;
	}

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
          int coltype = 100;
          int _len_stmt0 = 1;
          struct TYPE_7__ * stmt = (struct TYPE_7__ *) malloc(_len_stmt0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_stmt0; _i0++) {
              int _len_stmt__i0__dbh0 = 1;
          stmt[_i0].dbh = (struct TYPE_6__ *) malloc(_len_stmt__i0__dbh0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stmt__i0__dbh0; _j0++) {
            stmt[_i0].dbh->stringify = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stmt[_i0].driver_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pdo_dblib_stmt_should_stringify_col(stmt,coltype);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stmt0; _aux++) {
          free(stmt[_aux].dbh);
          }
          free(stmt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int coltype = 255;
          int _len_stmt0 = 65025;
          struct TYPE_7__ * stmt = (struct TYPE_7__ *) malloc(_len_stmt0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_stmt0; _i0++) {
              int _len_stmt__i0__dbh0 = 1;
          stmt[_i0].dbh = (struct TYPE_6__ *) malloc(_len_stmt__i0__dbh0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stmt__i0__dbh0; _j0++) {
            stmt[_i0].dbh->stringify = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stmt[_i0].driver_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pdo_dblib_stmt_should_stringify_col(stmt,coltype);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stmt0; _aux++) {
          free(stmt[_aux].dbh);
          }
          free(stmt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int coltype = 10;
          int _len_stmt0 = 100;
          struct TYPE_7__ * stmt = (struct TYPE_7__ *) malloc(_len_stmt0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_stmt0; _i0++) {
              int _len_stmt__i0__dbh0 = 1;
          stmt[_i0].dbh = (struct TYPE_6__ *) malloc(_len_stmt__i0__dbh0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stmt__i0__dbh0; _j0++) {
            stmt[_i0].dbh->stringify = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stmt[_i0].driver_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pdo_dblib_stmt_should_stringify_col(stmt,coltype);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stmt0; _aux++) {
          free(stmt[_aux].dbh);
          }
          free(stmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
