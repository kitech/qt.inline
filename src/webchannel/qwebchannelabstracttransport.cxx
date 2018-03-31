//  header block begin
// since 0x050400
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h
#ifndef protected
#define protected public
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
// void QWebChannelAbstractTransport(QObject *)
MyQWebChannelAbstractTransport(QObject * parent) : QWebChannelAbstractTransport(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QWebChannelAbstractTransport10metaObjectEv(void *this_) {
  return (void*)((QWebChannelAbstractTransport*)this_)->metaObject();
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
