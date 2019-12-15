/// @file
/// @brief Contains definition of <b>"UNSUBACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt311/MsgId.h"
#include "mqtt311/field/FieldBase.h"
#include "mqtt311/field/PacketId.h"
#include "mqtt311/options/DefaultOptions.h"

namespace mqtt311
{

namespace message
{

/// @brief Fields of @ref Unsuback.
/// @tparam TOpt Extra options
/// @see @ref Unsuback
/// @headerfile "mqtt311/message/Unsuback.h"
template <typename TOpt = mqtt311::options::DefaultOptions>
struct UnsubackFields
{
    /// @brief Definition of <b>"Packet ID"</b> field.
    using PacketId =
        mqtt311::field::PacketId<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId
    >;
};

/// @brief Definition of <b>"UNSUBACK"</b> message class.
/// @details
///     See @ref UnsubackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt311/message/Unsuback.h"
template <typename TMsgBase, typename TOpt = mqtt311::options::DefaultOptions>
class Unsuback : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Unsuback,
        comms::option::def::StaticNumIdImpl<mqtt311::MsgId_Unsuback>,
        comms::option::def::FieldsImpl<typename UnsubackFields<TOpt>::All>,
        comms::option::def::MsgType<Unsuback<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Unsuback,
            comms::option::def::StaticNumIdImpl<mqtt311::MsgId_Unsuback>,
            comms::option::def::FieldsImpl<typename UnsubackFields<TOpt>::All>,
            comms::option::def::MsgType<Unsuback<TMsgBase, TOpt> >,
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
    ///         for @ref UnsubackFields::PacketId field.
    COMMS_MSG_FIELDS_NAMES(
        packetId
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "UNSUBACK";
    }
    
    /// @brief Updated validity check
    bool doValid() const
    {
        return Base::doValid() && Base::flagsZeroed();
    }
    
    
};

} // namespace message

} // namespace mqtt311


