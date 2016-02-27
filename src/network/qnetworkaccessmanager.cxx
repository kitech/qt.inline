// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworkaccessmanager.h
// dst-file: /src/network/qnetworkaccessmanager.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworkaccessmanager.h>


#include <qstringlist.h>
#include <qnetworkconfiguration.h>
#include <qnetworkproxy.h>
// <= header block end

// main block begin =>
void __keep_qnetworkaccessmanager_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkAccessManager_Class_Size()
{
  return sizeof(QNetworkAccessManager);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 112, column 10>
//   // proto:  void QNetworkAccessManager::setCookieJar(QNetworkCookieJar * cookieJar);
// _ZN21QNetworkAccessManager12setCookieJarEP17QNetworkCookieJar setCookieJar(class QNetworkCookieJar *)
extern "C"
void
C_ZN21QNetworkAccessManager12setCookieJarEP17QNetworkCookieJar(void *qthis,
QNetworkCookieJar * arg1) {
  ((QNetworkAccessManager*)qthis)->setCookieJar(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 121, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::put(const QNetworkRequest & request, QHttpMultiPart * multiPart);
// _ZN21QNetworkAccessManager3putERK15QNetworkRequestP14QHttpMultiPart put(const class QNetworkRequest &, class QHttpMultiPart *)
extern "C"
void*
C_ZN21QNetworkAccessManager3putERK15QNetworkRequestP14QHttpMultiPart(void *qthis,
const QNetworkRequest* arg1,
QHttpMultiPart * arg2) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->put(*((const QNetworkRequest*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 111, column 24>
//   // proto:  QNetworkCookieJar * QNetworkAccessManager::cookieJar();
// _ZNK21QNetworkAccessManager9cookieJarEv cookieJar()
extern "C"
void*
C_ZNK21QNetworkAccessManager9cookieJarEv(void *qthis) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->cookieJar();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 145, column 10>
//   // proto:  void QNetworkAccessManager::finished(QNetworkReply * reply);
// _ZN21QNetworkAccessManager8finishedEP13QNetworkReply finished(class QNetworkReply *)
extern "C"
void
C_ZN21QNetworkAccessManager8finishedEP13QNetworkReply(void *qthis,
QNetworkReply * arg1) {
  ((QNetworkAccessManager*)qthis)->finished(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 67, column 5>
//   // proto:  const QMetaObject * QNetworkAccessManager::metaObject();
// _ZNK21QNetworkAccessManager10metaObjectEv metaObject()
extern "C"
void*
C_ZNK21QNetworkAccessManager10metaObjectEv(void *qthis) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 147, column 10>
//   // proto:  void QNetworkAccessManager::encrypted(QNetworkReply * reply);
// _ZN21QNetworkAccessManager9encryptedEP13QNetworkReply encrypted(class QNetworkReply *)
extern "C"
void
C_ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(void *qthis,
QNetworkReply * arg1) {
  ((QNetworkAccessManager*)qthis)->encrypted(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 97, column 17>
//   // proto:  QStringList QNetworkAccessManager::supportedSchemes();
// _ZNK21QNetworkAccessManager16supportedSchemesEv supportedSchemes()
extern "C"
QStringList*
C_ZNK21QNetworkAccessManager16supportedSchemesEv(void *qthis) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->supportedSchemes();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 108, column 28>
//   // proto:  QAbstractNetworkCache * QNetworkAccessManager::cache();
// _ZNK21QNetworkAccessManager5cacheEv cache()
extern "C"
void*
C_ZNK21QNetworkAccessManager5cacheEv(void *qthis) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->cache();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 119, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::put(const QNetworkRequest & request, QIODevice * data);
// _ZN21QNetworkAccessManager3putERK15QNetworkRequestP9QIODevice put(const class QNetworkRequest &, class QIODevice *)
extern "C"
void*
C_ZN21QNetworkAccessManager3putERK15QNetworkRequestP9QIODevice(void *qthis,
const QNetworkRequest* arg1,
QIODevice * arg2) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->put(*((const QNetworkRequest*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 93, column 14>
//   // proto:  void QNetworkAccessManager::QNetworkAccessManager(QObject * parent);
extern "C"
QNetworkAccessManager*
C_ZN21QNetworkAccessManagerC2EP7QObject(QObject * arg1) {
  auto ret = new QNetworkAccessManager(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 115, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::get(const QNetworkRequest & request);
// _ZN21QNetworkAccessManager3getERK15QNetworkRequest get(const class QNetworkRequest &)
extern "C"
void*
C_ZN21QNetworkAccessManager3getERK15QNetworkRequest(void *qthis,
const QNetworkRequest* arg1) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->get(*((const QNetworkRequest*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 122, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::deleteResource(const QNetworkRequest & request);
// _ZN21QNetworkAccessManager14deleteResourceERK15QNetworkRequest deleteResource(const class QNetworkRequest &)
extern "C"
void*
C_ZN21QNetworkAccessManager14deleteResourceERK15QNetworkRequest(void *qthis,
const QNetworkRequest* arg1) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->deleteResource(*((const QNetworkRequest*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 114, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::head(const QNetworkRequest & request);
// _ZN21QNetworkAccessManager4headERK15QNetworkRequest head(const class QNetworkRequest &)
extern "C"
void*
C_ZN21QNetworkAccessManager4headERK15QNetworkRequest(void *qthis,
const QNetworkRequest* arg1) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->head(*((const QNetworkRequest*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 149, column 10>
//   // proto:  void QNetworkAccessManager::preSharedKeyAuthenticationRequired(QNetworkReply * reply, QSslPreSharedKeyAuthenticator * authenticator);
// _ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator preSharedKeyAuthenticationRequired(class QNetworkReply *, class QSslPreSharedKeyAuthenticator *)
extern "C"
void
C_ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(void *qthis,
QNetworkReply * arg1,
QSslPreSharedKeyAuthenticator * arg2) {
  ((QNetworkAccessManager*)qthis)->preSharedKeyAuthenticationRequired(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 127, column 27>
//   // proto:  QNetworkConfiguration QNetworkAccessManager::configuration();
// _ZNK21QNetworkAccessManager13configurationEv configuration()
extern "C"
QNetworkConfiguration*
C_ZNK21QNetworkAccessManager13configurationEv(void *qthis) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->configuration();
  return new QNetworkConfiguration(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 155, column 10>
//   // proto:  void QNetworkAccessManager::networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility accessible);
// _ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE networkAccessibleChanged(class QNetworkAccessManager::NetworkAccessibility)
extern "C"
void
C_ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(void *qthis,
QNetworkAccessManager::NetworkAccessibility* arg1) {
  ((QNetworkAccessManager*)qthis)->networkAccessibleChanged(*((QNetworkAccessManager::NetworkAccessibility*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 126, column 10>
//   // proto:  void QNetworkAccessManager::setConfiguration(const QNetworkConfiguration & config);
// _ZN21QNetworkAccessManager16setConfigurationERK21QNetworkConfiguration setConfiguration(const class QNetworkConfiguration &)
extern "C"
void
C_ZN21QNetworkAccessManager16setConfigurationERK21QNetworkConfiguration(void *qthis,
const QNetworkConfiguration* arg1) {
  ((QNetworkAccessManager*)qthis)->setConfiguration(*((const QNetworkConfiguration*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 116, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::post(const QNetworkRequest & request, QIODevice * data);
// _ZN21QNetworkAccessManager4postERK15QNetworkRequestP9QIODevice post(const class QNetworkRequest &, class QIODevice *)
extern "C"
void*
C_ZN21QNetworkAccessManager4postERK15QNetworkRequestP9QIODevice(void *qthis,
const QNetworkRequest* arg1,
QIODevice * arg2) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->post(*((const QNetworkRequest*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 142, column 10>
//   // proto:  void QNetworkAccessManager::proxyAuthenticationRequired(const QNetworkProxy & proxy, QAuthenticator * authenticator);
// _ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
extern "C"
void
C_ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(void *qthis,
const QNetworkProxy* arg1,
QAuthenticator * arg2) {
  ((QNetworkAccessManager*)qthis)->proxyAuthenticationRequired(*((const QNetworkProxy*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 117, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::post(const QNetworkRequest & request, const QByteArray & data);
// _ZN21QNetworkAccessManager4postERK15QNetworkRequestRK10QByteArray post(const class QNetworkRequest &, const class QByteArray &)
extern "C"
void*
C_ZN21QNetworkAccessManager4postERK15QNetworkRequestRK10QByteArray(void *qthis,
const QNetworkRequest* arg1,
const QByteArray* arg2) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->post(*((const QNetworkRequest*)arg1),
*((const QByteArray*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 123, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::sendCustomRequest(const QNetworkRequest & request, const QByteArray & verb, QIODevice * data);
// _ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayP9QIODevice sendCustomRequest(const class QNetworkRequest &, const class QByteArray &, class QIODevice *)
extern "C"
void*
C_ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayP9QIODevice(void *qthis,
const QNetworkRequest* arg1,
const QByteArray* arg2,
QIODevice * arg3) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->sendCustomRequest(*((const QNetworkRequest*)arg1),
*((const QByteArray*)arg2),
arg3);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 135, column 10>
//   // proto:  void QNetworkAccessManager::connectToHostEncrypted(const QString & hostName, quint16 port, const QSslConfiguration & sslConfiguration);
// _ZN21QNetworkAccessManager22connectToHostEncryptedERK7QStringtRK17QSslConfiguration connectToHostEncrypted(const class QString &, quint16, const class QSslConfiguration &)
extern "C"
void
C_ZN21QNetworkAccessManager22connectToHostEncryptedERK7QStringtRK17QSslConfiguration(void *qthis,
const QString* arg1,
quint16 arg2,
const QSslConfiguration* arg3) {
  ((QNetworkAccessManager*)qthis)->connectToHostEncrypted(*((const QString*)arg1),
arg2,
*((const QSslConfiguration*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 130, column 10>
//   // proto:  void QNetworkAccessManager::setNetworkAccessible(QNetworkAccessManager::NetworkAccessibility accessible);
// _ZN21QNetworkAccessManager20setNetworkAccessibleENS_20NetworkAccessibilityE setNetworkAccessible(enum QNetworkAccessManager::NetworkAccessibility)
extern "C"
void
C_ZN21QNetworkAccessManager20setNetworkAccessibleENS_20NetworkAccessibilityE(void *qthis,
QNetworkAccessManager::NetworkAccessibility arg1) {
  ((QNetworkAccessManager*)qthis)->setNetworkAccessible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 99, column 10>
//   // proto:  void QNetworkAccessManager::clearAccessCache();
// _ZN21QNetworkAccessManager16clearAccessCacheEv clearAccessCache()
extern "C"
void
C_ZN21QNetworkAccessManager16clearAccessCacheEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->clearAccessCache();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 128, column 27>
//   // proto:  QNetworkConfiguration QNetworkAccessManager::activeConfiguration();
// _ZNK21QNetworkAccessManager19activeConfigurationEv activeConfiguration()
extern "C"
QNetworkConfiguration*
C_ZNK21QNetworkAccessManager19activeConfigurationEv(void *qthis) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->activeConfiguration();
  return new QNetworkConfiguration(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 105, column 10>
//   // proto:  void QNetworkAccessManager::setProxyFactory(QNetworkProxyFactory * factory);
// _ZN21QNetworkAccessManager15setProxyFactoryEP20QNetworkProxyFactory setProxyFactory(class QNetworkProxyFactory *)
extern "C"
void
C_ZN21QNetworkAccessManager15setProxyFactoryEP20QNetworkProxyFactory(void *qthis,
QNetworkProxyFactory * arg1) {
  ((QNetworkAccessManager*)qthis)->setProxyFactory(arg1);
}
//   // proto:  void QNetworkAccessManager::~QNetworkAccessManager();
extern "C"
void C_ZN21QNetworkAccessManagerD2Ev(void *qthis) {
  delete (QNetworkAccessManager*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 120, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::put(const QNetworkRequest & request, const QByteArray & data);
// _ZN21QNetworkAccessManager3putERK15QNetworkRequestRK10QByteArray put(const class QNetworkRequest &, const class QByteArray &)
extern "C"
void*
C_ZN21QNetworkAccessManager3putERK15QNetworkRequestRK10QByteArray(void *qthis,
const QNetworkRequest* arg1,
const QByteArray* arg2) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->put(*((const QNetworkRequest*)arg1),
*((const QByteArray*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 109, column 10>
//   // proto:  void QNetworkAccessManager::setCache(QAbstractNetworkCache * cache);
// _ZN21QNetworkAccessManager8setCacheEP21QAbstractNetworkCache setCache(class QAbstractNetworkCache *)
extern "C"
void
C_ZN21QNetworkAccessManager8setCacheEP21QAbstractNetworkCache(void *qthis,
QAbstractNetworkCache * arg1) {
  ((QNetworkAccessManager*)qthis)->setCache(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 138, column 10>
//   // proto:  void QNetworkAccessManager::connectToHost(const QString & hostName, quint16 port);
// _ZN21QNetworkAccessManager13connectToHostERK7QStringt connectToHost(const class QString &, quint16)
extern "C"
void
C_ZN21QNetworkAccessManager13connectToHostERK7QStringt(void *qthis,
const QString* arg1,
quint16 arg2) {
  ((QNetworkAccessManager*)qthis)->connectToHost(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 144, column 10>
//   // proto:  void QNetworkAccessManager::authenticationRequired(QNetworkReply * reply, QAuthenticator * authenticator);
// _ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator authenticationRequired(class QNetworkReply *, class QAuthenticator *)
extern "C"
void
C_ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(void *qthis,
QNetworkReply * arg1,
QAuthenticator * arg2) {
  ((QNetworkAccessManager*)qthis)->authenticationRequired(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 103, column 10>
//   // proto:  void QNetworkAccessManager::setProxy(const QNetworkProxy & proxy);
// _ZN21QNetworkAccessManager8setProxyERK13QNetworkProxy setProxy(const class QNetworkProxy &)
extern "C"
void
C_ZN21QNetworkAccessManager8setProxyERK13QNetworkProxy(void *qthis,
const QNetworkProxy* arg1) {
  ((QNetworkAccessManager*)qthis)->setProxy(*((const QNetworkProxy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 153, column 10>
//   // proto:  void QNetworkAccessManager::networkSessionConnected();
// _ZN21QNetworkAccessManager23networkSessionConnectedEv networkSessionConnected()
extern "C"
void
C_ZN21QNetworkAccessManager23networkSessionConnectedEv(void *qthis) {
  ((QNetworkAccessManager*)qthis)->networkSessionConnected();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 131, column 26>
//   // proto:  QNetworkAccessManager::NetworkAccessibility QNetworkAccessManager::networkAccessible();
// _ZNK21QNetworkAccessManager17networkAccessibleEv networkAccessible()
extern "C"
QNetworkAccessManager::NetworkAccessibility
C_ZNK21QNetworkAccessManager17networkAccessibleEv(void *qthis) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->networkAccessible();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 102, column 19>
//   // proto:  QNetworkProxy QNetworkAccessManager::proxy();
// _ZNK21QNetworkAccessManager5proxyEv proxy()
extern "C"
QNetworkProxy*
C_ZNK21QNetworkAccessManager5proxyEv(void *qthis) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->proxy();
  return new QNetworkProxy(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 118, column 20>
//   // proto:  QNetworkReply * QNetworkAccessManager::post(const QNetworkRequest & request, QHttpMultiPart * multiPart);
// _ZN21QNetworkAccessManager4postERK15QNetworkRequestP14QHttpMultiPart post(const class QNetworkRequest &, class QHttpMultiPart *)
extern "C"
void*
C_ZN21QNetworkAccessManager4postERK15QNetworkRequestP14QHttpMultiPart(void *qthis,
const QNetworkRequest* arg1,
QHttpMultiPart * arg2) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->post(*((const QNetworkRequest*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 148, column 10>
//   // proto:  void QNetworkAccessManager::sslErrors(QNetworkReply * reply, const QList<QSslError> & errors);
// _ZN21QNetworkAccessManager9sslErrorsEP13QNetworkReplyRK5QListI9QSslErrorE sslErrors(class QNetworkReply *, const QList<class QSslError> &)
extern "C"
void
C_ZN21QNetworkAccessManager9sslErrorsEP13QNetworkReplyRK5QListI9QSslErrorE(void *qthis,
QNetworkReply * arg1,
const QList<QSslError>* arg2) {
  ((QNetworkAccessManager*)qthis)->sslErrors(arg1,
*((const QList<QSslError>*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkaccessmanager.h', line 104, column 27>
//   // proto:  QNetworkProxyFactory * QNetworkAccessManager::proxyFactory();
// _ZNK21QNetworkAccessManager12proxyFactoryEv proxyFactory()
extern "C"
void*
C_ZNK21QNetworkAccessManager12proxyFactoryEv(void *qthis) {
  auto ret =
  ((QNetworkAccessManager*)qthis)->proxyFactory();
  return (void*)ret;
}
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

