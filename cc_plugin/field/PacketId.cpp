#include "PacketId.h"

#include "comms_champion/property/field.h"
#include "mqtt311/field/PacketId.h"


namespace cc = comms_champion;

namespace mqtt311
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_packetId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqtt311::field::PacketId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt311


