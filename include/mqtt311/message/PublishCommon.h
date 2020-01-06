// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt311::message::Publish message and its fields.

#pragma once

#include "mqtt311/field/TopicCommon.h"

namespace mqtt311
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt311::message::Publish message.
/// @see mqtt311::message::PublishFields
struct PublishFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::PublishFields::Topic field.
    using TopicCommon = mqtt311::field::TopicCommon;
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt311::message::PublishFields::PacketId field.
    struct PacketIdCommon
    {
        /// @brief Name of the @ref mqtt311::message::PublishFields::PacketId field.
        static const char* name()
        {
            return "Packet ID";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt311::message::PublishFields::Payload field.
    struct PayloadCommon
    {
        /// @brief Name of the @ref mqtt311::message::PublishFields::Payload field.
        static const char* name()
        {
            return "Payload";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref mqtt311::message::Publish message.
/// @see mqtt311::message::Publish
struct PublishCommon
{
    /// @brief Name of the @ref mqtt311::message::Publish message.
    static const char* name()
    {
        return "PUBLISH";
    }
    
};

} // namespace message

} // namespace mqtt311


