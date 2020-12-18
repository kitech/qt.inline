//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginehttprequest.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineHttpRequest is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginehttprequest(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:66
// [8] QWebEngineHttpRequest & operator=(QWebEngineHttpRequest &&) 
// (12)qm4185797671 (32)_ZN21QWebEngineHttpRequestaSEOS_
//static
/*void qm4185797671(QWebEngineHttpRequest && other)*/ {
  QWebEngineHttpRequest && other =  static_cast<QWebEngineHttpRequest &&>(*(QWebEngineHttpRequest *)this_);
  (void) ((QWebEngineHttpRequest*)this_)->operator=(other);
  // auto xptr = (QWebEngineHttpRequest & (QWebEngineHttpRequest::*)(QWebEngineHttpRequest&&) ) &QWebEngineHttpRequest::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:75
// [-2] void swap(QWebEngineHttpRequest &) 
// (12)qm2978138643 (35)_ZN21QWebEngineHttpRequest4swapERS_
//static
/*void qm2978138643(QWebEngineHttpRequest & other)*/ {
  QWebEngineHttpRequest & other = *(QWebEngineHttpRequest *)this_;
  (void) ((QWebEngineHttpRequest*)this_)->swap(other);
   auto xptr = (void (QWebEngineHttpRequest::*)(QWebEngineHttpRequest&) ) &QWebEngineHttpRequest::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:78
// [1] bool operator!=(const QWebEngineHttpRequest &) const
// (12)qm2292265978 (34)_ZNK21QWebEngineHttpRequestneERKS_
//static
/*void qm2292265978(const QWebEngineHttpRequest & other)*/ {
  const QWebEngineHttpRequest & other = *(const QWebEngineHttpRequest *)this_;
  (void) ((QWebEngineHttpRequest*)this_)->operator!=(other);
  // auto xptr = (bool (QWebEngineHttpRequest::*)(QWebEngineHttpRequest const&) const ) &QWebEngineHttpRequest::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QWebEngineHttpRequestD2Ev(void *this_)*/ {
  delete (QWebEngineHttpRequest*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginehttprequest
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
