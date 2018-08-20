/// @file
/// @brief Contains definition of <b>"Protocol Name"<\b> field.

#pragma once

#include "comms/field/String.h"
#include "comms/options.h"
#include "mqtt311/DefaultOptions.h"
#include "mqtt311/field/FieldBase.h"
#include "mqtt311/field/Length.h"

namespace mqtt311
{

namespace field
{

/// @brief Definition of <b>"Protocol Name"<\b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt311::DefaultOptions, typename... TExtraOpts>
class ProtocolName : public
    comms::field::String<
        mqtt311::field::FieldBase<>,
        typename TOpt::field::ProtocolName,
        TExtraOpts...,
        comms::option::SequenceSerLengthFieldPrefix<mqtt311::field::Length<TOpt> >
    >
{
    using Base = 
        comms::field::String<
            mqtt311::field::FieldBase<>,
            typename TOpt::field::ProtocolName,
            TExtraOpts...,
            comms::option::SequenceSerLengthFieldPrefix<mqtt311::field::Length<TOpt> >
        >;
public:
    /// @brief Default constructor
    ProtocolName()
    {
        static const char Str[] = "MQTT";
        static const std::size_t StrSize = std::extent<decltype(Str)>::value;
        Base::value() = typename Base::ValueType(&Str[0], StrSize - 1);
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "Protocol Name";
    }
    
    /// @brief Custom validity check
    bool valid() const
    {
        return Base::value() == ProtocolName().value();
    }
    
};

} // namespace field

} // namespace mqtt311


