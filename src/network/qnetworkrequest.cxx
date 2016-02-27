// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworkrequest.h
// dst-file: /src/network/qnetworkrequest.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworkrequest.h>


#include <qurl.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qsslconfiguration.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qnetworkrequest_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 110, column 17>
//   // proto:  void QNetworkRequest::swap(QNetworkRequest & other);
if (true) {
  auto f = [](QNetworkRequest flythis, QNetworkRequest & arg1) {
    ((QNetworkRequest*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkRequest4swapERS_ swap(class QNetworkRequest &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkRequest_Class_Size()
{
  return sizeof(QNetworkRequest);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 138, column 10>
//   // proto:  void QNetworkRequest::setOriginatingObject(QObject * object);
// _ZN15QNetworkRequest20setOriginatingObjectEP7QObject setOriginatingObject(class QObject *)
extern "C"
void
C_ZN15QNetworkRequest20setOriginatingObjectEP7QObject(void *qthis,
QObject * arg1) {
  ((QNetworkRequest*)qthis)->setOriginatingObject(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 116, column 10>
//   // proto:  QUrl QNetworkRequest::url();
// _ZNK15QNetworkRequest3urlEv url()
extern "C"
QUrl*
C_ZNK15QNetworkRequest3urlEv(void *qthis) {
  auto ret =
  ((QNetworkRequest*)qthis)->url();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 135, column 10>
//   // proto:  void QNetworkRequest::setSslConfiguration(const QSslConfiguration & configuration);
// _ZN15QNetworkRequest19setSslConfigurationERK17QSslConfiguration setSslConfiguration(const class QSslConfiguration &)
extern "C"
void
C_ZN15QNetworkRequest19setSslConfigurationERK17QSslConfiguration(void *qthis,
const QSslConfiguration* arg1) {
  ((QNetworkRequest*)qthis)->setSslConfiguration(*((const QSslConfiguration*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 126, column 16>
//   // proto:  QByteArray QNetworkRequest::rawHeader(const QByteArray & headerName);
// _ZNK15QNetworkRequest9rawHeaderERK10QByteArray rawHeader(const class QByteArray &)
extern "C"
QByteArray*
C_ZNK15QNetworkRequest9rawHeaderERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QNetworkRequest*)qthis)->rawHeader(*((const QByteArray*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 131, column 10>
//   // proto:  void QNetworkRequest::setAttribute(QNetworkRequest::Attribute code, const QVariant & value);
// _ZN15QNetworkRequest12setAttributeENS_9AttributeERK8QVariant setAttribute(enum QNetworkRequest::Attribute, const class QVariant &)
extern "C"
void
C_ZN15QNetworkRequest12setAttributeENS_9AttributeERK8QVariant(void *qthis,
QNetworkRequest::Attribute arg1,
const QVariant* arg2) {
  ((QNetworkRequest*)qthis)->setAttribute(arg1,
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 106, column 5>
//   // proto:  void QNetworkRequest::QNetworkRequest(const QNetworkRequest & other);
extern "C"
QNetworkRequest*
C_ZN15QNetworkRequestC2ERKS_(const QNetworkRequest* arg1) {
  auto ret = new QNetworkRequest(*((const QNetworkRequest*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 125, column 23>
//   // proto:  QList<QByteArray> QNetworkRequest::rawHeaderList();
// _ZNK15QNetworkRequest13rawHeaderListEv rawHeaderList()
extern "C"
QList<QByteArray>*
C_ZNK15QNetworkRequest13rawHeaderListEv(void *qthis) {
  auto ret =
  ((QNetworkRequest*)qthis)->rawHeaderList();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 139, column 14>
//   // proto:  QObject * QNetworkRequest::originatingObject();
// _ZNK15QNetworkRequest17originatingObjectEv originatingObject()
extern "C"
void*
C_ZNK15QNetworkRequest17originatingObjectEv(void *qthis) {
  auto ret =
  ((QNetworkRequest*)qthis)->originatingObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 110, column 17>
//   // proto:  void QNetworkRequest::swap(QNetworkRequest & other);
// _ZN15QNetworkRequest4swapERS_ swap(class QNetworkRequest &)
extern "C"
void
C_ZN15QNetworkRequest4swapERS_(void *qthis,
QNetworkRequest* arg1) {
  ((QNetworkRequest*)qthis)->swap(*((QNetworkRequest*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 142, column 10>
//   // proto:  void QNetworkRequest::setPriority(QNetworkRequest::Priority priority);
// _ZN15QNetworkRequest11setPriorityENS_8PriorityE setPriority(enum QNetworkRequest::Priority)
extern "C"
void
C_ZN15QNetworkRequest11setPriorityENS_8PriorityE(void *qthis,
QNetworkRequest::Priority arg1) {
  ((QNetworkRequest*)qthis)->setPriority(arg1);
}
//   // proto:  void QNetworkRequest::~QNetworkRequest();
extern "C"
void C_ZN15QNetworkRequestD2Ev(void *qthis) {
  delete (QNetworkRequest*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 141, column 14>
//   // proto:  QNetworkRequest::Priority QNetworkRequest::priority();
// _ZNK15QNetworkRequest8priorityEv priority()
extern "C"
QNetworkRequest::Priority
C_ZNK15QNetworkRequest8priorityEv(void *qthis) {
  auto ret =
  ((QNetworkRequest*)qthis)->priority();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 124, column 10>
//   // proto:  bool QNetworkRequest::hasRawHeader(const QByteArray & headerName);
// _ZNK15QNetworkRequest12hasRawHeaderERK10QByteArray hasRawHeader(const class QByteArray &)
extern "C"
bool
C_ZNK15QNetworkRequest12hasRawHeaderERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QNetworkRequest*)qthis)->hasRawHeader(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 134, column 23>
//   // proto:  QSslConfiguration QNetworkRequest::sslConfiguration();
// _ZNK15QNetworkRequest16sslConfigurationEv sslConfiguration()
extern "C"
QSslConfiguration*
C_ZNK15QNetworkRequest16sslConfigurationEv(void *qthis) {
  auto ret =
  ((QNetworkRequest*)qthis)->sslConfiguration();
  return new QSslConfiguration(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 117, column 10>
//   // proto:  void QNetworkRequest::setUrl(const QUrl & url);
// _ZN15QNetworkRequest6setUrlERK4QUrl setUrl(const class QUrl &)
extern "C"
void
C_ZN15QNetworkRequest6setUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QNetworkRequest*)qthis)->setUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 105, column 14>
//   // proto:  void QNetworkRequest::QNetworkRequest(const QUrl & url);
extern "C"
QNetworkRequest*
C_ZN15QNetworkRequestC2ERK4QUrl(const QUrl* arg1) {
  auto ret = new QNetworkRequest(*((const QUrl*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 130, column 14>
//   // proto:  QVariant QNetworkRequest::attribute(QNetworkRequest::Attribute code, const QVariant & defaultValue);
// _ZNK15QNetworkRequest9attributeENS_9AttributeERK8QVariant attribute(enum QNetworkRequest::Attribute, const class QVariant &)
extern "C"
QVariant*
C_ZNK15QNetworkRequest9attributeENS_9AttributeERK8QVariant(void *qthis,
QNetworkRequest::Attribute arg1,
const QVariant* arg2) {
  auto ret =
  ((QNetworkRequest*)qthis)->attribute(arg1,
*((const QVariant*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 120, column 14>
//   // proto:  QVariant QNetworkRequest::header(QNetworkRequest::KnownHeaders header);
// _ZNK15QNetworkRequest6headerENS_12KnownHeadersE header(enum QNetworkRequest::KnownHeaders)
extern "C"
QVariant*
C_ZNK15QNetworkRequest6headerENS_12KnownHeadersE(void *qthis,
QNetworkRequest::KnownHeaders arg1) {
  auto ret =
  ((QNetworkRequest*)qthis)->header(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 121, column 10>
//   // proto:  void QNetworkRequest::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value);
// _ZN15QNetworkRequest9setHeaderENS_12KnownHeadersERK8QVariant setHeader(enum QNetworkRequest::KnownHeaders, const class QVariant &)
extern "C"
void
C_ZN15QNetworkRequest9setHeaderENS_12KnownHeadersERK8QVariant(void *qthis,
QNetworkRequest::KnownHeaders arg1,
const QVariant* arg2) {
  ((QNetworkRequest*)qthis)->setHeader(arg1,
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 127, column 10>
//   // proto:  void QNetworkRequest::setRawHeader(const QByteArray & headerName, const QByteArray & value);
// _ZN15QNetworkRequest12setRawHeaderERK10QByteArrayS2_ setRawHeader(const class QByteArray &, const class QByteArray &)
extern "C"
void
C_ZN15QNetworkRequest12setRawHeaderERK10QByteArrayS2_(void *qthis,
const QByteArray* arg1,
const QByteArray* arg2) {
  ((QNetworkRequest*)qthis)->setRawHeader(*((const QByteArray*)arg1),
*((const QByteArray*)arg2));
}
// <= ext block end

// body block begin =>
// <= body block end

