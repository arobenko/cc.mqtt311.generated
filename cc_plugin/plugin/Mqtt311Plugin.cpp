#include "Mqtt311Plugin.h"

#include "Mqtt311Protocol.h"

namespace cc = comms_champion;

namespace mqtt311
{

namespace cc_plugin
{

namespace plugin
{

Mqtt311Plugin::Mqtt311Plugin()
  : m_protocol(new Mqtt311Protocol())
{
    pluginProperties()
        .setProtocolCreateFunc(
            [this]() -> cc::ProtocolPtr
            {
                return m_protocol;
            })
            ;
}

Mqtt311Plugin::~Mqtt311Plugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace mqtt311


