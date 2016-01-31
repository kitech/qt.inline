#include <qnetworkconfiguration.h>
#include <qurl.h>
#include <qnetworkinterface.h>
#include <qglobal.h>
#include <qvariant.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qnetworkproxy.h
// dst-file: /src/network/qnetworkproxy.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworkproxy.h>

extern "C" {

int QNetworkProxy_Class_Size()
{
  return sizeof(QNetworkProxy);
}

int QNetworkProxyFactory_Class_Size()
{
  return sizeof(QNetworkProxyFactory);
}

int QNetworkProxyQuery_Class_Size()
{
  return sizeof(QNetworkProxyQuery);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qnetworkproxy_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 172, column 26>
//   // proto: static QNetworkProxy QNetworkProxy::applicationProxy();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->applicationProxy();
    flythis.applicationProxy();
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy16applicationProxyEv applicationProxy()
//   // proto:  void QNetworkProxy::~QNetworkProxy();
if (true) {
  delete ((QNetworkProxy*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 166, column 13>
//   // proto:  QString QNetworkProxy::hostName();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->hostName();
    flythis.hostName();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy8hostNameEv hostName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 138, column 5>
//   // proto:  void QNetworkProxy::QNetworkProxy();
if (true) {
  auto f = []() {
    new QNetworkProxy();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 180, column 23>
//   // proto:  QList<QByteArray> QNetworkProxy::rawHeaderList();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->rawHeaderList();
    flythis.rawHeaderList();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy13rawHeaderListEv rawHeaderList()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 171, column 17>
//   // proto: static void QNetworkProxy::setApplicationProxy(const QNetworkProxy & proxy);
if (true) {
  auto f = [](QNetworkProxy flythis, const QNetworkProxy & arg1) {
    ((QNetworkProxy*)0)->setApplicationProxy(arg1);
    flythis.setApplicationProxy(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy19setApplicationProxyERKS_ setApplicationProxy(const class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 155, column 18>
//   // proto:  Capabilities QNetworkProxy::capabilities();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->capabilities();
    flythis.capabilities();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy12capabilitiesEv capabilities()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 154, column 10>
//   // proto:  void QNetworkProxy::setCapabilities(Capabilities capab);
if (true) {
  auto f = [](QNetworkProxy flythis, QNetworkProxy::Capabilities arg1) {
    ((QNetworkProxy*)0)->setCapabilities(arg1);
    flythis.setCapabilities(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy15setCapabilitiesE6QFlagsINS_10CapabilityEE setCapabilities(Capabilities)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 165, column 10>
//   // proto:  void QNetworkProxy::setHostName(const QString & hostName);
if (true) {
  auto f = [](QNetworkProxy flythis, const QString & arg1) {
    ((QNetworkProxy*)0)->setHostName(arg1);
    flythis.setHostName(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy11setHostNameERK7QString setHostName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 160, column 13>
//   // proto:  QString QNetworkProxy::user();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->user();
    flythis.user();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy4userEv user()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 163, column 13>
//   // proto:  QString QNetworkProxy::password();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->password();
    flythis.password();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy8passwordEv password()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 181, column 16>
//   // proto:  QByteArray QNetworkProxy::rawHeader(const QByteArray & headerName);
if (true) {
  auto f = [](QNetworkProxy flythis, const QByteArray & arg1) {
    ((QNetworkProxy*)0)->rawHeader(arg1);
    flythis.rawHeader(arg1);
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy9rawHeaderERK10QByteArray rawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 157, column 10>
//   // proto:  bool QNetworkProxy::isTransparentProxy();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->isTransparentProxy();
    flythis.isTransparentProxy();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy18isTransparentProxyEv isTransparentProxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 151, column 10>
//   // proto:  void QNetworkProxy::setType(QNetworkProxy::ProxyType type);
if (true) {
  auto f = [](QNetworkProxy flythis, QNetworkProxy::ProxyType arg1) {
    ((QNetworkProxy*)0)->setType(arg1);
    flythis.setType(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy7setTypeENS_9ProxyTypeE setType(class QNetworkProxy::ProxyType)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 162, column 10>
//   // proto:  void QNetworkProxy::setPassword(const QString & password);
if (true) {
  auto f = [](QNetworkProxy flythis, const QString & arg1) {
    ((QNetworkProxy*)0)->setPassword(arg1);
    flythis.setPassword(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy11setPasswordERK7QString setPassword(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 141, column 5>
//   // proto:  void QNetworkProxy::QNetworkProxy(const QNetworkProxy & other);
if (true) {
  auto f = [](const QNetworkProxy & arg1) {
    new QNetworkProxy(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 152, column 30>
//   // proto:  QNetworkProxy::ProxyType QNetworkProxy::type();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->type();
    flythis.type();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy4typeEv type()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 179, column 10>
//   // proto:  bool QNetworkProxy::hasRawHeader(const QByteArray & headerName);
if (true) {
  auto f = [](QNetworkProxy flythis, const QByteArray & arg1) {
    ((QNetworkProxy*)0)->hasRawHeader(arg1);
    flythis.hasRawHeader(arg1);
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy12hasRawHeaderERK10QByteArray hasRawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 139, column 5>
//   // proto:  void QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType type, const QString & hostName, quint16 port, const QString & user, const QString & password);
if (true) {
  auto f = [](QNetworkProxy::ProxyType arg1, const QString & arg2, quint16 arg3, const QString & arg4, const QString & arg5) {
    new QNetworkProxy(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 175, column 14>
//   // proto:  QVariant QNetworkProxy::header(QNetworkRequest::KnownHeaders header);
if (true) {
  auto f = [](QNetworkProxy flythis, QNetworkRequest::KnownHeaders arg1) {
    ((QNetworkProxy*)0)->header(arg1);
    flythis.header(arg1);
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy6headerEN15QNetworkRequest12KnownHeadersE header(class QNetworkRequest::KnownHeaders)
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 169, column 13>
//   // proto:  quint16 QNetworkProxy::port();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->port();
    flythis.port();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy4portEv port()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 159, column 10>
//   // proto:  void QNetworkProxy::setUser(const QString & userName);
if (true) {
  auto f = [](QNetworkProxy flythis, const QString & arg1) {
    ((QNetworkProxy*)0)->setUser(arg1);
    flythis.setUser(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy7setUserERK7QString setUser(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 176, column 10>
//   // proto:  void QNetworkProxy::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value);
if (true) {
  auto f = [](QNetworkProxy flythis, QNetworkRequest::KnownHeaders arg1, const QVariant & arg2) {
    ((QNetworkProxy*)0)->setHeader(arg1, arg2);
    flythis.setHeader(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant setHeader(class QNetworkRequest::KnownHeaders, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 168, column 10>
//   // proto:  void QNetworkProxy::setPort(quint16 port);
if (true) {
  auto f = [](QNetworkProxy flythis, quint16 arg1) {
    ((QNetworkProxy*)0)->setPort(arg1);
    flythis.setPort(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy7setPortEt setPort(quint16)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 182, column 10>
//   // proto:  void QNetworkProxy::setRawHeader(const QByteArray & headerName, const QByteArray & value);
if (true) {
  auto f = [](QNetworkProxy flythis, const QByteArray & arg1, const QByteArray & arg2) {
    ((QNetworkProxy*)0)->setRawHeader(arg1, arg2);
    flythis.setRawHeader(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkProxy12setRawHeaderERK10QByteArrayS2_ setRawHeader(const class QByteArray &, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 156, column 10>
//   // proto:  bool QNetworkProxy::isCachingProxy();
if (true) {
  auto f = [](QNetworkProxy flythis) {
    ((QNetworkProxy*)0)->isCachingProxy();
    flythis.isCachingProxy();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkProxy14isCachingProxyEv isCachingProxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 199, column 17>
//   // proto: static void QNetworkProxyFactory::setUseSystemConfiguration(bool enable);
if (true) {
  auto f = [](bool arg1) {
    ((QNetworkProxyFactory*)0)->setUseSystemConfiguration(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkProxyFactory25setUseSystemConfigurationEb setUseSystemConfiguration(_Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 194, column 5>
//   // proto:  void QNetworkProxyFactory::QNetworkProxyFactory();
if (true) {
  auto f = []() {
    // new QNetworkProxyFactory();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 200, column 17>
//   // proto: static void QNetworkProxyFactory::setApplicationProxyFactory(QNetworkProxyFactory * factory);
if (true) {
  auto f = [](QNetworkProxyFactory * arg1) {
    ((QNetworkProxyFactory*)0)->setApplicationProxyFactory(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkProxyFactory26setApplicationProxyFactoryEPS_ setApplicationProxyFactory(class QNetworkProxyFactory *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 202, column 33>
//   // proto: static QList<QNetworkProxy> QNetworkProxyFactory::systemProxyForQuery(const QNetworkProxyQuery & query);
if (true) {
  auto f = [](const QNetworkProxyQuery & arg1) {
    ((QNetworkProxyFactory*)0)->systemProxyForQuery(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkProxyFactory19systemProxyForQueryERK18QNetworkProxyQuery systemProxyForQuery(const class QNetworkProxyQuery &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 197, column 34>
//   // proto:  QList<QNetworkProxy> QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery & query);
if (true) {
  auto f = [](const QNetworkProxyQuery & arg1) {
    ((QNetworkProxyFactory*)0)->queryProxy(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkProxyFactory10queryProxyERK18QNetworkProxyQuery queryProxy(const class QNetworkProxyQuery &)
//   // proto:  void QNetworkProxyFactory::~QNetworkProxyFactory();
if (true) {
  delete ((QNetworkProxyFactory*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 201, column 33>
//   // proto: static QList<QNetworkProxy> QNetworkProxyFactory::proxyForQuery(const QNetworkProxyQuery & query);
if (true) {
  auto f = [](const QNetworkProxyQuery & arg1) {
    ((QNetworkProxyFactory*)0)->proxyForQuery(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkProxyFactory13proxyForQueryERK18QNetworkProxyQuery proxyForQuery(const class QNetworkProxyQuery &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 101, column 10>
//   // proto:  QUrl QNetworkProxyQuery::url();
if (true) {
  auto f = [](QNetworkProxyQuery flythis) {
    ((QNetworkProxyQuery*)0)->url();
    flythis.url();
  };
  if (f == nullptr){}
}
// _ZNK18QNetworkProxyQuery3urlEv url()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 95, column 9>
//   // proto:  int QNetworkProxyQuery::localPort();
if (true) {
  auto f = [](QNetworkProxyQuery flythis) {
    ((QNetworkProxyQuery*)0)->localPort();
    flythis.localPort();
  };
  if (f == nullptr){}
}
// _ZNK18QNetworkProxyQuery9localPortEv localPort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 62, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
if (true) {
  auto f = [](const QString & arg1, int arg2, const QString & arg3, QNetworkProxyQuery::QueryType arg4) {
    new QNetworkProxyQuery(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 106, column 10>
//   // proto:  void QNetworkProxyQuery::setNetworkConfiguration(const QNetworkConfiguration & networkConfiguration);
if (true) {
  auto f = [](QNetworkProxyQuery flythis, const QNetworkConfiguration & arg1) {
    ((QNetworkProxyQuery*)0)->setNetworkConfiguration(arg1);
    flythis.setNetworkConfiguration(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QNetworkProxyQuery23setNetworkConfigurationERK21QNetworkConfiguration setNetworkConfiguration(const class QNetworkConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 99, column 10>
//   // proto:  void QNetworkProxyQuery::setProtocolTag(const QString & protocolTag);
if (true) {
  auto f = [](QNetworkProxyQuery flythis, const QString & arg1) {
    ((QNetworkProxyQuery*)0)->setProtocolTag(arg1);
    flythis.setProtocolTag(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QNetworkProxyQuery14setProtocolTagERK7QString setProtocolTag(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 102, column 10>
//   // proto:  void QNetworkProxyQuery::setUrl(const QUrl & url);
if (true) {
  auto f = [](QNetworkProxyQuery flythis, const QUrl & arg1) {
    ((QNetworkProxyQuery*)0)->setUrl(arg1);
    flythis.setUrl(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QNetworkProxyQuery6setUrlERK4QUrl setUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 64, column 14>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
if (true) {
  auto f = [](quint16 arg1, const QString & arg2, QNetworkProxyQuery::QueryType arg3) {
    new QNetworkProxyQuery(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 86, column 15>
//   // proto:  QNetworkProxyQuery::QueryType QNetworkProxyQuery::queryType();
if (true) {
  auto f = [](QNetworkProxyQuery flythis) {
    ((QNetworkProxyQuery*)0)->queryType();
    flythis.queryType();
  };
  if (f == nullptr){}
}
// _ZNK18QNetworkProxyQuery9queryTypeEv queryType()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 89, column 9>
//   // proto:  int QNetworkProxyQuery::peerPort();
if (true) {
  auto f = [](QNetworkProxyQuery flythis) {
    ((QNetworkProxyQuery*)0)->peerPort();
    flythis.peerPort();
  };
  if (f == nullptr){}
}
// _ZNK18QNetworkProxyQuery8peerPortEv peerPort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 70, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
if (true) {
  auto f = [](const QNetworkConfiguration & arg1, const QString & arg2, int arg3, const QString & arg4, QNetworkProxyQuery::QueryType arg5) {
    new QNetworkProxyQuery(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 96, column 10>
//   // proto:  void QNetworkProxyQuery::setLocalPort(int port);
if (true) {
  auto f = [](QNetworkProxyQuery flythis, int arg1) {
    ((QNetworkProxyQuery*)0)->setLocalPort(arg1);
    flythis.setLocalPort(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QNetworkProxyQuery12setLocalPortEi setLocalPort(int)
//   // proto:  void QNetworkProxyQuery::~QNetworkProxyQuery();
if (true) {
  delete ((QNetworkProxyQuery*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 66, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkProxyQuery & other);
if (true) {
  auto f = [](const QNetworkProxyQuery & arg1) {
    new QNetworkProxyQuery(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 93, column 10>
//   // proto:  void QNetworkProxyQuery::setPeerHostName(const QString & hostname);
if (true) {
  auto f = [](QNetworkProxyQuery flythis, const QString & arg1) {
    ((QNetworkProxyQuery*)0)->setPeerHostName(arg1);
    flythis.setPeerHostName(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QNetworkProxyQuery15setPeerHostNameERK7QString setPeerHostName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 68, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType);
if (true) {
  auto f = [](const QNetworkConfiguration & arg1, const QUrl & arg2, QNetworkProxyQuery::QueryType arg3) {
    new QNetworkProxyQuery(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 90, column 10>
//   // proto:  void QNetworkProxyQuery::setPeerPort(int port);
if (true) {
  auto f = [](QNetworkProxyQuery flythis, int arg1) {
    ((QNetworkProxyQuery*)0)->setPeerPort(arg1);
    flythis.setPeerPort(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QNetworkProxyQuery11setPeerPortEi setPeerPort(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 61, column 14>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType);
if (true) {
  auto f = [](const QUrl & arg1, QNetworkProxyQuery::QueryType arg2) {
    new QNetworkProxyQuery(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 105, column 27>
//   // proto:  QNetworkConfiguration QNetworkProxyQuery::networkConfiguration();
if (true) {
  auto f = [](QNetworkProxyQuery flythis) {
    ((QNetworkProxyQuery*)0)->networkConfiguration();
    flythis.networkConfiguration();
  };
  if (f == nullptr){}
}
// _ZNK18QNetworkProxyQuery20networkConfigurationEv networkConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 87, column 10>
//   // proto:  void QNetworkProxyQuery::setQueryType(QNetworkProxyQuery::QueryType type);
if (true) {
  auto f = [](QNetworkProxyQuery flythis, QNetworkProxyQuery::QueryType arg1) {
    ((QNetworkProxyQuery*)0)->setQueryType(arg1);
    flythis.setQueryType(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QNetworkProxyQuery12setQueryTypeENS_9QueryTypeE setQueryType(enum QNetworkProxyQuery::QueryType)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 92, column 13>
//   // proto:  QString QNetworkProxyQuery::peerHostName();
if (true) {
  auto f = [](QNetworkProxyQuery flythis) {
    ((QNetworkProxyQuery*)0)->peerHostName();
    flythis.peerHostName();
  };
  if (f == nullptr){}
}
// _ZNK18QNetworkProxyQuery12peerHostNameEv peerHostName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 98, column 13>
//   // proto:  QString QNetworkProxyQuery::protocolTag();
if (true) {
  auto f = [](QNetworkProxyQuery flythis) {
    ((QNetworkProxyQuery*)0)->protocolTag();
    flythis.protocolTag();
  };
  if (f == nullptr){}
}
// _ZNK18QNetworkProxyQuery11protocolTagEv protocolTag()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 60, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery();
if (true) {
  auto f = []() {
    new QNetworkProxyQuery();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 73, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
if (true) {
  auto f = [](const QNetworkConfiguration & arg1, quint16 arg2, const QString & arg3, QNetworkProxyQuery::QueryType arg4) {
    new QNetworkProxyQuery(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 172, column 26>
//   // proto: static QNetworkProxy QNetworkProxy::applicationProxy();
extern "C"
void C_ZN13QNetworkProxy16applicationProxyEv(void *qthis) {
  ((QNetworkProxy*)qthis)->applicationProxy();
}
// _ZN13QNetworkProxy16applicationProxyEv applicationProxy()
//   // proto:  void QNetworkProxy::~QNetworkProxy();
extern "C"
void C_ZN13QNetworkProxyD2Ev(void *qthis) {
  delete (QNetworkProxy*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 166, column 13>
//   // proto:  QString QNetworkProxy::hostName();
extern "C"
void C_ZNK13QNetworkProxy8hostNameEv(void *qthis) {
  ((QNetworkProxy*)qthis)->hostName();
}
// _ZNK13QNetworkProxy8hostNameEv hostName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 138, column 5>
//   // proto:  void QNetworkProxy::QNetworkProxy();
extern "C"
void C_ZN13QNetworkProxyC2Ev() {
  new QNetworkProxy();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 180, column 23>
//   // proto:  QList<QByteArray> QNetworkProxy::rawHeaderList();
extern "C"
void C_ZNK13QNetworkProxy13rawHeaderListEv(void *qthis) {
  ((QNetworkProxy*)qthis)->rawHeaderList();
}
// _ZNK13QNetworkProxy13rawHeaderListEv rawHeaderList()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 171, column 17>
//   // proto: static void QNetworkProxy::setApplicationProxy(const QNetworkProxy & proxy);
extern "C"
void C_ZN13QNetworkProxy19setApplicationProxyERKS_(void *qthis, const QNetworkProxy & arg1) {
  ((QNetworkProxy*)qthis)->setApplicationProxy(arg1);
}
// _ZN13QNetworkProxy19setApplicationProxyERKS_ setApplicationProxy(const class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 155, column 18>
//   // proto:  Capabilities QNetworkProxy::capabilities();
extern "C"
void C_ZNK13QNetworkProxy12capabilitiesEv(void *qthis) {
  ((QNetworkProxy*)qthis)->capabilities();
}
// _ZNK13QNetworkProxy12capabilitiesEv capabilities()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 154, column 10>
//   // proto:  void QNetworkProxy::setCapabilities(Capabilities capab);
extern "C"
void C_ZN13QNetworkProxy15setCapabilitiesE6QFlagsINS_10CapabilityEE(void *qthis, QNetworkProxy::Capabilities arg1) {
  ((QNetworkProxy*)qthis)->setCapabilities(arg1);
}
// _ZN13QNetworkProxy15setCapabilitiesE6QFlagsINS_10CapabilityEE setCapabilities(Capabilities)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 165, column 10>
//   // proto:  void QNetworkProxy::setHostName(const QString & hostName);
extern "C"
void C_ZN13QNetworkProxy11setHostNameERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkProxy*)qthis)->setHostName(arg1);
}
// _ZN13QNetworkProxy11setHostNameERK7QString setHostName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 160, column 13>
//   // proto:  QString QNetworkProxy::user();
extern "C"
void C_ZNK13QNetworkProxy4userEv(void *qthis) {
  ((QNetworkProxy*)qthis)->user();
}
// _ZNK13QNetworkProxy4userEv user()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 163, column 13>
//   // proto:  QString QNetworkProxy::password();
extern "C"
void C_ZNK13QNetworkProxy8passwordEv(void *qthis) {
  ((QNetworkProxy*)qthis)->password();
}
// _ZNK13QNetworkProxy8passwordEv password()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 181, column 16>
//   // proto:  QByteArray QNetworkProxy::rawHeader(const QByteArray & headerName);
extern "C"
void C_ZNK13QNetworkProxy9rawHeaderERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QNetworkProxy*)qthis)->rawHeader(arg1);
}
// _ZNK13QNetworkProxy9rawHeaderERK10QByteArray rawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 157, column 10>
//   // proto:  bool QNetworkProxy::isTransparentProxy();
extern "C"
void C_ZNK13QNetworkProxy18isTransparentProxyEv(void *qthis) {
  ((QNetworkProxy*)qthis)->isTransparentProxy();
}
// _ZNK13QNetworkProxy18isTransparentProxyEv isTransparentProxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 151, column 10>
//   // proto:  void QNetworkProxy::setType(QNetworkProxy::ProxyType type);
extern "C"
void C_ZN13QNetworkProxy7setTypeENS_9ProxyTypeE(void *qthis, QNetworkProxy::ProxyType arg1) {
  ((QNetworkProxy*)qthis)->setType(arg1);
}
// _ZN13QNetworkProxy7setTypeENS_9ProxyTypeE setType(class QNetworkProxy::ProxyType)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 162, column 10>
//   // proto:  void QNetworkProxy::setPassword(const QString & password);
extern "C"
void C_ZN13QNetworkProxy11setPasswordERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkProxy*)qthis)->setPassword(arg1);
}
// _ZN13QNetworkProxy11setPasswordERK7QString setPassword(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 141, column 5>
//   // proto:  void QNetworkProxy::QNetworkProxy(const QNetworkProxy & other);
extern "C"
void C_ZN13QNetworkProxyC2ERKS_(const QNetworkProxy & arg1) {
  new QNetworkProxy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 152, column 30>
//   // proto:  QNetworkProxy::ProxyType QNetworkProxy::type();
extern "C"
void C_ZNK13QNetworkProxy4typeEv(void *qthis) {
  ((QNetworkProxy*)qthis)->type();
}
// _ZNK13QNetworkProxy4typeEv type()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 179, column 10>
//   // proto:  bool QNetworkProxy::hasRawHeader(const QByteArray & headerName);
extern "C"
void C_ZNK13QNetworkProxy12hasRawHeaderERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QNetworkProxy*)qthis)->hasRawHeader(arg1);
}
// _ZNK13QNetworkProxy12hasRawHeaderERK10QByteArray hasRawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 139, column 5>
//   // proto:  void QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType type, const QString & hostName, quint16 port, const QString & user, const QString & password);
extern "C"
void C_ZN13QNetworkProxyC2ENS_9ProxyTypeERK7QStringtS3_S3_(QNetworkProxy::ProxyType arg1, const QString & arg2, quint16 arg3, const QString & arg4, const QString & arg5) {
  new QNetworkProxy(arg1, arg2, arg3, arg4, arg5);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 175, column 14>
//   // proto:  QVariant QNetworkProxy::header(QNetworkRequest::KnownHeaders header);
extern "C"
void C_ZNK13QNetworkProxy6headerEN15QNetworkRequest12KnownHeadersE(void *qthis, QNetworkRequest::KnownHeaders arg1) {
  ((QNetworkProxy*)qthis)->header(arg1);
}
// _ZNK13QNetworkProxy6headerEN15QNetworkRequest12KnownHeadersE header(class QNetworkRequest::KnownHeaders)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 145, column 10>
//   // proto:  void QNetworkProxy::swap(QNetworkProxy & other);
extern "C"
void C_ZN13QNetworkProxy4swapERS_(void *qthis, QNetworkProxy & arg1) {
  ((QNetworkProxy*)qthis)->swap(arg1);
}
// _ZN13QNetworkProxy4swapERS_ swap(class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 169, column 13>
//   // proto:  quint16 QNetworkProxy::port();
extern "C"
void C_ZNK13QNetworkProxy4portEv(void *qthis) {
  ((QNetworkProxy*)qthis)->port();
}
// _ZNK13QNetworkProxy4portEv port()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 159, column 10>
//   // proto:  void QNetworkProxy::setUser(const QString & userName);
extern "C"
void C_ZN13QNetworkProxy7setUserERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkProxy*)qthis)->setUser(arg1);
}
// _ZN13QNetworkProxy7setUserERK7QString setUser(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 176, column 10>
//   // proto:  void QNetworkProxy::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value);
extern "C"
void C_ZN13QNetworkProxy9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant(void *qthis, QNetworkRequest::KnownHeaders arg1, const QVariant & arg2) {
  ((QNetworkProxy*)qthis)->setHeader(arg1, arg2);
}
// _ZN13QNetworkProxy9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant setHeader(class QNetworkRequest::KnownHeaders, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 168, column 10>
//   // proto:  void QNetworkProxy::setPort(quint16 port);
extern "C"
void C_ZN13QNetworkProxy7setPortEt(void *qthis, quint16 arg1) {
  ((QNetworkProxy*)qthis)->setPort(arg1);
}
// _ZN13QNetworkProxy7setPortEt setPort(quint16)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 182, column 10>
//   // proto:  void QNetworkProxy::setRawHeader(const QByteArray & headerName, const QByteArray & value);
extern "C"
void C_ZN13QNetworkProxy12setRawHeaderERK10QByteArrayS2_(void *qthis, const QByteArray & arg1, const QByteArray & arg2) {
  ((QNetworkProxy*)qthis)->setRawHeader(arg1, arg2);
}
// _ZN13QNetworkProxy12setRawHeaderERK10QByteArrayS2_ setRawHeader(const class QByteArray &, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 156, column 10>
//   // proto:  bool QNetworkProxy::isCachingProxy();
extern "C"
void C_ZNK13QNetworkProxy14isCachingProxyEv(void *qthis) {
  ((QNetworkProxy*)qthis)->isCachingProxy();
}
// _ZNK13QNetworkProxy14isCachingProxyEv isCachingProxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 199, column 17>
//   // proto: static void QNetworkProxyFactory::setUseSystemConfiguration(bool enable);
extern "C"
void C_ZN20QNetworkProxyFactory25setUseSystemConfigurationEb(void *qthis, bool arg1) {
  ((QNetworkProxyFactory*)qthis)->setUseSystemConfiguration(arg1);
}
// _ZN20QNetworkProxyFactory25setUseSystemConfigurationEb setUseSystemConfiguration(_Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 194, column 5>
//   // proto:  void QNetworkProxyFactory::QNetworkProxyFactory();
extern "C"
void C_ZN20QNetworkProxyFactoryC2Ev() {
  // new QNetworkProxyFactory();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 200, column 17>
//   // proto: static void QNetworkProxyFactory::setApplicationProxyFactory(QNetworkProxyFactory * factory);
extern "C"
void C_ZN20QNetworkProxyFactory26setApplicationProxyFactoryEPS_(void *qthis, QNetworkProxyFactory * arg1) {
  ((QNetworkProxyFactory*)qthis)->setApplicationProxyFactory(arg1);
}
// _ZN20QNetworkProxyFactory26setApplicationProxyFactoryEPS_ setApplicationProxyFactory(class QNetworkProxyFactory *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 202, column 33>
//   // proto: static QList<QNetworkProxy> QNetworkProxyFactory::systemProxyForQuery(const QNetworkProxyQuery & query);
extern "C"
void C_ZN20QNetworkProxyFactory19systemProxyForQueryERK18QNetworkProxyQuery(void *qthis, const QNetworkProxyQuery & arg1) {
  ((QNetworkProxyFactory*)qthis)->systemProxyForQuery(arg1);
}
// _ZN20QNetworkProxyFactory19systemProxyForQueryERK18QNetworkProxyQuery systemProxyForQuery(const class QNetworkProxyQuery &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 197, column 34>
//   // proto:  QList<QNetworkProxy> QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery & query);
extern "C"
void C_ZN20QNetworkProxyFactory10queryProxyERK18QNetworkProxyQuery(void *qthis, const QNetworkProxyQuery & arg1) {
  ((QNetworkProxyFactory*)qthis)->queryProxy(arg1);
}
// _ZN20QNetworkProxyFactory10queryProxyERK18QNetworkProxyQuery queryProxy(const class QNetworkProxyQuery &)
//   // proto:  void QNetworkProxyFactory::~QNetworkProxyFactory();
extern "C"
void C_ZN20QNetworkProxyFactoryD2Ev(void *qthis) {
  delete (QNetworkProxyFactory*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 201, column 33>
//   // proto: static QList<QNetworkProxy> QNetworkProxyFactory::proxyForQuery(const QNetworkProxyQuery & query);
extern "C"
void C_ZN20QNetworkProxyFactory13proxyForQueryERK18QNetworkProxyQuery(void *qthis, const QNetworkProxyQuery & arg1) {
  ((QNetworkProxyFactory*)qthis)->proxyForQuery(arg1);
}
// _ZN20QNetworkProxyFactory13proxyForQueryERK18QNetworkProxyQuery proxyForQuery(const class QNetworkProxyQuery &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 101, column 10>
//   // proto:  QUrl QNetworkProxyQuery::url();
extern "C"
void C_ZNK18QNetworkProxyQuery3urlEv(void *qthis) {
  ((QNetworkProxyQuery*)qthis)->url();
}
// _ZNK18QNetworkProxyQuery3urlEv url()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 95, column 9>
//   // proto:  int QNetworkProxyQuery::localPort();
extern "C"
void C_ZNK18QNetworkProxyQuery9localPortEv(void *qthis) {
  ((QNetworkProxyQuery*)qthis)->localPort();
}
// _ZNK18QNetworkProxyQuery9localPortEv localPort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 62, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
extern "C"
void C_ZN18QNetworkProxyQueryC2ERK7QStringiS2_NS_9QueryTypeE(const QString & arg1, int arg2, const QString & arg3, QNetworkProxyQuery::QueryType arg4) {
  new QNetworkProxyQuery(arg1, arg2, arg3, arg4);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 106, column 10>
//   // proto:  void QNetworkProxyQuery::setNetworkConfiguration(const QNetworkConfiguration & networkConfiguration);
extern "C"
void C_ZN18QNetworkProxyQuery23setNetworkConfigurationERK21QNetworkConfiguration(void *qthis, const QNetworkConfiguration & arg1) {
  ((QNetworkProxyQuery*)qthis)->setNetworkConfiguration(arg1);
}
// _ZN18QNetworkProxyQuery23setNetworkConfigurationERK21QNetworkConfiguration setNetworkConfiguration(const class QNetworkConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 99, column 10>
//   // proto:  void QNetworkProxyQuery::setProtocolTag(const QString & protocolTag);
extern "C"
void C_ZN18QNetworkProxyQuery14setProtocolTagERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkProxyQuery*)qthis)->setProtocolTag(arg1);
}
// _ZN18QNetworkProxyQuery14setProtocolTagERK7QString setProtocolTag(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 102, column 10>
//   // proto:  void QNetworkProxyQuery::setUrl(const QUrl & url);
extern "C"
void C_ZN18QNetworkProxyQuery6setUrlERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QNetworkProxyQuery*)qthis)->setUrl(arg1);
}
// _ZN18QNetworkProxyQuery6setUrlERK4QUrl setUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 64, column 14>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
extern "C"
void C_ZN18QNetworkProxyQueryC2EtRK7QStringNS_9QueryTypeE(quint16 arg1, const QString & arg2, QNetworkProxyQuery::QueryType arg3) {
  new QNetworkProxyQuery(arg1, arg2, arg3);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 86, column 15>
//   // proto:  QNetworkProxyQuery::QueryType QNetworkProxyQuery::queryType();
extern "C"
void C_ZNK18QNetworkProxyQuery9queryTypeEv(void *qthis) {
  ((QNetworkProxyQuery*)qthis)->queryType();
}
// _ZNK18QNetworkProxyQuery9queryTypeEv queryType()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 89, column 9>
//   // proto:  int QNetworkProxyQuery::peerPort();
extern "C"
void C_ZNK18QNetworkProxyQuery8peerPortEv(void *qthis) {
  ((QNetworkProxyQuery*)qthis)->peerPort();
}
// _ZNK18QNetworkProxyQuery8peerPortEv peerPort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 70, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
extern "C"
void C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationRK7QStringiS5_NS_9QueryTypeE(const QNetworkConfiguration & arg1, const QString & arg2, int arg3, const QString & arg4, QNetworkProxyQuery::QueryType arg5) {
  new QNetworkProxyQuery(arg1, arg2, arg3, arg4, arg5);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 96, column 10>
//   // proto:  void QNetworkProxyQuery::setLocalPort(int port);
extern "C"
void C_ZN18QNetworkProxyQuery12setLocalPortEi(void *qthis, int arg1) {
  ((QNetworkProxyQuery*)qthis)->setLocalPort(arg1);
}
// _ZN18QNetworkProxyQuery12setLocalPortEi setLocalPort(int)
//   // proto:  void QNetworkProxyQuery::~QNetworkProxyQuery();
extern "C"
void C_ZN18QNetworkProxyQueryD2Ev(void *qthis) {
  delete (QNetworkProxyQuery*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 66, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkProxyQuery & other);
extern "C"
void C_ZN18QNetworkProxyQueryC2ERKS_(const QNetworkProxyQuery & arg1) {
  new QNetworkProxyQuery(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 93, column 10>
//   // proto:  void QNetworkProxyQuery::setPeerHostName(const QString & hostname);
extern "C"
void C_ZN18QNetworkProxyQuery15setPeerHostNameERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkProxyQuery*)qthis)->setPeerHostName(arg1);
}
// _ZN18QNetworkProxyQuery15setPeerHostNameERK7QString setPeerHostName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 68, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType);
extern "C"
void C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationRK4QUrlNS_9QueryTypeE(const QNetworkConfiguration & arg1, const QUrl & arg2, QNetworkProxyQuery::QueryType arg3) {
  new QNetworkProxyQuery(arg1, arg2, arg3);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 80, column 10>
//   // proto:  void QNetworkProxyQuery::swap(QNetworkProxyQuery & other);
extern "C"
void C_ZN18QNetworkProxyQuery4swapERS_(void *qthis, QNetworkProxyQuery & arg1) {
  ((QNetworkProxyQuery*)qthis)->swap(arg1);
}
// _ZN18QNetworkProxyQuery4swapERS_ swap(class QNetworkProxyQuery &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 90, column 10>
//   // proto:  void QNetworkProxyQuery::setPeerPort(int port);
extern "C"
void C_ZN18QNetworkProxyQuery11setPeerPortEi(void *qthis, int arg1) {
  ((QNetworkProxyQuery*)qthis)->setPeerPort(arg1);
}
// _ZN18QNetworkProxyQuery11setPeerPortEi setPeerPort(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 61, column 14>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType);
extern "C"
void C_ZN18QNetworkProxyQueryC2ERK4QUrlNS_9QueryTypeE(const QUrl & arg1, QNetworkProxyQuery::QueryType arg2) {
  new QNetworkProxyQuery(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 105, column 27>
//   // proto:  QNetworkConfiguration QNetworkProxyQuery::networkConfiguration();
extern "C"
void C_ZNK18QNetworkProxyQuery20networkConfigurationEv(void *qthis) {
  ((QNetworkProxyQuery*)qthis)->networkConfiguration();
}
// _ZNK18QNetworkProxyQuery20networkConfigurationEv networkConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 87, column 10>
//   // proto:  void QNetworkProxyQuery::setQueryType(QNetworkProxyQuery::QueryType type);
extern "C"
void C_ZN18QNetworkProxyQuery12setQueryTypeENS_9QueryTypeE(void *qthis, QNetworkProxyQuery::QueryType arg1) {
  ((QNetworkProxyQuery*)qthis)->setQueryType(arg1);
}
// _ZN18QNetworkProxyQuery12setQueryTypeENS_9QueryTypeE setQueryType(enum QNetworkProxyQuery::QueryType)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 92, column 13>
//   // proto:  QString QNetworkProxyQuery::peerHostName();
extern "C"
void C_ZNK18QNetworkProxyQuery12peerHostNameEv(void *qthis) {
  ((QNetworkProxyQuery*)qthis)->peerHostName();
}
// _ZNK18QNetworkProxyQuery12peerHostNameEv peerHostName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 98, column 13>
//   // proto:  QString QNetworkProxyQuery::protocolTag();
extern "C"
void C_ZNK18QNetworkProxyQuery11protocolTagEv(void *qthis) {
  ((QNetworkProxyQuery*)qthis)->protocolTag();
}
// _ZNK18QNetworkProxyQuery11protocolTagEv protocolTag()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 60, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery();
extern "C"
void C_ZN18QNetworkProxyQueryC2Ev() {
  new QNetworkProxyQuery();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkproxy.h', line 73, column 5>
//   // proto:  void QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType);
extern "C"
void C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationtRK7QStringNS_9QueryTypeE(const QNetworkConfiguration & arg1, quint16 arg2, const QString & arg3, QNetworkProxyQuery::QueryType arg4) {
  new QNetworkProxyQuery(arg1, arg2, arg3, arg4);
}
// <= ext block end

// body block begin =>
// <= body block end

