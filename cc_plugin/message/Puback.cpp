// Generated by commsdsl2comms v3.5.0

#include "Puback.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/PacketId.h"

namespace cc = comms_champion;

namespace mqtt311
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_packetId()
{
    using Field = mqtt311::message::PubackFields<>::PacketId;
    auto props = cc_plugin::field::createProps_packetId(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId());
    return props;
}

} // namespace

Puback::Puback() = default;
Puback::~Puback() = default;
Puback& Puback::operator=(const Puback&) = default;
Puback& Puback::operator=(Puback&&) = default;

const QVariantList& Puback::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt311


