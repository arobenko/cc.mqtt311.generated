#include "Unsubscribe.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/PacketId.h"
#include "cc_plugin/field/String.h"

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
    using Field = mqtt311::message::UnsubscribeFields<>::PacketId;
    return cc_plugin::field::createProps_packetId(Field::name());
    
}

struct ListMembers
{
    static QVariantMap createProps_topic()
    {
        using Field = mqtt311::message::UnsubscribeFields<>::ListMembers::Topic;
        return cc_plugin::field::createProps_string(Field::name());
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = mqtt311::message::UnsubscribeFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_topic())
            .serialisedHidden()
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

const QVariantList& Unsubscribe::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt311

