//  header block begin

// /usr/include/qt/QtGui/qpolygon.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpolygon.h>
#include <QtGui>
#include "callback_inherit.h"

// QPolygonF is pure virtual: false false
// QPolygonF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPolygonF_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPolygonF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPolygonF_t qt_meta_stringdata_MyQPolygonF = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQPolygonF"
  },
  "MyQPolygonF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPolygonF[] = {
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
class Q_DECL_EXPORT MyQPolygonF : public QPolygonF {
public:
  virtual ~MyQPolygonF() {}
// void QPolygonF()
MyQPolygonF() : QPolygonF() {}
// void QPolygonF(int)
MyQPolygonF(int size) : QPolygonF(size) {}
// void QPolygonF(const QVector<QPointF> &)
MyQPolygonF(const QVector<QPointF> & v) : QPolygonF(v) {}
// void QPolygonF(QVector<QPointF> &&)
MyQPolygonF(QVector<QPointF> && v) : QPolygonF(v) {}
// void QPolygonF(const QRectF &)
MyQPolygonF(const QRectF & r) : QPolygonF(r) {}
// void QPolygonF(const QPolygon &)
MyQPolygonF(const QPolygon & a) : QPolygonF(a) {}
// void QPolygonF(const QPolygonF &)
MyQPolygonF(const QPolygonF & a) : QPolygonF(a) {}
// void QPolygonF(QPolygonF &&)
MyQPolygonF(QPolygonF && other) : QPolygonF(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpolygonf(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:140
// [-2] void QPolygonF() 
// (12)qm1068706858 (17)_ZN9QPolygonFC2Ev
/*void* qm1068706858()*/{
  ;
  this_ =  new QPolygonF();
  this_ =  new MyQPolygonF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:141
// [-2] void ~QPolygonF() 
// (12)qm2724467859 (17)_ZN9QPolygonFD2Ev
/*void qm2724467859 (void *this_)*/ {
  delete (QPolygonF*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:142
// [-2] void QPolygonF(int) 
// (12)qm2998608351 (17)_ZN9QPolygonFC2Ei
/*void* qm2998608351(int size)*/{
  int size = *(int*)this_;
  this_ =  new QPolygonF(size);
  this_ =  new MyQPolygonF(size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:143
// [-2] void QPolygonF(const QVector<QPointF> &) 
// (12)qm3357456793 (36)_ZN9QPolygonFC2ERK7QVectorI7QPointFE
/*void* qm3357456793(const QVector<QPointF> & v)*/{
  const QVector<QPointF> & v = *(const QVector<QPointF> *)this_;
  this_ =  new QPolygonF(v);
  this_ =  new MyQPolygonF(v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:144
// [-2] void QPolygonF(QVector<QPointF> &&) 
// (12)qm1881427963 (35)_ZN9QPolygonFC2EO7QVectorI7QPointFE
/*void* qm1881427963(QVector<QPointF> && v)*/{
  QVector<QPointF> && v =  static_cast<QVector<QPointF> &&>(*(QVector<QPointF> *)this_);
  this_ =  new QPolygonF(v);
  this_ =  new MyQPolygonF(v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:145
// [-2] void QPolygonF(const QRectF &) 
// (12)qm3447409673 (25)_ZN9QPolygonFC2ERK6QRectF
/*void* qm3447409673(const QRectF & r)*/{
  const QRectF & r = *(const QRectF *)this_;
  this_ =  new QPolygonF(r);
  this_ =  new MyQPolygonF(r);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:146
// [-2] void QPolygonF(const QPolygon &) 
// (11)qm275634247 (27)_ZN9QPolygonFC2ERK8QPolygon
/*void* qm275634247(const QPolygon & a)*/{
  const QPolygon & a = *(const QPolygon *)this_;
  this_ =  new QPolygonF(a);
  this_ =  new MyQPolygonF(a);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:147
// [-2] void QPolygonF(const QPolygonF &) 
// (12)qm2552204089 (20)_ZN9QPolygonFC2ERKS_
/*void* qm2552204089(const QPolygonF & a)*/{
  const QPolygonF & a = *(const QPolygonF *)this_;
  this_ =  new QPolygonF(a);
  this_ =  new MyQPolygonF(a);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:148
// [-2] void QPolygonF(QPolygonF &&) 
// (12)qm1569853802 (19)_ZN9QPolygonFC2EOS_
/*void* qm1569853802(QPolygonF && other)*/{
  QPolygonF && other =  static_cast<QPolygonF &&>(*(QPolygonF *)this_);
  this_ =  new QPolygonF(other);
  this_ =  new MyQPolygonF(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:149
// [8] QPolygonF & operator=(QPolygonF &&) 
// (12)qm3013929898 (19)_ZN9QPolygonFaSEOS_
//static
/*void qm3013929898(QPolygonF && other)*/ {
  QPolygonF && other =  static_cast<QPolygonF &&>(*(QPolygonF *)this_);
  (void) ((QPolygonF*)this_)->operator=(other);
  // auto xptr = (QPolygonF & (QPolygonF::*)(QPolygonF&&) ) &QPolygonF::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:150
// [8] QPolygonF & operator=(const QPolygonF &) 
// (10)qm60129139 (20)_ZN9QPolygonFaSERKS_
//static
/*void qm60129139(const QPolygonF & other)*/ {
  const QPolygonF & other = *(const QPolygonF *)this_;
  (void) ((QPolygonF*)this_)->operator=(other);
  // auto xptr = (QPolygonF & (QPolygonF::*)(QPolygonF const&) ) &QPolygonF::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:151
// [-2] void swap(QPolygonF &) 
// (11)qm952737936 (22)_ZN9QPolygonF4swapERS_
//static
/*void qm952737936(QPolygonF & other)*/ {
  QPolygonF & other = *(QPolygonF *)this_;
  (void) ((QPolygonF*)this_)->swap(other);
   auto xptr = (void (QPolygonF::*)(QPolygonF&) ) &QPolygonF::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:155
// [-2] void translate(qreal, qreal) 
// (11)qm605910191 (26)_ZN9QPolygonF9translateEdd
//static
/*void qm605910191(double dx, double dy)*/ {
  double dx = *(double*)this_; double dy = *(double*)this_;
  (void) ((QPolygonF*)this_)->translate(dx, dy);
   auto xptr = (void (QPolygonF::*)(double, double) ) &QPolygonF::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:158
// [8] QPolygonF translated(qreal, qreal) const
// (12)qm1179668454 (29)_ZNK9QPolygonF10translatedEdd
//static
/*void qm1179668454(double dx, double dy)*/ {
  double dx = *(double*)this_; double dy = *(double*)this_;
  (void) ((QPolygonF*)this_)->translated(dx, dy);
   auto xptr = (QPolygonF (QPolygonF::*)(double, double) const ) &QPolygonF::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:163
// [1] bool isClosed() const
// (12)qm3765607518 (25)_ZNK9QPolygonF8isClosedEv
//static
/*void qm3765607518()*/ {
  ;
  (void) ((QPolygonF*)this_)->isClosed();
   auto xptr = (bool (QPolygonF::*)() const ) &QPolygonF::isClosed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qpolygonf
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
