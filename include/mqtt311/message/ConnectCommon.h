// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt311::message::Connect message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "mqtt311/field/BinDataCommon.h"
#include "mqtt311/field/ProtocolNameCommon.h"
#include "mqtt311/field/QosCommon.h"
#include "mqtt311/field/StringCommon.h"

namespace mqtt311
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt311::message::Connect message.
/// @see mqtt311::message::ConnectFields
struct ConnectFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::ConnectFields::ProtocolName field.
    using ProtocolNameCommon = mqtt311::field::ProtocolNameCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::ConnectFields::ProtocolLevel field.
    struct ProtocolLevelCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt311::message::ConnectFields::ProtocolLevel field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref mqtt311::message::ConnectFields::ProtocolLevel field.
        static const char* name()
        {
            return "Protocol Level";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqtt311::message::ConnectFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref mqtt311::message::ConnectFields::FlagsMembers::Low field.
        struct LowCommon
        {
            /// @brief Name of the @ref mqtt311::message::ConnectFields::FlagsMembers::Low field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref mqtt311::message::ConnectFields::FlagsMembers::Low field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    nullptr,
                    "Clean Session",
                    "Will Flag"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref mqtt311::message::ConnectFields::FlagsMembers::WillQos field.
        struct WillQosCommon : public mqtt311::field::QosCommon
        {
            /// @brief Name of the @ref mqtt311::message::ConnectFields::FlagsMembers::WillQos field.
            static const char* name()
            {
                return "Will QoS";
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref mqtt311::message::ConnectFields::FlagsMembers::High field.
        struct HighCommon
        {
            /// @brief Name of the @ref mqtt311::message::ConnectFields::FlagsMembers::High field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref mqtt311::message::ConnectFields::FlagsMembers::High field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "Will Retain",
                    "Password Flag",
                    "User Name Flag"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt311::message::ConnectFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref mqtt311::message::ConnectFields::Flags field.
        static const char* name()
        {
            return "Connect Flags";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::ConnectFields::KeepAlive field.
    struct KeepAliveCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt311::message::ConnectFields::KeepAlive field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref mqtt311::message::ConnectFields::KeepAlive field.
        static const char* name()
        {
            return "Keep Alive";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref mqtt311::message::ConnectFields::ClientId field.
    struct ClientIdCommon : public mqtt311::field::StringCommon
    {
        /// @brief Name of the @ref mqtt311::message::ConnectFields::ClientId field.
        static const char* name()
        {
            return "Client ID";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqtt311::message::ConnectFields::WillTopic field.
    struct WillTopicMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref mqtt311::message::ConnectFields::WillTopicMembers::WillTopic field.
        struct WillTopicCommon : public mqtt311::field::StringCommon
        {
            /// @brief Name of the @ref mqtt311::message::ConnectFields::WillTopicMembers::WillTopic field.
            static const char* name()
            {
                return "Will Topic";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt311::message::ConnectFields::WillTopic field.
    struct WillTopicCommon
    {
        /// @brief Name of the @ref mqtt311::message::ConnectFields::WillTopic field.
        static const char* name()
        {
            return "Will Topic";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqtt311::message::ConnectFields::WillMessage field.
    struct WillMessageMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref mqtt311::message::ConnectFields::WillMessageMembers::WillMessage field.
        struct WillMessageCommon : public mqtt311::field::BinDataCommon
        {
            /// @brief Name of the @ref mqtt311::message::ConnectFields::WillMessageMembers::WillMessage field.
            static const char* name()
            {
                return "Will Message";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt311::message::ConnectFields::WillMessage field.
    struct WillMessageCommon
    {
        /// @brief Name of the @ref mqtt311::message::ConnectFields::WillMessage field.
        static const char* name()
        {
            return "Will Message";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqtt311::message::ConnectFields::UserName field.
    struct UserNameMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref mqtt311::message::ConnectFields::UserNameMembers::UserName field.
        struct UserNameCommon : public mqtt311::field::StringCommon
        {
            /// @brief Name of the @ref mqtt311::message::ConnectFields::UserNameMembers::UserName field.
            static const char* name()
            {
                return "User Name";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt311::message::ConnectFields::UserName field.
    struct UserNameCommon
    {
        /// @brief Name of the @ref mqtt311::message::ConnectFields::UserName field.
        static const char* name()
        {
            return "User Name";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqtt311::message::ConnectFields::Password field.
    struct PasswordMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref mqtt311::message::ConnectFields::PasswordMembers::Password field.
        struct PasswordCommon : public mqtt311::field::BinDataCommon
        {
            /// @brief Name of the @ref mqtt311::message::ConnectFields::PasswordMembers::Password field.
            static const char* name()
            {
                return "Password";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt311::message::ConnectFields::Password field.
    struct PasswordCommon
    {
        /// @brief Name of the @ref mqtt311::message::ConnectFields::Password field.
        static const char* name()
        {
            return "Password";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref mqtt311::message::Connect message.
/// @see mqtt311::message::Connect
struct ConnectCommon
{
    /// @brief Name of the @ref mqtt311::message::Connect message.
    static const char* name()
    {
        return "CONNECT";
    }
    
};

} // namespace message

} // namespace mqtt311


