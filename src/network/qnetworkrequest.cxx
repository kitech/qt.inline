//  header block begin

// /usr/include/qt/QtNetwork/qnetworkrequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkrequest.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkRequest is pure virtual: false false
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
// void QNetworkRequest()
MyQNetworkRequest() : QNetworkRequest() {}
// void QNetworkRequest(const QUrl &)
MyQNetworkRequest(const QUrl & url) : QNetworkRequest(url) {}
// void QNetworkRequest(const QNetworkRequest &)
MyQNetworkRequest(const QNetworkRequest & other) : QNetworkRequest(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkrequest(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:145
// [8] QNetworkRequest & operator=(QNetworkRequest &&) 
// (12)qm2066306904 (26)_ZN15QNetworkRequestaSEOS_
//static
/*void qm2066306904(QNetworkRequest && other)*/ {
  QNetworkRequest && other =  static_cast<QNetworkRequest &&>(*(QNetworkRequest *)this_);
  (void) ((QNetworkRequest*)this_)->operator=(other);
  // auto xptr = (QNetworkRequest & (QNetworkRequest::*)(QNetworkRequest&&) ) &QNetworkRequest::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:148
// [-2] void swap(QNetworkRequest &) 
// (12)qm1441798607 (29)_ZN15QNetworkRequest4swapERS_
//static
/*void qm1441798607(QNetworkRequest & other)*/ {
  QNetworkRequest & other = *(QNetworkRequest *)this_;
  (void) ((QNetworkRequest*)this_)->swap(other);
   auto xptr = (void (QNetworkRequest::*)(QNetworkRequest&) ) &QNetworkRequest::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:151
// [1] bool operator!=(const QNetworkRequest &) const
// (12)qm1077164672 (28)_ZNK15QNetworkRequestneERKS_
//static
/*void qm1077164672(const QNetworkRequest & other)*/ {
  const QNetworkRequest & other = *(const QNetworkRequest *)this_;
  (void) ((QNetworkRequest*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkRequest::*)(QNetworkRequest const&) const ) &QNetworkRequest::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QNetworkRequestD2Ev(void *this_)*/ {
  delete (QNetworkRequest*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkrequest
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
