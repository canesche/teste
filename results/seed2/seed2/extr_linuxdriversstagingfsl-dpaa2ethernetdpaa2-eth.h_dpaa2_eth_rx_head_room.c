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
struct dpaa2_eth_priv {unsigned int tx_data_offset; } ;

/* Variables and functions */
 unsigned int DPAA2_ETH_RX_HWA_SIZE ; 
 unsigned int DPAA2_ETH_TX_BUF_ALIGN ; 

__attribute__((used)) static inline unsigned int dpaa2_eth_rx_head_room(struct dpaa2_eth_priv *priv)
{
	return priv->tx_data_offset + DPAA2_ETH_TX_BUF_ALIGN -
	       DPAA2_ETH_RX_HWA_SIZE;
}