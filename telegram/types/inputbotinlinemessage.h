// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTBOTINLINEMESSAGE
#define LQTG_TYPE_INPUTBOTINLINEMESSAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QString>
#include <QList>
#include "messageentity.h"
#include <QtGlobal>
#include "inputgeopoint.h"
#include "replymarkup.h"

class LIBQTELEGRAMSHARED_EXPORT InputBotInlineMessage : public TelegramTypeObject
{
public:
    enum InputBotInlineMessageClassType {
        typeInputBotInlineMessageMediaAuto = 0x292fed13,
        typeInputBotInlineMessageText = 0x3dcd7a87,
        typeInputBotInlineMessageMediaGeo = 0xf4a59de1,
        typeInputBotInlineMessageMediaVenue = 0xaaafadc8,
        typeInputBotInlineMessageMediaContact = 0x2daf01a7
    };

    InputBotInlineMessage(InputBotInlineMessageClassType classType = typeInputBotInlineMessageMediaAuto, InboundPkt *in = 0);
    InputBotInlineMessage(InboundPkt *in);
    InputBotInlineMessage(const Null&);
    virtual ~InputBotInlineMessage();

    void setAddress(const QString &address);
    QString address() const;

    void setCaption(const QString &caption);
    QString caption() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFirstName(const QString &firstName);
    QString firstName() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setGeoPoint(const InputGeoPoint &geoPoint);
    InputGeoPoint geoPoint() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setMessage(const QString &message);
    QString message() const;

    void setNoWebpage(bool noWebpage);
    bool noWebpage() const;

    void setPhoneNumber(const QString &phoneNumber);
    QString phoneNumber() const;

    void setProvider(const QString &provider);
    QString provider() const;

    void setReplyMarkup(const ReplyMarkup &replyMarkup);
    ReplyMarkup replyMarkup() const;

    void setTitle(const QString &title);
    QString title() const;

    void setVenueId(const QString &venueId);
    QString venueId() const;

    void setClassType(InputBotInlineMessageClassType classType);
    InputBotInlineMessageClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static InputBotInlineMessage fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const InputBotInlineMessage &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_address;
    QString m_caption;
    QList<MessageEntity> m_entities;
    QString m_firstName;
    qint32 m_flags;
    InputGeoPoint m_geoPoint;
    QString m_lastName;
    QString m_message;
    QString m_phoneNumber;
    QString m_provider;
    ReplyMarkup m_replyMarkup;
    QString m_title;
    QString m_venueId;
    InputBotInlineMessageClassType m_classType;
};

Q_DECLARE_METATYPE(InputBotInlineMessage)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputBotInlineMessage &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputBotInlineMessage &item);

