#include <qbytearray.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qhttpmultipart.h
// dst-file: /src/network/qhttpmultipart.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qhttpmultipart.h>

extern "C" {

int QHttpMultiPart_Class_Size()
{
  return sizeof(QHttpMultiPart);
}

int QHttpPart_Class_Size()
{
  return sizeof(QHttpPart);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qhttpmultipart_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 97, column 10>
//   // proto:  void QHttpMultiPart::setContentType(QHttpMultiPart::ContentType contentType);
if (true) {
  auto f = [](QHttpMultiPart flythis, QHttpMultiPart::ContentType arg1) {
    ((QHttpMultiPart*)0)->setContentType(arg1);
    flythis.setContentType(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QHttpMultiPart14setContentTypeENS_11ContentTypeE setContentType(enum QHttpMultiPart::ContentType)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 80, column 5>
//   // proto:  const QMetaObject * QHttpMultiPart::metaObject();
if (true) {
  auto f = [](QHttpMultiPart flythis) {
    ((QHttpMultiPart*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK14QHttpMultiPart10metaObjectEv metaObject()
//   // proto:  void QHttpMultiPart::~QHttpMultiPart();
if (true) {
  delete ((QHttpMultiPart*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 92, column 14>
//   // proto:  void QHttpMultiPart::QHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject * parent);
if (true) {
  auto f = [](QHttpMultiPart::ContentType arg1, QObject * arg2) {
    new QHttpMultiPart(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 100, column 10>
//   // proto:  void QHttpMultiPart::setBoundary(const QByteArray & boundary);
if (true) {
  auto f = [](QHttpMultiPart flythis, const QByteArray & arg1) {
    ((QHttpMultiPart*)0)->setBoundary(arg1);
    flythis.setBoundary(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QHttpMultiPart11setBoundaryERK10QByteArray setBoundary(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 91, column 14>
//   // proto:  void QHttpMultiPart::QHttpMultiPart(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QHttpMultiPart(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 95, column 10>
//   // proto:  void QHttpMultiPart::append(const QHttpPart & httpPart);
if (true) {
  auto f = [](QHttpMultiPart flythis, const QHttpPart & arg1) {
    ((QHttpMultiPart*)0)->append(arg1);
    flythis.append(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QHttpMultiPart6appendERK9QHttpPart append(const class QHttpPart &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 99, column 16>
//   // proto:  QByteArray QHttpMultiPart::boundary();
if (true) {
  auto f = [](QHttpMultiPart flythis) {
    ((QHttpMultiPart*)0)->boundary();
    flythis.boundary();
  };
  if (f == nullptr){}
}
// _ZNK14QHttpMultiPart8boundaryEv boundary()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 66, column 10>
//   // proto:  void QHttpPart::setBodyDevice(QIODevice * device);
if (true) {
  auto f = [](QHttpPart flythis, QIODevice * arg1) {
    ((QHttpPart*)0)->setBodyDevice(arg1);
    flythis.setBodyDevice(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHttpPart13setBodyDeviceEP9QIODevice setBodyDevice(class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 52, column 5>
//   // proto:  void QHttpPart::QHttpPart(const QHttpPart & other);
if (true) {
  auto f = [](const QHttpPart & arg1) {
    new QHttpPart(arg1);
  };
  if (f == nullptr){}
}
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
//   // proto:  void QHttpPart::~QHttpPart();
if (true) {
  delete ((QHttpPart*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 51, column 5>
//   // proto:  void QHttpPart::QHttpPart();
if (true) {
  auto f = []() {
    new QHttpPart();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 62, column 10>
//   // proto:  void QHttpPart::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value);
if (true) {
  auto f = [](QHttpPart flythis, QNetworkRequest::KnownHeaders arg1, const QVariant & arg2) {
    ((QHttpPart*)0)->setHeader(arg1, arg2);
    flythis.setHeader(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN9QHttpPart9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant setHeader(class QNetworkRequest::KnownHeaders, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 65, column 10>
//   // proto:  void QHttpPart::setBody(const QByteArray & body);
if (true) {
  auto f = [](QHttpPart flythis, const QByteArray & arg1) {
    ((QHttpPart*)0)->setBody(arg1);
    flythis.setBody(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHttpPart7setBodyERK10QByteArray setBody(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 63, column 10>
//   // proto:  void QHttpPart::setRawHeader(const QByteArray & headerName, const QByteArray & headerValue);
if (true) {
  auto f = [](QHttpPart flythis, const QByteArray & arg1, const QByteArray & arg2) {
    ((QHttpPart*)0)->setRawHeader(arg1, arg2);
    flythis.setRawHeader(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN9QHttpPart12setRawHeaderERK10QByteArrayS2_ setRawHeader(const class QByteArray &, const class QByteArray &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 97, column 10>
//   // proto:  void QHttpMultiPart::setContentType(QHttpMultiPart::ContentType contentType);
extern "C"
void C_ZN14QHttpMultiPart14setContentTypeENS_11ContentTypeE(void *qthis, QHttpMultiPart::ContentType arg1) {
  ((QHttpMultiPart*)qthis)->setContentType(arg1);
}
// _ZN14QHttpMultiPart14setContentTypeENS_11ContentTypeE setContentType(enum QHttpMultiPart::ContentType)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 80, column 5>
//   // proto:  const QMetaObject * QHttpMultiPart::metaObject();
extern "C"
void C_ZNK14QHttpMultiPart10metaObjectEv(void *qthis) {
  ((QHttpMultiPart*)qthis)->metaObject();
}
// _ZNK14QHttpMultiPart10metaObjectEv metaObject()
//   // proto:  void QHttpMultiPart::~QHttpMultiPart();
extern "C"
void C_ZN14QHttpMultiPartD2Ev(void *qthis) {
  delete (QHttpMultiPart*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 92, column 14>
//   // proto:  void QHttpMultiPart::QHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject * parent);
extern "C"
void C_ZN14QHttpMultiPartC2ENS_11ContentTypeEP7QObject(QHttpMultiPart::ContentType arg1, QObject * arg2) {
  new QHttpMultiPart(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 100, column 10>
//   // proto:  void QHttpMultiPart::setBoundary(const QByteArray & boundary);
extern "C"
void C_ZN14QHttpMultiPart11setBoundaryERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QHttpMultiPart*)qthis)->setBoundary(arg1);
}
// _ZN14QHttpMultiPart11setBoundaryERK10QByteArray setBoundary(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 91, column 14>
//   // proto:  void QHttpMultiPart::QHttpMultiPart(QObject * parent);
extern "C"
void C_ZN14QHttpMultiPartC2EP7QObject(QObject * arg1) {
  new QHttpMultiPart(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 95, column 10>
//   // proto:  void QHttpMultiPart::append(const QHttpPart & httpPart);
extern "C"
void C_ZN14QHttpMultiPart6appendERK9QHttpPart(void *qthis, const QHttpPart & arg1) {
  ((QHttpMultiPart*)qthis)->append(arg1);
}
// _ZN14QHttpMultiPart6appendERK9QHttpPart append(const class QHttpPart &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 99, column 16>
//   // proto:  QByteArray QHttpMultiPart::boundary();
extern "C"
void C_ZNK14QHttpMultiPart8boundaryEv(void *qthis) {
  ((QHttpMultiPart*)qthis)->boundary();
}
// _ZNK14QHttpMultiPart8boundaryEv boundary()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 66, column 10>
//   // proto:  void QHttpPart::setBodyDevice(QIODevice * device);
extern "C"
void C_ZN9QHttpPart13setBodyDeviceEP9QIODevice(void *qthis, QIODevice * arg1) {
  ((QHttpPart*)qthis)->setBodyDevice(arg1);
}
// _ZN9QHttpPart13setBodyDeviceEP9QIODevice setBodyDevice(class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 52, column 5>
//   // proto:  void QHttpPart::QHttpPart(const QHttpPart & other);
extern "C"
void C_ZN9QHttpPartC2ERKS_(const QHttpPart & arg1) {
  new QHttpPart(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 56, column 10>
//   // proto:  void QHttpPart::swap(QHttpPart & other);
extern "C"
void C_ZN9QHttpPart4swapERS_(void *qthis, QHttpPart & arg1) {
  ((QHttpPart*)qthis)->swap(arg1);
}
// _ZN9QHttpPart4swapERS_ swap(class QHttpPart &)
//   // proto:  void QHttpPart::~QHttpPart();
extern "C"
void C_ZN9QHttpPartD2Ev(void *qthis) {
  delete (QHttpPart*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 51, column 5>
//   // proto:  void QHttpPart::QHttpPart();
extern "C"
void C_ZN9QHttpPartC2Ev() {
  new QHttpPart();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 62, column 10>
//   // proto:  void QHttpPart::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value);
extern "C"
void C_ZN9QHttpPart9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant(void *qthis, QNetworkRequest::KnownHeaders arg1, const QVariant & arg2) {
  ((QHttpPart*)qthis)->setHeader(arg1, arg2);
}
// _ZN9QHttpPart9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant setHeader(class QNetworkRequest::KnownHeaders, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 65, column 10>
//   // proto:  void QHttpPart::setBody(const QByteArray & body);
extern "C"
void C_ZN9QHttpPart7setBodyERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QHttpPart*)qthis)->setBody(arg1);
}
// _ZN9QHttpPart7setBodyERK10QByteArray setBody(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhttpmultipart.h', line 63, column 10>
//   // proto:  void QHttpPart::setRawHeader(const QByteArray & headerName, const QByteArray & headerValue);
extern "C"
void C_ZN9QHttpPart12setRawHeaderERK10QByteArrayS2_(void *qthis, const QByteArray & arg1, const QByteArray & arg2) {
  ((QHttpPart*)qthis)->setRawHeader(arg1, arg2);
}
// _ZN9QHttpPart12setRawHeaderERK10QByteArrayS2_ setRawHeader(const class QByteArray &, const class QByteArray &)
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

