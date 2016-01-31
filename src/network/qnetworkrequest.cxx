#include <qvariant.h>
#include <qsslconfiguration.h>
#include <qlist.h>
#include <qbytearray.h>
#include <qurl.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qnetworkrequest.h
// dst-file: /src/network/qnetworkrequest.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworkrequest.h>

extern "C" {

int QNetworkRequest_Class_Size()
{
  return sizeof(QNetworkRequest);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qnetworkrequest_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 138, column 10>
//   // proto:  void QNetworkRequest::setOriginatingObject(QObject * object);
if (true) {
  auto f = [](QNetworkRequest flythis, QObject * arg1) {
    ((QNetworkRequest*)0)->setOriginatingObject(arg1);
    flythis.setOriginatingObject(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkRequest20setOriginatingObjectEP7QObject setOriginatingObject(class QObject *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 116, column 10>
//   // proto:  QUrl QNetworkRequest::url();
if (true) {
  auto f = [](QNetworkRequest flythis) {
    ((QNetworkRequest*)0)->url();
    flythis.url();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkRequest3urlEv url()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 135, column 10>
//   // proto:  void QNetworkRequest::setSslConfiguration(const QSslConfiguration & configuration);
if (true) {
  auto f = [](QNetworkRequest flythis, const QSslConfiguration & arg1) {
    ((QNetworkRequest*)0)->setSslConfiguration(arg1);
    flythis.setSslConfiguration(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkRequest19setSslConfigurationERK17QSslConfiguration setSslConfiguration(const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 126, column 16>
//   // proto:  QByteArray QNetworkRequest::rawHeader(const QByteArray & headerName);
if (true) {
  auto f = [](QNetworkRequest flythis, const QByteArray & arg1) {
    ((QNetworkRequest*)0)->rawHeader(arg1);
    flythis.rawHeader(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkRequest9rawHeaderERK10QByteArray rawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 131, column 10>
//   // proto:  void QNetworkRequest::setAttribute(QNetworkRequest::Attribute code, const QVariant & value);
if (true) {
  auto f = [](QNetworkRequest flythis, QNetworkRequest::Attribute arg1, const QVariant & arg2) {
    ((QNetworkRequest*)0)->setAttribute(arg1, arg2);
    flythis.setAttribute(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkRequest12setAttributeENS_9AttributeERK8QVariant setAttribute(enum QNetworkRequest::Attribute, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 106, column 5>
//   // proto:  void QNetworkRequest::QNetworkRequest(const QNetworkRequest & other);
if (true) {
  auto f = [](const QNetworkRequest & arg1) {
    new QNetworkRequest(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 125, column 23>
//   // proto:  QList<QByteArray> QNetworkRequest::rawHeaderList();
if (true) {
  auto f = [](QNetworkRequest flythis) {
    ((QNetworkRequest*)0)->rawHeaderList();
    flythis.rawHeaderList();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkRequest13rawHeaderListEv rawHeaderList()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 139, column 14>
//   // proto:  QObject * QNetworkRequest::originatingObject();
if (true) {
  auto f = [](QNetworkRequest flythis) {
    ((QNetworkRequest*)0)->originatingObject();
    flythis.originatingObject();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkRequest17originatingObjectEv originatingObject()
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 142, column 10>
//   // proto:  void QNetworkRequest::setPriority(QNetworkRequest::Priority priority);
if (true) {
  auto f = [](QNetworkRequest flythis, QNetworkRequest::Priority arg1) {
    ((QNetworkRequest*)0)->setPriority(arg1);
    flythis.setPriority(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkRequest11setPriorityENS_8PriorityE setPriority(enum QNetworkRequest::Priority)
//   // proto:  void QNetworkRequest::~QNetworkRequest();
if (true) {
  delete ((QNetworkRequest*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 141, column 14>
//   // proto:  QNetworkRequest::Priority QNetworkRequest::priority();
if (true) {
  auto f = [](QNetworkRequest flythis) {
    ((QNetworkRequest*)0)->priority();
    flythis.priority();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkRequest8priorityEv priority()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 124, column 10>
//   // proto:  bool QNetworkRequest::hasRawHeader(const QByteArray & headerName);
if (true) {
  auto f = [](QNetworkRequest flythis, const QByteArray & arg1) {
    ((QNetworkRequest*)0)->hasRawHeader(arg1);
    flythis.hasRawHeader(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkRequest12hasRawHeaderERK10QByteArray hasRawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 134, column 23>
//   // proto:  QSslConfiguration QNetworkRequest::sslConfiguration();
if (true) {
  auto f = [](QNetworkRequest flythis) {
    ((QNetworkRequest*)0)->sslConfiguration();
    flythis.sslConfiguration();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkRequest16sslConfigurationEv sslConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 117, column 10>
//   // proto:  void QNetworkRequest::setUrl(const QUrl & url);
if (true) {
  auto f = [](QNetworkRequest flythis, const QUrl & arg1) {
    ((QNetworkRequest*)0)->setUrl(arg1);
    flythis.setUrl(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkRequest6setUrlERK4QUrl setUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 105, column 14>
//   // proto:  void QNetworkRequest::QNetworkRequest(const QUrl & url);
if (true) {
  auto f = [](const QUrl & arg1) {
    new QNetworkRequest(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 130, column 14>
//   // proto:  QVariant QNetworkRequest::attribute(QNetworkRequest::Attribute code, const QVariant & defaultValue);
if (true) {
  auto f = [](QNetworkRequest flythis, QNetworkRequest::Attribute arg1, const QVariant & arg2) {
    ((QNetworkRequest*)0)->attribute(arg1, arg2);
    flythis.attribute(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkRequest9attributeENS_9AttributeERK8QVariant attribute(enum QNetworkRequest::Attribute, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 120, column 14>
//   // proto:  QVariant QNetworkRequest::header(QNetworkRequest::KnownHeaders header);
if (true) {
  auto f = [](QNetworkRequest flythis, QNetworkRequest::KnownHeaders arg1) {
    ((QNetworkRequest*)0)->header(arg1);
    flythis.header(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkRequest6headerENS_12KnownHeadersE header(enum QNetworkRequest::KnownHeaders)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 121, column 10>
//   // proto:  void QNetworkRequest::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value);
if (true) {
  auto f = [](QNetworkRequest flythis, QNetworkRequest::KnownHeaders arg1, const QVariant & arg2) {
    ((QNetworkRequest*)0)->setHeader(arg1, arg2);
    flythis.setHeader(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkRequest9setHeaderENS_12KnownHeadersERK8QVariant setHeader(enum QNetworkRequest::KnownHeaders, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 127, column 10>
//   // proto:  void QNetworkRequest::setRawHeader(const QByteArray & headerName, const QByteArray & value);
if (true) {
  auto f = [](QNetworkRequest flythis, const QByteArray & arg1, const QByteArray & arg2) {
    ((QNetworkRequest*)0)->setRawHeader(arg1, arg2);
    flythis.setRawHeader(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkRequest12setRawHeaderERK10QByteArrayS2_ setRawHeader(const class QByteArray &, const class QByteArray &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 138, column 10>
//   // proto:  void QNetworkRequest::setOriginatingObject(QObject * object);
extern "C"
void C_ZN15QNetworkRequest20setOriginatingObjectEP7QObject(void *qthis, QObject * arg1) {
  ((QNetworkRequest*)qthis)->setOriginatingObject(arg1);
}
// _ZN15QNetworkRequest20setOriginatingObjectEP7QObject setOriginatingObject(class QObject *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 116, column 10>
//   // proto:  QUrl QNetworkRequest::url();
extern "C"
void C_ZNK15QNetworkRequest3urlEv(void *qthis) {
  ((QNetworkRequest*)qthis)->url();
}
// _ZNK15QNetworkRequest3urlEv url()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 135, column 10>
//   // proto:  void QNetworkRequest::setSslConfiguration(const QSslConfiguration & configuration);
extern "C"
void C_ZN15QNetworkRequest19setSslConfigurationERK17QSslConfiguration(void *qthis, const QSslConfiguration & arg1) {
  ((QNetworkRequest*)qthis)->setSslConfiguration(arg1);
}
// _ZN15QNetworkRequest19setSslConfigurationERK17QSslConfiguration setSslConfiguration(const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 126, column 16>
//   // proto:  QByteArray QNetworkRequest::rawHeader(const QByteArray & headerName);
extern "C"
void C_ZNK15QNetworkRequest9rawHeaderERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QNetworkRequest*)qthis)->rawHeader(arg1);
}
// _ZNK15QNetworkRequest9rawHeaderERK10QByteArray rawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 131, column 10>
//   // proto:  void QNetworkRequest::setAttribute(QNetworkRequest::Attribute code, const QVariant & value);
extern "C"
void C_ZN15QNetworkRequest12setAttributeENS_9AttributeERK8QVariant(void *qthis, QNetworkRequest::Attribute arg1, const QVariant & arg2) {
  ((QNetworkRequest*)qthis)->setAttribute(arg1, arg2);
}
// _ZN15QNetworkRequest12setAttributeENS_9AttributeERK8QVariant setAttribute(enum QNetworkRequest::Attribute, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 106, column 5>
//   // proto:  void QNetworkRequest::QNetworkRequest(const QNetworkRequest & other);
extern "C"
void C_ZN15QNetworkRequestC2ERKS_(const QNetworkRequest & arg1) {
  new QNetworkRequest(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 125, column 23>
//   // proto:  QList<QByteArray> QNetworkRequest::rawHeaderList();
extern "C"
void C_ZNK15QNetworkRequest13rawHeaderListEv(void *qthis) {
  ((QNetworkRequest*)qthis)->rawHeaderList();
}
// _ZNK15QNetworkRequest13rawHeaderListEv rawHeaderList()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 139, column 14>
//   // proto:  QObject * QNetworkRequest::originatingObject();
extern "C"
void C_ZNK15QNetworkRequest17originatingObjectEv(void *qthis) {
  ((QNetworkRequest*)qthis)->originatingObject();
}
// _ZNK15QNetworkRequest17originatingObjectEv originatingObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 110, column 17>
//   // proto:  void QNetworkRequest::swap(QNetworkRequest & other);
extern "C"
void C_ZN15QNetworkRequest4swapERS_(void *qthis, QNetworkRequest & arg1) {
  ((QNetworkRequest*)qthis)->swap(arg1);
}
// _ZN15QNetworkRequest4swapERS_ swap(class QNetworkRequest &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 142, column 10>
//   // proto:  void QNetworkRequest::setPriority(QNetworkRequest::Priority priority);
extern "C"
void C_ZN15QNetworkRequest11setPriorityENS_8PriorityE(void *qthis, QNetworkRequest::Priority arg1) {
  ((QNetworkRequest*)qthis)->setPriority(arg1);
}
// _ZN15QNetworkRequest11setPriorityENS_8PriorityE setPriority(enum QNetworkRequest::Priority)
//   // proto:  void QNetworkRequest::~QNetworkRequest();
extern "C"
void C_ZN15QNetworkRequestD2Ev(void *qthis) {
  delete (QNetworkRequest*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 141, column 14>
//   // proto:  QNetworkRequest::Priority QNetworkRequest::priority();
extern "C"
void C_ZNK15QNetworkRequest8priorityEv(void *qthis) {
  ((QNetworkRequest*)qthis)->priority();
}
// _ZNK15QNetworkRequest8priorityEv priority()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 124, column 10>
//   // proto:  bool QNetworkRequest::hasRawHeader(const QByteArray & headerName);
extern "C"
void C_ZNK15QNetworkRequest12hasRawHeaderERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QNetworkRequest*)qthis)->hasRawHeader(arg1);
}
// _ZNK15QNetworkRequest12hasRawHeaderERK10QByteArray hasRawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 134, column 23>
//   // proto:  QSslConfiguration QNetworkRequest::sslConfiguration();
extern "C"
void C_ZNK15QNetworkRequest16sslConfigurationEv(void *qthis) {
  ((QNetworkRequest*)qthis)->sslConfiguration();
}
// _ZNK15QNetworkRequest16sslConfigurationEv sslConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 117, column 10>
//   // proto:  void QNetworkRequest::setUrl(const QUrl & url);
extern "C"
void C_ZN15QNetworkRequest6setUrlERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QNetworkRequest*)qthis)->setUrl(arg1);
}
// _ZN15QNetworkRequest6setUrlERK4QUrl setUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 105, column 14>
//   // proto:  void QNetworkRequest::QNetworkRequest(const QUrl & url);
extern "C"
void C_ZN15QNetworkRequestC2ERK4QUrl(const QUrl & arg1) {
  new QNetworkRequest(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 130, column 14>
//   // proto:  QVariant QNetworkRequest::attribute(QNetworkRequest::Attribute code, const QVariant & defaultValue);
extern "C"
void C_ZNK15QNetworkRequest9attributeENS_9AttributeERK8QVariant(void *qthis, QNetworkRequest::Attribute arg1, const QVariant & arg2) {
  ((QNetworkRequest*)qthis)->attribute(arg1, arg2);
}
// _ZNK15QNetworkRequest9attributeENS_9AttributeERK8QVariant attribute(enum QNetworkRequest::Attribute, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 120, column 14>
//   // proto:  QVariant QNetworkRequest::header(QNetworkRequest::KnownHeaders header);
extern "C"
void C_ZNK15QNetworkRequest6headerENS_12KnownHeadersE(void *qthis, QNetworkRequest::KnownHeaders arg1) {
  ((QNetworkRequest*)qthis)->header(arg1);
}
// _ZNK15QNetworkRequest6headerENS_12KnownHeadersE header(enum QNetworkRequest::KnownHeaders)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 121, column 10>
//   // proto:  void QNetworkRequest::setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value);
extern "C"
void C_ZN15QNetworkRequest9setHeaderENS_12KnownHeadersERK8QVariant(void *qthis, QNetworkRequest::KnownHeaders arg1, const QVariant & arg2) {
  ((QNetworkRequest*)qthis)->setHeader(arg1, arg2);
}
// _ZN15QNetworkRequest9setHeaderENS_12KnownHeadersERK8QVariant setHeader(enum QNetworkRequest::KnownHeaders, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkrequest.h', line 127, column 10>
//   // proto:  void QNetworkRequest::setRawHeader(const QByteArray & headerName, const QByteArray & value);
extern "C"
void C_ZN15QNetworkRequest12setRawHeaderERK10QByteArrayS2_(void *qthis, const QByteArray & arg1, const QByteArray & arg2) {
  ((QNetworkRequest*)qthis)->setRawHeader(arg1, arg2);
}
// _ZN15QNetworkRequest12setRawHeaderERK10QByteArrayS2_ setRawHeader(const class QByteArray &, const class QByteArray &)
// <= ext block end

// body block begin =>
// <= body block end

