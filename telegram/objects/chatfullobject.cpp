// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chatfullobject.h"

ChatFullObject::ChatFullObject(const ChatFull &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_chatPhoto(0),
    m_exportedInvite(0),
    m_notifySettings(0),
    m_participants(0),
    m_core(core)
{
    m_chatPhoto = new PhotoObject(m_core.chatPhoto(), this);
    connect(m_chatPhoto, SIGNAL(coreChanged()), SLOT(coreChatPhotoChanged()));
    m_exportedInvite = new ExportedChatInviteObject(m_core.exportedInvite(), this);
    connect(m_exportedInvite, SIGNAL(coreChanged()), SLOT(coreExportedInviteChanged()));
    m_notifySettings = new PeerNotifySettingsObject(m_core.notifySettings(), this);
    connect(m_notifySettings, SIGNAL(coreChanged()), SLOT(coreNotifySettingsChanged()));
    m_participants = new ChatParticipantsObject(m_core.participants(), this);
    connect(m_participants, SIGNAL(coreChanged()), SLOT(coreParticipantsChanged()));
}

ChatFullObject::ChatFullObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_chatPhoto(0),
    m_exportedInvite(0),
    m_notifySettings(0),
    m_participants(0),
    m_core()
{
    m_chatPhoto = new PhotoObject(m_core.chatPhoto(), this);
    connect(m_chatPhoto, SIGNAL(coreChanged()), SLOT(coreChatPhotoChanged()));
    m_exportedInvite = new ExportedChatInviteObject(m_core.exportedInvite(), this);
    connect(m_exportedInvite, SIGNAL(coreChanged()), SLOT(coreExportedInviteChanged()));
    m_notifySettings = new PeerNotifySettingsObject(m_core.notifySettings(), this);
    connect(m_notifySettings, SIGNAL(coreChanged()), SLOT(coreNotifySettingsChanged()));
    m_participants = new ChatParticipantsObject(m_core.participants(), this);
    connect(m_participants, SIGNAL(coreChanged()), SLOT(coreParticipantsChanged()));
}

ChatFullObject::~ChatFullObject() {
}

void ChatFullObject::setAbout(const QString &about) {
    if(m_core.about() == about) return;
    m_core.setAbout(about);
    Q_EMIT aboutChanged();
    Q_EMIT coreChanged();
}

QString ChatFullObject::about() const {
    return m_core.about();
}

void ChatFullObject::setAdminsCount(qint32 adminsCount) {
    if(m_core.adminsCount() == adminsCount) return;
    m_core.setAdminsCount(adminsCount);
    Q_EMIT adminsCountChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::adminsCount() const {
    return m_core.adminsCount();
}

void ChatFullObject::setBotInfo(const QList<BotInfo> &botInfo) {
    if(m_core.botInfo() == botInfo) return;
    m_core.setBotInfo(botInfo);
    Q_EMIT botInfoChanged();
    Q_EMIT coreChanged();
}

QList<BotInfo> ChatFullObject::botInfo() const {
    return m_core.botInfo();
}

void ChatFullObject::setCanViewParticipants(bool canViewParticipants) {
    if(m_core.canViewParticipants() == canViewParticipants) return;
    m_core.setCanViewParticipants(canViewParticipants);
    Q_EMIT canViewParticipantsChanged();
    Q_EMIT coreChanged();
}

bool ChatFullObject::canViewParticipants() const {
    return m_core.canViewParticipants();
}

void ChatFullObject::setChatPhoto(PhotoObject* chatPhoto) {
    if(m_chatPhoto == chatPhoto) return;
    if(m_chatPhoto) delete m_chatPhoto;
    m_chatPhoto = chatPhoto;
    if(m_chatPhoto) {
        m_chatPhoto->setParent(this);
        m_core.setChatPhoto(m_chatPhoto->core());
        connect(m_chatPhoto, SIGNAL(coreChanged()), SLOT(coreChatPhotoChanged()));
    }
    Q_EMIT chatPhotoChanged();
    Q_EMIT coreChanged();
}

PhotoObject*  ChatFullObject::chatPhoto() const {
    return m_chatPhoto;
}

void ChatFullObject::setExportedInvite(ExportedChatInviteObject* exportedInvite) {
    if(m_exportedInvite == exportedInvite) return;
    if(m_exportedInvite) delete m_exportedInvite;
    m_exportedInvite = exportedInvite;
    if(m_exportedInvite) {
        m_exportedInvite->setParent(this);
        m_core.setExportedInvite(m_exportedInvite->core());
        connect(m_exportedInvite, SIGNAL(coreChanged()), SLOT(coreExportedInviteChanged()));
    }
    Q_EMIT exportedInviteChanged();
    Q_EMIT coreChanged();
}

ExportedChatInviteObject*  ChatFullObject::exportedInvite() const {
    return m_exportedInvite;
}

void ChatFullObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::flags() const {
    return m_core.flags();
}

void ChatFullObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::id() const {
    return m_core.id();
}

void ChatFullObject::setKickedCount(qint32 kickedCount) {
    if(m_core.kickedCount() == kickedCount) return;
    m_core.setKickedCount(kickedCount);
    Q_EMIT kickedCountChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::kickedCount() const {
    return m_core.kickedCount();
}

void ChatFullObject::setMigratedFromChatId(qint32 migratedFromChatId) {
    if(m_core.migratedFromChatId() == migratedFromChatId) return;
    m_core.setMigratedFromChatId(migratedFromChatId);
    Q_EMIT migratedFromChatIdChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::migratedFromChatId() const {
    return m_core.migratedFromChatId();
}

void ChatFullObject::setMigratedFromMaxId(qint32 migratedFromMaxId) {
    if(m_core.migratedFromMaxId() == migratedFromMaxId) return;
    m_core.setMigratedFromMaxId(migratedFromMaxId);
    Q_EMIT migratedFromMaxIdChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::migratedFromMaxId() const {
    return m_core.migratedFromMaxId();
}

void ChatFullObject::setNotifySettings(PeerNotifySettingsObject* notifySettings) {
    if(m_notifySettings == notifySettings) return;
    if(m_notifySettings) delete m_notifySettings;
    m_notifySettings = notifySettings;
    if(m_notifySettings) {
        m_notifySettings->setParent(this);
        m_core.setNotifySettings(m_notifySettings->core());
        connect(m_notifySettings, SIGNAL(coreChanged()), SLOT(coreNotifySettingsChanged()));
    }
    Q_EMIT notifySettingsChanged();
    Q_EMIT coreChanged();
}

PeerNotifySettingsObject*  ChatFullObject::notifySettings() const {
    return m_notifySettings;
}

void ChatFullObject::setParticipants(ChatParticipantsObject* participants) {
    if(m_participants == participants) return;
    if(m_participants) delete m_participants;
    m_participants = participants;
    if(m_participants) {
        m_participants->setParent(this);
        m_core.setParticipants(m_participants->core());
        connect(m_participants, SIGNAL(coreChanged()), SLOT(coreParticipantsChanged()));
    }
    Q_EMIT participantsChanged();
    Q_EMIT coreChanged();
}

ChatParticipantsObject*  ChatFullObject::participants() const {
    return m_participants;
}

void ChatFullObject::setParticipantsCount(qint32 participantsCount) {
    if(m_core.participantsCount() == participantsCount) return;
    m_core.setParticipantsCount(participantsCount);
    Q_EMIT participantsCountChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::participantsCount() const {
    return m_core.participantsCount();
}

void ChatFullObject::setReadInboxMaxId(qint32 readInboxMaxId) {
    if(m_core.readInboxMaxId() == readInboxMaxId) return;
    m_core.setReadInboxMaxId(readInboxMaxId);
    Q_EMIT readInboxMaxIdChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::readInboxMaxId() const {
    return m_core.readInboxMaxId();
}

void ChatFullObject::setUnreadCount(qint32 unreadCount) {
    if(m_core.unreadCount() == unreadCount) return;
    m_core.setUnreadCount(unreadCount);
    Q_EMIT unreadCountChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::unreadCount() const {
    return m_core.unreadCount();
}

void ChatFullObject::setUnreadImportantCount(qint32 unreadImportantCount) {
    if(m_core.unreadImportantCount() == unreadImportantCount) return;
    m_core.setUnreadImportantCount(unreadImportantCount);
    Q_EMIT unreadImportantCountChanged();
    Q_EMIT coreChanged();
}

qint32 ChatFullObject::unreadImportantCount() const {
    return m_core.unreadImportantCount();
}

ChatFullObject &ChatFullObject::operator =(const ChatFull &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_chatPhoto->setCore(b.chatPhoto());
    m_exportedInvite->setCore(b.exportedInvite());
    m_notifySettings->setCore(b.notifySettings());
    m_participants->setCore(b.participants());

    Q_EMIT aboutChanged();
    Q_EMIT adminsCountChanged();
    Q_EMIT botInfoChanged();
    Q_EMIT canViewParticipantsChanged();
    Q_EMIT chatPhotoChanged();
    Q_EMIT exportedInviteChanged();
    Q_EMIT flagsChanged();
    Q_EMIT idChanged();
    Q_EMIT kickedCountChanged();
    Q_EMIT migratedFromChatIdChanged();
    Q_EMIT migratedFromMaxIdChanged();
    Q_EMIT notifySettingsChanged();
    Q_EMIT participantsChanged();
    Q_EMIT participantsCountChanged();
    Q_EMIT readInboxMaxIdChanged();
    Q_EMIT unreadCountChanged();
    Q_EMIT unreadImportantCountChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ChatFullObject::operator ==(const ChatFull &b) const {
    return m_core == b;
}

void ChatFullObject::setClassType(int classType) {
    ChatFull::ChatFullType result;
    switch(classType) {
    case TypeChatFull:
        result = ChatFull::typeChatFull;
        break;
    case TypeChannelFull:
        result = ChatFull::typeChannelFull;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int ChatFullObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ChatFull::typeChatFull:
        result = TypeChatFull;
        break;
    case ChatFull::typeChannelFull:
        result = TypeChannelFull;
        break;
    }

    return result;
}

void ChatFullObject::setCore(const ChatFull &core) {
    operator =(core);
}

ChatFull ChatFullObject::core() const {
    return m_core;
}

void ChatFullObject::coreChatPhotoChanged() {
    if(m_core.chatPhoto() == m_chatPhoto->core()) return;
    m_core.setChatPhoto(m_chatPhoto->core());
    Q_EMIT chatPhotoChanged();
    Q_EMIT coreChanged();
}

void ChatFullObject::coreExportedInviteChanged() {
    if(m_core.exportedInvite() == m_exportedInvite->core()) return;
    m_core.setExportedInvite(m_exportedInvite->core());
    Q_EMIT exportedInviteChanged();
    Q_EMIT coreChanged();
}

void ChatFullObject::coreNotifySettingsChanged() {
    if(m_core.notifySettings() == m_notifySettings->core()) return;
    m_core.setNotifySettings(m_notifySettings->core());
    Q_EMIT notifySettingsChanged();
    Q_EMIT coreChanged();
}

void ChatFullObject::coreParticipantsChanged() {
    if(m_core.participants() == m_participants->core()) return;
    m_core.setParticipants(m_participants->core());
    Q_EMIT participantsChanged();
    Q_EMIT coreChanged();
}
