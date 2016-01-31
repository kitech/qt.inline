#include <qnetworkaccessmanager.h>
#include <qsslconfiguration.h>
#include <qglobal.h>
#include <qvariant.h>
#include <qurl.h>
#include <qabstractnetworkcache.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qnetworkrequest.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 140, column 10>
//   // proto:  void QNetworkReply::ignoreSslErrors(const QList<QSslError> & errors);
if (true) {
  auto f = [](const QList<QSslError> & arg1) {
    ((QNetworkReply*)0)->ignoreSslErrors(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply15ignoreSslErrorsERK5QListI9QSslErrorE ignoreSslErrors(const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 149, column 10>
//   // proto:  void QNetworkReply::finished();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->finished();
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply8finishedEv finished()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 145, column 18>
//   // proto:  void QNetworkReply::ignoreSslErrors();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->ignoreSslErrors();
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply15ignoreSslErrorsEv ignoreSslErrors()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 150, column 10>
//   // proto:  void QNetworkReply::error(QNetworkReply::NetworkError );
if (true) {
  auto f = [](QNetworkReply::NetworkError arg1) {
    ((QNetworkReply*)0)->error(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply5errorENS_12NetworkErrorE error(class QNetworkReply::NetworkError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 127, column 10>
//   // proto:  bool QNetworkReply::hasRawHeader(const QByteArray & headerName);
if (true) {
  auto f = [](const QByteArray & arg1) {
    ((QNetworkReply*)0)->hasRawHeader(arg1);
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply12hasRawHeaderERK10QByteArray hasRawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 113, column 18>
//   // proto:  void QNetworkReply::setReadBufferSize(qint64 size);
if (true) {
  auto f = [](qint64 arg1) {
    ((QNetworkReply*)0)->setReadBufferSize(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply17setReadBufferSizeEx setReadBufferSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 117, column 21>
//   // proto:  QNetworkRequest QNetworkReply::request();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->request();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply7requestEv request()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 144, column 18>
//   // proto:  void QNetworkReply::abort();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->abort();
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 120, column 10>
//   // proto:  bool QNetworkReply::isRunning();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->isRunning();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply9isRunningEv isRunning()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 128, column 23>
//   // proto:  QList<QByteArray> QNetworkReply::rawHeaderList();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->rawHeaderList();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply13rawHeaderListEv rawHeaderList()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 132, column 33>
//   // proto:  const QList<RawHeaderPair> & QNetworkReply::rawHeaderPairs();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->rawHeaderPairs();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply14rawHeaderPairsEv rawHeaderPairs()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 139, column 10>
//   // proto:  void QNetworkReply::setSslConfiguration(const QSslConfiguration & configuration);
if (true) {
  auto f = [](const QSslConfiguration & arg1) {
    ((QNetworkReply*)0)->setSslConfiguration(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply19setSslConfigurationERK17QSslConfiguration setSslConfiguration(const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 121, column 10>
//   // proto:  QUrl QNetworkReply::url();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->url();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply3urlEv url()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 124, column 14>
//   // proto:  QVariant QNetworkReply::header(QNetworkRequest::KnownHeaders header);
if (true) {
  auto f = [](QNetworkRequest::KnownHeaders arg1) {
    ((QNetworkReply*)0)->header(arg1);
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply6headerEN15QNetworkRequest12KnownHeadersE header(class QNetworkRequest::KnownHeaders)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 154, column 10>
//   // proto:  void QNetworkReply::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * authenticator);
if (true) {
  auto f = [](QSslPreSharedKeyAuthenticator * arg1) {
    ((QNetworkReply*)0)->preSharedKeyAuthenticationRequired(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 109, column 18>
//   // proto:  bool QNetworkReply::isSequential();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->isSequential();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply12isSequentialEv isSequential()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 129, column 16>
//   // proto:  QByteArray QNetworkReply::rawHeader(const QByteArray & headerName);
if (true) {
  auto f = [](const QByteArray & arg1) {
    ((QNetworkReply*)0)->rawHeader(arg1);
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply9rawHeaderERK10QByteArray rawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 153, column 10>
//   // proto:  void QNetworkReply::sslErrors(const QList<QSslError> & errors);
if (true) {
  auto f = [](const QList<QSslError> & arg1) {
    ((QNetworkReply*)0)->sslErrors(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply9sslErrorsERK5QListI9QSslErrorE sslErrors(const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 115, column 28>
//   // proto:  QNetworkAccessManager * QNetworkReply::manager();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->manager();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply7managerEv manager()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 108, column 18>
//   // proto:  void QNetworkReply::close();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->close();
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 118, column 18>
//   // proto:  QNetworkReply::NetworkError QNetworkReply::error();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->error();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 119, column 10>
//   // proto:  bool QNetworkReply::isFinished();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->isFinished();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply10isFinishedEv isFinished()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 148, column 10>
//   // proto:  void QNetworkReply::metaDataChanged();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->metaDataChanged();
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply15metaDataChangedEv metaDataChanged()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 112, column 12>
//   // proto:  qint64 QNetworkReply::readBufferSize();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->readBufferSize();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply14readBufferSizeEv readBufferSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 158, column 10>
//   // proto:  void QNetworkReply::downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
if (true) {
  auto f = [](qint64 arg1, qint64 arg2) {
    ((QNetworkReply*)0)->downloadProgress(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply16downloadProgressExx downloadProgress(qint64, qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 138, column 23>
//   // proto:  QSslConfiguration QNetworkReply::sslConfiguration();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->sslConfiguration();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply16sslConfigurationEv sslConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 116, column 38>
//   // proto:  QNetworkAccessManager::Operation QNetworkReply::operation();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->operation();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply9operationEv operation()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 57, column 5>
//   // proto:  const QMetaObject * QNetworkReply::metaObject();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->metaObject();
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 157, column 10>
//   // proto:  void QNetworkReply::uploadProgress(qint64 bytesSent, qint64 bytesTotal);
if (true) {
  auto f = [](qint64 arg1, qint64 arg2) {
    ((QNetworkReply*)0)->uploadProgress(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply14uploadProgressExx uploadProgress(qint64, qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 152, column 10>
//   // proto:  void QNetworkReply::encrypted();
if (true) {
  auto f = []() {
    ((QNetworkReply*)0)->encrypted();
  };
  if (f == nullptr){}
}
// _ZN13QNetworkReply9encryptedEv encrypted()
//   // proto:  void QNetworkReply::~QNetworkReply();
if (true) {
  delete ((QNetworkReply*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 135, column 14>
//   // proto:  QVariant QNetworkReply::attribute(QNetworkRequest::Attribute code);
if (true) {
  auto f = [](QNetworkRequest::Attribute arg1) {
    ((QNetworkReply*)0)->attribute(arg1);
  };
  if (f == nullptr){}
}
// _ZNK13QNetworkReply9attributeEN15QNetworkRequest9AttributeE attribute(class QNetworkRequest::Attribute)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 140, column 10>
//   // proto:  void QNetworkReply::ignoreSslErrors(const QList<QSslError> & errors);
extern "C"
void C_ZN13QNetworkReply15ignoreSslErrorsERK5QListI9QSslErrorE(void *qthis, const QList<QSslError> & arg1) {
  ((QNetworkReply*)qthis)->ignoreSslErrors(arg1);
}
// _ZN13QNetworkReply15ignoreSslErrorsERK5QListI9QSslErrorE ignoreSslErrors(const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 149, column 10>
//   // proto:  void QNetworkReply::finished();
extern "C"
void C_ZN13QNetworkReply8finishedEv(void *qthis) {
  ((QNetworkReply*)qthis)->finished();
}
// _ZN13QNetworkReply8finishedEv finished()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 145, column 18>
//   // proto:  void QNetworkReply::ignoreSslErrors();
extern "C"
void C_ZN13QNetworkReply15ignoreSslErrorsEv(void *qthis) {
  ((QNetworkReply*)qthis)->ignoreSslErrors();
}
// _ZN13QNetworkReply15ignoreSslErrorsEv ignoreSslErrors()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 150, column 10>
//   // proto:  void QNetworkReply::error(QNetworkReply::NetworkError );
extern "C"
void C_ZN13QNetworkReply5errorENS_12NetworkErrorE(void *qthis, QNetworkReply::NetworkError arg1) {
  ((QNetworkReply*)qthis)->error(arg1);
}
// _ZN13QNetworkReply5errorENS_12NetworkErrorE error(class QNetworkReply::NetworkError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 127, column 10>
//   // proto:  bool QNetworkReply::hasRawHeader(const QByteArray & headerName);
extern "C"
void C_ZNK13QNetworkReply12hasRawHeaderERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QNetworkReply*)qthis)->hasRawHeader(arg1);
}
// _ZNK13QNetworkReply12hasRawHeaderERK10QByteArray hasRawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 113, column 18>
//   // proto:  void QNetworkReply::setReadBufferSize(qint64 size);
extern "C"
void C_ZN13QNetworkReply17setReadBufferSizeEx(void *qthis, qint64 arg1) {
  ((QNetworkReply*)qthis)->setReadBufferSize(arg1);
}
// _ZN13QNetworkReply17setReadBufferSizeEx setReadBufferSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 117, column 21>
//   // proto:  QNetworkRequest QNetworkReply::request();
extern "C"
void C_ZNK13QNetworkReply7requestEv(void *qthis) {
  ((QNetworkReply*)qthis)->request();
}
// _ZNK13QNetworkReply7requestEv request()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 144, column 18>
//   // proto:  void QNetworkReply::abort();
extern "C"
void C_ZN13QNetworkReply5abortEv(void *qthis) {
  ((QNetworkReply*)qthis)->abort();
}
// _ZN13QNetworkReply5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 120, column 10>
//   // proto:  bool QNetworkReply::isRunning();
extern "C"
void C_ZNK13QNetworkReply9isRunningEv(void *qthis) {
  ((QNetworkReply*)qthis)->isRunning();
}
// _ZNK13QNetworkReply9isRunningEv isRunning()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 128, column 23>
//   // proto:  QList<QByteArray> QNetworkReply::rawHeaderList();
extern "C"
void C_ZNK13QNetworkReply13rawHeaderListEv(void *qthis) {
  ((QNetworkReply*)qthis)->rawHeaderList();
}
// _ZNK13QNetworkReply13rawHeaderListEv rawHeaderList()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 132, column 33>
//   // proto:  const QList<RawHeaderPair> & QNetworkReply::rawHeaderPairs();
extern "C"
void C_ZNK13QNetworkReply14rawHeaderPairsEv(void *qthis) {
  ((QNetworkReply*)qthis)->rawHeaderPairs();
}
// _ZNK13QNetworkReply14rawHeaderPairsEv rawHeaderPairs()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 139, column 10>
//   // proto:  void QNetworkReply::setSslConfiguration(const QSslConfiguration & configuration);
extern "C"
void C_ZN13QNetworkReply19setSslConfigurationERK17QSslConfiguration(void *qthis, const QSslConfiguration & arg1) {
  ((QNetworkReply*)qthis)->setSslConfiguration(arg1);
}
// _ZN13QNetworkReply19setSslConfigurationERK17QSslConfiguration setSslConfiguration(const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 121, column 10>
//   // proto:  QUrl QNetworkReply::url();
extern "C"
void C_ZNK13QNetworkReply3urlEv(void *qthis) {
  ((QNetworkReply*)qthis)->url();
}
// _ZNK13QNetworkReply3urlEv url()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 124, column 14>
//   // proto:  QVariant QNetworkReply::header(QNetworkRequest::KnownHeaders header);
extern "C"
void C_ZNK13QNetworkReply6headerEN15QNetworkRequest12KnownHeadersE(void *qthis, QNetworkRequest::KnownHeaders arg1) {
  ((QNetworkReply*)qthis)->header(arg1);
}
// _ZNK13QNetworkReply6headerEN15QNetworkRequest12KnownHeadersE header(class QNetworkRequest::KnownHeaders)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 154, column 10>
//   // proto:  void QNetworkReply::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * authenticator);
extern "C"
void C_ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(void *qthis, QSslPreSharedKeyAuthenticator * arg1) {
  ((QNetworkReply*)qthis)->preSharedKeyAuthenticationRequired(arg1);
}
// _ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 109, column 18>
//   // proto:  bool QNetworkReply::isSequential();
extern "C"
void C_ZNK13QNetworkReply12isSequentialEv(void *qthis) {
  ((QNetworkReply*)qthis)->isSequential();
}
// _ZNK13QNetworkReply12isSequentialEv isSequential()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 129, column 16>
//   // proto:  QByteArray QNetworkReply::rawHeader(const QByteArray & headerName);
extern "C"
void C_ZNK13QNetworkReply9rawHeaderERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QNetworkReply*)qthis)->rawHeader(arg1);
}
// _ZNK13QNetworkReply9rawHeaderERK10QByteArray rawHeader(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 153, column 10>
//   // proto:  void QNetworkReply::sslErrors(const QList<QSslError> & errors);
extern "C"
void C_ZN13QNetworkReply9sslErrorsERK5QListI9QSslErrorE(void *qthis, const QList<QSslError> & arg1) {
  ((QNetworkReply*)qthis)->sslErrors(arg1);
}
// _ZN13QNetworkReply9sslErrorsERK5QListI9QSslErrorE sslErrors(const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 115, column 28>
//   // proto:  QNetworkAccessManager * QNetworkReply::manager();
extern "C"
void C_ZNK13QNetworkReply7managerEv(void *qthis) {
  ((QNetworkReply*)qthis)->manager();
}
// _ZNK13QNetworkReply7managerEv manager()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 108, column 18>
//   // proto:  void QNetworkReply::close();
extern "C"
void C_ZN13QNetworkReply5closeEv(void *qthis) {
  ((QNetworkReply*)qthis)->close();
}
// _ZN13QNetworkReply5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 118, column 18>
//   // proto:  QNetworkReply::NetworkError QNetworkReply::error();
extern "C"
void C_ZNK13QNetworkReply5errorEv(void *qthis) {
  ((QNetworkReply*)qthis)->error();
}
// _ZNK13QNetworkReply5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 119, column 10>
//   // proto:  bool QNetworkReply::isFinished();
extern "C"
void C_ZNK13QNetworkReply10isFinishedEv(void *qthis) {
  ((QNetworkReply*)qthis)->isFinished();
}
// _ZNK13QNetworkReply10isFinishedEv isFinished()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 148, column 10>
//   // proto:  void QNetworkReply::metaDataChanged();
extern "C"
void C_ZN13QNetworkReply15metaDataChangedEv(void *qthis) {
  ((QNetworkReply*)qthis)->metaDataChanged();
}
// _ZN13QNetworkReply15metaDataChangedEv metaDataChanged()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 112, column 12>
//   // proto:  qint64 QNetworkReply::readBufferSize();
extern "C"
void C_ZNK13QNetworkReply14readBufferSizeEv(void *qthis) {
  ((QNetworkReply*)qthis)->readBufferSize();
}
// _ZNK13QNetworkReply14readBufferSizeEv readBufferSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 158, column 10>
//   // proto:  void QNetworkReply::downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
extern "C"
void C_ZN13QNetworkReply16downloadProgressExx(void *qthis, qint64 arg1, qint64 arg2) {
  ((QNetworkReply*)qthis)->downloadProgress(arg1, arg2);
}
// _ZN13QNetworkReply16downloadProgressExx downloadProgress(qint64, qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 138, column 23>
//   // proto:  QSslConfiguration QNetworkReply::sslConfiguration();
extern "C"
void C_ZNK13QNetworkReply16sslConfigurationEv(void *qthis) {
  ((QNetworkReply*)qthis)->sslConfiguration();
}
// _ZNK13QNetworkReply16sslConfigurationEv sslConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 116, column 38>
//   // proto:  QNetworkAccessManager::Operation QNetworkReply::operation();
extern "C"
void C_ZNK13QNetworkReply9operationEv(void *qthis) {
  ((QNetworkReply*)qthis)->operation();
}
// _ZNK13QNetworkReply9operationEv operation()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 57, column 5>
//   // proto:  const QMetaObject * QNetworkReply::metaObject();
extern "C"
void C_ZNK13QNetworkReply10metaObjectEv(void *qthis) {
  ((QNetworkReply*)qthis)->metaObject();
}
// _ZNK13QNetworkReply10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 157, column 10>
//   // proto:  void QNetworkReply::uploadProgress(qint64 bytesSent, qint64 bytesTotal);
extern "C"
void C_ZN13QNetworkReply14uploadProgressExx(void *qthis, qint64 arg1, qint64 arg2) {
  ((QNetworkReply*)qthis)->uploadProgress(arg1, arg2);
}
// _ZN13QNetworkReply14uploadProgressExx uploadProgress(qint64, qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 152, column 10>
//   // proto:  void QNetworkReply::encrypted();
extern "C"
void C_ZN13QNetworkReply9encryptedEv(void *qthis) {
  ((QNetworkReply*)qthis)->encrypted();
}
// _ZN13QNetworkReply9encryptedEv encrypted()
//   // proto:  void QNetworkReply::~QNetworkReply();
extern "C"
void C_ZN13QNetworkReplyD2Ev(void *qthis) {
  delete (QNetworkReply*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkreply.h', line 135, column 14>
//   // proto:  QVariant QNetworkReply::attribute(QNetworkRequest::Attribute code);
extern "C"
void C_ZNK13QNetworkReply9attributeEN15QNetworkRequest9AttributeE(void *qthis, QNetworkRequest::Attribute arg1) {
  ((QNetworkReply*)qthis)->attribute(arg1);
}
// _ZNK13QNetworkReply9attributeEN15QNetworkRequest9AttributeE attribute(class QNetworkRequest::Attribute)
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

