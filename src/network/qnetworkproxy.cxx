//  header block begin

// since 0x040100
// /usr/include/qt/QtNetwork/qnetworkproxy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxy is pure virtual: false
// QNetworkProxy has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkProxy_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkProxy_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkProxy_t qt_meta_stringdata_MyQNetworkProxy = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQNetworkProxy"
  },
  "MyQNetworkProxy"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkProxy[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQNetworkProxy : public QNetworkProxy {
public:
  virtual ~MyQNetworkProxy() {}
// void QNetworkProxy()
MyQNetworkProxy() : QNetworkProxy() {}
// void QNetworkProxy(QNetworkProxy::ProxyType, const QString &, quint16, const QString &, const QString &)
MyQNetworkProxy(QNetworkProxy::ProxyType type_, const QString & hostName, quint16 port, const QString & user, const QString & password) : QNetworkProxy(type_, hostName, port, user, password) {}
// void QNetworkProxy(const QNetworkProxy &)
MyQNetworkProxy(const QNetworkProxy & other) : QNetworkProxy(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:160
// [-2] void QNetworkProxy()
extern "C" Q_DECL_EXPORT
void* C_ZN13QNetworkProxyC2Ev() {
  return  new QNetworkProxy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:161
// [-2] void QNetworkProxy(QNetworkProxy::ProxyType, const QString &, quint16, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QNetworkProxyC2ENS_9ProxyTypeERK7QStringtS3_S3_(QNetworkProxy::ProxyType type_, QString* hostName, quint16 port, QString* user, QString* password) {
  return  new QNetworkProxy(type_, *hostName, port, *user, *password);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:163
// [-2] void QNetworkProxy(const QNetworkProxy &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QNetworkProxyC2ERKS_(QNetworkProxy* other) {
  return  new QNetworkProxy(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:165
// [8] QNetworkProxy & operator=(QNetworkProxy &&)
extern "C" Q_DECL_EXPORT
void* C_ZN13QNetworkProxyaSEOS_(void *this_, QNetworkProxy && other) {
  auto& rv = ((QNetworkProxy*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:167
// [8] QNetworkProxy & operator=(const QNetworkProxy &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QNetworkProxyaSERKS_(void *this_, QNetworkProxy* other) {
  auto& rv = ((QNetworkProxy*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:168
// [-2] void ~QNetworkProxy()
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxyD2Ev(void *this_) {
  delete (QNetworkProxy*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkproxy.h:170
// [-2] void swap(QNetworkProxy &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy4swapERS_(void *this_, QNetworkProxy* other) {
  ((QNetworkProxy*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:172
// [1] bool operator==(const QNetworkProxy &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QNetworkProxyeqERKS_(void *this_, QNetworkProxy* other) {
  return (bool)((QNetworkProxy*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:173
// [1] bool operator!=(const QNetworkProxy &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QNetworkProxyneERKS_(void *this_, QNetworkProxy* other) {
  return (bool)((QNetworkProxy*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:176
// [-2] void setType(QNetworkProxy::ProxyType)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy7setTypeENS_9ProxyTypeE(void *this_, QNetworkProxy::ProxyType type_) {
  ((QNetworkProxy*)this_)->setType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:177
// [4] QNetworkProxy::ProxyType type()
extern "C" Q_DECL_EXPORT
QNetworkProxy::ProxyType C_ZNK13QNetworkProxy4typeEv(void *this_) {
  return (QNetworkProxy::ProxyType)((QNetworkProxy*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:179
// [-2] void setCapabilities(QNetworkProxy::Capabilities)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy15setCapabilitiesE6QFlagsINS_10CapabilityEE(void *this_, QFlags<QNetworkProxy::Capability> capab) {
  ((QNetworkProxy*)this_)->setCapabilities(capab);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkproxy.h:180
// [4] QNetworkProxy::Capabilities capabilities()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QNetworkProxy::Capabilities* C_ZNK13QNetworkProxy12capabilitiesEv(void *this_) {
  auto rv = ((QNetworkProxy*)this_)->capabilities();
return new QNetworkProxy::Capabilities(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtNetwork/qnetworkproxy.h:181
// [1] bool isCachingProxy()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZNK13QNetworkProxy14isCachingProxyEv(void *this_) {
  return (bool)((QNetworkProxy*)this_)->isCachingProxy();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtNetwork/qnetworkproxy.h:182
// [1] bool isTransparentProxy()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZNK13QNetworkProxy18isTransparentProxyEv(void *this_) {
  return (bool)((QNetworkProxy*)this_)->isTransparentProxy();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:184
// [-2] void setUser(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy7setUserERK7QString(void *this_, QString* userName) {
  ((QNetworkProxy*)this_)->setUser(*userName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:185
// [8] QString user()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkProxy4userEv(void *this_) {
  auto rv = ((QNetworkProxy*)this_)->user();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:187
// [-2] void setPassword(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy11setPasswordERK7QString(void *this_, QString* password) {
  ((QNetworkProxy*)this_)->setPassword(*password);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:188
// [8] QString password()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkProxy8passwordEv(void *this_) {
  auto rv = ((QNetworkProxy*)this_)->password();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:190
// [-2] void setHostName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy11setHostNameERK7QString(void *this_, QString* hostName) {
  ((QNetworkProxy*)this_)->setHostName(*hostName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:191
// [8] QString hostName()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkProxy8hostNameEv(void *this_) {
  auto rv = ((QNetworkProxy*)this_)->hostName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:193
// [-2] void setPort(quint16)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy7setPortEt(void *this_, quint16 port) {
  ((QNetworkProxy*)this_)->setPort(port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:194
// [2] quint16 port()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK13QNetworkProxy4portEv(void *this_) {
  return (quint16)((QNetworkProxy*)this_)->port();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:196
// [-2] void setApplicationProxy(const QNetworkProxy &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy19setApplicationProxyERKS_(QNetworkProxy* proxy) {
  QNetworkProxy::setApplicationProxy(*proxy);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:197
// [8] QNetworkProxy applicationProxy()
extern "C" Q_DECL_EXPORT
void* C_ZN13QNetworkProxy16applicationProxyEv() {
  auto rv = QNetworkProxy::applicationProxy();
return new QNetworkProxy(rv);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkproxy.h:200
// [16] QVariant header(QNetworkRequest::KnownHeaders)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkProxy6headerEN15QNetworkRequest12KnownHeadersE(void *this_, QNetworkRequest::KnownHeaders header) {
  auto rv = ((QNetworkProxy*)this_)->header(header);
return new QVariant(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkproxy.h:201
// [-2] void setHeader(QNetworkRequest::KnownHeaders, const QVariant &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant(void *this_, QNetworkRequest::KnownHeaders header, QVariant* value) {
  ((QNetworkProxy*)this_)->setHeader(header, *value);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkproxy.h:204
// [1] bool hasRawHeader(const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK13QNetworkProxy12hasRawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  return (bool)((QNetworkProxy*)this_)->hasRawHeader(*headerName);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkproxy.h:205
// [8] QList<QByteArray> rawHeaderList()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK13QNetworkProxy13rawHeaderListEv(void *this_) {
  auto rv = ((QNetworkProxy*)this_)->rawHeaderList();
return new QList<QByteArray>(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkproxy.h:206
// [8] QByteArray rawHeader(const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkProxy9rawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  auto rv = ((QNetworkProxy*)this_)->rawHeader(*headerName);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkproxy.h:207
// [-2] void setRawHeader(const QByteArray &, const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkProxy12setRawHeaderERK10QByteArrayS2_(void *this_, QByteArray* headerName, QByteArray* value) {
  ((QNetworkProxy*)this_)->setRawHeader(*headerName, *value);
}
#endif // QT_VERSION >= 0x050000

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
