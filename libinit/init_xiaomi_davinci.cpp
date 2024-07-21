/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

#define FINGERPRINT "Xiaomi/davinci/davinci:11/RKQ1.200826.002/V12.5.2.0.RFJCNXM:user/release-keys"

static const variant_info_t davinci_global_info = {
    .hwc_value = "GLOBAL",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "davinci",
    .marketname = "",
    .model = "Mi 9T",
    .build_fingerprint = FINGERPRINT,

    .nfc = true,
};

static const variant_info_t davinciin_info = {
    .hwc_value = "INDIA",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "davinciin",
    .marketname = "",
    .model = "Redmi K20",
    .build_fingerprint = FINGERPRINT,

    .nfc = false,
};

static const variant_info_t davinci_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "davinci",
    .marketname = "",
    .model = "Redmi K20",
    .build_fingerprint = FINGERPRINT,

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    davinci_global_info,
    davinciin_info,
    davinci_info,
};

void vendor_load_properties() {
    set_dalvik_heap();
    search_variant(variants);
}
