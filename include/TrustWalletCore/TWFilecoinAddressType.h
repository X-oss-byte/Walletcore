// Copyright © 2017-2023 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "TWBase.h"

TW_EXTERN_C_BEGIN

/// Filecoin address type.
TW_EXPORT_ENUM(uint32_t)
enum TWFilecoinAddressType {
    TWFilecoinAddressTypeDefault = 0, // default
    TWFilecoinAddressTypeDelegated = 1,
};

TW_EXTERN_C_END
