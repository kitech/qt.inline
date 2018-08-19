//  header block begin
// since 0x050400
// /usr/include/qt/QtWebChannel/qwebchannel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebchannel.h>
#include <QtWebChannel>
#include "callback_inherit.h"

// QWebChannel is pure virtual: false
// QWebChannel has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebChannel : public QWebChannel {
public:
  virtual ~MyQWebChannel() {}
// void QWebChannel(QObject *)
MyQWebChannel(QObject * parent) : QWebChannel(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWebChannel10metaObjectEv(void *this_) {
  return (void*)((QWebChannel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWebChannel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebChannel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QWebChannel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebChannel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWebChannel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebChannel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWebChannel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebChannel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:60
// [-2] void QWebChannel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWebChannelC2EP7QObject(QObject * parent) {
  return  new QWebChannel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:61
// [-2] void ~QWebChannel()
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannelD2Ev(void *this_) {
  delete (QWebChannel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:63
// [-2] void registerObjects(const QHash<QString, QObject *> &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel15registerObjectsERK5QHashI7QStringP7QObjectE(void *this_, QHash<QString, QObject *>* objects) {
  ((QWebChannel*)this_)->registerObjects(*objects);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:64
// [-2] QHash<QString, QObject *> registeredObjects()
extern "C" Q_DECL_EXPORT
void C_ZNK11QWebChannel17registeredObjectsEv(void *this_) {
  auto rv = ((QWebChannel*)this_)->registeredObjects();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:65
// [-2] void registerObject(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel14registerObjectERK7QStringP7QObject(void *this_, QString* id, QObject * object) {
  ((QWebChannel*)this_)->registerObject(*id, object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:66
// [-2] void deregisterObject(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel16deregisterObjectEP7QObject(void *this_, QObject * object) {
  ((QWebChannel*)this_)->deregisterObject(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:68
// [1] bool blockUpdates()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QWebChannel12blockUpdatesEv(void *this_) {
  return (bool)((QWebChannel*)this_)->blockUpdates();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:70
// [-2] void setBlockUpdates(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel15setBlockUpdatesEb(void *this_, bool block) {
  ((QWebChannel*)this_)->setBlockUpdates(block);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:73
// [-2] void blockUpdatesChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel19blockUpdatesChangedEb(void *this_, bool block) {
  ((QWebChannel*)this_)->blockUpdatesChanged(block);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:76
// [-2] void connectTo(QWebChannelAbstractTransport *)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel9connectToEP28QWebChannelAbstractTransport(void *this_, QWebChannelAbstractTransport * transport) {
  ((QWebChannel*)this_)->connectTo(transport);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:77
// [-2] void disconnectFrom(QWebChannelAbstractTransport *)
extern "C" Q_DECL_EXPORT
void C_ZN11QWebChannel14disconnectFromEP28QWebChannelAbstractTransport(void *this_, QWebChannelAbstractTransport * transport) {
  ((QWebChannel*)this_)->disconnectFrom(transport);
}

//  main block end
