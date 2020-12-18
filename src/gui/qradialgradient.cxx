//  header block begin

// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QRadialGradient is pure virtual: false false
// QRadialGradient has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRadialGradient_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRadialGradient_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRadialGradient_t qt_meta_stringdata_MyQRadialGradient = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQRadialGradient"
  },
  "MyQRadialGradient"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRadialGradient[] = {
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
class Q_DECL_EXPORT MyQRadialGradient : public QRadialGradient {
public:
  virtual ~MyQRadialGradient() {}
// void QRadialGradient()
MyQRadialGradient() : QRadialGradient() {}
// void QRadialGradient(const QPointF &, qreal, const QPointF &)
MyQRadialGradient(const QPointF & center, qreal radius, const QPointF & focalPoint) : QRadialGradient(center, radius, focalPoint) {}
// void QRadialGradient(qreal, qreal, qreal, qreal, qreal)
MyQRadialGradient(qreal cx, qreal cy, qreal radius, qreal fx, qreal fy) : QRadialGradient(cx, cy, radius, fx, fy) {}
// void QRadialGradient(const QPointF &, qreal)
MyQRadialGradient(const QPointF & center, qreal radius) : QRadialGradient(center, radius) {}
// void QRadialGradient(qreal, qreal, qreal)
MyQRadialGradient(qreal cx, qreal cy, qreal radius) : QRadialGradient(cx, cy, radius) {}
// void QRadialGradient(const QPointF &, qreal, const QPointF &, qreal)
MyQRadialGradient(const QPointF & center, qreal centerRadius, const QPointF & focalPoint, qreal focalRadius) : QRadialGradient(center, centerRadius, focalPoint, focalRadius) {}
// void QRadialGradient(qreal, qreal, qreal, qreal, qreal, qreal)
MyQRadialGradient(qreal cx, qreal cy, qreal centerRadius, qreal fx, qreal fy, qreal focalRadius) : QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qradialgradient(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:471
// [-2] void setCenter(qreal, qreal) 
// (12)qm1367058357 (33)_ZN15QRadialGradient9setCenterEdd
//static
/*void qm1367058357(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QRadialGradient*)this_)->setCenter(x, y);
   auto xptr = (void (QRadialGradient::*)(double, double) ) &QRadialGradient::setCenter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:475
// [-2] void setFocalPoint(qreal, qreal) 
// (12)qm4079603184 (38)_ZN15QRadialGradient13setFocalPointEdd
//static
/*void qm4079603184(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QRadialGradient*)this_)->setFocalPoint(x, y);
   auto xptr = (void (QRadialGradient::*)(double, double) ) &QRadialGradient::setFocalPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QRadialGradientD2Ev(void *this_)*/ {
  delete (QRadialGradient*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qradialgradient
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
