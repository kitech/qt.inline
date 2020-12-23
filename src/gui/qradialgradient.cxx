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


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qradialgradient(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:457
// [-2] void QRadialGradient() 
// (12)qm3158821516 (24)_ZN15QRadialGradientC2Ev
/*void* qm3158821516()*/{
  ;
  this_ =  new QRadialGradient();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:458
// [-2] void QRadialGradient(const QPointF &, qreal, const QPointF &) 
// (11)qm377145314 (37)_ZN15QRadialGradientC2ERK7QPointFdS2_
/*void* qm377145314(const QPointF & center, double radius, const QPointF & focalPoint)*/{
  const QPointF & center = *(const QPointF *)this_; double radius = *(double*)this_; const QPointF & focalPoint = *(const QPointF *)this_;
  this_ =  new QRadialGradient(center, radius, focalPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:459
// [-2] void QRadialGradient(qreal, qreal, qreal, qreal, qreal) 
// (12)qm3454545860 (28)_ZN15QRadialGradientC2Eddddd
/*void* qm3454545860(double cx, double cy, double radius, double fx, double fy)*/{
  double cx = *(double*)this_; double cy = *(double*)this_; double radius = *(double*)this_; double fx = *(double*)this_; double fy = *(double*)this_;
  this_ =  new QRadialGradient(cx, cy, radius, fx, fy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:461
// [-2] void QRadialGradient(const QPointF &, qreal) 
// (12)qm1606218804 (34)_ZN15QRadialGradientC2ERK7QPointFd
/*void* qm1606218804(const QPointF & center, double radius)*/{
  const QPointF & center = *(const QPointF *)this_; double radius = *(double*)this_;
  this_ =  new QRadialGradient(center, radius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:462
// [-2] void QRadialGradient(qreal, qreal, qreal) 
// (12)qm4189204141 (26)_ZN15QRadialGradientC2Eddd
/*void* qm4189204141(double cx, double cy, double radius)*/{
  double cx = *(double*)this_; double cy = *(double*)this_; double radius = *(double*)this_;
  this_ =  new QRadialGradient(cx, cy, radius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:464
// [-2] void QRadialGradient(const QPointF &, qreal, const QPointF &, qreal) 
// (12)qm3603936095 (38)_ZN15QRadialGradientC2ERK7QPointFdS2_d
/*void* qm3603936095(const QPointF & center, double centerRadius, const QPointF & focalPoint, double focalRadius)*/{
  const QPointF & center = *(const QPointF *)this_; double centerRadius = *(double*)this_; const QPointF & focalPoint = *(const QPointF *)this_; double focalRadius = *(double*)this_;
  this_ =  new QRadialGradient(center, centerRadius, focalPoint, focalRadius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:465
// [-2] void QRadialGradient(qreal, qreal, qreal, qreal, qreal, qreal) 
// (10)qm68789322 (29)_ZN15QRadialGradientC2Edddddd
/*void* qm68789322(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius)*/{
  double cx = *(double*)this_; double cy = *(double*)this_; double centerRadius = *(double*)this_; double fx = *(double*)this_; double fy = *(double*)this_; double focalRadius = *(double*)this_;
  this_ =  new QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius);
}

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
