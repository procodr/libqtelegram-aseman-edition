// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_USERFULL
#define LQTG_TYPE_USERFULL

#include "telegramtypeobject.h"
#include "contactslink.h"
#include "peernotifysettings.h"
#include "photo.h"
#include <QString>
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT UserFull : public TelegramTypeObject
{
public:
    enum UserFullType {
        typeUserFull = 0x771095da
    };

    UserFull(UserFullType classType = typeUserFull, InboundPkt *in = 0);
    UserFull(InboundPkt *in);
    virtual ~UserFull();

    void setBlocked(bool blocked);
    bool blocked() const;

    void setLink(const ContactsLink &link);
    ContactsLink link() const;

    void setNotifySettings(const PeerNotifySettings &notifySettings);
    PeerNotifySettings notifySettings() const;

    void setProfilePhoto(const Photo &profilePhoto);
    Photo profilePhoto() const;

    void setRealFirstName(const QString &realFirstName);
    QString realFirstName() const;

    void setRealLastName(const QString &realLastName);
    QString realLastName() const;

    void setUser(const User &user);
    User user() const;

    void setClassType(UserFullType classType);
    UserFullType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const UserFull &b);

private:
    bool m_blocked;
    ContactsLink m_link;
    PeerNotifySettings m_notifySettings;
    Photo m_profilePhoto;
    QString m_realFirstName;
    QString m_realLastName;
    User m_user;
    UserFullType m_classType;
};

#endif // LQTG_TYPE_USERFULL
