// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt311::message::Pubrec message and its fields.

#pragma once

#include "mqtt311/field/PacketIdCommon.h"

namespace mqtt311
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt311::message::Pubrec message.
/// @see mqtt311::message::PubrecFields
struct PubrecFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::PubrecFields::PacketId field.
    using PacketIdCommon = mqtt311::field::PacketIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqtt311::message::Pubrec message.
/// @see mqtt311::message::Pubrec
struct PubrecCommon
{
    /// @brief Name of the @ref mqtt311::message::Pubrec message.
    static const char* name()
    {
        return "PUBREC";
    }
    
};

} // namespace message

} // namespace mqtt311


