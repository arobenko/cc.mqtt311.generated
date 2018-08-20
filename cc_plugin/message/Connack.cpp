#include "Connack.h"

#include "comms_champion/property/field.h"
namespace cc = comms_champion;

namespace mqtt311
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_flags()
{
    using Field = mqtt311::message::ConnackFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "Session Present")
            .asMap();
    
}

static QVariantMap createProps_returnCode()
{
    using Field = mqtt311::message::ConnackFields<>::ReturnCode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Accepted", 0)
            .add("Bad Protocol Version", 1)
            .add("Identifier Rejected", 2)
            .add("Server Unavailable", 3)
            .add("Bad Auth Details", 4)
            .add("Not Authorized", 5)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_returnCode());
    return props;
}

} // namespace

const QVariantList& Connack::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt311

