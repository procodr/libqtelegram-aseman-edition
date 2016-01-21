// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTBOTINLINEMESSAGE_OBJECT
#define LQTG_TYPE_INPUTBOTINLINEMESSAGE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputbotinlinemessage.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputBotInlineMessageObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputBotInlineMessageType)
    Q_PROPERTY(QString caption READ caption WRITE setCaption NOTIFY captionChanged)
    Q_PROPERTY(QList<MessageEntity> entities READ entities WRITE setEntities NOTIFY entitiesChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(bool noWebpage READ noWebpage WRITE setNoWebpage NOTIFY noWebpageChanged)
    Q_PROPERTY(InputBotInlineMessage core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputBotInlineMessageType {
        TypeInputBotInlineMessageMediaAuto,
        TypeInputBotInlineMessageText
    };

    InputBotInlineMessageObject(const InputBotInlineMessage &core, QObject *parent = 0);
    InputBotInlineMessageObject(QObject *parent = 0);
    virtual ~InputBotInlineMessageObject();

    void setCaption(const QString &caption);
    QString caption() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMessage(const QString &message);
    QString message() const;

    void setNoWebpage(bool noWebpage);
    bool noWebpage() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const InputBotInlineMessage &core);
    InputBotInlineMessage core() const;

    InputBotInlineMessageObject &operator =(const InputBotInlineMessage &b);
    bool operator ==(const InputBotInlineMessage &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void captionChanged();
    void entitiesChanged();
    void flagsChanged();
    void messageChanged();
    void noWebpageChanged();

private Q_SLOTS:

private:
    InputBotInlineMessage m_core;
};

#endif // LQTG_TYPE_INPUTBOTINLINEMESSAGE_OBJECT