// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputvideoobject.h"

InputVideoObject::InputVideoObject(const InputVideo &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

InputVideoObject::InputVideoObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

InputVideoObject::~InputVideoObject() {
}

void InputVideoObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

qint64 InputVideoObject::accessHash() const {
    return m_core.accessHash();
}

void InputVideoObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint64 InputVideoObject::id() const {
    return m_core.id();
}

InputVideoObject &InputVideoObject::operator =(const InputVideo &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT accessHashChanged();
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool InputVideoObject::operator ==(const InputVideo &b) const {
    return m_core == b;
}

void InputVideoObject::setClassType(int classType) {
    InputVideo::InputVideoType result;
    switch(classType) {
    case TypeInputVideoEmpty:
        result = InputVideo::typeInputVideoEmpty;
        break;
    case TypeInputVideo:
        result = InputVideo::typeInputVideo;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int InputVideoObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case InputVideo::typeInputVideoEmpty:
        result = TypeInputVideoEmpty;
        break;
    case InputVideo::typeInputVideo:
        result = TypeInputVideo;
        break;
    }

    return result;
}

void InputVideoObject::setCore(const InputVideo &core) {
    operator =(core);
}

InputVideo InputVideoObject::core() const {
    return m_core;
}
