// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qhttpmultipart.h
// dst-file: /src/network/qhttpmultipart.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qhttpmultipart.h>


#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qhttpmultipart_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 56, column 10>
//   // proto:  void QHttpPart::swap(QHttpPart & other);
if (true) {
  auto f = [](QHttpPart flythis, QHttpPart & arg1) {
    ((QHttpPart*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHttpPart4swapERS_ swap(class QHttpPart &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QHttpMultiPart_Class_Size()
{
  return sizeof(QHttpMultiPart);
}

extern "C"
int QHttpPart_Class_Size()
{
  return sizeof(QHttpPart);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 97, column 10>
//   // proto:  void QHttpMultiPart::setContentType(QHttpMultiPart::ContentType contentType);
// _ZN14QHttpMultiPart14setContentTypeENS_11ContentTypeE setContentType(enum QHttpMultiPart::ContentType)
extern "C"
void
C_ZN14QHttpMultiPart14setContentTypeENS_11ContentTypeE(void *qthis,
QHttpMultiPart::ContentType arg1) {
  ((QHttpMultiPart*)qthis)->setContentType(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 80, column 5>
//   // proto:  const QMetaObject * QHttpMultiPart::metaObject();
// _ZNK14QHttpMultiPart10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QHttpMultiPart10metaObjectEv(void *qthis) {
  auto ret =
  ((QHttpMultiPart*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QHttpMultiPart::~QHttpMultiPart();
extern "C"
void C_ZN14QHttpMultiPartD2Ev(void *qthis) {
  delete (QHttpMultiPart*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 92, column 14>
//   // proto:  void QHttpMultiPart::QHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject * parent);
extern "C"
QHttpMultiPart*
C_ZN14QHttpMultiPartC2ENS_11ContentTypeEP7QObject(QHttpMultiPart::ContentType arg1,
QObject * arg2) {
  auto ret = new QHttpMultiPart(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 100, column 10>
//   // proto:  void QHttpMultiPart::setBoundary(const QByteArray & boundary);
// _ZN14QHttpMultiPart11setBoundaryERK10QByteArray setBoundary(const class QByteArray &)
extern "C"
void
C_ZN14QHttpMultiPart11setBoundaryERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QHttpMultiPart*)qthis)->setBoundary(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 91, column 14>
//   // proto:  void QHttpMultiPart::QHttpMultiPart(QObject * parent);
extern "C"
QHttpMultiPart*
C_ZN14QHttpMultiPartC2EP7QObject(QObject * arg1) {
  auto ret = new QHttpMultiPart(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 95, column 10>
//   // proto:  void QHttpMultiPart::append(const QHttpPart & httpPart);
// _ZN14QHttpMultiPart6appendERK9QHttpPart append(const class QHttpPart &)
extern "C"
void
C_ZN14QHttpMultiPart6appendERK9QHttpPart(void *qthis,
const QHttpPart* arg1) {
  ((QHttpMultiPart*)qthis)->append(*((const QHttpPart*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 99, column 16>
//   // proto:  QByteArray QHttpMultiPart::boundary();
// _ZNK14QHttpMultiPart8boundaryEv boundary()
extern "C"
QByteArray*
C_ZNK14QHttpMultiPart8boundaryEv(void *qthis) {
  auto ret =
  ((QHttpMultiPart*)qthis)->boundary();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 66, column 10>
//   // proto:  void QHttpPart::setBodyDevice(QIODevice * device);
// _ZN9QHttpPart13setBodyDeviceEP9QIODevice setBodyDevice(class QIODevice *)
extern "C"
void
C_ZN9QHttpPart13setBodyDeviceEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QHttpPart*)qthis)->setBodyDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 52, column 5>
//   // proto:  void QHttpPart::QHttpPart(const QHttpPart & other);
extern "C"
QHttpPart*
C_ZN9QHttpPartC2ERKS_(const QHttpPart* arg1) {
  auto ret = new QHttpPart(*((const QHttpPart*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 56, column 10>
//   // proto:  void QHttpPart::swap(QHttpPart & other);
// _ZN9QHttpPart4swapERS_ swap(class QHttpPart &)
extern "C"
void
C_ZN9QHttpPart4swapERS_(void *qthis,
QHttpPart* arg1) {
  ((QHttpPart*)qthis)->swap(*((QHttpPart*)arg1));
}
//   // proto:  void QHttpPart::~QHttpPart();
extern "C"
void C_ZN9QHttpPartD2Ev(void *qthis) {
  delete (QHttpPart*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 51, column 5>
//   // proto:  void QHttpPart::QHttpPart();
extern "C"
QHttpPart*
C_ZN9QHttpPartC2Ev() {
  auto ret = new QHttpPart();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 62, column 10>
//   // proto:  void QHttpPart::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value);
// _ZN9QHttpPart9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant setHeader(class QNetworkRequest::KnownHeaders, const class QVariant &)
extern "C"
void
C_ZN9QHttpPart9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant(void *qthis,
QNetworkRequest::KnownHeaders* arg1,
const QVariant* arg2) {
  ((QHttpPart*)qthis)->setHeader(*((QNetworkRequest::KnownHeaders*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 65, column 10>
//   // proto:  void QHttpPart::setBody(const QByteArray & body);
// _ZN9QHttpPart7setBodyERK10QByteArray setBody(const class QByteArray &)
extern "C"
void
C_ZN9QHttpPart7setBodyERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QHttpPart*)qthis)->setBody(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 63, column 10>
//   // proto:  void QHttpPart::setRawHeader(const QByteArray & headerName, const QByteArray & headerValue);
// _ZN9QHttpPart12setRawHeaderERK10QByteArrayS2_ setRawHeader(const class QByteArray &, const class QByteArray &)
extern "C"
void
C_ZN9QHttpPart12setRawHeaderERK10QByteArrayS2_(void *qthis,
const QByteArray* arg1,
const QByteArray* arg2) {
  ((QHttpPart*)qthis)->setRawHeader(*((const QByteArray*)arg1),
*((const QByteArray*)arg2));
}
// <= ext block end

// body block begin =>
// QHttpMultiPart_SlotProxy here
class QHttpMultiPart_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QHttpMultiPart_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/network/qhttpmultipart.moc"

extern "C" {
  QHttpMultiPart_SlotProxy* QHttpMultiPart_SlotProxy_new()
  {
    return new QHttpMultiPart_SlotProxy();
  }
};

// <= body block end

