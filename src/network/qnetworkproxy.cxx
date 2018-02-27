//  header block begin
// /usr/include/qt/QtNetwork/qnetworkproxy.h
#ifndef protected
#define protected public
#endif
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxy is pure virtual: false
// QNetworkProxy has virtual projected: false
//  header block end

//  main block begin

class MyQNetworkProxy : public QNetworkProxy {
public:
  virtual ~MyQNetworkProxy() {}
// void QNetworkProxy()
MyQNetworkProxy() : QNetworkProxy() {}
// void QNetworkProxy(enum QNetworkProxy::ProxyType, const class QString &, quint16, const class QString &, const class QString &)
MyQNetworkProxy(QNetworkProxy::ProxyType type_, const QString & hostName, quint16 port, const QString & user, const QString & password) : QNetworkProxy(type_, hostName, port, user, password) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:160
// [-2] void QNetworkProxy()
extern "C"
void* C_ZN13QNetworkProxyC2Ev() {
  return  new QNetworkProxy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:161
// [-2] void QNetworkProxy(enum QNetworkProxy::ProxyType, const class QString &, quint16, const class QString &, const class QString &)
extern "C"
void* C_ZN13QNetworkProxyC2ENS_9ProxyTypeERK7QStringtS3_S3_(QNetworkProxy::ProxyType type_, QString* hostName, quint16 port, QString* user, QString* password) {
  return  new QNetworkProxy(type_, *hostName, port, *user, *password);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:165
// [8] QNetworkProxy & operator=(class QNetworkProxy &&)
extern "C"
void* C_ZN13QNetworkProxyaSEOS_(void *this_, QNetworkProxy && other) {
  auto& rv = ((QNetworkProxy*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:167
// [8] QNetworkProxy & operator=(const class QNetworkProxy &)
extern "C"
void* C_ZN13QNetworkProxyaSERKS_(void *this_, QNetworkProxy* other) {
  auto& rv = ((QNetworkProxy*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:168
// [-2] void ~QNetworkProxy()
extern "C"
void C_ZN13QNetworkProxyD2Ev(void *this_) {
  delete (QNetworkProxy*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:170
// [-2] void swap(class QNetworkProxy &)
extern "C"
void C_ZN13QNetworkProxy4swapERS_(void *this_, QNetworkProxy* other) {
  ((QNetworkProxy*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:172
// [1] bool operator==(const class QNetworkProxy &)
extern "C"
bool C_ZNK13QNetworkProxyeqERKS_(void *this_, QNetworkProxy* other) {
  return (bool)((QNetworkProxy*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:173
// [1] bool operator!=(const class QNetworkProxy &)
extern "C"
bool C_ZNK13QNetworkProxyneERKS_(void *this_, QNetworkProxy* other) {
  return (bool)((QNetworkProxy*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:176
// [-2] void setType(class QNetworkProxy::ProxyType)
extern "C"
void C_ZN13QNetworkProxy7setTypeENS_9ProxyTypeE(void *this_, QNetworkProxy::ProxyType type_) {
  ((QNetworkProxy*)this_)->setType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:177
// [4] QNetworkProxy::ProxyType type()
extern "C"
QNetworkProxy::ProxyType C_ZNK13QNetworkProxy4typeEv(void *this_) {
  return (QNetworkProxy::ProxyType)((QNetworkProxy*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:179
// [-2] void setCapabilities(QNetworkProxy::Capabilities)
extern "C"
void C_ZN13QNetworkProxy15setCapabilitiesE6QFlagsINS_10CapabilityEE(void *this_, QFlags<QNetworkProxy::Capability> capab) {
  ((QNetworkProxy*)this_)->setCapabilities(capab);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:180
// [4] QNetworkProxy::Capabilities capabilities()
extern "C"
QNetworkProxy::Capabilities* C_ZNK13QNetworkProxy12capabilitiesEv(void *this_) {
  auto rv = ((QNetworkProxy*)this_)->capabilities();
return new QNetworkProxy::Capabilities(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:181
// [1] bool isCachingProxy()
extern "C"
bool C_ZNK13QNetworkProxy14isCachingProxyEv(void *this_) {
  return (bool)((QNetworkProxy*)this_)->isCachingProxy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:182
// [1] bool isTransparentProxy()
extern "C"
bool C_ZNK13QNetworkProxy18isTransparentProxyEv(void *this_) {
  return (bool)((QNetworkProxy*)this_)->isTransparentProxy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:184
// [-2] void setUser(const class QString &)
extern "C"
void C_ZN13QNetworkProxy7setUserERK7QString(void *this_, QString* userName) {
  ((QNetworkProxy*)this_)->setUser(*userName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:185
// [8] QString user()
extern "C"
void* C_ZNK13QNetworkProxy4userEv(void *this_) {
  auto rv = ((QNetworkProxy*)this_)->user();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:187
// [-2] void setPassword(const class QString &)
extern "C"
void C_ZN13QNetworkProxy11setPasswordERK7QString(void *this_, QString* password) {
  ((QNetworkProxy*)this_)->setPassword(*password);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:188
// [8] QString password()
extern "C"
void* C_ZNK13QNetworkProxy8passwordEv(void *this_) {
  auto rv = ((QNetworkProxy*)this_)->password();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:190
// [-2] void setHostName(const class QString &)
extern "C"
void C_ZN13QNetworkProxy11setHostNameERK7QString(void *this_, QString* hostName) {
  ((QNetworkProxy*)this_)->setHostName(*hostName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:191
// [8] QString hostName()
extern "C"
void* C_ZNK13QNetworkProxy8hostNameEv(void *this_) {
  auto rv = ((QNetworkProxy*)this_)->hostName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:193
// [-2] void setPort(quint16)
extern "C"
void C_ZN13QNetworkProxy7setPortEt(void *this_, quint16 port) {
  ((QNetworkProxy*)this_)->setPort(port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:194
// [2] quint16 port()
extern "C"
quint16 C_ZNK13QNetworkProxy4portEv(void *this_) {
  return (quint16)((QNetworkProxy*)this_)->port();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:196
// [-2] void setApplicationProxy(const class QNetworkProxy &)
extern "C"
void C_ZN13QNetworkProxy19setApplicationProxyERKS_(QNetworkProxy* proxy) {
  QNetworkProxy::setApplicationProxy(*proxy);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:197
// [8] QNetworkProxy applicationProxy()
extern "C"
void* C_ZN13QNetworkProxy16applicationProxyEv() {
  auto rv = QNetworkProxy::applicationProxy();
return new QNetworkProxy(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:200
// [16] QVariant header(class QNetworkRequest::KnownHeaders)
extern "C"
void* C_ZNK13QNetworkProxy6headerEN15QNetworkRequest12KnownHeadersE(void *this_, QNetworkRequest::KnownHeaders header) {
  auto rv = ((QNetworkProxy*)this_)->header(header);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:201
// [-2] void setHeader(class QNetworkRequest::KnownHeaders, const class QVariant &)
extern "C"
void C_ZN13QNetworkProxy9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant(void *this_, QNetworkRequest::KnownHeaders header, QVariant* value) {
  ((QNetworkProxy*)this_)->setHeader(header, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:204
// [1] bool hasRawHeader(const class QByteArray &)
extern "C"
bool C_ZNK13QNetworkProxy12hasRawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  return (bool)((QNetworkProxy*)this_)->hasRawHeader(*headerName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:206
// [8] QByteArray rawHeader(const class QByteArray &)
extern "C"
void* C_ZNK13QNetworkProxy9rawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  auto rv = ((QNetworkProxy*)this_)->rawHeader(*headerName);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:207
// [-2] void setRawHeader(const class QByteArray &, const class QByteArray &)
extern "C"
void C_ZN13QNetworkProxy12setRawHeaderERK10QByteArrayS2_(void *this_, QByteArray* headerName, QByteArray* value) {
  ((QNetworkProxy*)this_)->setRawHeader(*headerName, *value);
}

//  main block end
