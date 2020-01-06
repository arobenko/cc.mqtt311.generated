// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains definition of <b>"BinData"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqtt311/field/BinDataCommon.h"
#include "mqtt311/field/FieldBase.h"
#include "mqtt311/field/Length.h"
#include "mqtt311/options/DefaultOptions.h"

namespace mqtt311
{

namespace field
{

/// @brief Definition of <b>"BinData"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt311::options::DefaultOptions, typename... TExtraOpts>
struct BinData : public
    comms::field::ArrayList<
        mqtt311::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::BinData,
        comms::option::def::SequenceSerLengthFieldPrefix<mqtt311::field::Length<TOpt> >
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt311::field::BinDataCommon::name();
    }
    
};

} // namespace field

} // namespace mqtt311


