// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"Topic"</b> field.

#pragma once

#include "comms/options.h"
#include "mqtt311/field/FieldBase.h"
#include "mqtt311/field/String.h"
#include "mqtt311/field/TopicCommon.h"
#include "mqtt311/options/DefaultOptions.h"

namespace mqtt311
{

namespace field
{

/// @brief Definition of <b>"Topic"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt311::options::DefaultOptions, typename... TExtraOpts>
struct Topic : public
    mqtt311::field::String<
        TOpt,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt311::field::TopicCommon::name();
    }
    
};

} // namespace field

} // namespace mqtt311


