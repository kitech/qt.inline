// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworkproxy.h
// dst-file: /src/network/qnetworkproxy.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworkproxy.h>


#include <qstring.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qvariant.h>
#include <qglobal.h>
#include <qnetworkproxy.h>
#include <qnetworkinterface.h>
#include <qurl.h>
#include <qnetworkconfiguration.h>
// <= header block end

// main block begin =>
void __keep_qnetworkproxy_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 145, column 10>
//   // proto:  void QNetworkProxy::swap(QNetworkProxy & other);
if (true) {
  auto f = [](QNetworkProxy flythis, QNetworkProxy & arg1) {
    ((QNetworkProxy*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy4swapERS_ swap(class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 80, column 10>
//   // proto:  void QNetworkProxyQuery::swap(QNetworkProxyQuery & other);
if (true) {
  auto f = [](QNetworkProxyQuery flythis, QNetworkProxyQuery & arg1) {
    ((QNetworkProxyQuery*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QNetworkProxyQuery4swapERS_ swap(class QNetworkProxyQuery &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkProxy_Class_Size()
{
  return sizeof(QNetworkProxy);
}

extern "C"
int QNetworkProxyFactory_Class_Size()
{
  return sizeof(QNetworkProxyFactory);
}

extern "C"
int QNetworkProxyQuery_Class_Size()
{
  return sizeof(QNetworkProxyQuery);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 172, column 26>
//   // proto: static QNetworkProxy QNetworkProxy::applicationProxy();
// _ZN13QNetworkProxy16applicationProxyEv applicationProxy()
extern "C"
QNetworkProxy*
C_ZN13QNetworkProxy16applicationProxyEv() {
  auto ret =
  QNetworkProxy::applicationProxy();
  return new QNetworkProxy(ret); // 5
}
//   // proto:  void QNetworkProxy::~QNetworkProxy();
extern "C"
void C_ZN13QNetworkProxyD2Ev(void *qthis) {
  delete (QNetworkProxy*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 166, column 13>
//   // proto:  QString QNetworkProxy::hostName();
// _ZNK13QNetworkProxy8hostNameEv hostName()
extern "C"
QString*
C_ZNK13QNetworkProxy8hostNameEv(void *qthis) {
  auto ret =
  ((QNetworkProxy*)qthis)->hostName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 138, column 5>
//   // proto:  void QNetworkProxy::QNetworkProxy();
extern "C"
QNetworkProxy*
C_ZN13QNetworkProxyC2Ev() {
  auto ret = new QNetworkProxy();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 180, column 23>
//   // proto:  QList<QByteArray> QNetworkProxy::rawHeaderList();
// _ZNK13QNetworkProxy13rawHeaderListEv rawHeaderList()
extern "C"
QList<QByteArray>*
C_ZNK13QNetworkProxy13rawHeaderListEv(void *qthis) {
  auto ret =
  ((QNetworkProxy*)qthis)->rawHeaderList();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 171, column 17>
//   // proto: static void QNetworkProxy::setApplicationProxy(const QNetworkProxy & proxy);
// _ZN13QNetworkProxy19setApplicationProxyERKS_ setApplicationProxy(const class QNetworkProxy &)
extern "C"
void
C_ZN13QNetworkProxy19setApplicationProxyERKS_(const QNetworkProxy* arg1) {
  QNetworkProxy::setApplicationProxy(*((const QNetworkProxy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 155, column 18>
//   // proto:  Capabilities QNetworkProxy::capabilities();
// _ZNK13QNetworkProxy12capabilitiesEv capabilities()
extern "C"
QFlags<QNetworkProxy::Capability>*
C_ZNK13QNetworkProxy12capabilitiesEv(void *qthis) {
  auto ret =
  ((QNetworkProxy*)qthis)->capabilities();
  return new QFlags<QNetworkProxy::Capability>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 154, column 10>
//   // proto:  void QNetworkProxy::setCapabilities(Capabilities capab);
// _ZN13QNetworkProxy15setCapabilitiesE6QFlagsINS_10CapabilityEE setCapabilities(Capabilities)
extern "C"
void
C_ZN13QNetworkProxy15setCapabilitiesE6QFlagsINS_10CapabilityEE(void *qthis,
QNetworkProxy::Capabilities arg1) {
  ((QNetworkProxy*)qthis)->setCapabilities(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 165, column 10>
//   // proto:  void QNetworkProxy::setHostName(const QString & hostName);
// _ZN13QNetworkProxy11setHostNameERK7QString setHostName(const class QString &)
extern "C"
void
C_ZN13QNetworkProxy11setHostNameERK7QString(void *qthis,
const QString* arg1) {
  ((QNetworkProxy*)qthis)->setHostName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 160, column 13>
//   // proto:  QString QNetworkProxy::user();
// _ZNK13QNetworkProxy4userEv user()
extern "C"
QString*
C_ZNK13QNetworkProxy4userEv(void *qthis) {
  auto ret =
  ((QNetworkProxy*)qthis)->user();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 163, column 13>
//   // proto:  QString QNetworkProxy::password();
// _ZNK13QNetworkProxy8passwordEv password()
extern "C"
QString*
C_ZNK13QNetworkProxy8passwordEv(void *qthis) {
  auto ret =
  ((QNetworkProxy*)qthis)->password();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 181, column 16>
//   // proto:  QByteArray QNetworkProxy::rawHeader(const QByteArray & headerName);
// _ZNK13QNetworkProxy9rawHeaderERK10QByteArray rawHeader(const class QByteArray &)
extern "C"
QByteArray*
C_ZNK13QNetworkProxy9rawHeaderERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QNetworkProxy*)qthis)->rawHeader(*((const QByteArray*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 157, column 10>
//   // proto:  bool QNetworkProxy::isTransparentProxy();
// _ZNK13QNetworkProxy18isTransparentProxyEv isTransparentProxy()
extern "C"
bool
C_ZNK13QNetworkProxy18isTransparentProxyEv(void *qthis) {
  auto ret =
  ((QNetworkProxy*)qthis)->isTransparentProxy();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 151, column 10>
//   // proto:  void QNetworkProxy::setType(QNetworkProxy::ProxyType type);
// _ZN13QNetworkProxy7setTypeENS_9ProxyTypeE setType(class QNetworkProxy::ProxyType)
extern "C"
void
C_ZN13QNetworkProxy7setTypeENS_9ProxyTypeE(void *qthis,
QNetworkProxy::ProxyType* arg1) {
  ((QNetworkProxy*)qthis)->setType(*((QNetworkProxy::ProxyType*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 162, column 10>
//   // proto:  void QNetworkProxy::setPassword(const QString & password);
// _ZN13QNetworkProxy11setPasswordERK7QString setPassword(const class QString &)
extern "C"
void
C_ZN13QNetworkProxy11setPasswordERK7QString(void *qthis,
const QString* arg1) {
  ((QNetworkProxy*)qthis)->setPassword(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 141, column 5>
//   // proto:  void QNetworkProxy::QNetworkProxy(const QNetworkProxy & other);
extern "C"
QNetworkProxy*
C_ZN13QNetworkProxyC2ERKS_(const QNetworkProxy* arg1) {
  auto ret = new QNetworkProxy(*((const QNetworkProxy*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 152, column 30>
//   // proto:  QNetworkProxy::ProxyType QNetworkProxy::type();
// _ZNK13QNetworkProxy4typeEv type()
extern "C"
QNetworkProxy::ProxyType
C_ZNK13QNetworkProxy4typeEv(void *qthis) {
  auto ret =
  ((QNetworkProxy*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 179, column 10>
//   // proto:  bool QNetworkProxy::hasRawHeader(const QByteArray & headerName);
// _ZNK13QNetworkProxy12hasRawHeaderERK10QByteArray hasRawHeader(const class QByteArray &)
extern "C"
bool
C_ZNK13QNetworkProxy12hasRawHeaderERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QNetworkProxy*)qthis)->hasRawHeader(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 139, column 5>
//   // proto:  void QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType type, const QString & hostName, quint16 port, const QString & user, const QString & password);
extern "C"
QNetworkProxy*
C_ZN13QNetworkProxyC2ENS_9ProxyTypeERK7QStringtS3_S3_(QNetworkProxy::ProxyType arg1,
const QString* arg2,
quint16 arg3,
const QString* arg4,
const QString* arg5) {
  auto ret = new QNetworkProxy(arg1, *((const QString*)arg2), arg3, *((const QString*)arg4), *((const QString*)arg5));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 175, column 14>
//   // proto:  QVariant QNetworkProxy::header(QNetworkRequest::KnownHeaders header);
// _ZNK13QNetworkProxy6headerEN15QNetworkRequest12KnownHeadersE header(class QNetworkRequest::KnownHeaders)
extern "C"
QVariant*
C_ZNK13QNetworkProxy6headerEN15QNetworkRequest12KnownHeadersE(void *qthis,
QNetworkRequest::KnownHeaders* arg1) {
  auto ret =
  ((QNetworkProxy*)qthis)->header(*((QNetworkRequest::KnownHeaders*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 145, column 10>
//   // proto:  void QNetworkProxy::swap(QNetworkProxy & other);
// _ZN13QNetworkProxy4swapERS_ swap(class QNetworkProxy &)
extern "C"
void
C_ZN13QNetworkProxy4swapERS_(void *qthis,
QNetworkProxy* arg1) {
  ((QNetworkProxy*)qthis)->swap(*((QNetworkProxy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 169, column 13>
//   // proto:  quint16 QNetworkProxy::port();
// _ZNK13QNetworkProxy4portEv port()
extern "C"
unsigned short
C_ZNK13QNetworkProxy4portEv(void *qthis) {
  auto ret =
  ((QNetworkProxy*)qthis)->port();
  return ret; // 0 TypeKind.USHORT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 159, column 10>
//   // proto:  void QNetworkProxy::setUser(const QString & userName);
// _ZN13QNetworkProxy7setUserERK7QString setUser(const class QString &)
extern "C"
void
C_ZN13QNetworkProxy7setUserERK7QString(void *qthis,
const QString* arg1) {
  ((QNetworkProxy*)qthis)->setUser(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 176, column 10>
//   // proto:  void QNetworkProxy::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value);
// _ZN13QNetworkProxy9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant setHeader(class QNetworkRequest::KnownHeaders, const class QVariant &)
extern "C"
void
C_ZN13QNetworkProxy9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant(void *qthis,
QNetworkRequest::KnownHeaders* arg1,
const QVariant* arg2) {
  ((QNetworkProxy*)qthis)->setHeader(*((QNetworkRequest::KnownHeaders*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 168, column 10>
//   // proto:  void QNetworkProxy::setPort(quint16 port);
// _ZN13QNetworkProxy7setPortEt setPort(quint16)
extern "C"
void
C_ZN13QNetworkProxy7setPortEt(void *qthis,
quint16 arg1) {
  ((QNetworkProxy*)qthis)->setPort(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 182, column 10>
//   // proto:  void QNetworkProxy::setRawHeader(const QByteArray & headerName, const QByteArray & value);
// _ZN13QNetworkProxy12setRawHeaderERK10QByteArrayS2_ setRawHeader(const class QByteArray &, const class QByteArray &)
extern "C"
void
C_ZN13QNetworkProxy12setRawHeaderERK10QByteArrayS2_(void *qthis,
const QByteArray* arg1,
const QByteArray* arg2) {
  ((QNetworkProxy*)qthis)->setRawHeader(*((const QByteArray*)arg1),
*((const QByteArray*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 156, column 10>
//   // proto:  bool QNetworkProxy::isCachingProxy();
// _ZNK13QNetworkProxy14isCachingProxyEv isCachingProxy()
extern "C"
bool
C_ZNK13QNetworkProxy14isCachingProxyEv(void *qthis) {
  auto ret =
  ((QNetworkProxy*)qthis)->isCachingProxy();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 199, column 17>
//   // proto: static void QNetworkProxyFactory::setUseSystemConfiguration(bool enable);
// _ZN20QNetworkProxyFactory25setUseSystemConfigurationEb setUseSystemConfiguration(_Bool)
extern "C"
void
C_ZN20QNetworkProxyFactory25setUseSystemConfigurationEb(bool arg1) {
  QNetworkProxyFactory::setUseSystemConfiguration(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 194, column 5>
//   // proto:  void QNetworkProxyFactory::QNetworkProxyFactory();
extern "C"
QNetworkProxyFactory*
C_ZN20QNetworkProxyFactoryC2Ev() {
  // auto ret = new QNetworkProxyFactory();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 200, column 17>
//   // proto: static void QNetworkProxyFactory::setApplicationProxyFactory(QNetworkProxyFactory * factory);
// _ZN20QNetworkProxyFactory26setApplicationProxyFactoryEPS_ setApplicationProxyFactory(class QNetworkProxyFactory *)
extern "C"
void
C_ZN20QNetworkProxyFactory26setApplicationProxyFactoryEPS_(QNetworkProxyFactory * arg1) {
  QNetworkProxyFactory::setApplicationProxyFactory(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 202, column 33>
//   // proto: static QList<QNetworkProxy> QNetworkProxyFactory::systemProxyForQuery(const QNetworkProxyQuery & query);
// _ZN20QNetworkProxyFactory19systemProxyForQueryERK18QNetworkProxyQuery systemProxyForQuery(const class QNetworkProxyQuery &)
extern "C"
QList<QNetworkProxy>*
C_ZN20QNetworkProxyFactory19systemProxyForQueryERK18QNetworkProxyQuery(const QNetworkProxyQuery* arg1) {
  auto ret =
  QNetworkProxyFactory::systemProxyForQuery(*((const QNetworkProxyQuery*)arg1));
  return new QList<QNetworkProxy>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 197, column 34>
//   // proto:  QList<QNetworkProxy> QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery & query);
// _ZN20QNetworkProxyFactory10queryProxyERK18QNetworkProxyQuery queryProxy(const class QNetworkProxyQuery &)
extern "C"
QList<QNetworkProxy>*
C_ZN20QNetworkProxyFactory10queryProxyERK18QNetworkProxyQuery(void *qthis,
const QNetworkProxyQuery* arg1) {
  auto ret =
  ((QNetworkProxyFactory*)qthis)->queryProxy(*((const QNetworkProxyQuery*)arg1));
  return new QList<QNetworkProxy>(ret); // 5
}
//   // proto:  void QNetworkProxyFactory::~QNetworkProxyFactory();
extern "C"
void C_ZN20QNetworkProxyFactoryD2Ev(void *qthis) {
  delete (QNetworkProxyFactory*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 201, column 33>
//   // proto: static QList<QNetworkProxy> QNetworkProxyFactory::proxyForQuery(const QNetworkProxyQuery & query);
// _ZN20QNetworkProxyFactory13proxyForQueryERK18QNetworkProxyQuery proxyForQuery(const class QNetworkProxyQuery &)
extern "C"
QList<QNetworkProxy>*
C_ZN20QNetworkProxyFactory13proxyForQueryERK18QNetworkProxyQuery(const QNetworkProxyQuery* arg1) {
  auto ret =
  QNetworkProxyFactory::proxyForQuery(*((const QNetworkProxyQuery*)arg1));
  return new QList<QNetworkProxy>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 101, column 10>
//   // proto:  QUrl QNetworkProxyQuery::url();
// _ZNK18QNetworkProxyQuery3urlEv url()
extern "C"
QUrl*
C_ZNK18QNetworkProxyQuery3urlEv(void *qthis) {
  auto ret =
  ((QNetworkProxyQuery*)qthis)->url();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 95, column 9>
//   // proto:  int QNetworkProxyQuery::localPort();
// _ZNK18QNetworkProxyQuery9localPortEv localPort()
extern "C"
int
C_ZNK18QNetworkProxyQuery9localPortEv(void *qthis) {
  auto ret =
  ((QNetworkProxyQuery*)qthis)->localPort();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 62, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
extern "C"
QNetworkProxyQuery*
C_ZN18QNetworkProxyQueryC2ERK7QStringiS2_NS_9QueryTypeE(const QString* arg1,
int arg2,
const QString* arg3,
QNetworkProxyQuery::QueryType arg4) {
  auto ret = new QNetworkProxyQuery(*((const QString*)arg1), arg2, *((const QString*)arg3), arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 106, column 10>
//   // proto:  void QNetworkProxyQuery::setNetworkConfiguration(const QNetworkConfiguration & networkConfiguration);
// _ZN18QNetworkProxyQuery23setNetworkConfigurationERK21QNetworkConfiguration setNetworkConfiguration(const class QNetworkConfiguration &)
extern "C"
void
C_ZN18QNetworkProxyQuery23setNetworkConfigurationERK21QNetworkConfiguration(void *qthis,
const QNetworkConfiguration* arg1) {
  ((QNetworkProxyQuery*)qthis)->setNetworkConfiguration(*((const QNetworkConfiguration*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 99, column 10>
//   // proto:  void QNetworkProxyQuery::setProtocolTag(const QString & protocolTag);
// _ZN18QNetworkProxyQuery14setProtocolTagERK7QString setProtocolTag(const class QString &)
extern "C"
void
C_ZN18QNetworkProxyQuery14setProtocolTagERK7QString(void *qthis,
const QString* arg1) {
  ((QNetworkProxyQuery*)qthis)->setProtocolTag(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 102, column 10>
//   // proto:  void QNetworkProxyQuery::setUrl(const QUrl & url);
// _ZN18QNetworkProxyQuery6setUrlERK4QUrl setUrl(const class QUrl &)
extern "C"
void
C_ZN18QNetworkProxyQuery6setUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QNetworkProxyQuery*)qthis)->setUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 64, column 14>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
extern "C"
QNetworkProxyQuery*
C_ZN18QNetworkProxyQueryC2EtRK7QStringNS_9QueryTypeE(quint16 arg1,
const QString* arg2,
QNetworkProxyQuery::QueryType arg3) {
  auto ret = new QNetworkProxyQuery(arg1, *((const QString*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 86, column 15>
//   // proto:  QNetworkProxyQuery::QueryType QNetworkProxyQuery::queryType();
// _ZNK18QNetworkProxyQuery9queryTypeEv queryType()
extern "C"
QNetworkProxyQuery::QueryType
C_ZNK18QNetworkProxyQuery9queryTypeEv(void *qthis) {
  auto ret =
  ((QNetworkProxyQuery*)qthis)->queryType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 89, column 9>
//   // proto:  int QNetworkProxyQuery::peerPort();
// _ZNK18QNetworkProxyQuery8peerPortEv peerPort()
extern "C"
int
C_ZNK18QNetworkProxyQuery8peerPortEv(void *qthis) {
  auto ret =
  ((QNetworkProxyQuery*)qthis)->peerPort();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 70, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
extern "C"
QNetworkProxyQuery*
C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationRK7QStringiS5_NS_9QueryTypeE(const QNetworkConfiguration* arg1,
const QString* arg2,
int arg3,
const QString* arg4,
QNetworkProxyQuery::QueryType arg5) {
  auto ret = new QNetworkProxyQuery(*((const QNetworkConfiguration*)arg1), *((const QString*)arg2), arg3, *((const QString*)arg4), arg5);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 96, column 10>
//   // proto:  void QNetworkProxyQuery::setLocalPort(int port);
// _ZN18QNetworkProxyQuery12setLocalPortEi setLocalPort(int)
extern "C"
void
C_ZN18QNetworkProxyQuery12setLocalPortEi(void *qthis,
int arg1) {
  ((QNetworkProxyQuery*)qthis)->setLocalPort(arg1);
}
//   // proto:  void QNetworkProxyQuery::~QNetworkProxyQuery();
extern "C"
void C_ZN18QNetworkProxyQueryD2Ev(void *qthis) {
  delete (QNetworkProxyQuery*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 66, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkProxyQuery & other);
extern "C"
QNetworkProxyQuery*
C_ZN18QNetworkProxyQueryC2ERKS_(const QNetworkProxyQuery* arg1) {
  auto ret = new QNetworkProxyQuery(*((const QNetworkProxyQuery*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 93, column 10>
//   // proto:  void QNetworkProxyQuery::setPeerHostName(const QString & hostname);
// _ZN18QNetworkProxyQuery15setPeerHostNameERK7QString setPeerHostName(const class QString &)
extern "C"
void
C_ZN18QNetworkProxyQuery15setPeerHostNameERK7QString(void *qthis,
const QString* arg1) {
  ((QNetworkProxyQuery*)qthis)->setPeerHostName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 68, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType);
extern "C"
QNetworkProxyQuery*
C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationRK4QUrlNS_9QueryTypeE(const QNetworkConfiguration* arg1,
const QUrl* arg2,
QNetworkProxyQuery::QueryType arg3) {
  auto ret = new QNetworkProxyQuery(*((const QNetworkConfiguration*)arg1), *((const QUrl*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 80, column 10>
//   // proto:  void QNetworkProxyQuery::swap(QNetworkProxyQuery & other);
// _ZN18QNetworkProxyQuery4swapERS_ swap(class QNetworkProxyQuery &)
extern "C"
void
C_ZN18QNetworkProxyQuery4swapERS_(void *qthis,
QNetworkProxyQuery* arg1) {
  ((QNetworkProxyQuery*)qthis)->swap(*((QNetworkProxyQuery*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 90, column 10>
//   // proto:  void QNetworkProxyQuery::setPeerPort(int port);
// _ZN18QNetworkProxyQuery11setPeerPortEi setPeerPort(int)
extern "C"
void
C_ZN18QNetworkProxyQuery11setPeerPortEi(void *qthis,
int arg1) {
  ((QNetworkProxyQuery*)qthis)->setPeerPort(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 61, column 14>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType);
extern "C"
QNetworkProxyQuery*
C_ZN18QNetworkProxyQueryC2ERK4QUrlNS_9QueryTypeE(const QUrl* arg1,
QNetworkProxyQuery::QueryType arg2) {
  auto ret = new QNetworkProxyQuery(*((const QUrl*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 105, column 27>
//   // proto:  QNetworkConfiguration QNetworkProxyQuery::networkConfiguration();
// _ZNK18QNetworkProxyQuery20networkConfigurationEv networkConfiguration()
extern "C"
QNetworkConfiguration*
C_ZNK18QNetworkProxyQuery20networkConfigurationEv(void *qthis) {
  auto ret =
  ((QNetworkProxyQuery*)qthis)->networkConfiguration();
  return new QNetworkConfiguration(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 87, column 10>
//   // proto:  void QNetworkProxyQuery::setQueryType(QNetworkProxyQuery::QueryType type);
// _ZN18QNetworkProxyQuery12setQueryTypeENS_9QueryTypeE setQueryType(enum QNetworkProxyQuery::QueryType)
extern "C"
void
C_ZN18QNetworkProxyQuery12setQueryTypeENS_9QueryTypeE(void *qthis,
QNetworkProxyQuery::QueryType arg1) {
  ((QNetworkProxyQuery*)qthis)->setQueryType(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 92, column 13>
//   // proto:  QString QNetworkProxyQuery::peerHostName();
// _ZNK18QNetworkProxyQuery12peerHostNameEv peerHostName()
extern "C"
QString*
C_ZNK18QNetworkProxyQuery12peerHostNameEv(void *qthis) {
  auto ret =
  ((QNetworkProxyQuery*)qthis)->peerHostName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 98, column 13>
//   // proto:  QString QNetworkProxyQuery::protocolTag();
// _ZNK18QNetworkProxyQuery11protocolTagEv protocolTag()
extern "C"
QString*
C_ZNK18QNetworkProxyQuery11protocolTagEv(void *qthis) {
  auto ret =
  ((QNetworkProxyQuery*)qthis)->protocolTag();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 60, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery();
extern "C"
QNetworkProxyQuery*
C_ZN18QNetworkProxyQueryC2Ev() {
  auto ret = new QNetworkProxyQuery();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 73, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
extern "C"
QNetworkProxyQuery*
C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationtRK7QStringNS_9QueryTypeE(const QNetworkConfiguration* arg1,
quint16 arg2,
const QString* arg3,
QNetworkProxyQuery::QueryType arg4) {
  auto ret = new QNetworkProxyQuery(*((const QNetworkConfiguration*)arg1), arg2, *((const QString*)arg3), arg4);
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

