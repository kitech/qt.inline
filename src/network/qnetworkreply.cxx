//  header block begin
// since 0x040400
// /usr/include/qt/QtNetwork/qnetworkreply.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkreply.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkReply is pure virtual: true
// QNetworkReply has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkReply : public QNetworkReply {
public:
  virtual ~MyQNetworkReply() {}
// void QNetworkReply(QObject *)
MyQNetworkReply(QObject * parent) : QNetworkReply(parent) {}
// void QNetworkReply(QNetworkReplyPrivate &, QObject *)
MyQNetworkReply(QNetworkReplyPrivate & dd, QObject * parent) : QNetworkReply(dd, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [8] qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QNetworkReply::writeData(data, len_);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setOperation(QNetworkAccessManager::Operation)
  virtual void setOperation(QNetworkAccessManager::Operation operation)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setOperation", &handled, 1, (uint64_t)operation, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::setOperation(operation);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setRequest(const QNetworkRequest &)
  virtual void setRequest(const QNetworkRequest & request)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setRequest", &handled, 1, (uint64_t)&request, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::setRequest(request);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setError(QNetworkReply::NetworkError, const QString &)
  virtual void setError(QNetworkReply::NetworkError errorCode, const QString & errorString)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setError", &handled, 2, (uint64_t)errorCode, (uint64_t)&errorString, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::setError(errorCode, errorString);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setFinished(bool)
  virtual void setFinished(bool arg0)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFinished", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::setFinished(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setUrl(const QUrl &)
  virtual void setUrl(const QUrl & url)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setUrl", &handled, 1, (uint64_t)&url, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::setUrl(url);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setHeader(QNetworkRequest::KnownHeaders, const QVariant &)
  virtual void setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setHeader", &handled, 2, (uint64_t)header, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::setHeader(header, value);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setRawHeader(const QByteArray &, const QByteArray &)
  virtual void setRawHeader(const QByteArray & headerName, const QByteArray & value)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setRawHeader", &handled, 2, (uint64_t)&headerName, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::setRawHeader(headerName, value);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setAttribute(QNetworkRequest::Attribute, const QVariant &)
  virtual void setAttribute(QNetworkRequest::Attribute code, const QVariant & value)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setAttribute", &handled, 2, (uint64_t)code, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::setAttribute(code, value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void sslConfigurationImplementation(QSslConfiguration &)
  virtual void sslConfigurationImplementation(QSslConfiguration & arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sslConfigurationImplementation", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::sslConfigurationImplementation(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void setSslConfigurationImplementation(const QSslConfiguration &)
  virtual void setSslConfigurationImplementation(const QSslConfiguration & arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSslConfigurationImplementation", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::setSslConfigurationImplementation(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void ignoreSslErrorsImplementation(const QList<QSslError> &)
  virtual void ignoreSslErrorsImplementation(const QList<QSslError> & arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"ignoreSslErrorsImplementation", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkReply::ignoreSslErrorsImplementation(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:174
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN13QNetworkReply9writeDataEPKcx(void *this_, const char * data, qint64 len_) {
  return (qint64)((QNetworkReply*)this_)->QNetworkReply::writeData(data, len_);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:176
// [-2] void setOperation(QNetworkAccessManager::Operation)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply12setOperationEN21QNetworkAccessManager9OperationE(void *this_, QNetworkAccessManager::Operation operation) {
  ((QNetworkReply*)this_)->QNetworkReply::setOperation(operation);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:177
// [-2] void setRequest(const QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply10setRequestERK15QNetworkRequest(void *this_, QNetworkRequest* request) {
  ((QNetworkReply*)this_)->QNetworkReply::setRequest(*request);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:178
// [-2] void setError(QNetworkReply::NetworkError, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply8setErrorENS_12NetworkErrorERK7QString(void *this_, QNetworkReply::NetworkError errorCode, QString* errorString) {
  ((QNetworkReply*)this_)->QNetworkReply::setError(errorCode, *errorString);
}

// Protected Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qnetworkreply.h:179
// [-2] void setFinished(bool)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply11setFinishedEb(void *this_, bool arg0) {
  ((QNetworkReply*)this_)->QNetworkReply::setFinished(arg0);
}
#endif // QT_VERSION >= 0x040800

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:180
// [-2] void setUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkReply*)this_)->QNetworkReply::setUrl(*url);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:181
// [-2] void setHeader(QNetworkRequest::KnownHeaders, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant(void *this_, QNetworkRequest::KnownHeaders header, QVariant* value) {
  ((QNetworkReply*)this_)->QNetworkReply::setHeader(header, *value);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:182
// [-2] void setRawHeader(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply12setRawHeaderERK10QByteArrayS2_(void *this_, QByteArray* headerName, QByteArray* value) {
  ((QNetworkReply*)this_)->QNetworkReply::setRawHeader(*headerName, *value);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:183
// [-2] void setAttribute(QNetworkRequest::Attribute, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply12setAttributeEN15QNetworkRequest9AttributeERK8QVariant(void *this_, QNetworkRequest::Attribute code, QVariant* value) {
  ((QNetworkReply*)this_)->QNetworkReply::setAttribute(code, *value);
}

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkreply.h:185
// [-2] void sslConfigurationImplementation(QSslConfiguration &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZNK13QNetworkReply30sslConfigurationImplementationER17QSslConfiguration(void *this_, QSslConfiguration* arg0) {
  ((QNetworkReply*)this_)->QNetworkReply::sslConfigurationImplementation(*arg0);
}
#endif // QT_VERSION >= 0x050000

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkreply.h:186
// [-2] void setSslConfigurationImplementation(const QSslConfiguration &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply33setSslConfigurationImplementationERK17QSslConfiguration(void *this_, QSslConfiguration* arg0) {
  ((QNetworkReply*)this_)->QNetworkReply::setSslConfigurationImplementation(*arg0);
}
#endif // QT_VERSION >= 0x050000

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkreply.h:187
// [-2] void ignoreSslErrorsImplementation(const QList<QSslError> &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply29ignoreSslErrorsImplementationERK5QListI9QSslErrorE(void *this_, QList<QSslError>* arg0) {
  ((QNetworkReply*)this_)->QNetworkReply::ignoreSslErrorsImplementation(*arg0);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:64
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkReply10metaObjectEv(void *this_) {
  return (void*)((QNetworkReply*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:64
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QNetworkReply11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QNetworkReply*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:64
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QNetworkReply11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QNetworkReply*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:64
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QNetworkReply2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkReply::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:64
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QNetworkReply6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkReply::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:114
// [-2] void ~QNetworkReply()
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReplyD2Ev(void *this_) {
  delete (QNetworkReply*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:117
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply5closeEv(void *this_) {
  ((QNetworkReply*)this_)->close();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:118
// [1] bool isSequential()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QNetworkReply12isSequentialEv(void *this_) {
  return (bool)((QNetworkReply*)this_)->isSequential();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:121
// [8] qint64 readBufferSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QNetworkReply14readBufferSizeEv(void *this_) {
  return (qint64)((QNetworkReply*)this_)->readBufferSize();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:122
// [-2] void setReadBufferSize(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply17setReadBufferSizeEx(void *this_, qint64 size) {
  ((QNetworkReply*)this_)->setReadBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:124
// [8] QNetworkAccessManager * manager()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkReply7managerEv(void *this_) {
  return (void*)((QNetworkReply*)this_)->manager();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:125
// [4] QNetworkAccessManager::Operation operation()
extern "C" Q_DECL_EXPORT
QNetworkAccessManager::Operation C_ZNK13QNetworkReply9operationEv(void *this_) {
  return (QNetworkAccessManager::Operation)((QNetworkReply*)this_)->operation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:126
// [8] QNetworkRequest request()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkReply7requestEv(void *this_) {
  auto rv = ((QNetworkReply*)this_)->request();
return new QNetworkRequest(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:127
// [4] QNetworkReply::NetworkError error()
extern "C" Q_DECL_EXPORT
QNetworkReply::NetworkError C_ZNK13QNetworkReply5errorEv(void *this_) {
  return (QNetworkReply::NetworkError)((QNetworkReply*)this_)->error();
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qnetworkreply.h:128
// [1] bool isFinished()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZNK13QNetworkReply10isFinishedEv(void *this_) {
  return (bool)((QNetworkReply*)this_)->isFinished();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qnetworkreply.h:129
// [1] bool isRunning()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZNK13QNetworkReply9isRunningEv(void *this_) {
  return (bool)((QNetworkReply*)this_)->isRunning();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:130
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkReply3urlEv(void *this_) {
  auto rv = ((QNetworkReply*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:133
// [16] QVariant header(QNetworkRequest::KnownHeaders)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkReply6headerEN15QNetworkRequest12KnownHeadersE(void *this_, QNetworkRequest::KnownHeaders header) {
  auto rv = ((QNetworkReply*)this_)->header(header);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:136
// [1] bool hasRawHeader(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QNetworkReply12hasRawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  return (bool)((QNetworkReply*)this_)->hasRawHeader(*headerName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:137
// [8] QList<QByteArray> rawHeaderList()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK13QNetworkReply13rawHeaderListEv(void *this_) {
  auto rv = ((QNetworkReply*)this_)->rawHeaderList();
return new QList<QByteArray>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:138
// [8] QByteArray rawHeader(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkReply9rawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  auto rv = ((QNetworkReply*)this_)->rawHeader(*headerName);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:141
// [-2] const QList<QNetworkReply::RawHeaderPair> & rawHeaderPairs()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkReply14rawHeaderPairsEv(void *this_) {
  auto& rv = ((QNetworkReply*)this_)->rawHeaderPairs();
return new QList<QNetworkReply::RawHeaderPair>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:144
// [16] QVariant attribute(QNetworkRequest::Attribute)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkReply9attributeEN15QNetworkRequest9AttributeE(void *this_, QNetworkRequest::Attribute code) {
  auto rv = ((QNetworkReply*)this_)->attribute(code);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:147
// [8] QSslConfiguration sslConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QNetworkReply16sslConfigurationEv(void *this_) {
  auto rv = ((QNetworkReply*)this_)->sslConfiguration();
return new QSslConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:148
// [-2] void setSslConfiguration(const QSslConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply19setSslConfigurationERK17QSslConfiguration(void *this_, QSslConfiguration* configuration) {
  ((QNetworkReply*)this_)->setSslConfiguration(*configuration);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qnetworkreply.h:149
// [-2] void ignoreSslErrors(const QList<QSslError> &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply15ignoreSslErrorsERK5QListI9QSslErrorE(void *this_, QList<QSslError>* errors) {
  ((QNetworkReply*)this_)->ignoreSslErrors(*errors);
}
#endif // QT_VERSION >= 0x040600

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:153
// [-2] void abort()
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply5abortEv(void *this_) {
  ((QNetworkReply*)this_)->abort();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:154
// [-2] void ignoreSslErrors()
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply15ignoreSslErrorsEv(void *this_) {
  ((QNetworkReply*)this_)->ignoreSslErrors();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:157
// [-2] void metaDataChanged()
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply15metaDataChangedEv(void *this_) {
  ((QNetworkReply*)this_)->metaDataChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:158
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply8finishedEv(void *this_) {
  ((QNetworkReply*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:159
// [-2] void error(QNetworkReply::NetworkError)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply5errorENS_12NetworkErrorE(void *this_, QNetworkReply::NetworkError arg0) {
  ((QNetworkReply*)this_)->error(arg0);
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtNetwork/qnetworkreply.h:161
// [-2] void encrypted()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply9encryptedEv(void *this_) {
  ((QNetworkReply*)this_)->encrypted();
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:162
// [-2] void sslErrors(const QList<QSslError> &)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply9sslErrorsERK5QListI9QSslErrorE(void *this_, QList<QSslError>* errors) {
  ((QNetworkReply*)this_)->sslErrors(*errors);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtNetwork/qnetworkreply.h:163
// [-2] void preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(void *this_, QSslPreSharedKeyAuthenticator * authenticator) {
  ((QNetworkReply*)this_)->preSharedKeyAuthenticationRequired(authenticator);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtNetwork/qnetworkreply.h:165
// [-2] void redirected(const QUrl &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply10redirectedERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkReply*)this_)->redirected(*url);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkreply.h:166
// [-2] void redirectAllowed()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply15redirectAllowedEv(void *this_) {
  ((QNetworkReply*)this_)->redirectAllowed();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:168
// [-2] void uploadProgress(qint64, qint64)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply14uploadProgressExx(void *this_, qint64 bytesSent, qint64 bytesTotal) {
  ((QNetworkReply*)this_)->uploadProgress(bytesSent, bytesTotal);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:169
// [-2] void downloadProgress(qint64, qint64)
extern "C" Q_DECL_EXPORT
void C_ZN13QNetworkReply16downloadProgressExx(void *this_, qint64 bytesReceived, qint64 bytesTotal) {
  ((QNetworkReply*)this_)->downloadProgress(bytesReceived, bytesTotal);
}

//  main block end
