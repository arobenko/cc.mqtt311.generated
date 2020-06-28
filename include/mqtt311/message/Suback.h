// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"SUBACK"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt311/MsgId.h"
#include "mqtt311/field/FieldBase.h"
#include "mqtt311/field/PacketId.h"
#include "mqtt311/message/SubackCommon.h"
#include "mqtt311/options/DefaultOptions.h"

namespace mqtt311
{

namespace message
{

/// @brief Fields of @ref Suback.
/// @tparam TOpt Extra options
/// @see @ref Suback
/// @headerfile "mqtt311/message/Suback.h"
template <typename TOpt = mqtt311::options::DefaultOptions>
struct SubackFields
{
    /// @brief Definition of <b>"Packet ID"</b> field.
    using PacketId =
        mqtt311::field::PacketId<
            TOpt
        >;
    
    /// @brief Scope for all the member fields of
    ///     @ref List list.
    struct ListMembers
    {
        /// @brief Definition of <b>"Return Code"</b> field.
        /// @see @ref mqtt311::message::SubackFieldsCommon::ListMembersCommon::ReturnCodeVal
        class ReturnCode : public
            comms::field::EnumValue<
                mqtt311::field::FieldBase<>,
                mqtt311::message::SubackFieldsCommon::ListMembersCommon::ReturnCodeVal,
                comms::option::def::ValidNumValueRange<0, 2>,
                comms::option::def::ValidNumValue<128>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    mqtt311::field::FieldBase<>,
                    mqtt311::message::SubackFieldsCommon::ListMembersCommon::ReturnCodeVal,
                    comms::option::def::ValidNumValueRange<0, 2>,
                    comms::option::def::ValidNumValue<128>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return mqtt311::message::SubackFieldsCommon::ListMembersCommon::ReturnCodeCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return mqtt311::message::SubackFieldsCommon::ListMembersCommon::ReturnCodeCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"List"</b> field.
    struct List : public
        comms::field::ArrayList<
            mqtt311::field::FieldBase<>,
            typename ListMembers::ReturnCode,
            typename TOpt::message::SubackFields::List
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt311::message::SubackFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId,
        List
    >;
};

/// @brief Definition of <b>"SUBACK"</b> message class.
/// @details
///     See @ref SubackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt311/message/Suback.h"
template <typename TMsgBase, typename TOpt = mqtt311::options::DefaultOptions>
class Suback : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Suback,
        comms::option::def::StaticNumIdImpl<mqtt311::MsgId_Suback>,
        comms::option::def::FieldsImpl<typename SubackFields<TOpt>::All>,
        comms::option::def::MsgType<Suback<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Suback,
            comms::option::def::StaticNumIdImpl<mqtt311::MsgId_Suback>,
            comms::option::def::FieldsImpl<typename SubackFields<TOpt>::All>,
            comms::option::def::MsgType<Suback<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_packetId type and @b field_packetId() access fuction
    ///         for @ref SubackFields::PacketId field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref SubackFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        packetId,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return mqtt311::message::SubackCommon::name();
    }
    
    /// @brief Updated validity check
    bool doValid() const
    {
        if ((!Base::doValid()) || (!Base::flagsZeroed())) {
            return false;
        }
        
        return !field_list().value().empty();
    }
    
    
};

} // namespace message

} // namespace mqtt311


