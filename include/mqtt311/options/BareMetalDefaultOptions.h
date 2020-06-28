// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of protocol default options for bare-metal application
///    where usage of dynamic memory allocation is disabled.

#pragma once

#ifndef DEFAULT_SEQ_FIXED_STORAGE_SIZE
/// @brief Define default fixed size for various sequence fields
/// @details May be defined during compile time to change the default value.
#define DEFAULT_SEQ_FIXED_STORAGE_SIZE 32
#endif

#include "mqtt311/options/DefaultOptions.h"

namespace mqtt311
{

namespace options
{

/// @brief Default options for bare-metal application where usage of dynamic
///    memory allocation is diabled.
/// @tparam TBase Options to use as a basis.
template <typename TBase = mqtt311::options::DefaultOptions>
struct BareMetalDefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field : public TBase::field
    {
        /// @brief Extra options for @ref
        ///     mqtt311::field::BinData field.
        using BinData = 
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::BinData
            >;
        /// @brief Extra options for @ref
        ///     mqtt311::field::ProtocolName field.
        using ProtocolName = 
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::ProtocolName
            >;
        /// @brief Extra options for @ref
        ///     mqtt311::field::String field.
        using String = 
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::String
            >;
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for
        ///     @ref mqtt311::message::Connack message.
        using Connack = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt311::message::Connect message.
        using Connect = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt311::message::Disconnect message.
        using Disconnect = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt311::message::Pingreq message.
        using Pingreq = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt311::message::Pingresp message.
        using Pingresp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref mqtt311::message::Publish message.
        struct PublishFields : public TBase::message::PublishFields
        {
            /// @brief Extra options for @ref
            ///     mqtt311::message::PublishFields::Payload
            ///     field.
            using Payload = 
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::PublishFields::Payload
                >;
        }; // struct PublishFields
        
        
        /// @brief Extra options for fields of
        ///     @ref mqtt311::message::Suback message.
        struct SubackFields : public TBase::message::SubackFields
        {
            /// @brief Extra options for @ref
            ///     mqtt311::message::SubackFields::List
            ///     field.
            using List = 
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::SubackFields::List
                >;
        }; // struct SubackFields
        
        /// @brief Extra options for
        ///     @ref mqtt311::message::Suback message.
        using Suback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref mqtt311::message::Subscribe message.
        struct SubscribeFields : public TBase::message::SubscribeFields
        {
            /// @brief Extra options for @ref
            ///     mqtt311::message::SubscribeFields::List
            ///     field.
            using List = 
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::SubscribeFields::List
                >;
        }; // struct SubscribeFields
        
        /// @brief Extra options for
        ///     @ref mqtt311::message::Subscribe message.
        using Subscribe = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqtt311::message::Unsuback message.
        using Unsuback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref mqtt311::message::Unsubscribe message.
        struct UnsubscribeFields : public TBase::message::UnsubscribeFields
        {
            /// @brief Extra options for @ref
            ///     mqtt311::message::UnsubscribeFields::List
            ///     field.
            using List = 
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::UnsubscribeFields::List
                >;
        }; // struct UnsubscribeFields
        
        /// @brief Extra options for
        ///     @ref mqtt311::message::Unsubscribe message.
        using Unsubscribe = comms::option::app::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for Layers of
        ///     @ref mqtt311::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     mqtt311::frame::FrameLayers::Data layer.
            using Data = std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>,
                typename TBase::frame::FrameLayers::Data
            >;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

/// @brief Alias to @ref BareMetalDefaultOptionsT with default template parameter.
using BareMetalDefaultOptions = BareMetalDefaultOptionsT<>;

} // namespace options

} // namespace mqtt311


