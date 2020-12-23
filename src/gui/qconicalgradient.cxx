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


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qconicalgradient(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:491
// [-2] void QConicalGradient() 
// (12)qm1860724151 (25)_ZN16QConicalGradientC2Ev
/*void* qm1860724151()*/{
  ;
  this_ =  new QConicalGradient();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:492
// [-2] void QConicalGradient(const QPointF &, qreal) 
// (12)qm3145934730 (35)_ZN16QConicalGradientC2ERK7QPointFd
/*void* qm3145934730(const QPointF & center, double startAngle)*/{
  const QPointF & center = *(const QPointF *)this_; double startAngle = *(double*)this_;
  this_ =  new QConicalGradient(center, startAngle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:493
// [-2] void QConicalGradient(qreal, qreal, qreal) 
// (12)qm2204740931 (27)_ZN16QConicalGradientC2Eddd
/*void* qm2204740931(double cx, double cy, double startAngle)*/{
  double cx = *(double*)this_; double cy = *(double*)this_; double startAngle = *(double*)this_;
  this_ =  new QConicalGradient(cx, cy, startAngle);
}

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
