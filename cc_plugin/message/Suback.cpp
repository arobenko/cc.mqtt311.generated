// Generated by commsdsl2comms v3.6.2

#include "Suback.h"

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
    using Field = mqtt311::message::SubackFields<>::PacketId;
    auto props = cc_plugin::field::createProps_packetId(Field::name());
    return props;
    
}

struct ListMembers
{
    static QVariantMap createProps_returnCode()
    {
        using Field = mqtt311::message::SubackFields<>::ListMembers::ReturnCode;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add("Max QoS 0", 0)
                .add("Max QoS 1", 1)
                .add("Max QoS 2", 2)
                .add("Failure", 128)
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = mqtt311::message::SubackFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_returnCode())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId());
    props.append(createProps_list());
    return props;
}

} // namespace

Suback::Suback() = default;
Suback::~Suback() = default;
Suback& Suback::operator=(const Suback&) = default;
Suback& Suback::operator=(Suback&&) = default;

const QVariantList& Suback::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt311


