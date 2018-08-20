/// @file
/// @brief Contains definition of <b>"PUBREL"<\b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt311/DefaultOptions.h"
#include "mqtt311/MsgId.h"
#include "mqtt311/field/FieldBase.h"
#include "mqtt311/field/PacketId.h"

namespace mqtt311
{

namespace message
{

/// @brief Fields of @ref Pubrel.
/// @tparam TOpt Extra options
/// @see @ref Pubrel
/// @headerfile "mqtt311/message/Pubrel.h"
template <typename TOpt = mqtt311::DefaultOptions>
struct PubrelFields
{
    /// @brief Definition of <b>"Packet ID"<\b> field.
    using PacketId =
        mqtt311::field::PacketId<
           TOpt,
           typename TOpt::message::PubrelFields::PacketId
       >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId
    >;
};

/// @brief Definition of <b>"PUBREL"<\b> message class.
/// @details
///     See @ref PubrelFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt311/message/Pubrel.h"
template <typename TMsgBase, typename TOpt = mqtt311::DefaultOptions>
class Pubrel : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Pubrel,
        comms::option::StaticNumIdImpl<mqtt311::MsgId_Pubrel>,
        comms::option::FieldsImpl<typename PubrelFields<TOpt>::All>,
        comms::option::MsgType<Pubrel<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Pubrel,
            comms::option::StaticNumIdImpl<mqtt311::MsgId_Pubrel>,
            comms::option::FieldsImpl<typename PubrelFields<TOpt>::All>,
            comms::option::MsgType<Pubrel<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_packetId() for @ref PubrelFields::PacketId field.
    COMMS_MSG_FIELDS_ACCESS(
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
        return "PUBREL";
    }
    
    /// @brief Updated validity check
    bool doValid() const
    {
        return Base::doValid() && Base::flagsZeroed();
    }
    
    
};

} // namespace message

} // namespace mqtt311

