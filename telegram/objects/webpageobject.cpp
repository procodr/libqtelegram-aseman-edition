// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "webpageobject.h"

WebPageObject::WebPageObject(const WebPage &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_document(0),
    m_photo(0),
    m_core(core)
{
    m_document = new DocumentObject(m_core.document(), this);
    connect(m_document, SIGNAL(coreChanged()), SLOT(coreDocumentChanged()));
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo, SIGNAL(coreChanged()), SLOT(corePhotoChanged()));
}

WebPageObject::WebPageObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_document(0),
    m_photo(0),
    m_core()
{
    m_document = new DocumentObject(m_core.document(), this);
    connect(m_document, SIGNAL(coreChanged()), SLOT(coreDocumentChanged()));
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo, SIGNAL(coreChanged()), SLOT(corePhotoChanged()));
}

WebPageObject::~WebPageObject() {
}

void WebPageObject::setAuthor(const QString &author) {
    if(m_core.author() == author) return;
    m_core.setAuthor(author);
    Q_EMIT authorChanged();
    Q_EMIT coreChanged();
}

QString WebPageObject::author() const {
    return m_core.author();
}

void WebPageObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 WebPageObject::date() const {
    return m_core.date();
}

void WebPageObject::setDescription(const QString &description) {
    if(m_core.description() == description) return;
    m_core.setDescription(description);
    Q_EMIT descriptionChanged();
    Q_EMIT coreChanged();
}

QString WebPageObject::description() const {
    return m_core.description();
}

void WebPageObject::setDisplayUrl(const QString &displayUrl) {
    if(m_core.displayUrl() == displayUrl) return;
    m_core.setDisplayUrl(displayUrl);
    Q_EMIT displayUrlChanged();
    Q_EMIT coreChanged();
}

QString WebPageObject::displayUrl() const {
    return m_core.displayUrl();
}

void WebPageObject::setDocument(DocumentObject* document) {
    if(m_document == document) return;
    if(m_document) delete m_document;
    m_document = document;
    if(m_document) {
        m_document->setParent(this);
        m_core.setDocument(m_document->core());
        connect(m_document, SIGNAL(coreChanged()), SLOT(coreDocumentChanged()));
    }
    Q_EMIT documentChanged();
    Q_EMIT coreChanged();
}

DocumentObject*  WebPageObject::document() const {
    return m_document;
}

void WebPageObject::setDuration(qint32 duration) {
    if(m_core.duration() == duration) return;
    m_core.setDuration(duration);
    Q_EMIT durationChanged();
    Q_EMIT coreChanged();
}

qint32 WebPageObject::duration() const {
    return m_core.duration();
}

void WebPageObject::setEmbedHeight(qint32 embedHeight) {
    if(m_core.embedHeight() == embedHeight) return;
    m_core.setEmbedHeight(embedHeight);
    Q_EMIT embedHeightChanged();
    Q_EMIT coreChanged();
}

qint32 WebPageObject::embedHeight() const {
    return m_core.embedHeight();
}

void WebPageObject::setEmbedType(const QString &embedType) {
    if(m_core.embedType() == embedType) return;
    m_core.setEmbedType(embedType);
    Q_EMIT embedTypeChanged();
    Q_EMIT coreChanged();
}

QString WebPageObject::embedType() const {
    return m_core.embedType();
}

void WebPageObject::setEmbedUrl(const QString &embedUrl) {
    if(m_core.embedUrl() == embedUrl) return;
    m_core.setEmbedUrl(embedUrl);
    Q_EMIT embedUrlChanged();
    Q_EMIT coreChanged();
}

QString WebPageObject::embedUrl() const {
    return m_core.embedUrl();
}

void WebPageObject::setEmbedWidth(qint32 embedWidth) {
    if(m_core.embedWidth() == embedWidth) return;
    m_core.setEmbedWidth(embedWidth);
    Q_EMIT embedWidthChanged();
    Q_EMIT coreChanged();
}

qint32 WebPageObject::embedWidth() const {
    return m_core.embedWidth();
}

void WebPageObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 WebPageObject::flags() const {
    return m_core.flags();
}

void WebPageObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint64 WebPageObject::id() const {
    return m_core.id();
}

void WebPageObject::setPhoto(PhotoObject* photo) {
    if(m_photo == photo) return;
    if(m_photo) delete m_photo;
    m_photo = photo;
    if(m_photo) {
        m_photo->setParent(this);
        m_core.setPhoto(m_photo->core());
        connect(m_photo, SIGNAL(coreChanged()), SLOT(corePhotoChanged()));
    }
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

PhotoObject*  WebPageObject::photo() const {
    return m_photo;
}

void WebPageObject::setSiteName(const QString &siteName) {
    if(m_core.siteName() == siteName) return;
    m_core.setSiteName(siteName);
    Q_EMIT siteNameChanged();
    Q_EMIT coreChanged();
}

QString WebPageObject::siteName() const {
    return m_core.siteName();
}

void WebPageObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

QString WebPageObject::title() const {
    return m_core.title();
}

void WebPageObject::setType(const QString &type) {
    if(m_core.type() == type) return;
    m_core.setType(type);
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
}

QString WebPageObject::type() const {
    return m_core.type();
}

void WebPageObject::setUrl(const QString &url) {
    if(m_core.url() == url) return;
    m_core.setUrl(url);
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
}

QString WebPageObject::url() const {
    return m_core.url();
}

WebPageObject &WebPageObject::operator =(const WebPage &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_document->setCore(b.document());
    m_photo->setCore(b.photo());

    Q_EMIT authorChanged();
    Q_EMIT dateChanged();
    Q_EMIT descriptionChanged();
    Q_EMIT displayUrlChanged();
    Q_EMIT documentChanged();
    Q_EMIT durationChanged();
    Q_EMIT embedHeightChanged();
    Q_EMIT embedTypeChanged();
    Q_EMIT embedUrlChanged();
    Q_EMIT embedWidthChanged();
    Q_EMIT flagsChanged();
    Q_EMIT idChanged();
    Q_EMIT photoChanged();
    Q_EMIT siteNameChanged();
    Q_EMIT titleChanged();
    Q_EMIT typeChanged();
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool WebPageObject::operator ==(const WebPage &b) const {
    return m_core == b;
}

void WebPageObject::setClassType(int classType) {
    WebPage::WebPageType result;
    switch(classType) {
    case TypeWebPageEmpty:
        result = WebPage::typeWebPageEmpty;
        break;
    case TypeWebPagePending:
        result = WebPage::typeWebPagePending;
        break;
    case TypeWebPage:
        result = WebPage::typeWebPage;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int WebPageObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case WebPage::typeWebPageEmpty:
        result = TypeWebPageEmpty;
        break;
    case WebPage::typeWebPagePending:
        result = TypeWebPagePending;
        break;
    case WebPage::typeWebPage:
        result = TypeWebPage;
        break;
    }

    return result;
}

void WebPageObject::setCore(const WebPage &core) {
    operator =(core);
}

WebPage WebPageObject::core() const {
    return m_core;
}

void WebPageObject::coreDocumentChanged() {
    if(m_core.document() == m_document->core()) return;
    m_core.setDocument(m_document->core());
    Q_EMIT documentChanged();
    Q_EMIT coreChanged();
}

void WebPageObject::corePhotoChanged() {
    if(m_core.photo() == m_photo->core()) return;
    m_core.setPhoto(m_photo->core());
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}
