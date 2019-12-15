/// @file
/// @brief Contains definition of <b>"SUBSCRIBE"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/options.h"
#include "mqtt311/MsgId.h"
#include "mqtt311/field/FieldBase.h"
#include "mqtt311/field/PacketId.h"
#include "mqtt311/field/Qos.h"
#include "mqtt311/field/Topic.h"
#include "mqtt311/options/DefaultOptions.h"

namespace mqtt311
{

namespace message
{

/// @brief Fields of @ref Subscribe.
/// @tparam TOpt Extra options
/// @see @ref Subscribe
/// @headerfile "mqtt311/message/Subscribe.h"
template <typename TOpt = mqtt311::options::DefaultOptions>
struct SubscribeFields
{
    /// @brief Definition of <b>"Packet ID"</b> field.
    using PacketId =
        mqtt311::field::PacketId<
            TOpt
        >;
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"Topic"</b> field.
            using Topic =
                mqtt311::field::Topic<
                    TOpt
                >;
            
            /// @brief Definition of <b>"Qos"</b> field.
            using Qos =
                mqtt311::field::Qos<
                    TOpt
                >;
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Topic,
                   Qos
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                mqtt311::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    mqtt311::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b Field_topic @b field_topic() -
            ///         for ElementMembers::Topic member field.
            ///     @li @b Field_qos @b field_qos() -
            ///         for ElementMembers::Qos member field.
            COMMS_FIELD_MEMBERS_NAMES(
                topic,
                qos
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"List"</b> field.
    struct List : public
        comms::field::ArrayList<
            mqtt311::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::SubscribeFields::List
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "List";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId,
        List
    >;
};

/// @brief Definition of <b>"SUBSCRIBE"</b> message class.
/// @details
///     See @ref SubscribeFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt311/message/Subscribe.h"
template <typename TMsgBase, typename TOpt = mqtt311::options::DefaultOptions>
class Subscribe : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Subscribe,
        comms::option::def::StaticNumIdImpl<mqtt311::MsgId_Subscribe>,
        comms::option::def::FieldsImpl<typename SubscribeFields<TOpt>::All>,
        comms::option::def::MsgType<Subscribe<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Subscribe,
            comms::option::def::StaticNumIdImpl<mqtt311::MsgId_Subscribe>,
            comms::option::def::FieldsImpl<typename SubscribeFields<TOpt>::All>,
            comms::option::def::MsgType<Subscribe<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_packetId type and @b field_packetId() fuction
    ///         for @ref SubscribeFields::PacketId field.
    ///     @li @b Field_list type and @b field_list() fuction
    ///         for @ref SubscribeFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        packetId,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    
    
    /// @brief Default constructor
    Subscribe()
    {
        auto& qosField = Base::transportField_flags().field_qos();
        using QosFieldType = typename std::decay<decltype(qosField)>::type;
        using QosValueType = typename QosFieldType::ValueType;
        
        qosField.value() = QosValueType::AtLeastOnceDelivery;
    }
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "SUBSCRIBE";
    }
    
    /// @brief Custom validity check
    bool doValid() const
    {
        if (!Base::doValid()) {
            return false;
        }
        
        auto& qosField = Base::transportField_flags().field_qos();
        using QosFieldType = typename std::decay<decltype(qosField)>::type;
        using QosValueType = typename QosFieldType::ValueType;
        
        if ((Base::transportField_flags().field_retain().value() != 0U) ||
            (qosField.value() != QosValueType::AtLeastOnceDelivery) ||
            (Base::transportField_flags().field_dup().value() != 0U)) {
            return false;
        }
        
        return !field_list().value().empty();
    }
    
    
};

} // namespace message

} // namespace mqtt311


