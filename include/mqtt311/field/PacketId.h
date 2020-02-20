// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains definition of <b>"Packet ID"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt311/field/FieldBase.h"
#include "mqtt311/field/PacketIdCommon.h"
#include "mqtt311/options/DefaultOptions.h"

namespace mqtt311
{

namespace field
{

/// @brief Definition of <b>"Packet ID"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt311::options::DefaultOptions, typename... TExtraOpts>
struct PacketId : public
    comms::field::IntValue<
        mqtt311::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt311::field::PacketIdCommon::name();
    }
    
};

} // namespace field

} // namespace mqtt311


