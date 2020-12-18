//  header block begin

// /usr/include/qt/QtCore/qpoint.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpoint.h>
#include <QtCore>
#include "callback_inherit.h"

// QPoint is pure virtual: false false
// QPoint has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPoint_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPoint_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPoint_t qt_meta_stringdata_MyQPoint = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQPoint"
  },
  "MyQPoint"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPoint[] = {
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
class Q_DECL_EXPORT MyQPoint : public QPoint {
public:
  virtual ~MyQPoint() {}
// void QPoint()
MyQPoint() : QPoint() {}
// void QPoint(int, int)
MyQPoint(int xpos, int ypos) : QPoint(xpos, ypos) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpoint(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:55
// [-2] void QPoint() 
// (11)qm496444458 (14)_ZN6QPointC2Ev
/*void* qm496444458()*/{
  ;
  this_ =  new QPoint();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:56
// [-2] void QPoint(int, int) 
// (12)qm4035995165 (15)_ZN6QPointC2Eii
/*void* qm4035995165(int xpos, int ypos)*/{
  int xpos = *(int*)this_; int ypos = *(int*)this_;
  this_ =  new QPoint(xpos, ypos);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:58
// [1] bool isNull() const
// (12)qm1390804939 (20)_ZNK6QPoint6isNullEv
//static
/*void qm1390804939()*/ {
  ;
  (void) ((QPoint*)this_)->isNull();
   auto xptr = (bool (QPoint::*)() const ) &QPoint::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:60
// [4] int x() const
// (11)qm359386261 (15)_ZNK6QPoint1xEv
//static
/*void qm359386261()*/ {
  ;
  (void) ((QPoint*)this_)->x();
   auto xptr = (int (QPoint::*)() const ) &QPoint::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:61
// [4] int y() const
// (11)qm346662562 (15)_ZNK6QPoint1yEv
//static
/*void qm346662562()*/ {
  ;
  (void) ((QPoint*)this_)->y();
   auto xptr = (int (QPoint::*)() const ) &QPoint::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:62
// [-2] void setX(int) 
// (11)qm148123695 (17)_ZN6QPoint4setXEi
//static
/*void qm148123695(int x)*/ {
  int x = *(int*)this_;
  (void) ((QPoint*)this_)->setX(x);
   auto xptr = (void (QPoint::*)(int) ) &QPoint::setX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:63
// [-2] void setY(int) 
// (11)qm152459800 (17)_ZN6QPoint4setYEi
//static
/*void qm152459800(int y)*/ {
  int y = *(int*)this_;
  (void) ((QPoint*)this_)->setY(y);
   auto xptr = (void (QPoint::*)(int) ) &QPoint::setY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:65
// [4] int manhattanLength() const
// (12)qm3380245230 (30)_ZNK6QPoint15manhattanLengthEv
//static
/*void qm3380245230()*/ {
  ;
  (void) ((QPoint*)this_)->manhattanLength();
   auto xptr = (int (QPoint::*)() const ) &QPoint::manhattanLength;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:67
// [8] QPoint transposed() const
// (12)qm2934620184 (25)_ZNK6QPoint10transposedEv
//static
/*void qm2934620184()*/ {
  ;
  (void) ((QPoint*)this_)->transposed();
   auto xptr = (QPoint (QPoint::*)() const ) &QPoint::transposed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:69
// [4] int & rx() 
// (11)qm935126983 (15)_ZN6QPoint2rxEv
//static
/*void qm935126983()*/ {
  ;
  (void) ((QPoint*)this_)->rx();
   auto xptr = (int & (QPoint::*)() ) &QPoint::rx;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:70
// [4] int & ry() 
// (11)qm914263536 (15)_ZN6QPoint2ryEv
//static
/*void qm914263536()*/ {
  ;
  (void) ((QPoint*)this_)->ry();
   auto xptr = (int & (QPoint::*)() ) &QPoint::ry;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:72
// [8] QPoint & operator+=(const QPoint &) 
// (12)qm3295033020 (17)_ZN6QPointpLERKS_
//static
/*void qm3295033020(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QPoint*)this_)->operator+=(p);
  // auto xptr = (QPoint & (QPoint::*)(QPoint const&) ) &QPoint::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:73
// [8] QPoint & operator-=(const QPoint &) 
// (12)qm2460113409 (17)_ZN6QPointmIERKS_
//static
/*void qm2460113409(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QPoint*)this_)->operator-=(p);
  // auto xptr = (QPoint & (QPoint::*)(QPoint const&) ) &QPoint::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:75
// [8] QPoint & operator*=(float) 
// (11)qm513976601 (14)_ZN6QPointmLEf
//static
/*void qm513976601(float factor)*/ {
  float factor = *(float*)this_;
  (void) ((QPoint*)this_)->operator*=(factor);
  // auto xptr = (QPoint & (QPoint::*)(float) ) &QPoint::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:76
// [8] QPoint & operator*=(double) 
// (12)qm4037855285 (14)_ZN6QPointmLEd
//static
/*void qm4037855285(double factor)*/ {
  double factor = *(double*)this_;
  (void) ((QPoint*)this_)->operator*=(factor);
  // auto xptr = (QPoint & (QPoint::*)(double) ) &QPoint::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:77
// [8] QPoint & operator*=(int) 
// (12)qm2384311432 (14)_ZN6QPointmLEi
//static
/*void qm2384311432(int factor)*/ {
  int factor = *(int*)this_;
  (void) ((QPoint*)this_)->operator*=(factor);
  // auto xptr = (QPoint & (QPoint::*)(int) ) &QPoint::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:79
// [8] QPoint & operator/=(qreal) 
// (12)qm2618663193 (14)_ZN6QPointdVEd
//static
/*void qm2618663193(double divisor)*/ {
  double divisor = *(double*)this_;
  (void) ((QPoint*)this_)->operator/=(divisor);
  // auto xptr = (QPoint & (QPoint::*)(double) ) &QPoint::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:81
// [4] int dotProduct(const QPoint &, const QPoint &) 
// (12)qm1343622669 (30)_ZN6QPoint10dotProductERKS_S1_
//static
/*void qm1343622669(const QPoint & p1, const QPoint & p2)*/ {
  const QPoint & p1 = *(const QPoint *)this_; const QPoint & p2 = *(const QPoint *)this_;
  (void) QPoint::dotProduct(p1, p2);
   auto xptr = (int (*)(QPoint const&, QPoint const&) ) &QPoint::dotProduct;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QPointD2Ev(void *this_)*/ {
  delete (QPoint*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpoint
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
