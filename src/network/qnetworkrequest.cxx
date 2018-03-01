//  header block begin
// /usr/include/qt/QtNetwork/qnetworkrequest.h
#ifndef protected
#define protected public
#endif
#include <qnetworkrequest.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkRequest is pure virtual: false
// QNetworkRequest has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkRequest : public QNetworkRequest {
public:
  virtual ~MyQNetworkRequest() {}
// void QNetworkRequest(const class QUrl &)
MyQNetworkRequest(const QUrl & url) : QNetworkRequest(url) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:124
// [-2] void QNetworkRequest(const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QNetworkRequestC2ERK4QUrl(QUrl* url) {
  return  new QNetworkRequest(*url);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:126
// [-2] void ~QNetworkRequest()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequestD2Ev(void *this_) {
  delete (QNetworkRequest*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:128
// [8] QNetworkRequest & operator=(class QNetworkRequest &&)
extern "C" Q_DECL_EXPORT
void* C_ZN15QNetworkRequestaSEOS_(void *this_, QNetworkRequest && other) {
  auto& rv = ((QNetworkRequest*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:130
// [8] QNetworkRequest & operator=(const class QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QNetworkRequestaSERKS_(void *this_, QNetworkRequest* other) {
  auto& rv = ((QNetworkRequest*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:132
// [-2] void swap(class QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest4swapERS_(void *this_, QNetworkRequest* other) {
  ((QNetworkRequest*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:134
// [1] bool operator==(const class QNetworkRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QNetworkRequesteqERKS_(void *this_, QNetworkRequest* other) {
  return (bool)((QNetworkRequest*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:135
// [1] bool operator!=(const class QNetworkRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QNetworkRequestneERKS_(void *this_, QNetworkRequest* other) {
  return (bool)((QNetworkRequest*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:138
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest3urlEv(void *this_) {
  auto rv = ((QNetworkRequest*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:139
// [-2] void setUrl(const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkRequest*)this_)->setUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:142
// [16] QVariant header(enum QNetworkRequest::KnownHeaders)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest6headerENS_12KnownHeadersE(void *this_, QNetworkRequest::KnownHeaders header) {
  auto rv = ((QNetworkRequest*)this_)->header(header);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:143
// [-2] void setHeader(enum QNetworkRequest::KnownHeaders, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest9setHeaderENS_12KnownHeadersERK8QVariant(void *this_, QNetworkRequest::KnownHeaders header, QVariant* value) {
  ((QNetworkRequest*)this_)->setHeader(header, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:146
// [1] bool hasRawHeader(const class QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QNetworkRequest12hasRawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  return (bool)((QNetworkRequest*)this_)->hasRawHeader(*headerName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:148
// [8] QByteArray rawHeader(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest9rawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  auto rv = ((QNetworkRequest*)this_)->rawHeader(*headerName);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:149
// [-2] void setRawHeader(const class QByteArray &, const class QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest12setRawHeaderERK10QByteArrayS2_(void *this_, QByteArray* headerName, QByteArray* value) {
  ((QNetworkRequest*)this_)->setRawHeader(*headerName, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:152
// [16] QVariant attribute(enum QNetworkRequest::Attribute, const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest9attributeENS_9AttributeERK8QVariant(void *this_, QNetworkRequest::Attribute code, QVariant* defaultValue) {
  auto rv = ((QNetworkRequest*)this_)->attribute(code, *defaultValue);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:153
// [-2] void setAttribute(enum QNetworkRequest::Attribute, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest12setAttributeENS_9AttributeERK8QVariant(void *this_, QNetworkRequest::Attribute code, QVariant* value) {
  ((QNetworkRequest*)this_)->setAttribute(code, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:156
// [8] QSslConfiguration sslConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest16sslConfigurationEv(void *this_) {
  auto rv = ((QNetworkRequest*)this_)->sslConfiguration();
return new QSslConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:157
// [-2] void setSslConfiguration(const class QSslConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest19setSslConfigurationERK17QSslConfiguration(void *this_, QSslConfiguration* configuration) {
  ((QNetworkRequest*)this_)->setSslConfiguration(*configuration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:160
// [-2] void setOriginatingObject(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest20setOriginatingObjectEP7QObject(void *this_, QObject * object) {
  ((QNetworkRequest*)this_)->setOriginatingObject(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:161
// [8] QObject * originatingObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest17originatingObjectEv(void *this_) {
  return (void*)((QNetworkRequest*)this_)->originatingObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:163
// [4] QNetworkRequest::Priority priority()
extern "C" Q_DECL_EXPORT
QNetworkRequest::Priority C_ZNK15QNetworkRequest8priorityEv(void *this_) {
  return (QNetworkRequest::Priority)((QNetworkRequest*)this_)->priority();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:164
// [-2] void setPriority(enum QNetworkRequest::Priority)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest11setPriorityENS_8PriorityE(void *this_, QNetworkRequest::Priority priority) {
  ((QNetworkRequest*)this_)->setPriority(priority);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:167
// [4] int maximumRedirectsAllowed()
extern "C" Q_DECL_EXPORT
int C_ZNK15QNetworkRequest23maximumRedirectsAllowedEv(void *this_) {
  return (int)((QNetworkRequest*)this_)->maximumRedirectsAllowed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:168
// [-2] void setMaximumRedirectsAllowed(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest26setMaximumRedirectsAllowedEi(void *this_, int maximumRedirectsAllowed) {
  ((QNetworkRequest*)this_)->setMaximumRedirectsAllowed(maximumRedirectsAllowed);
}

//  main block end
