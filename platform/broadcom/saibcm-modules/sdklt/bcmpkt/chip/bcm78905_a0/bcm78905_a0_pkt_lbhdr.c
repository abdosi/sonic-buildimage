/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: INTERNAL/regs/xgs/generate-pmd.pl
 *
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 *
 * This file provides LBHDR access functions for BCM78905_A0.
 *
 ******************************************************************************/

#include <sal/sal_types.h>
#include <bcmpkt/bcmpkt_lbhdr_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))
/*******************************************************************************
 * SWFORMAT:  LBHDR
 * BLOCKS:
 * SIZE:     128
 ******************************************************************************/
static void bcmpkt_lbhdr_start_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 30, 2, val);
}

static uint32_t bcmpkt_lbhdr_start_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 30, 2);
    return val;
}

static void bcmpkt_lbhdr_header_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 24, 6, val);
}

static uint32_t bcmpkt_lbhdr_header_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 24, 6);
    return val;
}

static void bcmpkt_lbhdr_pkt_profile_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 16, 3, val);
}

static uint32_t bcmpkt_lbhdr_pkt_profile_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 16, 3);
    return val;
}

static void bcmpkt_lbhdr_visibility_pkt_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 13, 1, val);
}

static uint32_t bcmpkt_lbhdr_visibility_pkt_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 13, 1);
    return val;
}

static void bcmpkt_lbhdr_pp_port_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 21, 9, val);
}

static uint32_t bcmpkt_lbhdr_pp_port_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 21, 9);
    return val;
}

static void bcmpkt_lbhdr_routed_pkt_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 15, 1, val);
}

static uint32_t bcmpkt_lbhdr_routed_pkt_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 15, 1);
    return val;
}

static void bcmpkt_lbhdr_vrf_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 2, 13, val);
}

static uint32_t bcmpkt_lbhdr_vrf_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 2, 13);
    return val;
}

static void bcmpkt_lbhdr_vrf_valid_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 14, 1, val);
}

static uint32_t bcmpkt_lbhdr_vrf_valid_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 14, 1);
    return val;
}

static void bcmpkt_lbhdr_qos_field_valid_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 19, 1, val);
}

static uint32_t bcmpkt_lbhdr_qos_field_valid_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 19, 1);
    return val;
}

static void bcmpkt_lbhdr_opaque_object_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 8, 4, val);
}

static uint32_t bcmpkt_lbhdr_opaque_object_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 8, 4);
    return val;
}

static void bcmpkt_lbhdr_qos_field_eth_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 12, 8, val);
}

static uint32_t bcmpkt_lbhdr_qos_field_eth_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 12, 8);
    return val;
}

static void bcmpkt_lbhdr_int_pri_eth_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 12, 4, val);
}

static uint32_t bcmpkt_lbhdr_int_pri_eth_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 12, 4);
    return val;
}

static void bcmpkt_lbhdr_int_cn_eth_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 16, 2, val);
}

static uint32_t bcmpkt_lbhdr_int_cn_eth_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 16, 2);
    return val;
}

static void bcmpkt_lbhdr_cng_eth_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 18, 2, val);
}

static uint32_t bcmpkt_lbhdr_cng_eth_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 18, 2);
    return val;
}

static uint32_t bcmpkt_lbhdr_i_size_get(uint32_t *data, uint32_t **addr)
{
    return 4;
}


const bcmpkt_lbhdr_fget_t bcm78905_a0_lbhdr_fget = {
    {
        bcmpkt_lbhdr_start_get,
        bcmpkt_lbhdr_header_type_get,
        NULL,
        bcmpkt_lbhdr_pkt_profile_get,
        bcmpkt_lbhdr_visibility_pkt_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_lbhdr_pp_port_get,
        bcmpkt_lbhdr_routed_pkt_get,
        bcmpkt_lbhdr_vrf_get,
        bcmpkt_lbhdr_vrf_valid_get,
        bcmpkt_lbhdr_qos_field_valid_get,
        bcmpkt_lbhdr_opaque_object_get,
        bcmpkt_lbhdr_qos_field_eth_get,
        bcmpkt_lbhdr_int_pri_eth_get,
        bcmpkt_lbhdr_int_cn_eth_get,
        bcmpkt_lbhdr_cng_eth_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_lbhdr_fset_t bcm78905_a0_lbhdr_fset = {
    {
        bcmpkt_lbhdr_start_set,
        bcmpkt_lbhdr_header_type_set,
        NULL,
        bcmpkt_lbhdr_pkt_profile_set,
        bcmpkt_lbhdr_visibility_pkt_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_lbhdr_pp_port_set,
        bcmpkt_lbhdr_routed_pkt_set,
        bcmpkt_lbhdr_vrf_set,
        bcmpkt_lbhdr_vrf_valid_set,
        bcmpkt_lbhdr_qos_field_valid_set,
        bcmpkt_lbhdr_opaque_object_set,
        bcmpkt_lbhdr_qos_field_eth_set,
        bcmpkt_lbhdr_int_pri_eth_set,
        bcmpkt_lbhdr_int_cn_eth_set,
        bcmpkt_lbhdr_cng_eth_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_lbhdr_figet_t bcm78905_a0_lbhdr_figet = {
    {
        bcmpkt_lbhdr_i_size_get
    }
};

static shr_enum_map_t bcm78905_a0_lbhdr_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm78905_a0_lbhdr_view_infos[BCMPKT_LBHDR_FID_COUNT] = {
     -1, -1, -2, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1,
     -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2,
};


void bcm78905_a0_lbhdr_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm78905_a0_lbhdr_view_infos;
    info->view_types = bcm78905_a0_lbhdr_view_types;
    info->view_type_get = NULL;
}
