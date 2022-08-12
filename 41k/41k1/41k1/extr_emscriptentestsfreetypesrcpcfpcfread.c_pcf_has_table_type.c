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
struct TYPE_3__ {size_t type; } ;
typedef  TYPE_1__* PCF_Table ;
typedef  size_t FT_ULong ;
typedef  int /*<<< orphan*/  FT_Bool ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static FT_Bool
  pcf_has_table_type( PCF_Table  tables,
                      FT_ULong   ntables, /* same as PCF_Toc->count */
                      FT_ULong   type )
  {
    FT_ULong  i;


    for ( i = 0; i < ntables; i++ )
      if ( tables[i].type == type )
        return TRUE;

    return FALSE;
  }