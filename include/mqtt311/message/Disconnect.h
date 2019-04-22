/// @file
/// @brief Contains definition of <b>"DISCONNECT"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "mqtt311/MsgId.h"
#include "mqtt311/options/DefaultOptions.h"

namespace mqtt311
{

namespace message
{

/// @brief Fields of @ref Disconnect.
/// @tparam TOpt Extra options
/// @see @ref Disconnect
/// @headerfile "mqtt311/message/Disconnect.h"
template <typename TOpt = mqtt311::options::DefaultOptions>
struct DisconnectFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"DISCONNECT"</b> message class.
/// @details
///     See @ref DisconnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt311/message/Disconnect.h"
template <typename TMsgBase, typename TOpt = mqtt311::options::DefaultOptions>
class Disconnect : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Disconnect,
        comms::option::StaticNumIdImpl<mqtt311::MsgId_Disconnect>,
        comms::option::FieldsImpl<typename DisconnectFields<TOpt>::All>,
        comms::option::MsgType<Disconnect<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Disconnect,
            comms::option::StaticNumIdImpl<mqtt311::MsgId_Disconnect>,
            comms::option::FieldsImpl<typename DisconnectFields<TOpt>::All>,
            comms::option::MsgType<Disconnect<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 0U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "DISCONNECT";
    }
    
    
};

} // namespace message

} // namespace mqtt311