inline InputBotInlineMessage::InputBotInlineMessage(InputBotInlineMessageClassType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline InputBotInlineMessage::InputBotInlineMessage(InboundPkt *in) :
    m_flags(0),
    m_classType(typeInputBotInlineMessageMediaAuto)
{
    fetch(in);
}

inline InputBotInlineMessage::InputBotInlineMessage(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeInputBotInlineMessageMediaAuto)
{
}

inline InputBotInlineMessage::~InputBotInlineMessage() {
}

inline void InputBotInlineMessage::setAddress(const QString &address) {
    m_address = address;
}

inline QString InputBotInlineMessage::address() const {
    return m_address;
}

inline void InputBotInlineMessage::setCaption(const QString &caption) {
    m_caption = caption;
}

inline QString InputBotInlineMessage::caption() const {
    return m_caption;
}

inline void InputBotInlineMessage::setEntities(const QList<MessageEntity> &entities) {
    m_entities = entities;
}

inline QList<MessageEntity> InputBotInlineMessage::entities() const {
    return m_entities;
}

inline void InputBotInlineMessage::setFirstName(const QString &firstName) {
    m_firstName = firstName;
}

inline QString InputBotInlineMessage::firstName() const {
    return m_firstName;
}

inline void InputBotInlineMessage::setFlags(qint32 flags) {
    m_flags = flags;
}

inline qint32 InputBotInlineMessage::flags() const {
    return m_flags;
}

inline void InputBotInlineMessage::setGeoPoint(const InputGeoPoint &geoPoint) {
    m_geoPoint = geoPoint;
}

inline InputGeoPoint InputBotInlineMessage::geoPoint() const {
    return m_geoPoint;
}

inline void InputBotInlineMessage::setLastName(const QString &lastName) {
    m_lastName = lastName;
}

inline QString InputBotInlineMessage::lastName() const {
    return m_lastName;
}

inline void InputBotInlineMessage::setMessage(const QString &message) {
    m_message = message;
}

inline QString InputBotInlineMessage::message() const {
    return m_message;
}

inline void InputBotInlineMessage::setNoWebpage(bool noWebpage) {
    if(noWebpage) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

inline bool InputBotInlineMessage::noWebpage() const {
    return (m_flags & 1<<0);
}

inline void InputBotInlineMessage::setPhoneNumber(const QString &phoneNumber) {
    m_phoneNumber = phoneNumber;
}

inline QString InputBotInlineMessage::phoneNumber() const {
    return m_phoneNumber;
}

inline void InputBotInlineMessage::setProvider(const QString &provider) {
    m_provider = provider;
}

inline QString InputBotInlineMessage::provider() const {
    return m_provider;
}

inline void InputBotInlineMessage::setReplyMarkup(const ReplyMarkup &replyMarkup) {
    m_replyMarkup = replyMarkup;
}

inline ReplyMarkup InputBotInlineMessage::replyMarkup() const {
    return m_replyMarkup;
}

inline void InputBotInlineMessage::setTitle(const QString &title) {
    m_title = title;
}

inline QString InputBotInlineMessage::title() const {
    return m_title;
}

inline void InputBotInlineMessage::setVenueId(const QString &venueId) {
    m_venueId = venueId;
}

inline QString InputBotInlineMessage::venueId() const {
    return m_venueId;
}

inline bool InputBotInlineMessage::operator ==(const InputBotInlineMessage &b) const {
    return m_classType == b.m_classType &&
           m_address == b.m_address &&
           m_caption == b.m_caption &&
           m_entities == b.m_entities &&
           m_firstName == b.m_firstName &&
           m_flags == b.m_flags &&
           m_geoPoint == b.m_geoPoint &&
           m_lastName == b.m_lastName &&
           m_message == b.m_message &&
           m_phoneNumber == b.m_phoneNumber &&
           m_provider == b.m_provider &&
           m_replyMarkup == b.m_replyMarkup &&
           m_title == b.m_title &&
           m_venueId == b.m_venueId;
}

inline void InputBotInlineMessage::setClassType(InputBotInlineMessage::InputBotInlineMessageClassType classType) {
    m_classType = classType;
}

inline InputBotInlineMessage::InputBotInlineMessageClassType InputBotInlineMessage::classType() const {
    return m_classType;
}

inline bool InputBotInlineMessage::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputBotInlineMessageMediaAuto: {
        m_flags = in->fetchInt();
        m_caption = in->fetchQString();
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageText: {
        m_flags = in->fetchInt();
        m_message = in->fetchQString();
        if(m_flags & 1<<1) {
            if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
            qint32 m_entities_length = in->fetchInt();
            m_entities.clear();
            for (qint32 i = 0; i < m_entities_length; i++) {
                MessageEntity type;
                if(m_flags & 1<<1) {
                type.fetch(in);
            }
                m_entities.append(type);
            }
        }
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaGeo: {
        m_flags = in->fetchInt();
        m_geoPoint.fetch(in);
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaVenue: {
        m_flags = in->fetchInt();
        m_geoPoint.fetch(in);
        m_title = in->fetchQString();
        m_address = in->fetchQString();
        m_provider = in->fetchQString();
        m_venueId = in->fetchQString();
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaContact: {
        m_flags = in->fetchInt();
        m_phoneNumber = in->fetchQString();
        m_firstName = in->fetchQString();
        m_lastName = in->fetchQString();
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool InputBotInlineMessage::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputBotInlineMessageMediaAuto: {
        out->appendInt(m_flags);
        out->appendQString(m_caption);
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageText: {
        out->appendInt(m_flags);
        out->appendQString(m_message);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_entities.count());
        for (qint32 i = 0; i < m_entities.count(); i++) {
            m_entities[i].push(out);
        }
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaGeo: {
        out->appendInt(m_flags);
        m_geoPoint.push(out);
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaVenue: {
        out->appendInt(m_flags);
        m_geoPoint.push(out);
        out->appendQString(m_title);
        out->appendQString(m_address);
        out->appendQString(m_provider);
        out->appendQString(m_venueId);
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaContact: {
        out->appendInt(m_flags);
        out->appendQString(m_phoneNumber);
        out->appendQString(m_firstName);
        out->appendQString(m_lastName);
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> InputBotInlineMessage::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputBotInlineMessageMediaAuto: {
        result["classType"] = "InputBotInlineMessage::typeInputBotInlineMessageMediaAuto";
        result["caption"] = QVariant::fromValue<QString>(caption());
        result["replyMarkup"] = m_replyMarkup.toMap();
        return result;
    }
        break;
    
    case typeInputBotInlineMessageText: {
        result["classType"] = "InputBotInlineMessage::typeInputBotInlineMessageText";
        result["noWebpage"] = QVariant::fromValue<bool>(noWebpage());
        result["message"] = QVariant::fromValue<QString>(message());
        QList<QVariant> _entities;
        Q_FOREACH(const MessageEntity &m__type, m_entities)
            _entities << m__type.toMap();
        result["entities"] = _entities;
        result["replyMarkup"] = m_replyMarkup.toMap();
        return result;
    }
        break;
    
    case typeInputBotInlineMessageMediaGeo: {
        result["classType"] = "InputBotInlineMessage::typeInputBotInlineMessageMediaGeo";
        result["geoPoint"] = m_geoPoint.toMap();
        result["replyMarkup"] = m_replyMarkup.toMap();
        return result;
    }
        break;
    
    case typeInputBotInlineMessageMediaVenue: {
        result["classType"] = "InputBotInlineMessage::typeInputBotInlineMessageMediaVenue";
        result["geoPoint"] = m_geoPoint.toMap();
        result["title"] = QVariant::fromValue<QString>(title());
        result["address"] = QVariant::fromValue<QString>(address());
        result["provider"] = QVariant::fromValue<QString>(provider());
        result["venueId"] = QVariant::fromValue<QString>(venueId());
        result["replyMarkup"] = m_replyMarkup.toMap();
        return result;
    }
        break;
    
    case typeInputBotInlineMessageMediaContact: {
        result["classType"] = "InputBotInlineMessage::typeInputBotInlineMessageMediaContact";
        result["phoneNumber"] = QVariant::fromValue<QString>(phoneNumber());
        result["firstName"] = QVariant::fromValue<QString>(firstName());
        result["lastName"] = QVariant::fromValue<QString>(lastName());
        result["replyMarkup"] = m_replyMarkup.toMap();
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline InputBotInlineMessage InputBotInlineMessage::fromMap(const QMap<QString, QVariant> &map) {
    InputBotInlineMessage result;
    if(map.value("classType").toString() == "InputBotInlineMessage::typeInputBotInlineMessageMediaAuto") {
        result.setClassType(typeInputBotInlineMessageMediaAuto);
        result.setCaption( map.value("caption").value<QString>() );
        result.setReplyMarkup( ReplyMarkup::fromMap(map.value("replyMarkup").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "InputBotInlineMessage::typeInputBotInlineMessageText") {
        result.setClassType(typeInputBotInlineMessageText);
        result.setNoWebpage( map.value("noWebpage").value<bool>() );
        result.setMessage( map.value("message").value<QString>() );
        QList<QVariant> map_entities = map["entities"].toList();
        QList<MessageEntity> _entities;
        Q_FOREACH(const QVariant &var, map_entities)
            _entities << MessageEntity::fromMap(var.toMap());
        result.setEntities(_entities);
        result.setReplyMarkup( ReplyMarkup::fromMap(map.value("replyMarkup").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "InputBotInlineMessage::typeInputBotInlineMessageMediaGeo") {
        result.setClassType(typeInputBotInlineMessageMediaGeo);
        result.setGeoPoint( InputGeoPoint::fromMap(map.value("geoPoint").toMap()) );
        result.setReplyMarkup( ReplyMarkup::fromMap(map.value("replyMarkup").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "InputBotInlineMessage::typeInputBotInlineMessageMediaVenue") {
        result.setClassType(typeInputBotInlineMessageMediaVenue);
        result.setGeoPoint( InputGeoPoint::fromMap(map.value("geoPoint").toMap()) );
        result.setTitle( map.value("title").value<QString>() );
        result.setAddress( map.value("address").value<QString>() );
        result.setProvider( map.value("provider").value<QString>() );
        result.setVenueId( map.value("venueId").value<QString>() );
        result.setReplyMarkup( ReplyMarkup::fromMap(map.value("replyMarkup").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "InputBotInlineMessage::typeInputBotInlineMessageMediaContact") {
        result.setClassType(typeInputBotInlineMessageMediaContact);
        result.setPhoneNumber( map.value("phoneNumber").value<QString>() );
        result.setFirstName( map.value("firstName").value<QString>() );
        result.setLastName( map.value("lastName").value<QString>() );
        result.setReplyMarkup( ReplyMarkup::fromMap(map.value("replyMarkup").toMap()) );
        return result;
    }
    return result;
}

inline QByteArray InputBotInlineMessage::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const InputBotInlineMessage &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputBotInlineMessage::typeInputBotInlineMessageMediaAuto:
        stream << item.flags();
        stream << item.caption();
        stream << item.replyMarkup();
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageText:
        stream << item.flags();
        stream << item.message();
        stream << item.entities();
        stream << item.replyMarkup();
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaGeo:
        stream << item.flags();
        stream << item.geoPoint();
        stream << item.replyMarkup();
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaVenue:
        stream << item.flags();
        stream << item.geoPoint();
        stream << item.title();
        stream << item.address();
        stream << item.provider();
        stream << item.venueId();
        stream << item.replyMarkup();
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaContact:
        stream << item.flags();
        stream << item.phoneNumber();
        stream << item.firstName();
        stream << item.lastName();
        stream << item.replyMarkup();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, InputBotInlineMessage &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputBotInlineMessage::InputBotInlineMessageClassType>(type));
    switch(type) {
    case InputBotInlineMessage::typeInputBotInlineMessageMediaAuto: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_caption;
        stream >> m_caption;
        item.setCaption(m_caption);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageText: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_message;
        stream >> m_message;
        item.setMessage(m_message);
        QList<MessageEntity> m_entities;
        stream >> m_entities;
        item.setEntities(m_entities);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaGeo: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        InputGeoPoint m_geo_point;
        stream >> m_geo_point;
        item.setGeoPoint(m_geo_point);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaVenue: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        InputGeoPoint m_geo_point;
        stream >> m_geo_point;
        item.setGeoPoint(m_geo_point);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QString m_address;
        stream >> m_address;
        item.setAddress(m_address);
        QString m_provider;
        stream >> m_provider;
        item.setProvider(m_provider);
        QString m_venue_id;
        stream >> m_venue_id;
        item.setVenueId(m_venue_id);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaContact: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_phone_number;
        stream >> m_phone_number;
        item.setPhoneNumber(m_phone_number);
        QString m_first_name;
        stream >> m_first_name;
        item.setFirstName(m_first_name);
        QString m_last_name;
        stream >> m_last_name;
        item.setLastName(m_last_name);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_INPUTBOTINLINEMESSAGE