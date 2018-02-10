//  header block begin
// /usr/include/qt/QtNetwork/qnetworkreply.h
#include <qnetworkreply.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkReply is pure virtual: true
// QNetworkReply has virtual projected: true
//  header block end

//  main block begin

class MyQNetworkReply : public QNetworkReply {
public:
  virtual ~MyQNetworkReply() {}
// void QNetworkReply(class QObject *)
MyQNetworkReply(QObject * parent) : QNetworkReply(parent) {}
// qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QNetworkReply::writeData(data, len);
  }
  }

// void setOperation(class QNetworkAccessManager::Operation)
  virtual void setOperation(QNetworkAccessManager::Operation operation) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setOperation", &handled, 1, (uint64_t)operation, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::setOperation(operation);
  }
  }

// void setRequest(const class QNetworkRequest &)
  virtual void setRequest(const QNetworkRequest & request) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setRequest", &handled, 1, (uint64_t)&request, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::setRequest(request);
  }
  }

// void setError(enum QNetworkReply::NetworkError, const class QString &)
  virtual void setError(QNetworkReply::NetworkError errorCode, const QString & errorString) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setError", &handled, 2, (uint64_t)errorCode, (uint64_t)&errorString, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::setError(errorCode, errorString);
  }
  }

// void setFinished(_Bool)
  virtual void setFinished(bool arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setFinished", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::setFinished(arg0);
  }
  }

// void setUrl(const class QUrl &)
  virtual void setUrl(const QUrl & url) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setUrl", &handled, 1, (uint64_t)&url, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::setUrl(url);
  }
  }

// void setHeader(class QNetworkRequest::KnownHeaders, const class QVariant &)
  virtual void setHeader(QNetworkRequest::KnownHeaders header, const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setHeader", &handled, 2, (uint64_t)header, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::setHeader(header, value);
  }
  }

// void setRawHeader(const class QByteArray &, const class QByteArray &)
  virtual void setRawHeader(const QByteArray & headerName, const QByteArray & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setRawHeader", &handled, 2, (uint64_t)&headerName, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::setRawHeader(headerName, value);
  }
  }

// void setAttribute(class QNetworkRequest::Attribute, const class QVariant &)
  virtual void setAttribute(QNetworkRequest::Attribute code, const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setAttribute", &handled, 2, (uint64_t)code, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::setAttribute(code, value);
  }
  }

// void sslConfigurationImplementation(class QSslConfiguration &)
  virtual void sslConfigurationImplementation(QSslConfiguration & arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sslConfigurationImplementation", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::sslConfigurationImplementation(arg0);
  }
  }

