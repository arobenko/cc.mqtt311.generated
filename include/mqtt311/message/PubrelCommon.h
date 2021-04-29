// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt311::message::Pubrel message and its fields.

#pragma once

#include "mqtt311/field/PacketIdCommon.h"

namespace mqtt311
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt311::message::Pubrel message.
/// @see mqtt311::message::PubrelFields
struct PubrelFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::PubrelFields::PacketId field.
    using PacketIdCommon = mqtt311::field::PacketIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqtt311::message::Pubrel message.
/// @see mqtt311::message::Pubrel
struct PubrelCommon
{
    /// @brief Name of the @ref mqtt311::message::Pubrel message.
    static const char* name()
    {
        return "PUBREL";
    }
    
};

} // namespace message

} // namespace mqtt311


