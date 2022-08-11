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
typedef  int /*<<< orphan*/  pdo_dbh_t ;
typedef  enum pdo_param_type { ____Placeholder_pdo_param_type } pdo_param_type ;

/* Variables and functions */

__attribute__((used)) static int odbc_handle_quoter(pdo_dbh_t *dbh, const char *unquoted, size_t unquotedlen, char **quoted, size_t *quotedlen, enum pdo_param_type param_type )
{
	/* pdo_odbc_db_handle *H = (pdo_odbc_db_handle *)dbh->driver_data; */
	/* TODO: figure it out */
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
          unsigned long unquotedlen = 100;
          enum pdo_param_type param_type = 0;
          int _len_dbh0 = 1;
          int * dbh = (int *) malloc(_len_dbh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbh0; _i0++) {
            dbh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unquoted0 = 1;
          const char * unquoted = (const char *) malloc(_len_unquoted0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_unquoted0; _i0++) {
            unquoted[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_quoted0 = 1;
          char ** quoted = (char **) malloc(_len_quoted0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_quoted0; _i0++) {
            int _len_quoted1 = 1;
            quoted[_i0] = (char *) malloc(_len_quoted1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_quoted1; _i1++) {
              quoted[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_quotedlen0 = 1;
          unsigned long * quotedlen = (unsigned long *) malloc(_len_quotedlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_quotedlen0; _i0++) {
            quotedlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = odbc_handle_quoter(dbh,unquoted,unquotedlen,quoted,quotedlen,param_type);
          printf("%d\n", benchRet); 
          free(dbh);
          free(unquoted);
          for(int i1 = 0; i1 < _len_quoted0; i1++) {
            int _len_quoted1 = 1;
              free(quoted[i1]);
          }
          free(quoted);
          free(quotedlen);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long unquotedlen = 255;
          enum pdo_param_type param_type = 0;
          int _len_dbh0 = 65025;
          int * dbh = (int *) malloc(_len_dbh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbh0; _i0++) {
            dbh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unquoted0 = 65025;
          const char * unquoted = (const char *) malloc(_len_unquoted0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_unquoted0; _i0++) {
            unquoted[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_quoted0 = 65025;
          char ** quoted = (char **) malloc(_len_quoted0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_quoted0; _i0++) {
            int _len_quoted1 = 1;
            quoted[_i0] = (char *) malloc(_len_quoted1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_quoted1; _i1++) {
              quoted[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_quotedlen0 = 65025;
          unsigned long * quotedlen = (unsigned long *) malloc(_len_quotedlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_quotedlen0; _i0++) {
            quotedlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = odbc_handle_quoter(dbh,unquoted,unquotedlen,quoted,quotedlen,param_type);
          printf("%d\n", benchRet); 
          free(dbh);
          free(unquoted);
          for(int i1 = 0; i1 < _len_quoted0; i1++) {
            int _len_quoted1 = 1;
              free(quoted[i1]);
          }
          free(quoted);
          free(quotedlen);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long unquotedlen = 10;
          enum pdo_param_type param_type = 0;
          int _len_dbh0 = 100;
          int * dbh = (int *) malloc(_len_dbh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbh0; _i0++) {
            dbh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unquoted0 = 100;
          const char * unquoted = (const char *) malloc(_len_unquoted0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_unquoted0; _i0++) {
            unquoted[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_quoted0 = 100;
          char ** quoted = (char **) malloc(_len_quoted0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_quoted0; _i0++) {
            int _len_quoted1 = 1;
            quoted[_i0] = (char *) malloc(_len_quoted1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_quoted1; _i1++) {
              quoted[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_quotedlen0 = 100;
          unsigned long * quotedlen = (unsigned long *) malloc(_len_quotedlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_quotedlen0; _i0++) {
            quotedlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = odbc_handle_quoter(dbh,unquoted,unquotedlen,quoted,quotedlen,param_type);
          printf("%d\n", benchRet); 
          free(dbh);
          free(unquoted);
          for(int i1 = 0; i1 < _len_quoted0; i1++) {
            int _len_quoted1 = 1;
              free(quoted[i1]);
          }
          free(quoted);
          free(quotedlen);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
