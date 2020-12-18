//  header block begin

// /usr/include/qt/QtGui/qpolygon.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpolygon.h>
#include <QtGui>
#include "callback_inherit.h"

// QPolygon is pure virtual: false false
// QPolygon has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPolygon_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPolygon_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPolygon_t qt_meta_stringdata_MyQPolygon = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQPolygon"
  },
  "MyQPolygon"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPolygon[] = {
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
class Q_DECL_EXPORT MyQPolygon : public QPolygon {
public:
  virtual ~MyQPolygon() {}
// void QPolygon()
MyQPolygon() : QPolygon() {}
// void QPolygon(int)
MyQPolygon(int size) : QPolygon(size) {}
// void QPolygon(const QVector<QPoint> &)
MyQPolygon(const QVector<QPoint> & v) : QPolygon(v) {}
// void QPolygon(QVector<QPoint> &&)
MyQPolygon(QVector<QPoint> && v) : QPolygon(v) {}
// void QPolygon(const QRect &, bool)
MyQPolygon(const QRect & r, bool closed) : QPolygon(r, closed) {}
// void QPolygon(int, const int *)
MyQPolygon(int nPoints, const int * points) : QPolygon(nPoints, points) {}
// void QPolygon(const QPolygon &)
MyQPolygon(const QPolygon & other) : QPolygon(other) {}
// void QPolygon(QPolygon &&)
MyQPolygon(QPolygon && other) : QPolygon(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpolygon(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:59
// [-2] void QPolygon() 
// (12)qm1771381249 (16)_ZN8QPolygonC2Ev
/*void* qm1771381249()*/{
  ;
  this_ =  new QPolygon();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:60
// [-2] void ~QPolygon() 
// (12)qm4097972920 (16)_ZN8QPolygonD2Ev
/*void qm4097972920 (void *this_)*/ {
  delete (QPolygon*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:61
// [-2] void QPolygon(int) 
// (12)qm3835506676 (16)_ZN8QPolygonC2Ei
/*void* qm3835506676(int size)*/{
  int size = *(int*)this_;
  this_ =  new QPolygon(size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:62
// [-2] void QPolygon(const QVector<QPoint> &) 
// (12)qm2589534692 (34)_ZN8QPolygonC2ERK7QVectorI6QPointE
/*void* qm2589534692(const QVector<QPoint> & v)*/{
  const QVector<QPoint> & v = *(const QVector<QPoint> *)this_;
  this_ =  new QPolygon(v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:63
// [-2] void QPolygon(QVector<QPoint> &&) 
// (12)qm3660574542 (33)_ZN8QPolygonC2EO7QVectorI6QPointE
/*void* qm3660574542(QVector<QPoint> && v)*/{
  QVector<QPoint> && v =  static_cast<QVector<QPoint> &&>(*(QVector<QPoint> *)this_);
  this_ =  new QPolygon(v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:66
// [-2] void QPolygon(const QPolygon &) 
// (12)qm3767110173 (19)_ZN8QPolygonC2ERKS_
/*void* qm3767110173(const QPolygon & other)*/{
  const QPolygon & other = *(const QPolygon *)this_;
  this_ =  new QPolygon(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:67
// [-2] void QPolygon(QPolygon &&) 
// (12)qm3428488994 (18)_ZN8QPolygonC2EOS_
/*void* qm3428488994(QPolygon && other)*/{
  QPolygon && other =  static_cast<QPolygon &&>(*(QPolygon *)this_);
  this_ =  new QPolygon(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:68
// [8] QPolygon & operator=(QPolygon &&) 
// (11)qm577531362 (18)_ZN8QPolygonaSEOS_
//static
/*void qm577531362(QPolygon && other)*/ {
  QPolygon && other =  static_cast<QPolygon &&>(*(QPolygon *)this_);
  (void) ((QPolygon*)this_)->operator=(other);
  // auto xptr = (QPolygon & (QPolygon::*)(QPolygon&&) ) &QPolygon::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:69
// [8] QPolygon & operator=(const QPolygon &) 
// (12)qm2063826519 (19)_ZN8QPolygonaSERKS_
//static
/*void qm2063826519(const QPolygon & other)*/ {
  const QPolygon & other = *(const QPolygon *)this_;
  (void) ((QPolygon*)this_)->operator=(other);
  // auto xptr = (QPolygon & (QPolygon::*)(QPolygon const&) ) &QPolygon::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:70
// [-2] void swap(QPolygon &) 
// (12)qm3190163766 (21)_ZN8QPolygon4swapERS_
//static
/*void qm3190163766(QPolygon & other)*/ {
  QPolygon & other = *(QPolygon *)this_;
  (void) ((QPolygon*)this_)->swap(other);
   auto xptr = (void (QPolygon::*)(QPolygon&) ) &QPolygon::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:75
// [-2] void translate(const QPoint &) 
// (12)qm4128793254 (32)_ZN8QPolygon9translateERK6QPoint
//static
/*void qm4128793254(const QPoint & offset)*/ {
  const QPoint & offset = *(const QPoint *)this_;
  (void) ((QPolygon*)this_)->translate(offset);
   auto xptr = (void (QPolygon::*)(QPoint const&) ) &QPolygon::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:78
// [8] QPolygon translated(const QPoint &) const
// (12)qm3541708868 (35)_ZNK8QPolygon10translatedERK6QPoint
//static
/*void qm3541708868(const QPoint & offset)*/ {
  const QPoint & offset = *(const QPoint *)this_;
  (void) ((QPolygon*)this_)->translated(offset);
   auto xptr = (QPolygon (QPolygon::*)(QPoint const&) const ) &QPolygon::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:83
// [8] QPoint point(int) const
// (12)qm3737091125 (21)_ZNK8QPolygon5pointEi
//static
/*void qm3737091125(int i)*/ {
  int i = *(int*)this_;
  (void) ((QPolygon*)this_)->point(i);
   auto xptr = (QPoint (QPolygon::*)(int) const ) &QPolygon::point;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:84
// [-2] void setPoint(int, int, int) 
// (12)qm2621343325 (25)_ZN8QPolygon8setPointEiii
//static
/*void qm2621343325(int index, int x, int y)*/ {
  int index = *(int*)this_; int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QPolygon*)this_)->setPoint(index, x, y);
   auto xptr = (void (QPolygon::*)(int, int, int) ) &QPolygon::setPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:85
// [-2] void setPoint(int, const QPoint &) 
// (12)qm1427153684 (32)_ZN8QPolygon8setPointEiRK6QPoint
//static
/*void qm1427153684(int index, const QPoint & p)*/ {
  int index = *(int*)this_; const QPoint & p = *(const QPoint *)this_;
  (void) ((QPolygon*)this_)->setPoint(index, p);
   auto xptr = (void (QPolygon::*)(int, QPoint const&) ) &QPolygon::setPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qpolygon
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
