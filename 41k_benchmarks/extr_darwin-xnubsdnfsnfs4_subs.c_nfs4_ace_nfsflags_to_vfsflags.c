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
typedef  int uint32_t ;

/* Variables and functions */
 int KAUTH_ACE_DIRECTORY_INHERIT ; 
 int KAUTH_ACE_FAILURE ; 
 int KAUTH_ACE_FILE_INHERIT ; 
 int KAUTH_ACE_INHERITED ; 
 int KAUTH_ACE_LIMIT_INHERIT ; 
 int KAUTH_ACE_ONLY_INHERIT ; 
 int KAUTH_ACE_SUCCESS ; 
 int NFS_ACE_DIRECTORY_INHERIT_ACE ; 
 int NFS_ACE_FAILED_ACCESS_ACE_FLAG ; 
 int NFS_ACE_FILE_INHERIT_ACE ; 
 int NFS_ACE_INHERITED_ACE ; 
 int NFS_ACE_INHERIT_ONLY_ACE ; 
 int NFS_ACE_NO_PROPAGATE_INHERIT_ACE ; 
 int NFS_ACE_SUCCESSFUL_ACCESS_ACE_FLAG ; 

uint32_t
nfs4_ace_nfsflags_to_vfsflags(uint32_t nfsflags)
{
	uint32_t vfsflags = 0;

	if (nfsflags & NFS_ACE_FILE_INHERIT_ACE)
		vfsflags |= KAUTH_ACE_FILE_INHERIT;
	if (nfsflags & NFS_ACE_DIRECTORY_INHERIT_ACE)
		vfsflags |= KAUTH_ACE_DIRECTORY_INHERIT;
	if (nfsflags & NFS_ACE_NO_PROPAGATE_INHERIT_ACE)
		vfsflags |= KAUTH_ACE_LIMIT_INHERIT;
	if (nfsflags & NFS_ACE_INHERIT_ONLY_ACE)
		vfsflags |= KAUTH_ACE_ONLY_INHERIT;
	if (nfsflags & NFS_ACE_SUCCESSFUL_ACCESS_ACE_FLAG)
		vfsflags |= KAUTH_ACE_SUCCESS;
	if (nfsflags & NFS_ACE_FAILED_ACCESS_ACE_FLAG)
		vfsflags |= KAUTH_ACE_FAILURE;
	if (nfsflags & NFS_ACE_INHERITED_ACE)
		vfsflags |= KAUTH_ACE_INHERITED;

	return (vfsflags);
}