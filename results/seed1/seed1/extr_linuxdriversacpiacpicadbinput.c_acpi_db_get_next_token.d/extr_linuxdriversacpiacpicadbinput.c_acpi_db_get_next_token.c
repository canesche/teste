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
typedef  int u32 ;
typedef  int /*<<< orphan*/  acpi_object_type ;

/* Variables and functions */
 int /*<<< orphan*/  ACPI_TYPE_BUFFER ; 
 int /*<<< orphan*/  ACPI_TYPE_INTEGER ; 
 int /*<<< orphan*/  ACPI_TYPE_PACKAGE ; 
 int /*<<< orphan*/  ACPI_TYPE_STRING ; 

char *acpi_db_get_next_token(char *string,
			     char **next, acpi_object_type *return_type)
{
	char *start;
	u32 depth;
	acpi_object_type type = ACPI_TYPE_INTEGER;

	/* At end of buffer? */

	if (!string || !(*string)) {
		return (NULL);
	}

	/* Remove any spaces at the beginning */

	if (*string == ' ') {
		while (*string && (*string == ' ')) {
			string++;
		}

		if (!(*string)) {
			return (NULL);
		}
	}

	switch (*string) {
	case '"':

		/* This is a quoted string, scan until closing quote */

		string++;
		start = string;
		type = ACPI_TYPE_STRING;

		/* Find end of string */

		while (*string && (*string != '"')) {
			string++;
		}
		break;

	case '(':

		/* This is the start of a buffer, scan until closing paren */

		string++;
		start = string;
		type = ACPI_TYPE_BUFFER;

		/* Find end of buffer */

		while (*string && (*string != ')')) {
			string++;
		}
		break;

	case '[':

		/* This is the start of a package, scan until closing bracket */

		string++;
		depth = 1;
		start = string;
		type = ACPI_TYPE_PACKAGE;

		/* Find end of package (closing bracket) */

		while (*string) {

			/* Handle String package elements */

			if (*string == '"') {
				/* Find end of string */

				string++;
				while (*string && (*string != '"')) {
					string++;
				}
				if (!(*string)) {
					break;
				}
			} else if (*string == '[') {
				depth++;	/* A nested package declaration */
			} else if (*string == ']') {
				depth--;
				if (depth == 0) {	/* Found final package closing bracket */
					break;
				}
			}

			string++;
		}
		break;

	default:

		start = string;

		/* Find end of token */

		while (*string && (*string != ' ')) {
			string++;
		}
		break;
	}

	if (!(*string)) {
		*next = NULL;
	} else {
		*string = 0;
		*next = string + 1;
	}

	*return_type = type;
	return (start);
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
          int _len_string0 = 1;
          char * string = (char *) malloc(_len_string0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next0 = 1;
          char ** next = (char **) malloc(_len_next0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_next0; _i0++) {
            int _len_next1 = 1;
            next[_i0] = (char *) malloc(_len_next1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_next1; _i1++) {
              next[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_return_type0 = 1;
          int * return_type = (int *) malloc(_len_return_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_return_type0; _i0++) {
            return_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = acpi_db_get_next_token(string,next,return_type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(string);
          for(int i1 = 0; i1 < _len_next0; i1++) {
            int _len_next1 = 1;
              free(next[i1]);
          }
          free(next);
          free(return_type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_string0 = 65025;
          char * string = (char *) malloc(_len_string0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next0 = 65025;
          char ** next = (char **) malloc(_len_next0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_next0; _i0++) {
            int _len_next1 = 1;
            next[_i0] = (char *) malloc(_len_next1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_next1; _i1++) {
              next[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_return_type0 = 65025;
          int * return_type = (int *) malloc(_len_return_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_return_type0; _i0++) {
            return_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = acpi_db_get_next_token(string,next,return_type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(string);
          for(int i1 = 0; i1 < _len_next0; i1++) {
            int _len_next1 = 1;
              free(next[i1]);
          }
          free(next);
          free(return_type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_string0 = 100;
          char * string = (char *) malloc(_len_string0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next0 = 100;
          char ** next = (char **) malloc(_len_next0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_next0; _i0++) {
            int _len_next1 = 1;
            next[_i0] = (char *) malloc(_len_next1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_next1; _i1++) {
              next[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_return_type0 = 100;
          int * return_type = (int *) malloc(_len_return_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_return_type0; _i0++) {
            return_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = acpi_db_get_next_token(string,next,return_type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(string);
          for(int i1 = 0; i1 < _len_next0; i1++) {
            int _len_next1 = 1;
              free(next[i1]);
          }
          free(next);
          free(return_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
