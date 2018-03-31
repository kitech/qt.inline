//  header block begin
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h
#ifndef protected
#define protected public
#endif
#include <qqmlwebchannel.h>
#include <QtWebChannel>
#include "callback_inherit.h"

// QQmlWebChannel is pure virtual: false
// QQmlWebChannel has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlWebChannel : public QQmlWebChannel {
public:
  virtual ~MyQQmlWebChannel() {}
// void QQmlWebChannel(QObject *)
MyQQmlWebChannel(QObject * parent) : QQmlWebChannel(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QQmlWebChannel10metaObjectEv(void *this_) {
  return (void*)((QQmlWebChannel*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:62
// [-2] void QQmlWebChannel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannelC2EP7QObject(QObject * parent) {
  return  new QQmlWebChannel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:63
// [-2] void ~QQmlWebChannel()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannelD2Ev(void *this_) {
  delete (QQmlWebChannel*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:70
// [8] QQmlWebChannelAttached * qmlAttachedProperties(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannel21qmlAttachedPropertiesEP7QObject(QObject * obj) {
  return (void*)QQmlWebChannel::qmlAttachedProperties(obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:72
// [-2] void connectTo(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel9connectToEP7QObject(void *this_, QObject * transport) {
  ((QQmlWebChannel*)this_)->connectTo(transport);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:73
// [-2] void disconnectFrom(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel14disconnectFromEP7QObject(void *this_, QObject * transport) {
  ((QQmlWebChannel*)this_)->disconnectFrom(transport);
}

//  main block end
