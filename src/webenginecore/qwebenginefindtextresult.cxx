//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebenginefindtextresult.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginefindtextresult.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineFindTextResult is pure virtual: false false
// QWebEngineFindTextResult has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineFindTextResult_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineFindTextResult_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineFindTextResult_t qt_meta_stringdata_MyQWebEngineFindTextResult = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQWebEngineFindTextResult"
  },
  "MyQWebEngineFindTextResult"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineFindTextResult[] = {
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
class Q_DECL_EXPORT MyQWebEngineFindTextResult : public QWebEngineFindTextResult {
public:
  virtual ~MyQWebEngineFindTextResult() {}
// void QWebEngineFindTextResult()
MyQWebEngineFindTextResult() : QWebEngineFindTextResult() {}
// void QWebEngineFindTextResult(const QWebEngineFindTextResult &)
MyQWebEngineFindTextResult(const QWebEngineFindTextResult & other) : QWebEngineFindTextResult(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginefindtextresult(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginefindtextresult.h:64
// [-2] void QWebEngineFindTextResult() 
// (12)qm2289131765 (33)_ZN24QWebEngineFindTextResultC2Ev
/*void* qm2289131765()*/{
  ;
  this_ =  new QWebEngineFindTextResult();
  this_ =  new MyQWebEngineFindTextResult();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginefindtextresult.h:65
// [-2] void QWebEngineFindTextResult(const QWebEngineFindTextResult &) 
// (11)qm929847830 (36)_ZN24QWebEngineFindTextResultC2ERKS_
/*void* qm929847830(const QWebEngineFindTextResult & other)*/{
  const QWebEngineFindTextResult & other = *(const QWebEngineFindTextResult *)this_;
  this_ =  new QWebEngineFindTextResult(other);
  this_ =  new MyQWebEngineFindTextResult(other);
}


/*void C_ZN24QWebEngineFindTextResultD2Ev(void *this_)*/ {
  delete (QWebEngineFindTextResult*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginefindtextresult
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
