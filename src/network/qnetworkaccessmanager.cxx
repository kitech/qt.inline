//  header block begin
// since 0x040400
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h
#ifndef protected
#define protected public
#endif
#include <qnetworkaccessmanager.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkAccessManager is pure virtual: false
// QNetworkAccessManager has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkAccessManager : public QNetworkAccessManager {
public:
  virtual ~MyQNetworkAccessManager() {}
// void QNetworkAccessManager(class QObject *)
MyQNetworkAccessManager(QObject * parent) : QNetworkAccessManager(parent) {}
// Protected virtual Visibility=Default Availability=Available
// QNetworkReply * createRequest(enum QNetworkAccessManager::Operation, const class QNetworkRequest &, class QIODevice *)
  virtual QNetworkReply * createRequest(QNetworkAccessManager::Operation op, const QNetworkRequest & request, QIODevice * outgoingData) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createRequest", &handled, 3, (uint64_t)op, (uint64_t)&request, (uint64_t)outgoingData, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QNetworkReply *)(irv);
      // PointerPointerQNetworkReply *
    } else {
    return QNetworkAccessManager::createRequest(op, request, outgoingData);
  }
  }

// Protected Visibility=Default Availability=Available
// QStringList supportedSchemesImplementation()
  virtual QStringList supportedSchemesImplementation() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportedSchemesImplementation", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QStringList*)(irv);
      // RecordRecordQStringList
    } else {
    return QNetworkAccessManager::supportedSchemesImplementation();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:183
// [8] QNetworkReply * createRequest(enum QNetworkAccessManager::Operation, const class QNetworkRequest &, class QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager13createRequestENS_9OperationERK15QNetworkRequestP9QIODevice(void *this_, QNetworkAccessManager::Operation op, QNetworkRequest* request, QIODevice * outgoingData) {
  return (void*)((QNetworkAccessManager*)this_)->QNetworkAccessManager::createRequest(op, *request, outgoingData);
}

