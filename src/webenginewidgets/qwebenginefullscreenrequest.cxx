//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginefullscreenrequest.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineFullScreenRequest is pure virtual: false false
// QWebEngineFullScreenRequest has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineFullScreenRequest_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineFullScreenRequest_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineFullScreenRequest_t qt_meta_stringdata_MyQWebEngineFullScreenRequest = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQWebEngineFullScreenRequest"
  },
  "MyQWebEngineFullScreenRequest"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineFullScreenRequest[] = {
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
class Q_DECL_EXPORT MyQWebEngineFullScreenRequest : public QWebEngineFullScreenRequest {
public:
  virtual ~MyQWebEngineFullScreenRequest() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginefullscreenrequest(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h:57
// [1] bool toggleOn() const
// (12)qm2475517459 (44)_ZNK27QWebEngineFullScreenRequest8toggleOnEv
//static
/*void qm2475517459()*/ {
  ;
  (void) ((QWebEngineFullScreenRequest*)this_)->toggleOn();
   auto xptr = (bool (QWebEngineFullScreenRequest::*)() const ) &QWebEngineFullScreenRequest::toggleOn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h:58
// [8] const QUrl & origin() const
// (12)qm1161052839 (42)_ZNK27QWebEngineFullScreenRequest6originEv
//static
/*void qm1161052839()*/ {
  ;
  (void) ((QWebEngineFullScreenRequest*)this_)->origin();
   auto xptr = (const QUrl & (QWebEngineFullScreenRequest::*)() const ) &QWebEngineFullScreenRequest::origin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QWebEngineFullScreenRequestD2Ev(void *this_)*/ {
  delete (QWebEngineFullScreenRequest*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginefullscreenrequest
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
