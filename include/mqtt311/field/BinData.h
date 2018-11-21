/// @file
/// @brief Contains definition of <b>"BinData"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqtt311/DefaultOptions.h"
#include "mqtt311/field/FieldBase.h"
#include "mqtt311/field/Length.h"

namespace mqtt311
{

namespace field
{

/// @brief Definition of <b>"BinData"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt311::DefaultOptions, typename... TExtraOpts>
struct BinData : public
    comms::field::ArrayList<
        mqtt311::field::FieldBase<>,
        std::uint8_t,
        typename TOpt::field::BinData,
        TExtraOpts...,
        comms::option::SequenceSerLengthFieldPrefix<mqtt311::field::Length<TOpt> >
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "BinData";
    }
    
};

} // namespace field

} // namespace mqtt311


