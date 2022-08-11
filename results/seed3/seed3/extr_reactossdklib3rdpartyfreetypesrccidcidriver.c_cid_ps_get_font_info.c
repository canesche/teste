#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  font_info; } ;
struct TYPE_4__ {TYPE_1__ cid; } ;
typedef  int /*<<< orphan*/  PS_FontInfoRec ;
typedef  scalar_t__ FT_Face ;
typedef  int /*<<< orphan*/  FT_Error ;
typedef  TYPE_2__* CID_Face ;

/* Variables and functions */
 int /*<<< orphan*/  FT_Err_Ok ; 

__attribute__((used)) static FT_Error
  cid_ps_get_font_info( FT_Face          face,
                        PS_FontInfoRec*  afont_info )
  {
    *afont_info = ((CID_Face)face)->cid.font_info;

    return FT_Err_Ok;
  }