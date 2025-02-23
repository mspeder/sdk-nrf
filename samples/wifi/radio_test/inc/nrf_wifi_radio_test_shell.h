/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

/* @file
 * @brief nRF Wi-Fi radio-test mode shell module
 */

#include <zephyr.h>
#include <stdio.h>
#include <stdlib.h>
#include <shell/shell.h>
#include <init.h>
#include <ctype.h>
#include <host_rpu_sys_if.h>
#include <fmac_structs.h>

struct nrf_wifi_ctx_zep {
	struct wifi_nrf_fmac_priv *fmac_priv;
	struct rpu_conf_params conf_params;
};
