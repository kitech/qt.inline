#include <qnetworkproxy.h>
#include <qnetworkconfiguration.h>
#include <qstringlist.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qnetworkaccessmanager.h
// dst-file: /src/network/qnetworkaccessmanager.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworkaccessmanager.h>

extern "C" {

int QNetworkAccessManager_Class_Size()
{
  return sizeof(QNetworkAccessManager);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qnetworkaccessmanager_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 112, column 10>
//   // proto:  void QNetworkAccessManager::setCookieJar(QNetworkCookieJar * cookieJar);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QNetworkCookieJar * arg1) {
    ((QNetworkAccessManager*)0)->setCookieJar(arg1);
    flythis.setCookieJar(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager12setCookieJarEP17QNetworkCookieJar setCookieJar(class QNetworkCookieJar *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 121, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::put(const QNetworkRequest & request, QHttpMultiPart * multiPart);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1, QHttpMultiPart * arg2) {
    ((QNetworkAccessManager*)0)->put(arg1, arg2);
    flythis.put(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager3putERK15QNetworkRequestP14QHttpMultiPart put(const class QNetworkRequest &, class QHttpMultiPart *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 111, column 24>
//   // proto:  QNetworkCookieJar * QNetworkAccessManager::cookieJar();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->cookieJar();
    flythis.cookieJar();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkAccessManager9cookieJarEv cookieJar()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 145, column 10>
//   // proto:  void QNetworkAccessManager::finished(QNetworkReply * reply);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QNetworkReply * arg1) {
    ((QNetworkAccessManager*)0)->finished(arg1);
    flythis.finished(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager8finishedEP13QNetworkReply finished(class QNetworkReply *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 67, column 5>
//   // proto:  const QMetaObject * QNetworkAccessManager::metaObject();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkAccessManager10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 147, column 10>
//   // proto:  void QNetworkAccessManager::encrypted(QNetworkReply * reply);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QNetworkReply * arg1) {
    ((QNetworkAccessManager*)0)->encrypted(arg1);
    flythis.encrypted(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager9encryptedEP13QNetworkReply encrypted(class QNetworkReply *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 97, column 17>
//   // proto:  QStringList QNetworkAccessManager::supportedSchemes();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->supportedSchemes();
    flythis.supportedSchemes();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkAccessManager16supportedSchemesEv supportedSchemes()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 108, column 28>
//   // proto:  QAbstractNetworkCache * QNetworkAccessManager::cache();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->cache();
    flythis.cache();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkAccessManager5cacheEv cache()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 119, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::put(const QNetworkRequest & request, QIODevice * data);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1, QIODevice * arg2) {
    ((QNetworkAccessManager*)0)->put(arg1, arg2);
    flythis.put(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager3putERK15QNetworkRequestP9QIODevice put(const class QNetworkRequest &, class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 93, column 14>
//   // proto:  void QNetworkAccessManager::QNetworkAccessManager(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QNetworkAccessManager(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 115, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::get(const QNetworkRequest & request);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1) {
    ((QNetworkAccessManager*)0)->get(arg1);
    flythis.get(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager3getERK15QNetworkRequest get(const class QNetworkRequest &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 122, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::deleteResource(const QNetworkRequest & request);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1) {
    ((QNetworkAccessManager*)0)->deleteResource(arg1);
    flythis.deleteResource(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager14deleteResourceERK15QNetworkRequest deleteResource(const class QNetworkRequest &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 114, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::head(const QNetworkRequest & request);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1) {
    ((QNetworkAccessManager*)0)->head(arg1);
    flythis.head(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager4headERK15QNetworkRequest head(const class QNetworkRequest &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 149, column 10>
//   // proto:  void QNetworkAccessManager::preSharedKeyAuthenticationRequired(QNetworkReply * reply, QSslPreSharedKeyAuthenticator * authenticator);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QNetworkReply * arg1, QSslPreSharedKeyAuthenticator * arg2) {
    ((QNetworkAccessManager*)0)->preSharedKeyAuthenticationRequired(arg1, arg2);
    flythis.preSharedKeyAuthenticationRequired(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator preSharedKeyAuthenticationRequired(class QNetworkReply *, class QSslPreSharedKeyAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 127, column 27>
//   // proto:  QNetworkConfiguration QNetworkAccessManager::configuration();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->configuration();
    flythis.configuration();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkAccessManager13configurationEv configuration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 155, column 10>
//   // proto:  void QNetworkAccessManager::networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility accessible);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QNetworkAccessManager::NetworkAccessibility arg1) {
    ((QNetworkAccessManager*)0)->networkAccessibleChanged(arg1);
    flythis.networkAccessibleChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE networkAccessibleChanged(class QNetworkAccessManager::NetworkAccessibility)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 126, column 10>
//   // proto:  void QNetworkAccessManager::setConfiguration(const QNetworkConfiguration & config);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkConfiguration & arg1) {
    ((QNetworkAccessManager*)0)->setConfiguration(arg1);
    flythis.setConfiguration(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager16setConfigurationERK21QNetworkConfiguration setConfiguration(const class QNetworkConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 116, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::post(const QNetworkRequest & request, QIODevice * data);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1, QIODevice * arg2) {
    ((QNetworkAccessManager*)0)->post(arg1, arg2);
    flythis.post(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager4postERK15QNetworkRequestP9QIODevice post(const class QNetworkRequest &, class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 142, column 10>
//   // proto:  void QNetworkAccessManager::proxyAuthenticationRequired(const QNetworkProxy & proxy, QAuthenticator * authenticator);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkProxy & arg1, QAuthenticator * arg2) {
    ((QNetworkAccessManager*)0)->proxyAuthenticationRequired(arg1, arg2);
    flythis.proxyAuthenticationRequired(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 117, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::post(const QNetworkRequest & request, const QByteArray & data);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1, const QByteArray & arg2) {
    ((QNetworkAccessManager*)0)->post(arg1, arg2);
    flythis.post(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager4postERK15QNetworkRequestRK10QByteArray post(const class QNetworkRequest &, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 123, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::sendCustomRequest(const QNetworkRequest & request, const QByteArray & verb, QIODevice * data);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1, const QByteArray & arg2, QIODevice * arg3) {
    ((QNetworkAccessManager*)0)->sendCustomRequest(arg1, arg2, arg3);
    flythis.sendCustomRequest(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayP9QIODevice sendCustomRequest(const class QNetworkRequest &, const class QByteArray &, class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 135, column 10>
//   // proto:  void QNetworkAccessManager::connectToHostEncrypted(const QString & hostName, quint16 port, const QSslConfiguration & sslConfiguration);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QString & arg1, quint16 arg2, const QSslConfiguration & arg3) {
    ((QNetworkAccessManager*)0)->connectToHostEncrypted(arg1, arg2, arg3);
    flythis.connectToHostEncrypted(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager22connectToHostEncryptedERK7QStringtRK17QSslConfiguration connectToHostEncrypted(const class QString &, quint16, const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 130, column 10>
//   // proto:  void QNetworkAccessManager::setNetworkAccessible(QNetworkAccessManager::NetworkAccessibility accessible);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QNetworkAccessManager::NetworkAccessibility arg1) {
    ((QNetworkAccessManager*)0)->setNetworkAccessible(arg1);
    flythis.setNetworkAccessible(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager20setNetworkAccessibleENS_20NetworkAccessibilityE setNetworkAccessible(enum QNetworkAccessManager::NetworkAccessibility)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 99, column 10>
//   // proto:  void QNetworkAccessManager::clearAccessCache();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->clearAccessCache();
    flythis.clearAccessCache();
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager16clearAccessCacheEv clearAccessCache()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 128, column 27>
//   // proto:  QNetworkConfiguration QNetworkAccessManager::activeConfiguration();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->activeConfiguration();
    flythis.activeConfiguration();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkAccessManager19activeConfigurationEv activeConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 105, column 10>
//   // proto:  void QNetworkAccessManager::setProxyFactory(QNetworkProxyFactory * factory);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QNetworkProxyFactory * arg1) {
    ((QNetworkAccessManager*)0)->setProxyFactory(arg1);
    flythis.setProxyFactory(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager15setProxyFactoryEP20QNetworkProxyFactory setProxyFactory(class QNetworkProxyFactory *)
//   // proto:  void QNetworkAccessManager::~QNetworkAccessManager();
if (true) {
  delete ((QNetworkAccessManager*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 120, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::put(const QNetworkRequest & request, const QByteArray & data);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1, const QByteArray & arg2) {
    ((QNetworkAccessManager*)0)->put(arg1, arg2);
    flythis.put(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager3putERK15QNetworkRequestRK10QByteArray put(const class QNetworkRequest &, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 109, column 10>
//   // proto:  void QNetworkAccessManager::setCache(QAbstractNetworkCache * cache);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QAbstractNetworkCache * arg1) {
    ((QNetworkAccessManager*)0)->setCache(arg1);
    flythis.setCache(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager8setCacheEP21QAbstractNetworkCache setCache(class QAbstractNetworkCache *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 138, column 10>
//   // proto:  void QNetworkAccessManager::connectToHost(const QString & hostName, quint16 port);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QString & arg1, quint16 arg2) {
    ((QNetworkAccessManager*)0)->connectToHost(arg1, arg2);
    flythis.connectToHost(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager13connectToHostERK7QStringt connectToHost(const class QString &, quint16)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 144, column 10>
//   // proto:  void QNetworkAccessManager::authenticationRequired(QNetworkReply * reply, QAuthenticator * authenticator);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QNetworkReply * arg1, QAuthenticator * arg2) {
    ((QNetworkAccessManager*)0)->authenticationRequired(arg1, arg2);
    flythis.authenticationRequired(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator authenticationRequired(class QNetworkReply *, class QAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 103, column 10>
//   // proto:  void QNetworkAccessManager::setProxy(const QNetworkProxy & proxy);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkProxy & arg1) {
    ((QNetworkAccessManager*)0)->setProxy(arg1);
    flythis.setProxy(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager8setProxyERK13QNetworkProxy setProxy(const class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 153, column 10>
//   // proto:  void QNetworkAccessManager::networkSessionConnected();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->networkSessionConnected();
    flythis.networkSessionConnected();
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager23networkSessionConnectedEv networkSessionConnected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 131, column 26>
//   // proto:  QNetworkAccessManager::NetworkAccessibility QNetworkAccessManager::networkAccessible();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->networkAccessible();
    flythis.networkAccessible();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkAccessManager17networkAccessibleEv networkAccessible()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 102, column 19>
//   // proto:  QNetworkProxy QNetworkAccessManager::proxy();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->proxy();
    flythis.proxy();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkAccessManager5proxyEv proxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 118, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::post(const QNetworkRequest & request, QHttpMultiPart * multiPart);
if (true) {
  auto f = [](QNetworkAccessManager flythis, const QNetworkRequest & arg1, QHttpMultiPart * arg2) {
    ((QNetworkAccessManager*)0)->post(arg1, arg2);
    flythis.post(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager4postERK15QNetworkRequestP14QHttpMultiPart post(const class QNetworkRequest &, class QHttpMultiPart *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 148, column 10>
//   // proto:  void QNetworkAccessManager::sslErrors(QNetworkReply * reply, const QList<QSslError> & errors);
if (true) {
  auto f = [](QNetworkAccessManager flythis, QNetworkReply * arg1, const QList<QSslError> & arg2) {
    ((QNetworkAccessManager*)0)->sslErrors(arg1, arg2);
    flythis.sslErrors(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkAccessManager9sslErrorsEP13QNetworkReplyRK5QListI9QSslErrorE sslErrors(class QNetworkReply *, const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 104, column 27>
//   // proto:  QNetworkProxyFactory * QNetworkAccessManager::proxyFactory();
if (true) {
  auto f = [](QNetworkAccessManager flythis) {
    ((QNetworkAccessManager*)0)->proxyFactory();
    flythis.proxyFactory();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkAccessManager12proxyFactoryEv proxyFactory()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 112, column 10>
//   // proto:  void QNetworkAccessManager::setCookieJar(QNetworkCookieJar * cookieJar);
extern "C"
void C_ZN21QNetworkAccessManager12setCookieJarEP17QNetworkCookieJar(void *qthis, QNetworkCookieJar * arg1) {
  ((QNetworkAccessManager*)qthis)->setCookieJar(arg1);
}
// _ZN21QNetworkAccessManager12setCookieJarEP17QNetworkCookieJar setCookieJar(class QNetworkCookieJar *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 121, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::put(const QNetworkRequest & request, QHttpMultiPart * multiPart);
extern "C"
void C_ZN21QNetworkAccessManager3putERK15QNetworkRequestP14QHttpMultiPart(void *qthis, const QNetworkRequest & arg1, QHttpMultiPart * arg2) {
  ((QNetworkAccessManager*)qthis)->put(arg1, arg2);
}
// _ZN21QNetworkAccessManager3putERK15QNetworkRequestP14QHttpMultiPart put(const class QNetworkRequest &, class QHttpMultiPart *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 111, column 24>
//   // proto:  QNetworkCookieJar * QNetworkAccessManager::cookieJar();
extern "C"
void C_ZNK21QNetworkAccessManager9cookieJarEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->cookieJar();
}
// _ZNK21QNetworkAccessManager9cookieJarEv cookieJar()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 145, column 10>
//   // proto:  void QNetworkAccessManager::finished(QNetworkReply * reply);
extern "C"
void C_ZN21QNetworkAccessManager8finishedEP13QNetworkReply(void *qthis, QNetworkReply * arg1) {
  ((QNetworkAccessManager*)qthis)->finished(arg1);
}
// _ZN21QNetworkAccessManager8finishedEP13QNetworkReply finished(class QNetworkReply *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 67, column 5>
//   // proto:  const QMetaObject * QNetworkAccessManager::metaObject();
extern "C"
void C_ZNK21QNetworkAccessManager10metaObjectEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->metaObject();
}
// _ZNK21QNetworkAccessManager10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 147, column 10>
//   // proto:  void QNetworkAccessManager::encrypted(QNetworkReply * reply);
extern "C"
void C_ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(void *qthis, QNetworkReply * arg1) {
  ((QNetworkAccessManager*)qthis)->encrypted(arg1);
}
// _ZN21QNetworkAccessManager9encryptedEP13QNetworkReply encrypted(class QNetworkReply *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 97, column 17>
//   // proto:  QStringList QNetworkAccessManager::supportedSchemes();
extern "C"
void C_ZNK21QNetworkAccessManager16supportedSchemesEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->supportedSchemes();
}
// _ZNK21QNetworkAccessManager16supportedSchemesEv supportedSchemes()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 108, column 28>
//   // proto:  QAbstractNetworkCache * QNetworkAccessManager::cache();
extern "C"
void C_ZNK21QNetworkAccessManager5cacheEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->cache();
}
// _ZNK21QNetworkAccessManager5cacheEv cache()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 119, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::put(const QNetworkRequest & request, QIODevice * data);
extern "C"
void C_ZN21QNetworkAccessManager3putERK15QNetworkRequestP9QIODevice(void *qthis, const QNetworkRequest & arg1, QIODevice * arg2) {
  ((QNetworkAccessManager*)qthis)->put(arg1, arg2);
}
// _ZN21QNetworkAccessManager3putERK15QNetworkRequestP9QIODevice put(const class QNetworkRequest &, class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 93, column 14>
//   // proto:  void QNetworkAccessManager::QNetworkAccessManager(QObject * parent);
extern "C"
void C_ZN21QNetworkAccessManagerC2EP7QObject(QObject * arg1) {
  new QNetworkAccessManager(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 115, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::get(const QNetworkRequest & request);
extern "C"
void C_ZN21QNetworkAccessManager3getERK15QNetworkRequest(void *qthis, const QNetworkRequest & arg1) {
  ((QNetworkAccessManager*)qthis)->get(arg1);
}
// _ZN21QNetworkAccessManager3getERK15QNetworkRequest get(const class QNetworkRequest &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 122, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::deleteResource(const QNetworkRequest & request);
extern "C"
void C_ZN21QNetworkAccessManager14deleteResourceERK15QNetworkRequest(void *qthis, const QNetworkRequest & arg1) {
  ((QNetworkAccessManager*)qthis)->deleteResource(arg1);
}
// _ZN21QNetworkAccessManager14deleteResourceERK15QNetworkRequest deleteResource(const class QNetworkRequest &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 114, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::head(const QNetworkRequest & request);
extern "C"
void C_ZN21QNetworkAccessManager4headERK15QNetworkRequest(void *qthis, const QNetworkRequest & arg1) {
  ((QNetworkAccessManager*)qthis)->head(arg1);
}
// _ZN21QNetworkAccessManager4headERK15QNetworkRequest head(const class QNetworkRequest &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 149, column 10>
//   // proto:  void QNetworkAccessManager::preSharedKeyAuthenticationRequired(QNetworkReply * reply, QSslPreSharedKeyAuthenticator * authenticator);
extern "C"
void C_ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(void *qthis, QNetworkReply * arg1, QSslPreSharedKeyAuthenticator * arg2) {
  ((QNetworkAccessManager*)qthis)->preSharedKeyAuthenticationRequired(arg1, arg2);
}
// _ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator preSharedKeyAuthenticationRequired(class QNetworkReply *, class QSslPreSharedKeyAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 127, column 27>
//   // proto:  QNetworkConfiguration QNetworkAccessManager::configuration();
extern "C"
void C_ZNK21QNetworkAccessManager13configurationEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->configuration();
}
// _ZNK21QNetworkAccessManager13configurationEv configuration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 155, column 10>
//   // proto:  void QNetworkAccessManager::networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility accessible);
extern "C"
void C_ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(void *qthis, QNetworkAccessManager::NetworkAccessibility arg1) {
  ((QNetworkAccessManager*)qthis)->networkAccessibleChanged(arg1);
}
// _ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE networkAccessibleChanged(class QNetworkAccessManager::NetworkAccessibility)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 126, column 10>
//   // proto:  void QNetworkAccessManager::setConfiguration(const QNetworkConfiguration & config);
extern "C"
void C_ZN21QNetworkAccessManager16setConfigurationERK21QNetworkConfiguration(void *qthis, const QNetworkConfiguration & arg1) {
  ((QNetworkAccessManager*)qthis)->setConfiguration(arg1);
}
// _ZN21QNetworkAccessManager16setConfigurationERK21QNetworkConfiguration setConfiguration(const class QNetworkConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 116, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::post(const QNetworkRequest & request, QIODevice * data);
extern "C"
void C_ZN21QNetworkAccessManager4postERK15QNetworkRequestP9QIODevice(void *qthis, const QNetworkRequest & arg1, QIODevice * arg2) {
  ((QNetworkAccessManager*)qthis)->post(arg1, arg2);
}
// _ZN21QNetworkAccessManager4postERK15QNetworkRequestP9QIODevice post(const class QNetworkRequest &, class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 142, column 10>
//   // proto:  void QNetworkAccessManager::proxyAuthenticationRequired(const QNetworkProxy & proxy, QAuthenticator * authenticator);
extern "C"
void C_ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(void *qthis, const QNetworkProxy & arg1, QAuthenticator * arg2) {
  ((QNetworkAccessManager*)qthis)->proxyAuthenticationRequired(arg1, arg2);
}
// _ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 117, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::post(const QNetworkRequest & request, const QByteArray & data);
extern "C"
void C_ZN21QNetworkAccessManager4postERK15QNetworkRequestRK10QByteArray(void *qthis, const QNetworkRequest & arg1, const QByteArray & arg2) {
  ((QNetworkAccessManager*)qthis)->post(arg1, arg2);
}
// _ZN21QNetworkAccessManager4postERK15QNetworkRequestRK10QByteArray post(const class QNetworkRequest &, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 123, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::sendCustomRequest(const QNetworkRequest & request, const QByteArray & verb, QIODevice * data);
extern "C"
void C_ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayP9QIODevice(void *qthis, const QNetworkRequest & arg1, const QByteArray & arg2, QIODevice * arg3) {
  ((QNetworkAccessManager*)qthis)->sendCustomRequest(arg1, arg2, arg3);
}
// _ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayP9QIODevice sendCustomRequest(const class QNetworkRequest &, const class QByteArray &, class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 135, column 10>
//   // proto:  void QNetworkAccessManager::connectToHostEncrypted(const QString & hostName, quint16 port, const QSslConfiguration & sslConfiguration);
extern "C"
void C_ZN21QNetworkAccessManager22connectToHostEncryptedERK7QStringtRK17QSslConfiguration(void *qthis, const QString & arg1, quint16 arg2, const QSslConfiguration & arg3) {
  ((QNetworkAccessManager*)qthis)->connectToHostEncrypted(arg1, arg2, arg3);
}
// _ZN21QNetworkAccessManager22connectToHostEncryptedERK7QStringtRK17QSslConfiguration connectToHostEncrypted(const class QString &, quint16, const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 130, column 10>
//   // proto:  void QNetworkAccessManager::setNetworkAccessible(QNetworkAccessManager::NetworkAccessibility accessible);
extern "C"
void C_ZN21QNetworkAccessManager20setNetworkAccessibleENS_20NetworkAccessibilityE(void *qthis, QNetworkAccessManager::NetworkAccessibility arg1) {
  ((QNetworkAccessManager*)qthis)->setNetworkAccessible(arg1);
}
// _ZN21QNetworkAccessManager20setNetworkAccessibleENS_20NetworkAccessibilityE setNetworkAccessible(enum QNetworkAccessManager::NetworkAccessibility)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 99, column 10>
//   // proto:  void QNetworkAccessManager::clearAccessCache();
extern "C"
void C_ZN21QNetworkAccessManager16clearAccessCacheEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->clearAccessCache();
}
// _ZN21QNetworkAccessManager16clearAccessCacheEv clearAccessCache()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 128, column 27>
//   // proto:  QNetworkConfiguration QNetworkAccessManager::activeConfiguration();
extern "C"
void C_ZNK21QNetworkAccessManager19activeConfigurationEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->activeConfiguration();
}
// _ZNK21QNetworkAccessManager19activeConfigurationEv activeConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 105, column 10>
//   // proto:  void QNetworkAccessManager::setProxyFactory(QNetworkProxyFactory * factory);
extern "C"
void C_ZN21QNetworkAccessManager15setProxyFactoryEP20QNetworkProxyFactory(void *qthis, QNetworkProxyFactory * arg1) {
  ((QNetworkAccessManager*)qthis)->setProxyFactory(arg1);
}
// _ZN21QNetworkAccessManager15setProxyFactoryEP20QNetworkProxyFactory setProxyFactory(class QNetworkProxyFactory *)
//   // proto:  void QNetworkAccessManager::~QNetworkAccessManager();
extern "C"
void C_ZN21QNetworkAccessManagerD2Ev(void *qthis) {
  delete (QNetworkAccessManager*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 120, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::put(const QNetworkRequest & request, const QByteArray & data);
extern "C"
void C_ZN21QNetworkAccessManager3putERK15QNetworkRequestRK10QByteArray(void *qthis, const QNetworkRequest & arg1, const QByteArray & arg2) {
  ((QNetworkAccessManager*)qthis)->put(arg1, arg2);
}
// _ZN21QNetworkAccessManager3putERK15QNetworkRequestRK10QByteArray put(const class QNetworkRequest &, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 109, column 10>
//   // proto:  void QNetworkAccessManager::setCache(QAbstractNetworkCache * cache);
extern "C"
void C_ZN21QNetworkAccessManager8setCacheEP21QAbstractNetworkCache(void *qthis, QAbstractNetworkCache * arg1) {
  ((QNetworkAccessManager*)qthis)->setCache(arg1);
}
// _ZN21QNetworkAccessManager8setCacheEP21QAbstractNetworkCache setCache(class QAbstractNetworkCache *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 138, column 10>
//   // proto:  void QNetworkAccessManager::connectToHost(const QString & hostName, quint16 port);
extern "C"
void C_ZN21QNetworkAccessManager13connectToHostERK7QStringt(void *qthis, const QString & arg1, quint16 arg2) {
  ((QNetworkAccessManager*)qthis)->connectToHost(arg1, arg2);
}
// _ZN21QNetworkAccessManager13connectToHostERK7QStringt connectToHost(const class QString &, quint16)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 144, column 10>
//   // proto:  void QNetworkAccessManager::authenticationRequired(QNetworkReply * reply, QAuthenticator * authenticator);
extern "C"
void C_ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(void *qthis, QNetworkReply * arg1, QAuthenticator * arg2) {
  ((QNetworkAccessManager*)qthis)->authenticationRequired(arg1, arg2);
}
// _ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator authenticationRequired(class QNetworkReply *, class QAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 103, column 10>
//   // proto:  void QNetworkAccessManager::setProxy(const QNetworkProxy & proxy);
extern "C"
void C_ZN21QNetworkAccessManager8setProxyERK13QNetworkProxy(void *qthis, const QNetworkProxy & arg1) {
  ((QNetworkAccessManager*)qthis)->setProxy(arg1);
}
// _ZN21QNetworkAccessManager8setProxyERK13QNetworkProxy setProxy(const class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 153, column 10>
//   // proto:  void QNetworkAccessManager::networkSessionConnected();
extern "C"
void C_ZN21QNetworkAccessManager23networkSessionConnectedEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->networkSessionConnected();
}
// _ZN21QNetworkAccessManager23networkSessionConnectedEv networkSessionConnected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 131, column 26>
//   // proto:  QNetworkAccessManager::NetworkAccessibility QNetworkAccessManager::networkAccessible();
extern "C"
void C_ZNK21QNetworkAccessManager17networkAccessibleEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->networkAccessible();
}
// _ZNK21QNetworkAccessManager17networkAccessibleEv networkAccessible()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 102, column 19>
//   // proto:  QNetworkProxy QNetworkAccessManager::proxy();
extern "C"
void C_ZNK21QNetworkAccessManager5proxyEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->proxy();
}
// _ZNK21QNetworkAccessManager5proxyEv proxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 118, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::post(const QNetworkRequest & request, QHttpMultiPart * multiPart);
extern "C"
void C_ZN21QNetworkAccessManager4postERK15QNetworkRequestP14QHttpMultiPart(void *qthis, const QNetworkRequest & arg1, QHttpMultiPart * arg2) {
  ((QNetworkAccessManager*)qthis)->post(arg1, arg2);
}
// _ZN21QNetworkAccessManager4postERK15QNetworkRequestP14QHttpMultiPart post(const class QNetworkRequest &, class QHttpMultiPart *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 148, column 10>
//   // proto:  void QNetworkAccessManager::sslErrors(QNetworkReply * reply, const QList<QSslError> & errors);
extern "C"
void C_ZN21QNetworkAccessManager9sslErrorsEP13QNetworkReplyRK5QListI9QSslErrorE(void *qthis, QNetworkReply * arg1, const QList<QSslError> & arg2) {
  ((QNetworkAccessManager*)qthis)->sslErrors(arg1, arg2);
}
// _ZN21QNetworkAccessManager9sslErrorsEP13QNetworkReplyRK5QListI9QSslErrorE sslErrors(class QNetworkReply *, const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 104, column 27>
//   // proto:  QNetworkProxyFactory * QNetworkAccessManager::proxyFactory();
extern "C"
void C_ZNK21QNetworkAccessManager12proxyFactoryEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->proxyFactory();
}
// _ZNK21QNetworkAccessManager12proxyFactoryEv proxyFactory()
// <= ext block end

// body block begin =>
// QNetworkAccessManager_SlotProxy here
class QNetworkAccessManager_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QNetworkAccessManager_SlotProxy():QObject(){}

public slots:
  // networkSessionConnected()
  void slot_proxy_func__ZN21QNetworkAccessManager23networkSessionConnectedEv();
public:
  void (*slot_func__ZN21QNetworkAccessManager23networkSessionConnectedEv)(void* rsfptr) = NULL;
public slots:
  // proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
  void slot_proxy_func__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(const QNetworkProxy & arg0, QAuthenticator * arg1);
public:
  void (*slot_func__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator)(void* rsfptr, const QNetworkProxy & arg0, QAuthenticator * arg1) = NULL;
public slots:
  // preSharedKeyAuthenticationRequired(class QNetworkReply *, class QSslPreSharedKeyAuthenticator *)
  void slot_proxy_func__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(QNetworkReply * arg0, QSslPreSharedKeyAuthenticator * arg1);
public:
  void (*slot_func__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator)(void* rsfptr, QNetworkReply * arg0, QSslPreSharedKeyAuthenticator * arg1) = NULL;
public slots:
  // networkAccessibleChanged(class QNetworkAccessManager::NetworkAccessibility)
  void slot_proxy_func__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(QNetworkAccessManager::NetworkAccessibility arg0);
public:
  void (*slot_func__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE)(void* rsfptr, QNetworkAccessManager::NetworkAccessibility arg0) = NULL;
public slots:
  // finished(class QNetworkReply *)
  void slot_proxy_func__ZN21QNetworkAccessManager8finishedEP13QNetworkReply(QNetworkReply * arg0);
public:
  void (*slot_func__ZN21QNetworkAccessManager8finishedEP13QNetworkReply)(void* rsfptr, QNetworkReply * arg0) = NULL;
public slots:
  // encrypted(class QNetworkReply *)
  void slot_proxy_func__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(QNetworkReply * arg0);
public:
  void (*slot_func__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply)(void* rsfptr, QNetworkReply * arg0) = NULL;
public slots:
  // authenticationRequired(class QNetworkReply *, class QAuthenticator *)
  void slot_proxy_func__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(QNetworkReply * arg0, QAuthenticator * arg1);
public:
  void (*slot_func__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator)(void* rsfptr, QNetworkReply * arg0, QAuthenticator * arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qnetworkaccessmanager.moc"

extern "C" {
  QNetworkAccessManager_SlotProxy* QNetworkAccessManager_SlotProxy_new()
  {
    return new QNetworkAccessManager_SlotProxy();
  }
};

void QNetworkAccessManager_SlotProxy::slot_proxy_func__ZN21QNetworkAccessManager23networkSessionConnectedEv() {
  if (this->slot_func__ZN21QNetworkAccessManager23networkSessionConnectedEv != NULL) {
    // do smth...
    this->slot_func__ZN21QNetworkAccessManager23networkSessionConnectedEv(this->rsfptr);
  }
}
extern "C"
void* QNetworkAccessManager_SlotProxy_connect__ZN21QNetworkAccessManager23networkSessionConnectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkAccessManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QNetworkAccessManager23networkSessionConnectedEv = (decltype(that->slot_func__ZN21QNetworkAccessManager23networkSessionConnectedEv))ffifptr;
  QObject::connect((QNetworkAccessManager*)sender, SIGNAL(networkSessionConnected()), that, SLOT(slot_proxy_func__ZN21QNetworkAccessManager23networkSessionConnectedEv()));
  return that;
}
extern "C"
void QNetworkAccessManager_SlotProxy_disconnect__ZN21QNetworkAccessManager23networkSessionConnectedEv(QNetworkAccessManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkAccessManager_SlotProxy::slot_proxy_func__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(const QNetworkProxy & arg0, QAuthenticator * arg1) {
  if (this->slot_func__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator != NULL) {
    // do smth...
    this->slot_func__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QNetworkAccessManager_SlotProxy_connect__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkAccessManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator = (decltype(that->slot_func__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator))ffifptr;
  QObject::connect((QNetworkAccessManager*)sender, SIGNAL(proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)), that, SLOT(slot_proxy_func__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(const QNetworkProxy & arg0, QAuthenticator * arg1)));
  return that;
}
extern "C"
void QNetworkAccessManager_SlotProxy_disconnect__ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(QNetworkAccessManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkAccessManager_SlotProxy::slot_proxy_func__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(QNetworkReply * arg0, QSslPreSharedKeyAuthenticator * arg1) {
  if (this->slot_func__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator != NULL) {
    // do smth...
    this->slot_func__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QNetworkAccessManager_SlotProxy_connect__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkAccessManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator = (decltype(that->slot_func__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator))ffifptr;
  QObject::connect((QNetworkAccessManager*)sender, SIGNAL(preSharedKeyAuthenticationRequired(class QNetworkReply *, class QSslPreSharedKeyAuthenticator *)), that, SLOT(slot_proxy_func__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(QNetworkReply * arg0, QSslPreSharedKeyAuthenticator * arg1)));
  return that;
}
extern "C"
void QNetworkAccessManager_SlotProxy_disconnect__ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(QNetworkAccessManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkAccessManager_SlotProxy::slot_proxy_func__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(QNetworkAccessManager::NetworkAccessibility arg0) {
  if (this->slot_func__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE != NULL) {
    // do smth...
    this->slot_func__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkAccessManager_SlotProxy_connect__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkAccessManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE = (decltype(that->slot_func__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE))ffifptr;
  QObject::connect((QNetworkAccessManager*)sender, SIGNAL(networkAccessibleChanged(class QNetworkAccessManager::NetworkAccessibility)), that, SLOT(slot_proxy_func__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(QNetworkAccessManager::NetworkAccessibility arg0)));
  return that;
}
extern "C"
void QNetworkAccessManager_SlotProxy_disconnect__ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(QNetworkAccessManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkAccessManager_SlotProxy::slot_proxy_func__ZN21QNetworkAccessManager8finishedEP13QNetworkReply(QNetworkReply * arg0) {
  if (this->slot_func__ZN21QNetworkAccessManager8finishedEP13QNetworkReply != NULL) {
    // do smth...
    this->slot_func__ZN21QNetworkAccessManager8finishedEP13QNetworkReply(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkAccessManager_SlotProxy_connect__ZN21QNetworkAccessManager8finishedEP13QNetworkReply(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkAccessManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QNetworkAccessManager8finishedEP13QNetworkReply = (decltype(that->slot_func__ZN21QNetworkAccessManager8finishedEP13QNetworkReply))ffifptr;
  QObject::connect((QNetworkAccessManager*)sender, SIGNAL(finished(class QNetworkReply *)), that, SLOT(slot_proxy_func__ZN21QNetworkAccessManager8finishedEP13QNetworkReply(QNetworkReply * arg0)));
  return that;
}
extern "C"
void QNetworkAccessManager_SlotProxy_disconnect__ZN21QNetworkAccessManager8finishedEP13QNetworkReply(QNetworkAccessManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkAccessManager_SlotProxy::slot_proxy_func__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(QNetworkReply * arg0) {
  if (this->slot_func__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply != NULL) {
    // do smth...
    this->slot_func__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkAccessManager_SlotProxy_connect__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkAccessManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply = (decltype(that->slot_func__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply))ffifptr;
  QObject::connect((QNetworkAccessManager*)sender, SIGNAL(encrypted(class QNetworkReply *)), that, SLOT(slot_proxy_func__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(QNetworkReply * arg0)));
  return that;
}
extern "C"
void QNetworkAccessManager_SlotProxy_disconnect__ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(QNetworkAccessManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkAccessManager_SlotProxy::slot_proxy_func__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(QNetworkReply * arg0, QAuthenticator * arg1) {
  if (this->slot_func__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator != NULL) {
    // do smth...
    this->slot_func__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QNetworkAccessManager_SlotProxy_connect__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkAccessManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator = (decltype(that->slot_func__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator))ffifptr;
  QObject::connect((QNetworkAccessManager*)sender, SIGNAL(authenticationRequired(class QNetworkReply *, class QAuthenticator *)), that, SLOT(slot_proxy_func__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(QNetworkReply * arg0, QAuthenticator * arg1)));
  return that;
}
extern "C"
void QNetworkAccessManager_SlotProxy_disconnect__ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(QNetworkAccessManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

