/// @file
/// @brief Contains definition of all messages bundle.

#pragma once

#include <tuple>
#include "mqtt311/DefaultOptions.h"
#include "mqtt311/message/Connack.h"
#include "mqtt311/message/Connect.h"
#include "mqtt311/message/Disconnect.h"
#include "mqtt311/message/Pingreq.h"
#include "mqtt311/message/Pingresp.h"
#include "mqtt311/message/Puback.h"
#include "mqtt311/message/Pubcomp.h"
#include "mqtt311/message/Publish.h"
#include "mqtt311/message/Pubrec.h"
#include "mqtt311/message/Pubrel.h"
#include "mqtt311/message/Suback.h"
#include "mqtt311/message/Subscribe.h"
#include "mqtt311/message/Unsuback.h"
#include "mqtt311/message/Unsubscribe.h"

namespace mqtt311
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = mqtt311::DefaultOptions>
using AllMessages =
    std::tuple<
        mqtt311::message::Connect<TBase, TOpt>,
        mqtt311::message::Connack<TBase, TOpt>,
        mqtt311::message::Publish<TBase, TOpt>,
        mqtt311::message::Puback<TBase, TOpt>,
        mqtt311::message::Pubrec<TBase, TOpt>,
        mqtt311::message::Pubrel<TBase, TOpt>,
        mqtt311::message::Pubcomp<TBase, TOpt>,
        mqtt311::message::Subscribe<TBase, TOpt>,
        mqtt311::message::Suback<TBase, TOpt>,
        mqtt311::message::Unsubscribe<TBase, TOpt>,
        mqtt311::message::Unsuback<TBase, TOpt>,
        mqtt311::message::Pingreq<TBase, TOpt>,
        mqtt311::message::Pingresp<TBase, TOpt>,
        mqtt311::message::Disconnect<TBase, TOpt>
    >;

} // namespace mqtt311


