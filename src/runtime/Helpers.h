/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

/**
 * @file runtime/Utils.h
 *
 * Reusable helper functions for binary files like Train.cpp. For functions
 * that aren't generic enough to go in `common`, `libraries/common`, etc.
 */

#pragma once

#include <unordered_set>

#include "common/Defines.h"

namespace w2l {

// Sample indices for the `--pcttraineval` flag.
std::unordered_set<int64_t>
getTrainEvalIds(int64_t dsSize, double pctTrainEval, int64_t seed);

} // namespace w2l
