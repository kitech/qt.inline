//  header block begin

// /usr/include/qt/QtQml/qqmlerror.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlerror.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlError is pure virtual: false false
// QQmlError has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlError_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlError_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlError_t qt_meta_stringdata_MyQQmlError = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQQmlError"
  },
  "MyQQmlError"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlError[] = {
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
class Q_DECL_EXPORT MyQQmlError : public QQmlError {
public:
  virtual ~MyQQmlError() {}
// void QQmlError()
MyQQmlError() : QQmlError() {}
// void QQmlError(const QQmlError &)
MyQQmlError(const QQmlError & arg0) : QQmlError(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlerror(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:56
// [-2] void QQmlError() 
// (12)qm2580604384 (17)_ZN9QQmlErrorC2Ev
/*void* qm2580604384()*/{
  ;
  this_ =  new QQmlError();
  this_ =  new MyQQmlError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:57
// [-2] void QQmlError(const QQmlError &) 
// (12)qm3399795948 (20)_ZN9QQmlErrorC2ERKS_
/*void* qm3399795948(const QQmlError & arg0)*/{
  const QQmlError & arg0 = *(const QQmlError *)this_;
  this_ =  new QQmlError(arg0);
  this_ =  new MyQQmlError(arg0);
}


/*void C_ZN9QQmlErrorD2Ev(void *this_)*/ {
  delete (QQmlError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlerror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
