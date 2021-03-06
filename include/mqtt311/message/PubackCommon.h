// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt311::message::Puback message and its fields.

#pragma once

#include "mqtt311/field/PacketIdCommon.h"

namespace mqtt311
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt311::message::Puback message.
/// @see mqtt311::message::PubackFields
struct PubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::PubackFields::PacketId field.
    using PacketIdCommon = mqtt311::field::PacketIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqtt311::message::Puback message.
/// @see mqtt311::message::Puback
struct PubackCommon
{
    /// @brief Name of the @ref mqtt311::message::Puback message.
    static const char* name()
    {
        return "PUBACK";
    }
    
};

} // namespace message

} // namespace mqtt311


