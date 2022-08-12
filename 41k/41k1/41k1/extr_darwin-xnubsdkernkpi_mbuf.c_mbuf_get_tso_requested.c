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
typedef  int /*<<< orphan*/  u_int32_t ;
typedef  int /*<<< orphan*/  mbuf_tso_request_flags_t ;
typedef  TYPE_2__* mbuf_t ;
typedef  int /*<<< orphan*/  errno_t ;
struct TYPE_4__ {int /*<<< orphan*/  tso_segsz; int /*<<< orphan*/  csum_flags; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 int M_PKTHDR ; 
 int /*<<< orphan*/  mbuf_valid_tso_request_flags ; 

errno_t
mbuf_get_tso_requested(
	mbuf_t mbuf,
	mbuf_tso_request_flags_t *request,
	u_int32_t *value)
{
	if (mbuf == NULL || (mbuf->m_flags & M_PKTHDR) == 0 ||
			request == NULL || value == NULL)
		return (EINVAL);

	*request = mbuf->m_pkthdr.csum_flags;
	*request &= mbuf_valid_tso_request_flags;
	if (*request && value != NULL)
		*value = mbuf->m_pkthdr.tso_segsz;

	return (0);
}