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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct view_column_data {int /*<<< orphan*/  file_name; int /*<<< orphan*/ * status; struct view_column* section; } ;
struct TYPE_4__ {char const* text; int type; } ;
struct TYPE_5__ {TYPE_1__ section; } ;
struct view_column {TYPE_2__ opt; int /*<<< orphan*/  type; } ;
struct view {struct line const* line; } ;
struct TYPE_6__ {int /*<<< orphan*/  name; } ;
struct status {TYPE_3__ new; int /*<<< orphan*/  status; } ;
struct line {int type; struct status* data; } ;
typedef  enum line_type { ____Placeholder_line_type } line_type ;

/* Variables and functions */
 int LINE_DEFAULT ; 
#define  LINE_HEADER 132 
 int LINE_SECTION ; 
#define  LINE_STAT_NONE 131 
#define  LINE_STAT_STAGED 130 
#define  LINE_STAT_UNSTAGED 129 
#define  LINE_STAT_UNTRACKED 128 
 int /*<<< orphan*/  VIEW_COLUMN_SECTION ; 
 int /*<<< orphan*/  opt_status_show_untracked_files ; 
 char* status_onbranch ; 

__attribute__((used)) static bool
status_get_column_data(struct view *view, const struct line *line, struct view_column_data *column_data)
{
	struct status *status = line->data;

	if (!status) {
		static struct view_column group_column;
		const char *text;
		enum line_type type;

		column_data->section = &group_column;
		column_data->section->type = VIEW_COLUMN_SECTION;

		switch (line->type) {
		case LINE_STAT_STAGED:
			type = LINE_SECTION;
			text = "Changes to be committed:";
			break;

		case LINE_STAT_UNSTAGED:
			type = LINE_SECTION;
			text = "Changes not staged for commit:";
			break;

		case LINE_STAT_UNTRACKED:
			type = LINE_SECTION;
			text = "Untracked files:";
			break;

		case LINE_STAT_NONE:
			type = LINE_DEFAULT;
			text = "  (no files)";
			if (!opt_status_show_untracked_files
			    && view->line < line
			    && line[-1].type == LINE_STAT_UNTRACKED)
				text = "  (not shown)";
			break;

		case LINE_HEADER:
			type = LINE_HEADER;
			text = status_onbranch;
			break;

		default:
			return false;
		}

		column_data->section->opt.section.text = text;
		column_data->section->opt.section.type = type;

	} else {
		column_data->status = &status->status;
		column_data->file_name = status->new.name;
	}
	return true;
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
          int _len_view0 = 1;
          struct view * view = (struct view *) malloc(_len_view0*sizeof(struct view));
          for(int _i0 = 0; _i0 < _len_view0; _i0++) {
              int _len_view__i0__line0 = 1;
          view[_i0].line = (const struct line *) malloc(_len_view__i0__line0*sizeof(const struct line));
          for(int _j0 = 0; _j0 < _len_view__i0__line0; _j0++) {
              }
          }
          int _len_line0 = 1;
          const struct line * line = (const struct line *) malloc(_len_line0*sizeof(const struct line));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
              }
          int _len_column_data0 = 1;
          struct view_column_data * column_data = (struct view_column_data *) malloc(_len_column_data0*sizeof(struct view_column_data));
          for(int _i0 = 0; _i0 < _len_column_data0; _i0++) {
            column_data[_i0].file_name = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_column_data__i0__status0 = 1;
          column_data[_i0].status = (int *) malloc(_len_column_data__i0__status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_column_data__i0__status0; _j0++) {
            column_data[_i0].status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_column_data__i0__section0 = 1;
          column_data[_i0].section = (struct view_column *) malloc(_len_column_data__i0__section0*sizeof(struct view_column));
          for(int _j0 = 0; _j0 < _len_column_data__i0__section0; _j0++) {
              int _len_column_data__i0__section_opt_section_text0 = 1;
          column_data[_i0].section->opt.section.text = (const char *) malloc(_len_column_data__i0__section_opt_section_text0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_column_data__i0__section_opt_section_text0; _j0++) {
            column_data[_i0].section->opt.section.text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        column_data[_i0].section->opt.section.type = ((-2 * (next_i()%2)) + 1) * next_i();
        column_data[_i0].section->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = status_get_column_data(view,line,column_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].line);
          }
          free(view);
          free(line);
          for(int _aux = 0; _aux < _len_column_data0; _aux++) {
          free(column_data[_aux].status);
          }
          for(int _aux = 0; _aux < _len_column_data0; _aux++) {
          free(column_data[_aux].section);
          }
          free(column_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_view0 = 65025;
          struct view * view = (struct view *) malloc(_len_view0*sizeof(struct view));
          for(int _i0 = 0; _i0 < _len_view0; _i0++) {
              int _len_view__i0__line0 = 1;
          view[_i0].line = (const struct line *) malloc(_len_view__i0__line0*sizeof(const struct line));
          for(int _j0 = 0; _j0 < _len_view__i0__line0; _j0++) {
              }
          }
          int _len_line0 = 65025;
          const struct line * line = (const struct line *) malloc(_len_line0*sizeof(const struct line));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
              }
          int _len_column_data0 = 65025;
          struct view_column_data * column_data = (struct view_column_data *) malloc(_len_column_data0*sizeof(struct view_column_data));
          for(int _i0 = 0; _i0 < _len_column_data0; _i0++) {
            column_data[_i0].file_name = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_column_data__i0__status0 = 1;
          column_data[_i0].status = (int *) malloc(_len_column_data__i0__status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_column_data__i0__status0; _j0++) {
            column_data[_i0].status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_column_data__i0__section0 = 1;
          column_data[_i0].section = (struct view_column *) malloc(_len_column_data__i0__section0*sizeof(struct view_column));
          for(int _j0 = 0; _j0 < _len_column_data__i0__section0; _j0++) {
              int _len_column_data__i0__section_opt_section_text0 = 1;
          column_data[_i0].section->opt.section.text = (const char *) malloc(_len_column_data__i0__section_opt_section_text0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_column_data__i0__section_opt_section_text0; _j0++) {
            column_data[_i0].section->opt.section.text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        column_data[_i0].section->opt.section.type = ((-2 * (next_i()%2)) + 1) * next_i();
        column_data[_i0].section->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = status_get_column_data(view,line,column_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].line);
          }
          free(view);
          free(line);
          for(int _aux = 0; _aux < _len_column_data0; _aux++) {
          free(column_data[_aux].status);
          }
          for(int _aux = 0; _aux < _len_column_data0; _aux++) {
          free(column_data[_aux].section);
          }
          free(column_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_view0 = 100;
          struct view * view = (struct view *) malloc(_len_view0*sizeof(struct view));
          for(int _i0 = 0; _i0 < _len_view0; _i0++) {
              int _len_view__i0__line0 = 1;
          view[_i0].line = (const struct line *) malloc(_len_view__i0__line0*sizeof(const struct line));
          for(int _j0 = 0; _j0 < _len_view__i0__line0; _j0++) {
              }
          }
          int _len_line0 = 100;
          const struct line * line = (const struct line *) malloc(_len_line0*sizeof(const struct line));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
              }
          int _len_column_data0 = 100;
          struct view_column_data * column_data = (struct view_column_data *) malloc(_len_column_data0*sizeof(struct view_column_data));
          for(int _i0 = 0; _i0 < _len_column_data0; _i0++) {
            column_data[_i0].file_name = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_column_data__i0__status0 = 1;
          column_data[_i0].status = (int *) malloc(_len_column_data__i0__status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_column_data__i0__status0; _j0++) {
            column_data[_i0].status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_column_data__i0__section0 = 1;
          column_data[_i0].section = (struct view_column *) malloc(_len_column_data__i0__section0*sizeof(struct view_column));
          for(int _j0 = 0; _j0 < _len_column_data__i0__section0; _j0++) {
              int _len_column_data__i0__section_opt_section_text0 = 1;
          column_data[_i0].section->opt.section.text = (const char *) malloc(_len_column_data__i0__section_opt_section_text0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_column_data__i0__section_opt_section_text0; _j0++) {
            column_data[_i0].section->opt.section.text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        column_data[_i0].section->opt.section.type = ((-2 * (next_i()%2)) + 1) * next_i();
        column_data[_i0].section->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = status_get_column_data(view,line,column_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].line);
          }
          free(view);
          free(line);
          for(int _aux = 0; _aux < _len_column_data0; _aux++) {
          free(column_data[_aux].status);
          }
          for(int _aux = 0; _aux < _len_column_data0; _aux++) {
          free(column_data[_aux].section);
          }
          free(column_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
