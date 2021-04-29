// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of all client input messages bundle.

#pragma once

#include <tuple>
#include "mqtt311/message/Connack.h"
#include "mqtt311/message/Pingresp.h"
#include "mqtt311/message/Puback.h"
#include "mqtt311/message/Pubcomp.h"
#include "mqtt311/message/Publish.h"
#include "mqtt311/message/Pubrec.h"
#include "mqtt311/message/Pubrel.h"
#include "mqtt311/message/Suback.h"
#include "mqtt311/message/Unsuback.h"
#include "mqtt311/options/DefaultOptions.h"

namespace mqtt311
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = mqtt311::options::DefaultOptions>
using ClientInputMessages =
    std::tuple<
        mqtt311::message::Connack<TBase, TOpt>,
        mqtt311::message::Publish<TBase, TOpt>,
        mqtt311::message::Puback<TBase, TOpt>,
        mqtt311::message::Pubrec<TBase, TOpt>,
        mqtt311::message::Pubrel<TBase, TOpt>,
        mqtt311::message::Pubcomp<TBase, TOpt>,
        mqtt311::message::Suback<TBase, TOpt>,
        mqtt311::message::Unsuback<TBase, TOpt>,
        mqtt311::message::Pingresp<TBase, TOpt>
    >;

} // namespace input

} // namespace mqtt311


