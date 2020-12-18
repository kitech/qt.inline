//  header block begin

// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QConicalGradient is pure virtual: false false
// QConicalGradient has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQConicalGradient_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQConicalGradient_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQConicalGradient_t qt_meta_stringdata_MyQConicalGradient = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQConicalGradient"
  },
  "MyQConicalGradient"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQConicalGradient[] = {
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
class Q_DECL_EXPORT MyQConicalGradient : public QConicalGradient {
public:
  virtual ~MyQConicalGradient() {}
// void QConicalGradient()
MyQConicalGradient() : QConicalGradient() {}
// void QConicalGradient(const QPointF &, qreal)
MyQConicalGradient(const QPointF & center, qreal startAngle) : QConicalGradient(center, startAngle) {}
// void QConicalGradient(qreal, qreal, qreal)
MyQConicalGradient(qreal cx, qreal cy, qreal startAngle) : QConicalGradient(cx, cy, startAngle) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qconicalgradient(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:498
// [-2] void setCenter(qreal, qreal) 
// (12)qm1617367609 (34)_ZN16QConicalGradient9setCenterEdd
//static
/*void qm1617367609(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QConicalGradient*)this_)->setCenter(x, y);
   auto xptr = (void (QConicalGradient::*)(double, double) ) &QConicalGradient::setCenter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QConicalGradientD2Ev(void *this_)*/ {
  delete (QConicalGradient*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qconicalgradient
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
