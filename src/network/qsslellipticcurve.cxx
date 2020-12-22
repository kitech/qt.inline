//  header block begin

// /usr/include/qt/QtNetwork/qsslellipticcurve.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslellipticcurve.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslEllipticCurve is pure virtual: false false
// QSslEllipticCurve has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslEllipticCurve_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslEllipticCurve_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslEllipticCurve_t qt_meta_stringdata_MyQSslEllipticCurve = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSslEllipticCurve"
  },
  "MyQSslEllipticCurve"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslEllipticCurve[] = {
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
class Q_DECL_EXPORT MyQSslEllipticCurve : public QSslEllipticCurve {
public:
  virtual ~MyQSslEllipticCurve() {}
// void QSslEllipticCurve()
MyQSslEllipticCurve() : QSslEllipticCurve() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslellipticcurve(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:59
// [-2] void QSslEllipticCurve() 
// (10)qm24086401 (26)_ZN17QSslEllipticCurveC2Ev
/*void* qm24086401()*/{
  ;
  this_ =  new QSslEllipticCurve();
  this_ =  new MyQSslEllipticCurve();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:70
// [1] bool isValid() const
// (11)qm993963962 (33)_ZNK17QSslEllipticCurve7isValidEv
//static
/*void qm993963962()*/ {
  ;
  (void) ((QSslEllipticCurve*)this_)->isValid();
   auto xptr = (bool (QSslEllipticCurve::*)() const ) &QSslEllipticCurve::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QSslEllipticCurveD2Ev(void *this_)*/ {
  delete (QSslEllipticCurve*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslellipticcurve
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
