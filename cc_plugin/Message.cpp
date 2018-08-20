#include "Message.h"

#include "comms_champion/property/field.h"

namespace cc = comms_champion;

namespace mqtt311
{

namespace cc_plugin
{

namespace
{

struct FlagsMembers
{
    static QVariantMap createProps_retain()
    {
        using Field = mqtt311::MessageFields::FlagsMembers::Retain;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "retain")
                .asMap();
        
    }
    
    static QVariantMap createProps_qos()
    {
        using Field = mqtt311::MessageFields::FlagsMembers::Qos;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("AtMostOnceDelivery", 0)
                .add("AtLeastOnceDelivery", 1)
                .add("ExactlyOnceDelivery", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_dup()
    {
        using Field = mqtt311::MessageFields::FlagsMembers::Dup;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "dup")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = mqtt311::MessageFields::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden()
            .add(FlagsMembers::createProps_retain())
            .add(FlagsMembers::createProps_qos())
            .add(FlagsMembers::createProps_dup())
            .asMap();
    
}


QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    return props;
}

} // namespace 

const QVariantList& Message::extraTransportFieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace cc_plugin

} // namespace mqtt311