// void setSslConfigurationImplementation(const class QSslConfiguration &)
  virtual void setSslConfigurationImplementation(const QSslConfiguration & arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setSslConfigurationImplementation", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkReply::setSslConfigurationImplementation(arg0);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:64
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QNetworkReply10metaObjectEv(void *this_) {
  return (void*)((QNetworkReply*)this_)->metaObject();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:114
// [-2] void ~QNetworkReply()
extern "C"
void C_ZN13QNetworkReplyD2Ev(void *this_) {
  delete (QNetworkReply*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:117
// [-2] void close()
extern "C"
void C_ZN13QNetworkReply5closeEv(void *this_) {
  ((QNetworkReply*)this_)->close();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:118
// [1] bool isSequential()
extern "C"
bool C_ZNK13QNetworkReply12isSequentialEv(void *this_) {
  return (bool)((QNetworkReply*)this_)->isSequential();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:121
// [8] qint64 readBufferSize()
extern "C"
qint64 C_ZNK13QNetworkReply14readBufferSizeEv(void *this_) {
  return (qint64)((QNetworkReply*)this_)->readBufferSize();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:122
// [-2] void setReadBufferSize(qint64)
extern "C"
void C_ZN13QNetworkReply17setReadBufferSizeEx(void *this_, qint64 size) {
  ((QNetworkReply*)this_)->setReadBufferSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:124
// [8] QNetworkAccessManager * manager()
extern "C"
void* C_ZNK13QNetworkReply7managerEv(void *this_) {
  return (void*)((QNetworkReply*)this_)->manager();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:125
// [4] QNetworkAccessManager::Operation operation()
extern "C"
QNetworkAccessManager::Operation C_ZNK13QNetworkReply9operationEv(void *this_) {
  return (QNetworkAccessManager::Operation)((QNetworkReply*)this_)->operation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:126
// [8] QNetworkRequest request()
extern "C"
void* C_ZNK13QNetworkReply7requestEv(void *this_) {
  auto rv = ((QNetworkReply*)this_)->request();
return new QNetworkRequest(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:127
// [4] QNetworkReply::NetworkError error()
extern "C"
QNetworkReply::NetworkError C_ZNK13QNetworkReply5errorEv(void *this_) {
  return (QNetworkReply::NetworkError)((QNetworkReply*)this_)->error();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:128
// [1] bool isFinished()
extern "C"
bool C_ZNK13QNetworkReply10isFinishedEv(void *this_) {
  return (bool)((QNetworkReply*)this_)->isFinished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:129
// [1] bool isRunning()
extern "C"
bool C_ZNK13QNetworkReply9isRunningEv(void *this_) {
  return (bool)((QNetworkReply*)this_)->isRunning();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:130
// [8] QUrl url()
extern "C"
void* C_ZNK13QNetworkReply3urlEv(void *this_) {
  auto rv = ((QNetworkReply*)this_)->url();
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:133
// [16] QVariant header(class QNetworkRequest::KnownHeaders)
extern "C"
void* C_ZNK13QNetworkReply6headerEN15QNetworkRequest12KnownHeadersE(void *this_, QNetworkRequest::KnownHeaders header) {
  auto rv = ((QNetworkReply*)this_)->header(header);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:136
// [1] bool hasRawHeader(const class QByteArray &)
extern "C"
bool C_ZNK13QNetworkReply12hasRawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  return (bool)((QNetworkReply*)this_)->hasRawHeader(*headerName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:138
// [8] QByteArray rawHeader(const class QByteArray &)
extern "C"
void* C_ZNK13QNetworkReply9rawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  auto rv = ((QNetworkReply*)this_)->rawHeader(*headerName);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:144
// [16] QVariant attribute(class QNetworkRequest::Attribute)
extern "C"
void* C_ZNK13QNetworkReply9attributeEN15QNetworkRequest9AttributeE(void *this_, QNetworkRequest::Attribute code) {
  auto rv = ((QNetworkReply*)this_)->attribute(code);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:147
// [8] QSslConfiguration sslConfiguration()
extern "C"
void* C_ZNK13QNetworkReply16sslConfigurationEv(void *this_) {
  auto rv = ((QNetworkReply*)this_)->sslConfiguration();
return new QSslConfiguration(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:148
// [-2] void setSslConfiguration(const class QSslConfiguration &)
extern "C"
void C_ZN13QNetworkReply19setSslConfigurationERK17QSslConfiguration(void *this_, QSslConfiguration* configuration) {
  ((QNetworkReply*)this_)->setSslConfiguration(*configuration);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:153
// [-2] void abort()
extern "C"
void C_ZN13QNetworkReply5abortEv(void *this_) {
  ((QNetworkReply*)this_)->abort();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:154
// [-2] void ignoreSslErrors()
extern "C"
void C_ZN13QNetworkReply15ignoreSslErrorsEv(void *this_) {
  ((QNetworkReply*)this_)->ignoreSslErrors();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:157
// [-2] void metaDataChanged()
extern "C"
void C_ZN13QNetworkReply15metaDataChangedEv(void *this_) {
  ((QNetworkReply*)this_)->metaDataChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:158
// [-2] void finished()
extern "C"
void C_ZN13QNetworkReply8finishedEv(void *this_) {
  ((QNetworkReply*)this_)->finished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:159
// [-2] void error(class QNetworkReply::NetworkError)
extern "C"
void C_ZN13QNetworkReply5errorENS_12NetworkErrorE(void *this_, QNetworkReply::NetworkError arg0) {
  ((QNetworkReply*)this_)->error(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:161
// [-2] void encrypted()
extern "C"
void C_ZN13QNetworkReply9encryptedEv(void *this_) {
  ((QNetworkReply*)this_)->encrypted();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:163
// [-2] void preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
extern "C"
void C_ZN13QNetworkReply34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(void *this_, QSslPreSharedKeyAuthenticator * authenticator) {
  ((QNetworkReply*)this_)->preSharedKeyAuthenticationRequired(authenticator);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:165
// [-2] void redirected(const class QUrl &)
extern "C"
void C_ZN13QNetworkReply10redirectedERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkReply*)this_)->redirected(*url);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:166
// [-2] void redirectAllowed()
extern "C"
void C_ZN13QNetworkReply15redirectAllowedEv(void *this_) {
  ((QNetworkReply*)this_)->redirectAllowed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:168
// [-2] void uploadProgress(qint64, qint64)
extern "C"
void C_ZN13QNetworkReply14uploadProgressExx(void *this_, qint64 bytesSent, qint64 bytesTotal) {
  ((QNetworkReply*)this_)->uploadProgress(bytesSent, bytesTotal);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkreply.h:169
// [-2] void downloadProgress(qint64, qint64)
extern "C"
void C_ZN13QNetworkReply16downloadProgressExx(void *this_, qint64 bytesReceived, qint64 bytesTotal) {
  ((QNetworkReply*)this_)->downloadProgress(bytesReceived, bytesTotal);
}
//  main block end
