//  header block begin
// since 0x050400
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebchannelabstracttransport.h>
#include <QtWebChannel>
#include "callback_inherit.h"

// QWebChannelAbstractTransport is pure virtual: true
// QWebChannelAbstractTransport has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebChannelAbstractTransport : public QWebChannelAbstractTransport {
public:
  virtual ~MyQWebChannelAbstractTransport() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void sendMessage(const QJsonObject &)
  virtual void sendMessage(const QJsonObject & message)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sendMessage", &handled, 1, (uint64_t)&message, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QWebChannelAbstractTransport::sendMessage(message);
  }
  }

// void QWebChannelAbstractTransport(QObject *)
MyQWebChannelAbstractTransport(QObject * parent) : QWebChannelAbstractTransport(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:57
// [-2] void sendMessage(const QJsonObject &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QWebChannelAbstractTransport10metaObjectEv(void *this_) {
  return (void*)((QWebChannelAbstractTransport*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QWebChannelAbstractTransport11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebChannelAbstractTransport*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN28QWebChannelAbstractTransport11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebChannelAbstractTransport*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QWebChannelAbstractTransport2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebChannelAbstractTransport::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QWebChannelAbstractTransport6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebChannelAbstractTransport::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:53
// [-2] void QWebChannelAbstractTransport(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QWebChannelAbstractTransportC2EP7QObject(QObject * parent) {
  return 0; // new QWebChannelAbstractTransport(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:54
// [-2] void ~QWebChannelAbstractTransport()
extern "C" Q_DECL_EXPORT
void C_ZN28QWebChannelAbstractTransportD2Ev(void *this_) {
  delete (QWebChannelAbstractTransport*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:57
// [-2] void sendMessage(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void C_ZN28QWebChannelAbstractTransport11sendMessageERK11QJsonObject(void *this_, QJsonObject* message) {
  ((QWebChannelAbstractTransport*)this_)->sendMessage(*message);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:60
// [-2] void messageReceived(const QJsonObject &, QWebChannelAbstractTransport *)
extern "C" Q_DECL_EXPORT
void C_ZN28QWebChannelAbstractTransport15messageReceivedERK11QJsonObjectPS_(void *this_, QJsonObject* message, QWebChannelAbstractTransport * transport) {
  ((QWebChannelAbstractTransport*)this_)->messageReceived(*message, transport);
}

//  main block end
