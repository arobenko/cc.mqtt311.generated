// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt311::message::Pubcomp message and its fields.

#pragma once

#include "mqtt311/field/PacketIdCommon.h"

namespace mqtt311
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt311::message::Pubcomp message.
/// @see mqtt311::message::PubcompFields
struct PubcompFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::PubcompFields::PacketId field.
    using PacketIdCommon = mqtt311::field::PacketIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqtt311::message::Pubcomp message.
/// @see mqtt311::message::Pubcomp
struct PubcompCommon
{
    /// @brief Name of the @ref mqtt311::message::Pubcomp message.
    static const char* name()
    {
        return "PUBCOMP";
    }
    
};

} // namespace message

} // namespace mqtt311


