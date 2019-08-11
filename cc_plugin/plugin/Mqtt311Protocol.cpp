#include "Mqtt311Protocol.h"

#include <cassert>
#include "comms_champion/ProtocolBase.h"
#include "cc_plugin/frame/Frame.h"
#include "cc_plugin/frame/FrameTransportMessage.h"

namespace cc = comms_champion;

namespace mqtt311
{

namespace cc_plugin
{

namespace plugin
{

class Mqtt311ProtocolImpl : public
    cc::ProtocolBase<
        mqtt311::cc_plugin::frame::Frame,
        mqtt311::cc_plugin::frame::FrameTransportMessage
    >
{
    using Base =
        cc::ProtocolBase<
            mqtt311::cc_plugin::frame::Frame,
            mqtt311::cc_plugin::frame::FrameTransportMessage
        >;
public:
    friend class mqtt311::cc_plugin::plugin::Mqtt311Protocol;

    Mqtt311ProtocolImpl() = default;
    virtual ~Mqtt311ProtocolImpl() = default;

protected:
    virtual const QString& nameImpl() const override
    {
        static const QString Str("mqtt311");
        return Str;
    }

    using Base::createInvalidMessageImpl;
    using Base::createRawDataMessageImpl;
    using Base::createExtraInfoMessageImpl;

};

Mqtt311Protocol::Mqtt311Protocol()
  : m_pImpl(new Mqtt311ProtocolImpl())
{
}

Mqtt311Protocol::~Mqtt311Protocol() = default;

const QString& Mqtt311Protocol::nameImpl() const
{
    return m_pImpl->name();
}

Mqtt311Protocol::MessagesList Mqtt311Protocol::readImpl(const cc::DataInfo& dataInfo, bool final)
{
    return m_pImpl->read(dataInfo, final);
}

cc::DataInfoPtr Mqtt311Protocol::writeImpl(cc::Message& msg)
{
    return m_pImpl->write(msg);
}

Mqtt311Protocol::MessagesList Mqtt311Protocol::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc::MessagePtr Mqtt311Protocol::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return static_cast<cc::Protocol*>(m_pImpl.get())->createMessage(idAsString, idx);
}

Mqtt311Protocol::UpdateStatus Mqtt311Protocol::updateMessageImpl(cc::Message& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc::MessagePtr Mqtt311Protocol::cloneMessageImpl(const cc::Message& msg)
{
    return m_pImpl->cloneMessage(msg);
}

cc::MessagePtr Mqtt311Protocol::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessageImpl();
}

cc::MessagePtr Mqtt311Protocol::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessageImpl();
}

cc::MessagePtr Mqtt311Protocol::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessageImpl();
}

} // namespace plugin

} // namespace cc_plugin

} // namespace mqtt311


