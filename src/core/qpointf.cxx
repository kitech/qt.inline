//  header block begin

// /usr/include/qt/QtCore/qpoint.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpoint.h>
#include <QtCore>
#include "callback_inherit.h"

// QPointF is pure virtual: false false
// QPointF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPointF_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPointF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPointF_t qt_meta_stringdata_MyQPointF = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQPointF"
  },
  "MyQPointF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPointF[] = {
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
class Q_DECL_EXPORT MyQPointF : public QPointF {
public:
  virtual ~MyQPointF() {}
// void QPointF()
MyQPointF() : QPointF() {}
// void QPointF(const QPoint &)
MyQPointF(const QPoint & p) : QPointF(p) {}
// void QPointF(qreal, qreal)
MyQPointF(qreal xpos, qreal ypos) : QPointF(xpos, ypos) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpointf(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:224
// [-2] void QPointF() 
// (12)qm2513533557 (15)_ZN7QPointFC2Ev
/*void* qm2513533557()*/{
  ;
  this_ =  new QPointF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:225
// [-2] void QPointF(const QPoint &) 
// (11)qm516146433 (23)_ZN7QPointFC2ERK6QPoint
/*void* qm516146433(const QPoint & p)*/{
  const QPoint & p = *(const QPoint *)this_;
  this_ =  new QPointF(p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:226
// [-2] void QPointF(qreal, qreal) 
// (12)qm3235081942 (16)_ZN7QPointFC2Edd
/*void* qm3235081942(double xpos, double ypos)*/{
  double xpos = *(double*)this_; double ypos = *(double*)this_;
  this_ =  new QPointF(xpos, ypos);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:228
// [8] qreal manhattanLength() const
// (12)qm2157545085 (31)_ZNK7QPointF15manhattanLengthEv
//static
/*void qm2157545085()*/ {
  ;
  (void) ((QPointF*)this_)->manhattanLength();
   auto xptr = (double (QPointF::*)() const ) &QPointF::manhattanLength;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:230
// [1] bool isNull() const
// (12)qm1609692812 (21)_ZNK7QPointF6isNullEv
//static
/*void qm1609692812()*/ {
  ;
  (void) ((QPointF*)this_)->isNull();
   auto xptr = (bool (QPointF::*)() const ) &QPointF::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:232
// [8] qreal x() const
// (10)qm92750711 (16)_ZNK7QPointF1xEv
//static
/*void qm92750711()*/ {
  ;
  (void) ((QPointF*)this_)->x();
   auto xptr = (double (QPointF::*)() const ) &QPointF::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:233
// [8] qreal y() const
// (10)qm71641408 (16)_ZNK7QPointF1yEv
//static
/*void qm71641408()*/ {
  ;
  (void) ((QPointF*)this_)->y();
   auto xptr = (double (QPointF::*)() const ) &QPointF::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:234
// [-2] void setX(qreal) 
// (12)qm2852303336 (18)_ZN7QPointF4setXEd
//static
/*void qm2852303336(double x)*/ {
  double x = *(double*)this_;
  (void) ((QPointF*)this_)->setX(x);
   auto xptr = (void (QPointF::*)(double) ) &QPointF::setX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:235
// [-2] void setY(qreal) 
// (12)qm2881543135 (18)_ZN7QPointF4setYEd
//static
/*void qm2881543135(double y)*/ {
  double y = *(double*)this_;
  (void) ((QPointF*)this_)->setY(y);
   auto xptr = (void (QPointF::*)(double) ) &QPointF::setY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:237
// [16] QPointF transposed() const
// (12)qm2544926250 (26)_ZNK7QPointF10transposedEv
//static
/*void qm2544926250()*/ {
  ;
  (void) ((QPointF*)this_)->transposed();
   auto xptr = (QPointF (QPointF::*)() const ) &QPointF::transposed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:239
// [8] qreal & rx() 
// (12)qm3437293052 (16)_ZN7QPointF2rxEv
//static
/*void qm3437293052()*/ {
  ;
  (void) ((QPointF*)this_)->rx();
   auto xptr = (double & (QPointF::*)() ) &QPointF::rx;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:240
// [8] qreal & ry() 
// (12)qm3441592267 (16)_ZN7QPointF2ryEv
//static
/*void qm3441592267()*/ {
  ;
  (void) ((QPointF*)this_)->ry();
   auto xptr = (double & (QPointF::*)() ) &QPointF::ry;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:242
// [16] QPointF & operator+=(const QPointF &) 
// (11)qm402770886 (18)_ZN7QPointFpLERKS_
//static
/*void qm402770886(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QPointF*)this_)->operator+=(p);
  // auto xptr = (QPointF & (QPointF::*)(QPointF const&) ) &QPointF::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:243
// [16] QPointF & operator-=(const QPointF &) 
// (12)qm1321576315 (18)_ZN7QPointFmIERKS_
//static
/*void qm1321576315(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QPointF*)this_)->operator-=(p);
  // auto xptr = (QPointF & (QPointF::*)(QPointF const&) ) &QPointF::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:244
// [16] QPointF & operator*=(qreal) 
// (12)qm2028639850 (15)_ZN7QPointFmLEd
//static
/*void qm2028639850(double c)*/ {
  double c = *(double*)this_;
  (void) ((QPointF*)this_)->operator*=(c);
  // auto xptr = (QPointF & (QPointF::*)(double) ) &QPointF::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:245
// [16] QPointF & operator/=(qreal) 
// (11)qm341049158 (15)_ZN7QPointFdVEd
//static
/*void qm341049158(double c)*/ {
  double c = *(double*)this_;
  (void) ((QPointF*)this_)->operator/=(c);
  // auto xptr = (QPointF & (QPointF::*)(double) ) &QPointF::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:247
// [8] qreal dotProduct(const QPointF &, const QPointF &) 
// (11)qm912070441 (31)_ZN7QPointF10dotProductERKS_S1_
//static
/*void qm912070441(const QPointF & p1, const QPointF & p2)*/ {
  const QPointF & p1 = *(const QPointF *)this_; const QPointF & p2 = *(const QPointF *)this_;
  (void) QPointF::dotProduct(p1, p2);
   auto xptr = (double (*)(QPointF const&, QPointF const&) ) &QPointF::dotProduct;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:260
// [8] QPoint toPoint() const
// (11)qm820741127 (22)_ZNK7QPointF7toPointEv
//static
/*void qm820741127()*/ {
  ;
  (void) ((QPointF*)this_)->toPoint();
   auto xptr = (QPoint (QPointF::*)() const ) &QPointF::toPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QPointFD2Ev(void *this_)*/ {
  delete (QPointF*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpointf
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
