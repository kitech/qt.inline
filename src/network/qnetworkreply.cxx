// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qnetworkreply.h
// dst-file: /src/network/qnetworkreply.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworkreply.h>

extern "C" {

int QNetworkReply_Class_Size()
{
  return sizeof(QNetworkReply);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qnetworkreply_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QNetworkReply_SlotProxy here
class QNetworkReply_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QNetworkReply_SlotProxy():QObject(){}

public slots:
  // downloadProgress(qint64, qint64)
  void slot_proxy_func__ZN13QNetworkReply16downloadProgressExx(qint64 arg0, qint64 arg1);
public:
  void (*slot_func__ZN13QNetworkReply16downloadProgressExx)(void* rsfptr, qint64 arg0, qint64 arg1) = NULL;
public slots:
  // finished()
  void slot_proxy_func__ZN13QNetworkReply8finishedEv();
public:
  void (*slot_func__ZN13QNetworkReply8finishedEv)(void* rsfptr) = NULL;
public slots:
  // error(class QNetworkReply::NetworkError)
  void slot_proxy_func__ZN13QNetworkReply5errorENS_12NetworkErrorE(QNetworkReply::NetworkError arg0);
public:
  void (*slot_func__ZN13QNetworkReply5errorENS_12NetworkErrorE)(void* rsfptr, QNetworkReply::NetworkError arg0) = NULL;
public slots:
  // metaDataChanged()
  void slot_proxy_func__ZN13QNetworkReply15metaDataChangedEv();
public:
  void (*slot_func__ZN13QNetworkReply15metaDataChangedEv)(void* rsfptr) = NULL;
public slots:
  // uploadProgress(qint64, qint64)
  void slot_proxy_func__ZN13QNetworkReply14uploadProgressExx(qint64 arg0, qint64 arg1);
public:
  void (*slot_func__ZN13QNetworkReply14uploadProgressExx)(void* rsfptr, qint64 arg0, qint64 arg1) = NULL;
public slots:
  // encrypted()
  void slot_proxy_func__ZN13QNetworkReply9encryptedEv();
public:
  void (*slot_func__ZN13QNetworkReply9encryptedEv)(void* rsfptr) = NULL;
public slots:
  // preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
  void slot_proxy_func__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator * arg0);
public:
  void (*slot_func__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator)(void* rsfptr, QSslPreSharedKeyAuthenticator * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qnetworkreply.moc"

extern "C" {
  QNetworkReply_SlotProxy* QNetworkReply_SlotProxy_new()
  {
    return new QNetworkReply_SlotProxy();
  }
};

void QNetworkReply_SlotProxy::slot_proxy_func__ZN13QNetworkReply16downloadProgressExx(qint64 arg0, qint64 arg1) {
  if (this->slot_func__ZN13QNetworkReply16downloadProgressExx != NULL) {
    // do smth...
    this->slot_func__ZN13QNetworkReply16downloadProgressExx(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QNetworkReply_SlotProxy_connect__ZN13QNetworkReply16downloadProgressExx(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkReply_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QNetworkReply16downloadProgressExx = (decltype(that->slot_func__ZN13QNetworkReply16downloadProgressExx))ffifptr;
  QObject::connect((QNetworkReply*)sender, SIGNAL(downloadProgress(qint64, qint64)), that, SLOT(slot_proxy_func__ZN13QNetworkReply16downloadProgressExx(qint64 arg0, qint64 arg1)));
  return that;
}
extern "C"
void QNetworkReply_SlotProxy_disconnect__ZN13QNetworkReply16downloadProgressExx(QNetworkReply_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkReply_SlotProxy::slot_proxy_func__ZN13QNetworkReply8finishedEv() {
  if (this->slot_func__ZN13QNetworkReply8finishedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QNetworkReply8finishedEv(this->rsfptr);
  }
}
extern "C"
void* QNetworkReply_SlotProxy_connect__ZN13QNetworkReply8finishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkReply_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QNetworkReply8finishedEv = (decltype(that->slot_func__ZN13QNetworkReply8finishedEv))ffifptr;
  QObject::connect((QNetworkReply*)sender, SIGNAL(finished()), that, SLOT(slot_proxy_func__ZN13QNetworkReply8finishedEv()));
  return that;
}
extern "C"
void QNetworkReply_SlotProxy_disconnect__ZN13QNetworkReply8finishedEv(QNetworkReply_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkReply_SlotProxy::slot_proxy_func__ZN13QNetworkReply5errorENS_12NetworkErrorE(QNetworkReply::NetworkError arg0) {
  if (this->slot_func__ZN13QNetworkReply5errorENS_12NetworkErrorE != NULL) {
    // do smth...
    this->slot_func__ZN13QNetworkReply5errorENS_12NetworkErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkReply_SlotProxy_connect__ZN13QNetworkReply5errorENS_12NetworkErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkReply_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QNetworkReply5errorENS_12NetworkErrorE = (decltype(that->slot_func__ZN13QNetworkReply5errorENS_12NetworkErrorE))ffifptr;
  QObject::connect((QNetworkReply*)sender, SIGNAL(error(class QNetworkReply::NetworkError)), that, SLOT(slot_proxy_func__ZN13QNetworkReply5errorENS_12NetworkErrorE(QNetworkReply::NetworkError arg0)));
  return that;
}
extern "C"
void QNetworkReply_SlotProxy_disconnect__ZN13QNetworkReply5errorENS_12NetworkErrorE(QNetworkReply_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkReply_SlotProxy::slot_proxy_func__ZN13QNetworkReply15metaDataChangedEv() {
  if (this->slot_func__ZN13QNetworkReply15metaDataChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QNetworkReply15metaDataChangedEv(this->rsfptr);
  }
}
extern "C"
void* QNetworkReply_SlotProxy_connect__ZN13QNetworkReply15metaDataChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkReply_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QNetworkReply15metaDataChangedEv = (decltype(that->slot_func__ZN13QNetworkReply15metaDataChangedEv))ffifptr;
  QObject::connect((QNetworkReply*)sender, SIGNAL(metaDataChanged()), that, SLOT(slot_proxy_func__ZN13QNetworkReply15metaDataChangedEv()));
  return that;
}
extern "C"
void QNetworkReply_SlotProxy_disconnect__ZN13QNetworkReply15metaDataChangedEv(QNetworkReply_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkReply_SlotProxy::slot_proxy_func__ZN13QNetworkReply14uploadProgressExx(qint64 arg0, qint64 arg1) {
  if (this->slot_func__ZN13QNetworkReply14uploadProgressExx != NULL) {
    // do smth...
    this->slot_func__ZN13QNetworkReply14uploadProgressExx(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QNetworkReply_SlotProxy_connect__ZN13QNetworkReply14uploadProgressExx(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkReply_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QNetworkReply14uploadProgressExx = (decltype(that->slot_func__ZN13QNetworkReply14uploadProgressExx))ffifptr;
  QObject::connect((QNetworkReply*)sender, SIGNAL(uploadProgress(qint64, qint64)), that, SLOT(slot_proxy_func__ZN13QNetworkReply14uploadProgressExx(qint64 arg0, qint64 arg1)));
  return that;
}
extern "C"
void QNetworkReply_SlotProxy_disconnect__ZN13QNetworkReply14uploadProgressExx(QNetworkReply_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkReply_SlotProxy::slot_proxy_func__ZN13QNetworkReply9encryptedEv() {
  if (this->slot_func__ZN13QNetworkReply9encryptedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QNetworkReply9encryptedEv(this->rsfptr);
  }
}
extern "C"
void* QNetworkReply_SlotProxy_connect__ZN13QNetworkReply9encryptedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkReply_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QNetworkReply9encryptedEv = (decltype(that->slot_func__ZN13QNetworkReply9encryptedEv))ffifptr;
  QObject::connect((QNetworkReply*)sender, SIGNAL(encrypted()), that, SLOT(slot_proxy_func__ZN13QNetworkReply9encryptedEv()));
  return that;
}
extern "C"
void QNetworkReply_SlotProxy_disconnect__ZN13QNetworkReply9encryptedEv(QNetworkReply_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkReply_SlotProxy::slot_proxy_func__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator * arg0) {
  if (this->slot_func__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator != NULL) {
    // do smth...
    this->slot_func__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkReply_SlotProxy_connect__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkReply_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator = (decltype(that->slot_func__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator))ffifptr;
  QObject::connect((QNetworkReply*)sender, SIGNAL(preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)), that, SLOT(slot_proxy_func__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator * arg0)));
  return that;
}
extern "C"
void QNetworkReply_SlotProxy_disconnect__ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QNetworkReply_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

