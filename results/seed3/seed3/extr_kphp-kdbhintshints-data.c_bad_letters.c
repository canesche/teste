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

/* Variables and functions */

inline int bad_letters (int x) {
  switch (x) {
  case 1093://�
  case 1098://�
  case 1078://�
  case 1101://�
  case 1073://�
  case 1102://�
  case 1105://�
  case 1061://�
  case 1066://�
  case 1046://�
  case 1069://�
  case 1041://�
  case 1070://�
  case 1025://�
    return 1;
  }
  return 0;
}