//  header block begin
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h
#ifndef protected
#define protected public
#define private public
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlWebChannel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QQmlWebChannel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlWebChannel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlWebChannel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlWebChannel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:62
// [-2] void QQmlWebChannel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlWebChannelC2EP7QObject(QObject * parent) {
  return  new MyQQmlWebChannel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:63
// [-2] void ~QQmlWebChannel()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannelD2Ev(void *this_) {
  delete (QQmlWebChannel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:65
// [-2] void registerObjects(const QVariantMap &)
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel15registerObjectsERK4QMapI7QString8QVariantE(void *this_, const QVariantMap & objects) {
  ((QQmlWebChannel*)this_)->registerObjects(objects);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:66
// [64] QQmlListProperty<QObject> registeredObjects()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel17registeredObjectsEv(void *this_) {
  auto rv = ((QQmlWebChannel*)this_)->registeredObjects();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:68
// [64] QQmlListProperty<QObject> transports()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlWebChannel10transportsEv(void *this_) {
  auto rv = ((QQmlWebChannel*)this_)->transports();
/*return rv;*/
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
