// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qsslsocket.h
// dst-file: /src/network/qsslsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsslsocket.h>

extern "C" {

int QSslSocket_Class_Size()
{
  return sizeof(QSslSocket);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsslsocket_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSslSocket_SlotProxy here
class QSslSocket_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSslSocket_SlotProxy():QObject(){}

public slots:
  // peerVerifyError(const class QSslError &)
  void slot_proxy_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError(const QSslError & arg0);
public:
  void (*slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError)(void* rsfptr, const QSslError & arg0) = NULL;
public slots:
  // modeChanged(class QSslSocket::SslMode)
  void slot_proxy_func__ZN10QSslSocket11modeChangedENS_7SslModeE(QSslSocket::SslMode arg0);
public:
  void (*slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE)(void* rsfptr, QSslSocket::SslMode arg0) = NULL;
public slots:
  // encrypted()
  void slot_proxy_func__ZN10QSslSocket9encryptedEv();
public:
  void (*slot_func__ZN10QSslSocket9encryptedEv)(void* rsfptr) = NULL;
public slots:
  // preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
  void slot_proxy_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator * arg0);
public:
  void (*slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator)(void* rsfptr, QSslPreSharedKeyAuthenticator * arg0) = NULL;
public slots:
  // encryptedBytesWritten(qint64)
  void slot_proxy_func__ZN10QSslSocket21encryptedBytesWrittenEx(qint64 arg0);
public:
  void (*slot_func__ZN10QSslSocket21encryptedBytesWrittenEx)(void* rsfptr, qint64 arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qsslsocket.moc"

extern "C" {
  QSslSocket_SlotProxy* QSslSocket_SlotProxy_new()
  {
    return new QSslSocket_SlotProxy();
  }
};

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError(const QSslError & arg0) {
  if (this->slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError(this->rsfptr, arg0);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket15peerVerifyErrorERK9QSslError(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError = (decltype(that->slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(peerVerifyError(const class QSslError &)), that, SLOT(slot_proxy_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError(const QSslError & arg0)));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket15peerVerifyErrorERK9QSslError(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket11modeChangedENS_7SslModeE(QSslSocket::SslMode arg0) {
  if (this->slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE(this->rsfptr, arg0);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket11modeChangedENS_7SslModeE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE = (decltype(that->slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(modeChanged(class QSslSocket::SslMode)), that, SLOT(slot_proxy_func__ZN10QSslSocket11modeChangedENS_7SslModeE(QSslSocket::SslMode arg0)));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket11modeChangedENS_7SslModeE(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket9encryptedEv() {
  if (this->slot_func__ZN10QSslSocket9encryptedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket9encryptedEv(this->rsfptr);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket9encryptedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket9encryptedEv = (decltype(that->slot_func__ZN10QSslSocket9encryptedEv))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(encrypted()), that, SLOT(slot_proxy_func__ZN10QSslSocket9encryptedEv()));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket9encryptedEv(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator * arg0) {
  if (this->slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(this->rsfptr, arg0);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator = (decltype(that->slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)), that, SLOT(slot_proxy_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator * arg0)));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket21encryptedBytesWrittenEx(qint64 arg0) {
  if (this->slot_func__ZN10QSslSocket21encryptedBytesWrittenEx != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket21encryptedBytesWrittenEx(this->rsfptr, arg0);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket21encryptedBytesWrittenEx(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket21encryptedBytesWrittenEx = (decltype(that->slot_func__ZN10QSslSocket21encryptedBytesWrittenEx))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(encryptedBytesWritten(qint64)), that, SLOT(slot_proxy_func__ZN10QSslSocket21encryptedBytesWrittenEx(qint64 arg0)));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket21encryptedBytesWrittenEx(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

