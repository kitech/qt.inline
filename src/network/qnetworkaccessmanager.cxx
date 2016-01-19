// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
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
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

