//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineregisterprotocolhandlerrequest.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineRegisterProtocolHandlerRequest is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebengineregisterprotocolhandlerrequest(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:59
// [-2] void QWebEngineRegisterProtocolHandlerRequest() 
// (12)qm3563761021 (49)_ZN40QWebEngineRegisterProtocolHandlerRequestC2Ev
/*void* qm3563761021()*/{
  ;
  this_ =  new QWebEngineRegisterProtocolHandlerRequest();
  this_ =  new MyQWebEngineRegisterProtocolHandlerRequest();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:64
// [1] bool operator==(const QWebEngineRegisterProtocolHandlerRequest &) const
// (12)qm3034987383 (53)_ZNK40QWebEngineRegisterProtocolHandlerRequesteqERKS_
//static
/*void qm3034987383(const QWebEngineRegisterProtocolHandlerRequest & that)*/ {
  const QWebEngineRegisterProtocolHandlerRequest & that = *(const QWebEngineRegisterProtocolHandlerRequest *)this_;
  (void) ((QWebEngineRegisterProtocolHandlerRequest*)this_)->operator==(that);
  // auto xptr = (bool (QWebEngineRegisterProtocolHandlerRequest::*)(QWebEngineRegisterProtocolHandlerRequest const&) const ) &QWebEngineRegisterProtocolHandlerRequest::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:65
// [1] bool operator!=(const QWebEngineRegisterProtocolHandlerRequest &) const
// (11)qm782642944 (53)_ZNK40QWebEngineRegisterProtocolHandlerRequestneERKS_
//static
/*void qm782642944(const QWebEngineRegisterProtocolHandlerRequest & that)*/ {
  const QWebEngineRegisterProtocolHandlerRequest & that = *(const QWebEngineRegisterProtocolHandlerRequest *)this_;
  (void) ((QWebEngineRegisterProtocolHandlerRequest*)this_)->operator!=(that);
  // auto xptr = (bool (QWebEngineRegisterProtocolHandlerRequest::*)(QWebEngineRegisterProtocolHandlerRequest const&) const ) &QWebEngineRegisterProtocolHandlerRequest::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN40QWebEngineRegisterProtocolHandlerRequestD2Ev(void *this_)*/ {
  delete (QWebEngineRegisterProtocolHandlerRequest*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebengineregisterprotocolhandlerrequest
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
