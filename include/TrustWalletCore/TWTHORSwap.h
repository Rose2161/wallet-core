// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
#pragma once

#include "TWBase.h"
#include "TWData.h"
#include "TWString.h"

TW_EXTERN_C_BEGIN

struct TWTHORSwap;

/// Build a THORSwap transaction input. Input is SwapInput protobuf, return is SwapOutput.
extern TWData *_Nonnull TWTHORSwapSignSwap(TWData *_Nonnull input);

TW_EXTERN_C_END
