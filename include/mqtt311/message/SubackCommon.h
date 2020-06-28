// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt311::message::Suback message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "mqtt311/field/PacketIdCommon.h"

namespace mqtt311
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt311::message::Suback message.
/// @see mqtt311::message::SubackFields
struct SubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::SubackFields::PacketId field.
    using PacketIdCommon = mqtt311::field::PacketIdCommon;
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqtt311::message::SubackFields::List list.
    struct ListMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref mqtt311::message::SubackFields::ListMembers::ReturnCode field.
        struct ReturnCodeCommon
        {
            /// @brief Values enumerator for
            ///     @ref mqtt311::message::SubackFields::ListMembers::ReturnCode field.
            enum class ValueType : std::uint8_t
            {
                Qos0 = 0, ///< value <b>Max QoS 0</b>.
                Qos1 = 1, ///< value <b>Max QoS 1</b>.
                Qos2 = 2, ///< value <b>Max QoS 2</b>.
                Failure = 128, ///< value @b Failure
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 128, ///< Last defined value.
                ValuesLimit = 129, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref mqtt311::message::SubackFields::ListMembers::ReturnCode field.
            static const char* name()
            {
                return "Return Code";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                using NameInfo = std::pair<ValueType, const char*>;
                static const NameInfo Map[] = {
                    std::make_pair(ValueType::Qos0, "Max QoS 0"),
                    std::make_pair(ValueType::Qos1, "Max QoS 1"),
                    std::make_pair(ValueType::Qos2, "Max QoS 2"),
                    std::make_pair(ValueType::Failure, "Failure")
                };
                
                auto iter = std::lower_bound(
                    std::begin(Map), std::end(Map), val,
                    [](const NameInfo& info, ValueType v) -> bool
                    {
                        return info.first < v;
                    });
                
                if ((iter == std::end(Map)) || (iter->first != val)) {
                    return nullptr;
                }
                
                return iter->second;
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref mqtt311::message::SubackFields::ListMembers::ReturnCode field.
        using ReturnCodeVal = ReturnCodeCommon::ValueType;
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt311::message::SubackFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref mqtt311::message::SubackFields::List field.
        static const char* name()
        {
            return "List";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref mqtt311::message::Suback message.
/// @see mqtt311::message::Suback
struct SubackCommon
{
    /// @brief Name of the @ref mqtt311::message::Suback message.
    static const char* name()
    {
        return "SUBACK";
    }
    
};

} // namespace message

} // namespace mqtt311


