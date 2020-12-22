//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(http)
// /usr/include/qt/QtNetwork/qhttpmultipart.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhttpmultipart.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHttpPart is pure virtual: false false
// QHttpPart has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHttpPart_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHttpPart_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHttpPart_t qt_meta_stringdata_MyQHttpPart = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQHttpPart"
  },
  "MyQHttpPart"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHttpPart[] = {
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
class Q_DECL_EXPORT MyQHttpPart : public QHttpPart {
public:
  virtual ~MyQHttpPart() {}
// void QHttpPart()
MyQHttpPart() : QHttpPart() {}
// void QHttpPart(const QHttpPart &)
MyQHttpPart(const QHttpPart & other) : QHttpPart(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhttppart(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:60
// [-2] void QHttpPart() 
// (12)qm1349028831 (17)_ZN9QHttpPartC2Ev
/*void* qm1349028831()*/{
  ;
  this_ =  new QHttpPart();
  this_ =  new MyQHttpPart();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:61
// [-2] void QHttpPart(const QHttpPart &) 
// (12)qm3679918879 (20)_ZN9QHttpPartC2ERKS_
/*void* qm3679918879(const QHttpPart & other)*/{
  const QHttpPart & other = *(const QHttpPart *)this_;
  this_ =  new QHttpPart(other);
  this_ =  new MyQHttpPart(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:63
// [8] QHttpPart & operator=(QHttpPart &&) 
// (12)qm2463999938 (19)_ZN9QHttpPartaSEOS_
//static
/*void qm2463999938(QHttpPart && other)*/ {
  QHttpPart && other =  static_cast<QHttpPart &&>(*(QHttpPart *)this_);
  (void) ((QHttpPart*)this_)->operator=(other);
  // auto xptr = (QHttpPart & (QHttpPart::*)(QHttpPart&&) ) &QHttpPart::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:66
// [-2] void swap(QHttpPart &) 
// (11)qm186184632 (22)_ZN9QHttpPart4swapERS_
//static
/*void qm186184632(QHttpPart & other)*/ {
  QHttpPart & other = *(QHttpPart *)this_;
  (void) ((QHttpPart*)this_)->swap(other);
   auto xptr = (void (QHttpPart::*)(QHttpPart&) ) &QHttpPart::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:69
// [1] bool operator!=(const QHttpPart &) const
// (12)qm3962401321 (21)_ZNK9QHttpPartneERKS_
//static
/*void qm3962401321(const QHttpPart & other)*/ {
  const QHttpPart & other = *(const QHttpPart *)this_;
  (void) ((QHttpPart*)this_)->operator!=(other);
  // auto xptr = (bool (QHttpPart::*)(QHttpPart const&) const ) &QHttpPart::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QHttpPartD2Ev(void *this_)*/ {
  delete (QHttpPart*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhttppart
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(http)
#endif // #ifndef QT_MINIMAL
//  footer block end
