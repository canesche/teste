#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* rd_rel; } ;
struct TYPE_4__ {scalar_t__ relreplident; } ;
typedef  TYPE_2__* Relation ;

/* Variables and functions */
 scalar_t__ REPLICA_IDENTITY_DEFAULT ; 

__attribute__((used)) static bool
table_has_replica_identity(Relation rel)
{
	return rel->rd_rel->relreplident != REPLICA_IDENTITY_DEFAULT;
}