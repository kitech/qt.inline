//  header block begin

// since 0x040400
// /usr/include/qt/QtNetwork/qnetworkrequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkrequest.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkRequest is pure virtual: false
// QNetworkRequest has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkRequest_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkRequest_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkRequest_t qt_meta_stringdata_MyQNetworkRequest = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQNetworkRequest"
  },
  "MyQNetworkRequest"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkRequest[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQNetworkRequest : public QNetworkRequest {
public:
  virtual ~MyQNetworkRequest() {}
// void QNetworkRequest(const QUrl &)
MyQNetworkRequest(const QUrl & url) : QNetworkRequest(url) {}
// void QNetworkRequest(const QNetworkRequest &)
MyQNetworkRequest(const QNetworkRequest & other) : QNetworkRequest(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:130
// [-2] void QNetworkRequest(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QNetworkRequestC2ERK4QUrl(QUrl* url) {
  return  new QNetworkRequest(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:131
// [-2] void QNetworkRequest(const QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QNetworkRequestC2ERKS_(QNetworkRequest* other) {
  return  new QNetworkRequest(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:132
// [-2] void ~QNetworkRequest()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequestD2Ev(void *this_) {
  delete (QNetworkRequest*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:134
// [8] QNetworkRequest & operator=(QNetworkRequest &&)
extern "C" Q_DECL_EXPORT
void* C_ZN15QNetworkRequestaSEOS_(void *this_, QNetworkRequest && other) {
  auto& rv = ((QNetworkRequest*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:136
// [8] QNetworkRequest & operator=(const QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QNetworkRequestaSERKS_(void *this_, QNetworkRequest* other) {
  auto& rv = ((QNetworkRequest*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkrequest.h:138
// [-2] void swap(QNetworkRequest &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest4swapERS_(void *this_, QNetworkRequest* other) {
  ((QNetworkRequest*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:140
// [1] bool operator==(const QNetworkRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QNetworkRequesteqERKS_(void *this_, QNetworkRequest* other) {
  return (bool)((QNetworkRequest*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:141
// [1] bool operator!=(const QNetworkRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QNetworkRequestneERKS_(void *this_, QNetworkRequest* other) {
  return (bool)((QNetworkRequest*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:144
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest3urlEv(void *this_) {
  auto rv = ((QNetworkRequest*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:145
// [-2] void setUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkRequest*)this_)->setUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:148
// [16] QVariant header(QNetworkRequest::KnownHeaders)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest6headerENS_12KnownHeadersE(void *this_, QNetworkRequest::KnownHeaders header) {
  auto rv = ((QNetworkRequest*)this_)->header(header);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:149
// [-2] void setHeader(QNetworkRequest::KnownHeaders, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest9setHeaderENS_12KnownHeadersERK8QVariant(void *this_, QNetworkRequest::KnownHeaders header, QVariant* value) {
  ((QNetworkRequest*)this_)->setHeader(header, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:152
// [1] bool hasRawHeader(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QNetworkRequest12hasRawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  return (bool)((QNetworkRequest*)this_)->hasRawHeader(*headerName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:153
// [8] QList<QByteArray> rawHeaderList()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK15QNetworkRequest13rawHeaderListEv(void *this_) {
  auto rv = ((QNetworkRequest*)this_)->rawHeaderList();
return new QList<QByteArray>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:154
// [8] QByteArray rawHeader(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest9rawHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  auto rv = ((QNetworkRequest*)this_)->rawHeader(*headerName);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:155
// [-2] void setRawHeader(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest12setRawHeaderERK10QByteArrayS2_(void *this_, QByteArray* headerName, QByteArray* value) {
  ((QNetworkRequest*)this_)->setRawHeader(*headerName, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:158
// [16] QVariant attribute(QNetworkRequest::Attribute, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest9attributeENS_9AttributeERK8QVariant(void *this_, QNetworkRequest::Attribute code, QVariant* defaultValue) {
  auto rv = ((QNetworkRequest*)this_)->attribute(code, *defaultValue);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:159
// [-2] void setAttribute(QNetworkRequest::Attribute, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest12setAttributeENS_9AttributeERK8QVariant(void *this_, QNetworkRequest::Attribute code, QVariant* value) {
  ((QNetworkRequest*)this_)->setAttribute(code, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:162
// [8] QSslConfiguration sslConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest16sslConfigurationEv(void *this_) {
  auto rv = ((QNetworkRequest*)this_)->sslConfiguration();
return new QSslConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:163
// [-2] void setSslConfiguration(const QSslConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest19setSslConfigurationERK17QSslConfiguration(void *this_, QSslConfiguration* configuration) {
  ((QNetworkRequest*)this_)->setSslConfiguration(*configuration);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qnetworkrequest.h:166
// [-2] void setOriginatingObject(QObject *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest20setOriginatingObjectEP7QObject(void *this_, QObject * object) {
  ((QNetworkRequest*)this_)->setOriginatingObject(object);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qnetworkrequest.h:167
// [8] QObject * originatingObject()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkRequest17originatingObjectEv(void *this_) {
  return (void*)((QNetworkRequest*)this_)->originatingObject();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkrequest.h:169
// [4] QNetworkRequest::Priority priority()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
QNetworkRequest::Priority C_ZNK15QNetworkRequest8priorityEv(void *this_) {
  return (QNetworkRequest::Priority)((QNetworkRequest*)this_)->priority();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkrequest.h:170
// [-2] void setPriority(QNetworkRequest::Priority)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest11setPriorityENS_8PriorityE(void *this_, QNetworkRequest::Priority priority) {
  ((QNetworkRequest*)this_)->setPriority(priority);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtNetwork/qnetworkrequest.h:173
// [4] int maximumRedirectsAllowed()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
int C_ZNK15QNetworkRequest23maximumRedirectsAllowedEv(void *this_) {
  return (int)((QNetworkRequest*)this_)->maximumRedirectsAllowed();
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtNetwork/qnetworkrequest.h:174
// [-2] void setMaximumRedirectsAllowed(int)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkRequest26setMaximumRedirectsAllowedEi(void *this_, int maximumRedirectsAllowed) {
  ((QNetworkRequest*)this_)->setMaximumRedirectsAllowed(maximumRedirectsAllowed);
}
#endif // QT_VERSION >= 0x050600

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
