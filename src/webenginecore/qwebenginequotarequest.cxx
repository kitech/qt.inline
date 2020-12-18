//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginequotarequest.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineQuotaRequest is pure virtual: false false
// QWebEngineQuotaRequest has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineQuotaRequest_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineQuotaRequest_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineQuotaRequest_t qt_meta_stringdata_MyQWebEngineQuotaRequest = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQWebEngineQuotaRequest"
  },
  "MyQWebEngineQuotaRequest"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineQuotaRequest[] = {
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
class Q_DECL_EXPORT MyQWebEngineQuotaRequest : public QWebEngineQuotaRequest {
public:
  virtual ~MyQWebEngineQuotaRequest() {}
// void QWebEngineQuotaRequest()
MyQWebEngineQuotaRequest() : QWebEngineQuotaRequest() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginequotarequest(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:59
// [-2] void QWebEngineQuotaRequest() 
// (12)qm2083716222 (31)_ZN22QWebEngineQuotaRequestC2Ev
/*void* qm2083716222()*/{
  ;
  this_ =  new QWebEngineQuotaRequest();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:64
// [1] bool operator==(const QWebEngineQuotaRequest &) const
// (12)qm3551650126 (35)_ZNK22QWebEngineQuotaRequesteqERKS_
//static
/*void qm3551650126(const QWebEngineQuotaRequest & that)*/ {
  const QWebEngineQuotaRequest & that = *(const QWebEngineQuotaRequest *)this_;
  (void) ((QWebEngineQuotaRequest*)this_)->operator==(that);
  // auto xptr = (bool (QWebEngineQuotaRequest::*)(QWebEngineQuotaRequest const&) const ) &QWebEngineQuotaRequest::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:65
// [1] bool operator!=(const QWebEngineQuotaRequest &) const
// (12)qm1240593721 (35)_ZNK22QWebEngineQuotaRequestneERKS_
//static
/*void qm1240593721(const QWebEngineQuotaRequest & that)*/ {
  const QWebEngineQuotaRequest & that = *(const QWebEngineQuotaRequest *)this_;
  (void) ((QWebEngineQuotaRequest*)this_)->operator!=(that);
  // auto xptr = (bool (QWebEngineQuotaRequest::*)(QWebEngineQuotaRequest const&) const ) &QWebEngineQuotaRequest::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QWebEngineQuotaRequestD2Ev(void *this_)*/ {
  delete (QWebEngineQuotaRequest*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginequotarequest
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
