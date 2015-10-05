// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACT
#define LQTG_TYPE_CONTACT

#include "telegramtypeobject.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT Contact : public TelegramTypeObject
{
public:
    enum ContactType {
        typeContact = 0xf911c994
    };

    Contact(ContactType classType = typeContact, InboundPkt *in = 0);
    Contact(InboundPkt *in);
    virtual ~Contact();

    void setMutual(bool mutual);
    bool mutual() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ContactType classType);
    ContactType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const Contact &b);

private:
    bool m_mutual;
    qint32 m_userId;
    ContactType m_classType;
};

#endif // LQTG_TYPE_CONTACT
