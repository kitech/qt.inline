//  header block begin

// /usr/include/qt/QtGui/qvector2d.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvector2d.h>
#include <QtGui>
#include "callback_inherit.h"

// QVector2D is pure virtual: false false
// QVector2D has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvector2d(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:59
// [-2] void QVector2D() 
// (12)qm3859091651 (17)_ZN9QVector2DC2Ev
/*void* qm3859091651()*/{
  ;
  this_ =  new QVector2D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:60
// [-2] void QVector2D(Qt::Initialization) 
// (11)qm881494376 (37)_ZN9QVector2DC2EN2Qt14InitializationE
/*void* qm881494376(Qt::Initialization arg0)*/{
  Qt::Initialization arg0 = *(Qt::Initialization*)this_;
  this_ =  new QVector2D(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:61
// [-2] void QVector2D(float, float) 
// (12)qm1050324907 (18)_ZN9QVector2DC2Eff
/*void* qm1050324907(float xpos, float ypos)*/{
  float xpos = *(float*)this_; float ypos = *(float*)this_;
  this_ =  new QVector2D(xpos, ypos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:62
// [-2] void QVector2D(const QPoint &) 
// (11)qm373411244 (25)_ZN9QVector2DC2ERK6QPoint
/*void* qm373411244(const QPoint & point)*/{
  const QPoint & point = *(const QPoint *)this_;
  this_ =  new QVector2D(point);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:63
// [-2] void QVector2D(const QPointF &) 
// (12)qm1583457720 (26)_ZN9QVector2DC2ERK7QPointF
/*void* qm1583457720(const QPointF & point)*/{
  const QPointF & point = *(const QPointF *)this_;
  this_ =  new QVector2D(point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:65
// [-2] void QVector2D(const QVector3D &) 
// (11)qm499419165 (28)_ZN9QVector2DC2ERK9QVector3D
/*void* qm499419165(const QVector3D & vector)*/{
  const QVector3D & vector = *(const QVector3D *)this_;
  this_ =  new QVector2D(vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:68
// [-2] void QVector2D(const QVector4D &) 
// (12)qm1384455898 (28)_ZN9QVector2DC2ERK9QVector4D
/*void* qm1384455898(const QVector4D & vector)*/{
  const QVector4D & vector = *(const QVector4D *)this_;
  this_ =  new QVector2D(vector);
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:71
// [1] bool isNull() const
// (10)qm63652475 (23)_ZNK9QVector2D6isNullEv
//static
/*void qm63652475()*/ {
  ;
  (void) ((QVector2D*)this_)->isNull();
   auto xptr = (bool (QVector2D::*)() const ) &QVector2D::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:73
// [4] float x() const
// (12)qm1671751228 (18)_ZNK9QVector2D1xEv
//static
/*void qm1671751228()*/ {
  ;
  (void) ((QVector2D*)this_)->x();
   auto xptr = (float (QVector2D::*)() const ) &QVector2D::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:74
// [4] float y() const
// (12)qm1650887691 (18)_ZNK9QVector2D1yEv
//static
/*void qm1650887691()*/ {
  ;
  (void) ((QVector2D*)this_)->y();
   auto xptr = (float (QVector2D::*)() const ) &QVector2D::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:76
// [-2] void setX(float) 
// (12)qm2608056309 (20)_ZN9QVector2D4setXEf
//static
/*void qm2608056309(float x)*/ {
  float x = *(float*)this_;
  (void) ((QVector2D*)this_)->setX(x);
   auto xptr = (void (QVector2D::*)(float) ) &QVector2D::setX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:77
// [-2] void setY(float) 
// (12)qm2595335618 (20)_ZN9QVector2D4setYEf
//static
/*void qm2595335618(float y)*/ {
  float y = *(float*)this_;
  (void) ((QVector2D*)this_)->setY(y);
   auto xptr = (void (QVector2D::*)(float) ) &QVector2D::setY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:79
// [4] float & operator[](int) 
// (12)qm3650050682 (17)_ZN9QVector2DixEi
//static
/*void qm3650050682(int i)*/ {
  int i = *(int*)this_;
  (void) ((QVector2D*)this_)->operator[](i);
  // auto xptr = (float & (QVector2D::*)(int) ) &QVector2D::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:80
// [4] float operator[](int) const
// (12)qm3759524996 (18)_ZNK9QVector2DixEi
//static
/*void qm3759524996(int i)*/ {
  int i = *(int*)this_;
  (void) ((QVector2D*)this_)->operator[](i);
  // auto xptr = (float (QVector2D::*)(int) const ) &QVector2D::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:91
// [8] QVector2D & operator+=(const QVector2D &) 
// (12)qm3346980087 (20)_ZN9QVector2DpLERKS_
//static
/*void qm3346980087(const QVector2D & vector)*/ {
  const QVector2D & vector = *(const QVector2D *)this_;
  (void) ((QVector2D*)this_)->operator+=(vector);
  // auto xptr = (QVector2D & (QVector2D::*)(QVector2D const&) ) &QVector2D::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:92
// [8] QVector2D & operator-=(const QVector2D &) 
// (12)qm2444931146 (20)_ZN9QVector2DmIERKS_
//static
/*void qm2444931146(const QVector2D & vector)*/ {
  const QVector2D & vector = *(const QVector2D *)this_;
  (void) ((QVector2D*)this_)->operator-=(vector);
  // auto xptr = (QVector2D & (QVector2D::*)(QVector2D const&) ) &QVector2D::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:93
// [8] QVector2D & operator*=(float) 
// (12)qm3845168624 (17)_ZN9QVector2DmLEf
//static
/*void qm3845168624(float factor)*/ {
  float factor = *(float*)this_;
  (void) ((QVector2D*)this_)->operator*=(factor);
  // auto xptr = (QVector2D & (QVector2D::*)(float) ) &QVector2D::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:94
// [8] QVector2D & operator*=(const QVector2D &) 
// (12)qm3245810169 (20)_ZN9QVector2DmLERKS_
//static
/*void qm3245810169(const QVector2D & vector)*/ {
  const QVector2D & vector = *(const QVector2D *)this_;
  (void) ((QVector2D*)this_)->operator*=(vector);
  // auto xptr = (QVector2D & (QVector2D::*)(QVector2D const&) ) &QVector2D::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:95
// [8] QVector2D & operator/=(float) 
// (12)qm2307519708 (17)_ZN9QVector2DdVEf
//static
/*void qm2307519708(float divisor)*/ {
  float divisor = *(float*)this_;
  (void) ((QVector2D*)this_)->operator/=(divisor);
  // auto xptr = (QVector2D & (QVector2D::*)(float) ) &QVector2D::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:96
// [8] QVector2D & operator/=(const QVector2D &) 
// (12)qm4137829847 (20)_ZN9QVector2DdVERKS_
//static
/*void qm4137829847(const QVector2D & vector)*/ {
  const QVector2D & vector = *(const QVector2D *)this_;
  (void) ((QVector2D*)this_)->operator/=(vector);
  // auto xptr = (QVector2D & (QVector2D::*)(QVector2D const&) ) &QVector2D::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:120
// [8] QPoint toPoint() const
// (11)qm326031628 (24)_ZNK9QVector2D7toPointEv
//static
/*void qm326031628()*/ {
  ;
  (void) ((QVector2D*)this_)->toPoint();
   auto xptr = (QPoint (QVector2D::*)() const ) &QVector2D::toPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:121
// [16] QPointF toPointF() const
// (11)qm118765273 (25)_ZNK9QVector2D8toPointFEv
//static
/*void qm118765273()*/ {
  ;
  (void) ((QVector2D*)this_)->toPointF();
   auto xptr = (QPointF (QVector2D::*)() const ) &QVector2D::toPointF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QVector2DD2Ev(void *this_)*/ {
  delete (QVector2D*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvector2d
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
