#pragma once

#include <tuple>
#include "cc_plugin/message/Connack.h"
#include "cc_plugin/message/Connect.h"
#include "cc_plugin/message/Disconnect.h"
#include "cc_plugin/message/Pingreq.h"
#include "cc_plugin/message/Pingresp.h"
#include "cc_plugin/message/Puback.h"
#include "cc_plugin/message/Pubcomp.h"
#include "cc_plugin/message/Publish.h"
#include "cc_plugin/message/Pubrec.h"
#include "cc_plugin/message/Pubrel.h"
#include "cc_plugin/message/Suback.h"
#include "cc_plugin/message/Subscribe.h"
#include "cc_plugin/message/Unsuback.h"
#include "cc_plugin/message/Unsubscribe.h"

namespace mqtt311
{

namespace cc_plugin
{

using AllMessages =
    std::tuple<
        mqtt311::cc_plugin::message::Connect,
        mqtt311::cc_plugin::message::Connack,
        mqtt311::cc_plugin::message::Publish,
        mqtt311::cc_plugin::message::Puback,
        mqtt311::cc_plugin::message::Pubrec,
        mqtt311::cc_plugin::message::Pubrel,
        mqtt311::cc_plugin::message::Pubcomp,
        mqtt311::cc_plugin::message::Subscribe,
        mqtt311::cc_plugin::message::Suback,
        mqtt311::cc_plugin::message::Unsubscribe,
        mqtt311::cc_plugin::message::Unsuback,
        mqtt311::cc_plugin::message::Pingreq,
        mqtt311::cc_plugin::message::Pingresp,
        mqtt311::cc_plugin::message::Disconnect
    >;

} // namespace cc_plugin

} // namespace mqtt311

