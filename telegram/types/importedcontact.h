// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_IMPORTEDCONTACT
#define LQTG_TYPE_IMPORTEDCONTACT

#include "telegramtypeobject.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT ImportedContact : public TelegramTypeObject
{
public:
    enum ImportedContactType {
        typeImportedContact = 0xd0028438
    };

    ImportedContact(ImportedContactType classType = typeImportedContact, InboundPkt *in = 0);
    ImportedContact(InboundPkt *in);
    virtual ~ImportedContact();

    void setClientId(qint64 clientId);
    qint64 clientId() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ImportedContactType classType);
    ImportedContactType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ImportedContact &b);

private:
    qint64 m_clientId;
    qint32 m_userId;
    ImportedContactType m_classType;
};

#endif // LQTG_TYPE_IMPORTEDCONTACT
