// Generated by commsdsl2comms v3.4.0

#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt311/message/Unsubscribe.h"
#include "cc_plugin/Message.h"

namespace mqtt311
{

namespace cc_plugin
{

namespace message
{

class Unsubscribe : public
    comms_champion::ProtocolMessageBase<
        mqtt311::message::Unsubscribe<mqtt311::cc_plugin::Message>,
        Unsubscribe
    >
{
public:
    Unsubscribe();
    Unsubscribe(const Unsubscribe&) = delete;
    Unsubscribe(Unsubscribe&&) = delete;
    virtual ~Unsubscribe();
    Unsubscribe& operator=(const Unsubscribe&);
    Unsubscribe& operator=(Unsubscribe&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt311



