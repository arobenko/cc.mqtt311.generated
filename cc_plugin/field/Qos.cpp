#include "Qos.h"

#include "comms_champion/property/field.h"
#include "mqtt311/field/Qos.h"


namespace cc = comms_champion;

namespace mqtt311
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_qos(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqtt311::field::Qos<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("AtMostOnceDelivery", 0)
            .add("AtLeastOnceDelivery", 1)
            .add("ExactlyOnceDelivery", 2)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt311


