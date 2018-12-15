//  header block begin

// since 0x050b00
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineregisterprotocolhandlerrequest.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineRegisterProtocolHandlerRequest is pure virtual: false
// QWebEngineRegisterProtocolHandlerRequest has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineRegisterProtocolHandlerRequest_t {
  QByteArrayData data[1];
  char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineRegisterProtocolHandlerRequest_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineRegisterProtocolHandlerRequest_t qt_meta_stringdata_MyQWebEngineRegisterProtocolHandlerRequest = {
   {
  QT_MOC_LITERAL(0, 0, 42), // "MyQWebEngineRegisterProtocolHandlerRequest"
  },
  "MyQWebEngineRegisterProtocolHandlerRequest"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineRegisterProtocolHandlerRequest[] = {
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
class Q_DECL_EXPORT MyQWebEngineRegisterProtocolHandlerRequest : public QWebEngineRegisterProtocolHandlerRequest {
public:
  virtual ~MyQWebEngineRegisterProtocolHandlerRequest() {}
// void QWebEngineRegisterProtocolHandlerRequest()
MyQWebEngineRegisterProtocolHandlerRequest() : QWebEngineRegisterProtocolHandlerRequest() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:59
// [-2] void QWebEngineRegisterProtocolHandlerRequest()
extern "C" Q_DECL_EXPORT
void* C_ZN40QWebEngineRegisterProtocolHandlerRequestC2Ev() {
  return  new QWebEngineRegisterProtocolHandlerRequest();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:60
// [-2] void accept()
extern "C" Q_DECL_EXPORT
void C_ZN40QWebEngineRegisterProtocolHandlerRequest6acceptEv(void *this_) {
  ((QWebEngineRegisterProtocolHandlerRequest*)this_)->accept();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:61
// [-2] void reject()
extern "C" Q_DECL_EXPORT
void C_ZN40QWebEngineRegisterProtocolHandlerRequest6rejectEv(void *this_) {
  ((QWebEngineRegisterProtocolHandlerRequest*)this_)->reject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:62
// [8] QUrl origin()
extern "C" Q_DECL_EXPORT
void* C_ZNK40QWebEngineRegisterProtocolHandlerRequest6originEv(void *this_) {
  auto rv = ((QWebEngineRegisterProtocolHandlerRequest*)this_)->origin();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:63
// [8] QString scheme()
extern "C" Q_DECL_EXPORT
void* C_ZNK40QWebEngineRegisterProtocolHandlerRequest6schemeEv(void *this_) {
  auto rv = ((QWebEngineRegisterProtocolHandlerRequest*)this_)->scheme();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:64
// [1] bool operator==(const QWebEngineRegisterProtocolHandlerRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK40QWebEngineRegisterProtocolHandlerRequesteqERKS_(void *this_, QWebEngineRegisterProtocolHandlerRequest* that) {
  return (bool)((QWebEngineRegisterProtocolHandlerRequest*)this_)->operator==(*that);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:65
// [1] bool operator!=(const QWebEngineRegisterProtocolHandlerRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK40QWebEngineRegisterProtocolHandlerRequestneERKS_(void *this_, QWebEngineRegisterProtocolHandlerRequest* that) {
  return (bool)((QWebEngineRegisterProtocolHandlerRequest*)this_)->operator!=(*that);
}


extern "C" Q_DECL_EXPORT
void C_ZN40QWebEngineRegisterProtocolHandlerRequestD2Ev(void *this_) {
  delete (QWebEngineRegisterProtocolHandlerRequest*)(this_);
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
