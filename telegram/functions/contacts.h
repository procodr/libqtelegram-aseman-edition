// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_FNC_CONTACTS
#define LQTG_FNC_CONTACTS

#include "telegramfunctionobject.h"
#include <QList>
#include "telegram/types/contactstatus.h"
#include "telegram/types/contactscontacts.h"
#include <QString>
#include "telegram/types/contactsimportedcontacts.h"
#include "telegram/types/inputcontact.h"
#include "telegram/types/contactssuggested.h"
#include <QtGlobal>
#include "telegram/types/contactslink.h"
#include "telegram/types/inputuser.h"
#include "telegram/types/contactsblocked.h"
#include "telegram/types/user.h"
#include "telegram/types/contactsfound.h"

namespace Tg {
namespace Functions {

class LIBQTELEGRAMSHARED_EXPORT Contacts : public TelegramFunctionObject
{
public:
    enum ContactsFunction {
        fncContactsGetStatuses = 0xc4a353ee,
        fncContactsGetContacts = 0x22c6aa08,
        fncContactsImportContacts = 0xda30b32d,
        fncContactsGetSuggested = 0xcd773428,
        fncContactsDeleteContact = 0x8e953744,
        fncContactsDeleteContacts = 0x59ab389e,
        fncContactsBlock = 0x332b49fc,
        fncContactsUnblock = 0xe54100bd,
        fncContactsGetBlocked = 0xf57c350f,
        fncContactsExportCard = 0x84e53737,
        fncContactsImportCard = 0x4fe196fe,
        fncContactsSearch = 0x11f812d8,
        fncContactsResolveUsername = 0xbf0131c
    };

    Contacts();
    virtual ~Contacts();

    static bool getStatuses(OutboundPkt *out);
    static QList<ContactStatus> getStatusesResult(InboundPkt *in);

    static bool getContacts(OutboundPkt *out, const QString &hash);
    static ContactsContacts getContactsResult(InboundPkt *in);

    static bool importContacts(OutboundPkt *out, const QList<InputContact> &contacts, bool replace);
    static ContactsImportedContacts importContactsResult(InboundPkt *in);

    static bool getSuggested(OutboundPkt *out, qint32 limit);
    static ContactsSuggested getSuggestedResult(InboundPkt *in);

    static bool deleteContact(OutboundPkt *out, const InputUser &id);
    static ContactsLink deleteContactResult(InboundPkt *in);

    static bool deleteContacts(OutboundPkt *out, const QList<InputUser> &id);
    static bool deleteContactsResult(InboundPkt *in);

    static bool block(OutboundPkt *out, const InputUser &id);
    static bool blockResult(InboundPkt *in);

    static bool unblock(OutboundPkt *out, const InputUser &id);
    static bool unblockResult(InboundPkt *in);

    static bool getBlocked(OutboundPkt *out, qint32 offset, qint32 limit);
    static ContactsBlocked getBlockedResult(InboundPkt *in);

    static bool exportCard(OutboundPkt *out);
    static QList<qint32> exportCardResult(InboundPkt *in);

    static bool importCard(OutboundPkt *out, const QList<qint32> &exportCard);
    static User importCardResult(InboundPkt *in);

    static bool search(OutboundPkt *out, const QString &q, qint32 limit);
    static ContactsFound searchResult(InboundPkt *in);

    static bool resolveUsername(OutboundPkt *out, const QString &username);
    static User resolveUsernameResult(InboundPkt *in);

};

}
}

#endif // LQTG_FNC_CONTACTS
