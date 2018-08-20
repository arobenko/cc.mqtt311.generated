#include "FrameTransportMessage.h"

#include "comms_champion/property/field.h"
namespace cc = comms_champion;

namespace mqtt311
{

namespace cc_plugin
{

namespace frame
{

namespace
{

struct IdAndFlagsLayer
{
    struct IdAndFlagsFieldMembers
    {
        static QVariantMap createProps_flags()
        {
            using Field = mqtt311::frame::FrameLayers<>::IdAndFlagsMembers::IdAndFlagsFieldMembers::Flags;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden()
                    .asMap();
            
        }
        
        static QVariantMap createProps_id()
        {
            using Field = mqtt311::frame::FrameLayers<>::IdAndFlagsMembers::IdAndFlagsFieldMembers::Id;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden()
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_idAndFlagsField()
    {
        using Field = mqtt311::frame::FrameLayers<>::IdAndFlagsMembers::IdAndFlagsField;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(IdAndFlagsFieldMembers::createProps_flags())
                .add(IdAndFlagsFieldMembers::createProps_id())
                .asMap();
        
    }
    
};

struct SizeLayer
{
    static QVariantMap createProps_size()
    {
        using Field = mqtt311::frame::FrameLayers<>::SizeMembers::Size;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

struct DataLayer
{
    static QVariantMap createProps_data()
    {
        return cc::property::field::ArrayList().name("Data").asMap();
    }
    
};


QVariantList createProps()
{
     QVariantList props;
     props.append(IdAndFlagsLayer::createProps_idAndFlagsField());
     props.append(SizeLayer::createProps_size());
     props.append(DataLayer::createProps_data());
     return props;
}

} // namespace

const QVariantList& FrameTransportMessage::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace frame

} // namespace cc_plugin

} // namespace mqtt311


