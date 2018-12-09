//  header block begin

// since 0x050900
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginehttprequest.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineHttpRequest is pure virtual: false
// QWebEngineHttpRequest has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineHttpRequest_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineHttpRequest_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineHttpRequest_t qt_meta_stringdata_MyQWebEngineHttpRequest = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQWebEngineHttpRequest"
  },
  "MyQWebEngineHttpRequest"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineHttpRequest[] = {
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
class Q_DECL_EXPORT MyQWebEngineHttpRequest : public QWebEngineHttpRequest {
public:
  virtual ~MyQWebEngineHttpRequest() {}
// void QWebEngineHttpRequest(const QUrl &, const QWebEngineHttpRequest::Method &)
MyQWebEngineHttpRequest(const QUrl & url, const QWebEngineHttpRequest::Method & method) : QWebEngineHttpRequest(url, method) {}
// void QWebEngineHttpRequest(const QWebEngineHttpRequest &)
MyQWebEngineHttpRequest(const QWebEngineHttpRequest & other) : QWebEngineHttpRequest(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:63
// [-2] void QWebEngineHttpRequest(const QUrl &, const QWebEngineHttpRequest::Method &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineHttpRequestC2ERK4QUrlRKNS_6MethodE(QUrl* url, const QWebEngineHttpRequest::Method & method) {
  return  new QWebEngineHttpRequest(*url, method);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:65
// [-2] void QWebEngineHttpRequest(const QWebEngineHttpRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineHttpRequestC2ERKS_(QWebEngineHttpRequest* other) {
  return  new QWebEngineHttpRequest(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:66
// [-2] void ~QWebEngineHttpRequest()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineHttpRequestD2Ev(void *this_) {
  delete (QWebEngineHttpRequest*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:68
// [8] QWebEngineHttpRequest & operator=(QWebEngineHttpRequest &&)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineHttpRequestaSEOS_(void *this_, QWebEngineHttpRequest && other) {
  auto& rv = ((QWebEngineHttpRequest*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:71
// [8] QWebEngineHttpRequest & operator=(const QWebEngineHttpRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineHttpRequestaSERKS_(void *this_, QWebEngineHttpRequest* other) {
  auto& rv = ((QWebEngineHttpRequest*)this_)->operator=(*other);
return &rv;
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:73
// [8] QWebEngineHttpRequest postRequest(const QUrl &, const QMap<QString, QString> &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineHttpRequest11postRequestERK4QUrlRK4QMapI7QStringS4_E(QUrl* url, QMap<QString, QString>* postData) {
  auto rv = QWebEngineHttpRequest::postRequest(*url, *postData);
return new QWebEngineHttpRequest(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:75
// [-2] void swap(QWebEngineHttpRequest &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineHttpRequest4swapERS_(void *this_, QWebEngineHttpRequest* other) {
  ((QWebEngineHttpRequest*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:77
// [1] bool operator==(const QWebEngineHttpRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QWebEngineHttpRequesteqERKS_(void *this_, QWebEngineHttpRequest* other) {
  return (bool)((QWebEngineHttpRequest*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:78
// [1] bool operator!=(const QWebEngineHttpRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QWebEngineHttpRequestneERKS_(void *this_, QWebEngineHttpRequest* other) {
  return (bool)((QWebEngineHttpRequest*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:81
// [4] QWebEngineHttpRequest::Method method()
extern "C" Q_DECL_EXPORT
QWebEngineHttpRequest::Method C_ZNK21QWebEngineHttpRequest6methodEv(void *this_) {
  return (QWebEngineHttpRequest::Method)((QWebEngineHttpRequest*)this_)->method();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:82
// [-2] void setMethod(QWebEngineHttpRequest::Method)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineHttpRequest9setMethodENS_6MethodE(void *this_, QWebEngineHttpRequest::Method method) {
  ((QWebEngineHttpRequest*)this_)->setMethod(method);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:84
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineHttpRequest3urlEv(void *this_) {
  auto rv = ((QWebEngineHttpRequest*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:85
// [-2] void setUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineHttpRequest6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QWebEngineHttpRequest*)this_)->setUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:87
// [8] QByteArray postData()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineHttpRequest8postDataEv(void *this_) {
  auto rv = ((QWebEngineHttpRequest*)this_)->postData();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:88
// [-2] void setPostData(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineHttpRequest11setPostDataERK10QByteArray(void *this_, QByteArray* postData) {
  ((QWebEngineHttpRequest*)this_)->setPostData(*postData);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:90
// [1] bool hasHeader(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QWebEngineHttpRequest9hasHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  return (bool)((QWebEngineHttpRequest*)this_)->hasHeader(*headerName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:91
// [-2] QVector<QByteArray> headers()
extern "C" Q_DECL_EXPORT
void C_ZNK21QWebEngineHttpRequest7headersEv(void *this_) {
  auto rv = ((QWebEngineHttpRequest*)this_)->headers();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:92
// [8] QByteArray header(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineHttpRequest6headerERK10QByteArray(void *this_, QByteArray* headerName) {
  auto rv = ((QWebEngineHttpRequest*)this_)->header(*headerName);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:93
// [-2] void setHeader(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineHttpRequest9setHeaderERK10QByteArrayS2_(void *this_, QByteArray* headerName, QByteArray* value) {
  ((QWebEngineHttpRequest*)this_)->setHeader(*headerName, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:94
// [-2] void unsetHeader(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineHttpRequest11unsetHeaderERK10QByteArray(void *this_, QByteArray* headerName) {
  ((QWebEngineHttpRequest*)this_)->unsetHeader(*headerName);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
