//
// Copyright 2013 (C). Alex Robenko. All rights reserved.
//

// This file is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.


#pragma once

namespace embxx
{

namespace device
{

namespace op_category
{

/// @ingroup device
/// @brief Sequential read/write operation category tag class.
/// @details This is empty struct that is used to indicate that device uses
///          sequential read and write operations, i.e. cannot execute them
///          in parallel.
/// @headerfile embxx/device/op_category.h
struct SequentialReadWrite {};

/// @ingroup device
/// @brief Parallel read/write operation category tag class.
/// @details This is empty struct that is used to indicate that device may
///          execute parallel (independent) read and write operations at the
///          same time.
/// @headerfile embxx/device/op_category.h
struct ParallelReadWrite {};

}  // namespace op_category

}  // namespace device

}  // namespace embxx


