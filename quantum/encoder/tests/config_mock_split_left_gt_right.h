// Copyright 2022 Nick Brassel (@tzarc)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
#include "config_encoder_common.h"

#define MATRIX_ROWS 1
#define MATRIX_COLS 1

/* Here, "pins" from 0 to 31 are allowed. */
#define ENCODERS_PAD_A \
    { 0, 2, 4 }
#define ENCODERS_PAD_B \
    { 1, 3, 5 }
#define ENCODERS_PAD_A_RIGHT \
    { 6, 8 }
#define ENCODERS_PAD_B_RIGHT \
    { 7, 9 }

#ifdef __cplusplus
extern "C" {
#endif

#include "mock_split.h"

#ifdef __cplusplus
};
#endif
