// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "peernotifyevents.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

PeerNotifyEvents::PeerNotifyEvents(PeerNotifyEventsType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

PeerNotifyEvents::PeerNotifyEvents(InboundPkt *in) :
    m_classType(typePeerNotifyEventsEmpty)
{
    fetch(in);
}

PeerNotifyEvents::~PeerNotifyEvents() {
}

bool PeerNotifyEvents::operator ==(const PeerNotifyEvents &b) {
    Q_UNUSED(b);
    return true;
}

void PeerNotifyEvents::setClassType(PeerNotifyEvents::PeerNotifyEventsType classType) {
    m_classType = classType;
}

PeerNotifyEvents::PeerNotifyEventsType PeerNotifyEvents::classType() const {
    return m_classType;
}

bool PeerNotifyEvents::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePeerNotifyEventsEmpty: {
        m_classType = static_cast<PeerNotifyEventsType>(x);
        return true;
    }
        break;
    
    case typePeerNotifyEventsAll: {
        m_classType = static_cast<PeerNotifyEventsType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool PeerNotifyEvents::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePeerNotifyEventsEmpty: {
        return true;
    }
        break;
    
    case typePeerNotifyEventsAll: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

