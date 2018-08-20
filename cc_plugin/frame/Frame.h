#pragma once

#include "mqtt311/frame/Frame.h"
#include "cc_plugin/Message.h"
#include "cc_plugin/AllMessages.h"

namespace mqtt311
{

namespace cc_plugin
{

namespace frame
{

using Frame =
    mqtt311::frame::Frame<
        mqtt311::cc_plugin::Message,
        mqtt311::cc_plugin::AllMessages
    >;

} // namespace frame

} // namespace cc_plugin

} // namespace mqtt311

