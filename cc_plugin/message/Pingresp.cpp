// Generated by commsdsl2comms v3.5.3

#include "Pingresp.h"

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

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

Pingresp::Pingresp() = default;
Pingresp::~Pingresp() = default;
Pingresp& Pingresp::operator=(const Pingresp&) = default;
Pingresp& Pingresp::operator=(Pingresp&&) = default;

const QVariantList& Pingresp::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt311


