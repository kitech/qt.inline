//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(easingcurve)
// /usr/include/qt/QtCore/qeasingcurve.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qeasingcurve.h>
#include <QtCore>
#include "callback_inherit.h"

// QEasingCurve is pure virtual: false false
// QEasingCurve has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQEasingCurve_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQEasingCurve_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQEasingCurve_t qt_meta_stringdata_MyQEasingCurve = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQEasingCurve"
  },
  "MyQEasingCurve"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQEasingCurve[] = {
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
class Q_DECL_EXPORT MyQEasingCurve : public QEasingCurve {
public:
  virtual ~MyQEasingCurve() {}
// void QEasingCurve(QEasingCurve::Type)
MyQEasingCurve(QEasingCurve::Type type_) : QEasingCurve(type_) {}
// void QEasingCurve(const QEasingCurve &)
MyQEasingCurve(const QEasingCurve & other) : QEasingCurve(other) {}
// void QEasingCurve(QEasingCurve &&)
MyQEasingCurve(QEasingCurve && other) : QEasingCurve(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qeasingcurve(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:84
// [8] QEasingCurve & operator=(const QEasingCurve &) 
// (11)qm913667002 (24)_ZN12QEasingCurveaSERKS_
//static
/*void qm913667002(const QEasingCurve & other)*/ {
  const QEasingCurve & other = *(const QEasingCurve *)this_;
  (void) ((QEasingCurve*)this_)->operator=(other);
  // auto xptr = (QEasingCurve & (QEasingCurve::*)(QEasingCurve const&) ) &QEasingCurve::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:86
// [-2] void QEasingCurve(QEasingCurve &&) 
// (11)qm137765442 (23)_ZN12QEasingCurveC2EOS_
/*void* qm137765442(QEasingCurve && other)*/{
  QEasingCurve && other =  static_cast<QEasingCurve &&>(*(QEasingCurve *)this_);
  this_ =  new QEasingCurve(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:87
// [8] QEasingCurve & operator=(QEasingCurve &&) 
// (12)qm3858815106 (23)_ZN12QEasingCurveaSEOS_
//static
/*void qm3858815106(QEasingCurve && other)*/ {
  QEasingCurve && other =  static_cast<QEasingCurve &&>(*(QEasingCurve *)this_);
  (void) ((QEasingCurve*)this_)->operator=(other);
  // auto xptr = (QEasingCurve & (QEasingCurve::*)(QEasingCurve&&) ) &QEasingCurve::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:90
// [-2] void swap(QEasingCurve &) 
// (11)qm726119772 (26)_ZN12QEasingCurve4swapERS_
//static
/*void qm726119772(QEasingCurve & other)*/ {
  QEasingCurve & other = *(QEasingCurve *)this_;
  (void) ((QEasingCurve*)this_)->swap(other);
   auto xptr = (void (QEasingCurve::*)(QEasingCurve&) ) &QEasingCurve::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:93
// [1] bool operator!=(const QEasingCurve &) const
// (12)qm4227193763 (25)_ZNK12QEasingCurveneERKS_
//static
/*void qm4227193763(const QEasingCurve & other)*/ {
  const QEasingCurve & other = *(const QEasingCurve *)this_;
  (void) ((QEasingCurve*)this_)->operator!=(other);
  // auto xptr = (bool (QEasingCurve::*)(QEasingCurve const&) const ) &QEasingCurve::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QEasingCurveD2Ev(void *this_)*/ {
  delete (QEasingCurve*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qeasingcurve
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(easingcurve)
#endif // #ifndef QT_MINIMAL
//  footer block end
