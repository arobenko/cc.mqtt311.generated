#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "cc_plugin/Message.h"

namespace mqtt311
{

namespace cc_plugin
{

namespace message
{

class PubrelImpl;
class Pubrel : public mqtt311::cc_plugin::Message
{
public:
    Pubrel();
    Pubrel(const Pubrel&) = delete;
    Pubrel(Pubrel&&) = delete;
    virtual ~Pubrel();
    Pubrel& operator=(const Pubrel& other);
    Pubrel& operator=(Pubrel&&);

protected:
    virtual const char* nameImpl() const override;
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual void dispatchImpl(comms_champion::MessageHandler& handler) override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const comms_champion::Message& other) override;
    virtual MsgIdParamType getIdImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
    virtual comms::ErrorStatus writeImpl(WriteIterator& iter, std::size_t len) const override;
    virtual bool validImpl() const override;
    virtual std::size_t lengthImpl() const override;
    virtual bool refreshImpl() override;

private:
    std::unique_ptr<PubrelImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt311



