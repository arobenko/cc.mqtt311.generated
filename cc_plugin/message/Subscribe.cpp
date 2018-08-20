#include "Subscribe.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/PacketId.h"
#include "cc_plugin/field/Qos.h"
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
    using Field = mqtt311::message::SubscribeFields<>::PacketId;
    return cc_plugin::field::createProps_packetId(Field::name());
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_topic()
        {
            using Field = mqtt311::message::SubscribeFields<>::ListMembers::ElementMembers::Topic;
            return cc_plugin::field::createProps_string(Field::name());
            
        }
        
        static QVariantMap createProps_qos()
        {
            using Field = mqtt311::message::SubscribeFields<>::ListMembers::ElementMembers::Qos;
            return cc_plugin::field::createProps_qos(Field::name());
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = mqtt311::message::SubscribeFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_topic())
                .add(ElementMembers::createProps_qos())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = mqtt311::message::SubscribeFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
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

const QVariantList& Subscribe::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt311