// Protected Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:187
// [8] QStringList supportedSchemesImplementation()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager30supportedSchemesImplementationEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->QNetworkAccessManager::supportedSchemesImplementation();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x050200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:76
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager10metaObjectEv(void *this_) {
  return (void*)((QNetworkAccessManager*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:103
// [-2] void QNetworkAccessManager(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManagerC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQNetworkAccessManager*)(0);
  return  new MyQNetworkAccessManager(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:104
// [-2] void ~QNetworkAccessManager()
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManagerD2Ev(void *this_) {
  delete (QNetworkAccessManager*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:107
// [8] QStringList supportedSchemes()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager16supportedSchemesEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->supportedSchemes();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:109
// [-2] void clearAccessCache()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager16clearAccessCacheEv(void *this_) {
  ((QNetworkAccessManager*)this_)->clearAccessCache();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:111
// [-2] void clearConnectionCache()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager20clearConnectionCacheEv(void *this_) {
  ((QNetworkAccessManager*)this_)->clearConnectionCache();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:114
// [8] QNetworkProxy proxy()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager5proxyEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->proxy();
return new QNetworkProxy(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:115
// [-2] void setProxy(const class QNetworkProxy &)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager8setProxyERK13QNetworkProxy(void *this_, QNetworkProxy* proxy) {
  ((QNetworkAccessManager*)this_)->setProxy(*proxy);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:116
// [8] QNetworkProxyFactory * proxyFactory()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager12proxyFactoryEv(void *this_) {
  return (void*)((QNetworkAccessManager*)this_)->proxyFactory();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:117
// [-2] void setProxyFactory(class QNetworkProxyFactory *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager15setProxyFactoryEP20QNetworkProxyFactory(void *this_, QNetworkProxyFactory * factory) {
  ((QNetworkAccessManager*)this_)->setProxyFactory(factory);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:120
// [8] QAbstractNetworkCache * cache()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager5cacheEv(void *this_) {
  return (void*)((QNetworkAccessManager*)this_)->cache();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:121
// [-2] void setCache(class QAbstractNetworkCache *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager8setCacheEP21QAbstractNetworkCache(void *this_, QAbstractNetworkCache * cache) {
  ((QNetworkAccessManager*)this_)->setCache(cache);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:123
// [8] QNetworkCookieJar * cookieJar()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager9cookieJarEv(void *this_) {
  return (void*)((QNetworkAccessManager*)this_)->cookieJar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:124
// [-2] void setCookieJar(class QNetworkCookieJar *)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager12setCookieJarEP17QNetworkCookieJar(void *this_, QNetworkCookieJar * cookieJar) {
  ((QNetworkAccessManager*)this_)->setCookieJar(cookieJar);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:126
// [-2] void setStrictTransportSecurityEnabled(_Bool)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager33setStrictTransportSecurityEnabledEb(void *this_, bool enabled) {
  ((QNetworkAccessManager*)this_)->setStrictTransportSecurityEnabled(enabled);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:127
// [1] bool isStrictTransportSecurityEnabled()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkAccessManager32isStrictTransportSecurityEnabledEv(void *this_) {
  return (bool)((QNetworkAccessManager*)this_)->isStrictTransportSecurityEnabled();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:128
// [-2] void enableStrictTransportSecurityStore(_Bool, const class QString &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager34enableStrictTransportSecurityStoreEbRK7QString(void *this_, bool enabled, QString* storeDir) {
  ((QNetworkAccessManager*)this_)->enableStrictTransportSecurityStore(enabled, *storeDir);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:129
// [1] bool isStrictTransportSecurityStoreEnabled()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkAccessManager37isStrictTransportSecurityStoreEnabledEv(void *this_) {
  return (bool)((QNetworkAccessManager*)this_)->isStrictTransportSecurityStoreEnabled();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:133
// [8] QNetworkReply * head(const class QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager4headERK15QNetworkRequest(void *this_, QNetworkRequest* request) {
  return (void*)((QNetworkAccessManager*)this_)->head(*request);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:134
// [8] QNetworkReply * get(const class QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager3getERK15QNetworkRequest(void *this_, QNetworkRequest* request) {
  return (void*)((QNetworkAccessManager*)this_)->get(*request);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:135
// [8] QNetworkReply * post(const class QNetworkRequest &, class QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager4postERK15QNetworkRequestP9QIODevice(void *this_, QNetworkRequest* request, QIODevice * data) {
  return (void*)((QNetworkAccessManager*)this_)->post(*request, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:136
// [8] QNetworkReply * post(const class QNetworkRequest &, const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager4postERK15QNetworkRequestRK10QByteArray(void *this_, QNetworkRequest* request, QByteArray* data) {
  return (void*)((QNetworkAccessManager*)this_)->post(*request, *data);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:137
// [8] QNetworkReply * post(const class QNetworkRequest &, class QHttpMultiPart *)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager4postERK15QNetworkRequestP14QHttpMultiPart(void *this_, QNetworkRequest* request, QHttpMultiPart * multiPart) {
  return (void*)((QNetworkAccessManager*)this_)->post(*request, multiPart);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:138
// [8] QNetworkReply * put(const class QNetworkRequest &, class QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager3putERK15QNetworkRequestP9QIODevice(void *this_, QNetworkRequest* request, QIODevice * data) {
  return (void*)((QNetworkAccessManager*)this_)->put(*request, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:139
// [8] QNetworkReply * put(const class QNetworkRequest &, const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager3putERK15QNetworkRequestRK10QByteArray(void *this_, QNetworkRequest* request, QByteArray* data) {
  return (void*)((QNetworkAccessManager*)this_)->put(*request, *data);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:140
// [8] QNetworkReply * put(const class QNetworkRequest &, class QHttpMultiPart *)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager3putERK15QNetworkRequestP14QHttpMultiPart(void *this_, QNetworkRequest* request, QHttpMultiPart * multiPart) {
  return (void*)((QNetworkAccessManager*)this_)->put(*request, multiPart);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:141
// [8] QNetworkReply * deleteResource(const class QNetworkRequest &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager14deleteResourceERK15QNetworkRequest(void *this_, QNetworkRequest* request) {
  return (void*)((QNetworkAccessManager*)this_)->deleteResource(*request);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:142
// [8] QNetworkReply * sendCustomRequest(const class QNetworkRequest &, const class QByteArray &, class QIODevice *)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayP9QIODevice(void *this_, QNetworkRequest* request, QByteArray* verb, QIODevice * data) {
  return (void*)((QNetworkAccessManager*)this_)->sendCustomRequest(*request, *verb, data);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:143
// [8] QNetworkReply * sendCustomRequest(const class QNetworkRequest &, const class QByteArray &, const class QByteArray &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayS5_(void *this_, QNetworkRequest* request, QByteArray* verb, QByteArray* data) {
  return (void*)((QNetworkAccessManager*)this_)->sendCustomRequest(*request, *verb, *data);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:144
// [8] QNetworkReply * sendCustomRequest(const class QNetworkRequest &, const class QByteArray &, class QHttpMultiPart *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayP14QHttpMultiPart(void *this_, QNetworkRequest* request, QByteArray* verb, QHttpMultiPart * multiPart) {
  return (void*)((QNetworkAccessManager*)this_)->sendCustomRequest(*request, *verb, multiPart);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:147
// [-2] void setConfiguration(const class QNetworkConfiguration &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager16setConfigurationERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* config) {
  ((QNetworkAccessManager*)this_)->setConfiguration(*config);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:148
// [8] QNetworkConfiguration configuration()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager13configurationEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->configuration();
return new QNetworkConfiguration(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:149
// [8] QNetworkConfiguration activeConfiguration()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager19activeConfigurationEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->activeConfiguration();
return new QNetworkConfiguration(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:151
// [-2] void setNetworkAccessible(enum QNetworkAccessManager::NetworkAccessibility)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager20setNetworkAccessibleENS_20NetworkAccessibilityE(void *this_, QNetworkAccessManager::NetworkAccessibility accessible) {
  ((QNetworkAccessManager*)this_)->setNetworkAccessible(accessible);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:152
// [4] QNetworkAccessManager::NetworkAccessibility networkAccessible()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
QNetworkAccessManager::NetworkAccessibility C_ZNK21QNetworkAccessManager17networkAccessibleEv(void *this_) {
  return (QNetworkAccessManager::NetworkAccessibility)((QNetworkAccessManager*)this_)->networkAccessible();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:156
// [-2] void connectToHostEncrypted(const class QString &, quint16, const class QSslConfiguration &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager22connectToHostEncryptedERK7QStringtRK17QSslConfiguration(void *this_, QString* hostName, quint16 port, QSslConfiguration* sslConfiguration) {
  ((QNetworkAccessManager*)this_)->connectToHostEncrypted(*hostName, port, *sslConfiguration);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:159
// [-2] void connectToHost(const class QString &, quint16)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager13connectToHostERK7QStringt(void *this_, QString* hostName, quint16 port) {
  ((QNetworkAccessManager*)this_)->connectToHost(*hostName, port);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:161
// [-2] void setRedirectPolicy(class QNetworkRequest::RedirectPolicy)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager17setRedirectPolicyEN15QNetworkRequest14RedirectPolicyE(void *this_, QNetworkRequest::RedirectPolicy policy) {
  ((QNetworkAccessManager*)this_)->setRedirectPolicy(policy);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:162
// [4] QNetworkRequest::RedirectPolicy redirectPolicy()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
QNetworkRequest::RedirectPolicy C_ZNK21QNetworkAccessManager14redirectPolicyEv(void *this_) {
  return (QNetworkRequest::RedirectPolicy)((QNetworkAccessManager*)this_)->redirectPolicy();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:166
// [-2] void proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(void *this_, QNetworkProxy* proxy, QAuthenticator * authenticator) {
  ((QNetworkAccessManager*)this_)->proxyAuthenticationRequired(*proxy, authenticator);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:168
// [-2] void authenticationRequired(class QNetworkReply *, class QAuthenticator *)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(void *this_, QNetworkReply * reply, QAuthenticator * authenticator) {
  ((QNetworkAccessManager*)this_)->authenticationRequired(reply, authenticator);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:169
// [-2] void finished(class QNetworkReply *)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager8finishedEP13QNetworkReply(void *this_, QNetworkReply * reply) {
  ((QNetworkAccessManager*)this_)->finished(reply);
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:171
// [-2] void encrypted(class QNetworkReply *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(void *this_, QNetworkReply * reply) {
  ((QNetworkAccessManager*)this_)->encrypted(reply);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:173
// [-2] void preSharedKeyAuthenticationRequired(class QNetworkReply *, class QSslPreSharedKeyAuthenticator *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(void *this_, QNetworkReply * reply, QSslPreSharedKeyAuthenticator * authenticator) {
  ((QNetworkAccessManager*)this_)->preSharedKeyAuthenticationRequired(reply, authenticator);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:177
// [-2] void networkSessionConnected()
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager23networkSessionConnectedEv(void *this_) {
  ((QNetworkAccessManager*)this_)->networkSessionConnected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:179
// [-2] void networkAccessibleChanged(class QNetworkAccessManager::NetworkAccessibility)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(void *this_, QNetworkAccessManager::NetworkAccessibility accessible) {
  ((QNetworkAccessManager*)this_)->networkAccessibleChanged(accessible);
}

//  main block end
