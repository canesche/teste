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
struct uart_port {scalar_t__ irq; scalar_t__ iotype; } ;
struct serial_struct {scalar_t__ type; scalar_t__ irq; scalar_t__ io_type; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ PORT_SPRD ; 

__attribute__((used)) static int sprd_verify_port(struct uart_port *port,
				   struct serial_struct *ser)
{
	if (ser->type != PORT_SPRD)
		return -EINVAL;
	if (port->irq != ser->irq)
		return -EINVAL;
	if (port->iotype != ser->io_type)
		return -EINVAL;
	return 0;
}