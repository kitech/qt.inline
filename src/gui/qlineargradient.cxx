//  header block begin

// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QLinearGradient is pure virtual: false false
// QLinearGradient has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlineargradient(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:439
// [-2] void QLinearGradient() 
// (12)qm2457760289 (24)_ZN15QLinearGradientC2Ev
/*void* qm2457760289()*/{
  ;
  this_ =  new QLinearGradient();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:440
// [-2] void QLinearGradient(const QPointF &, const QPointF &) 
// (12)qm2858924355 (36)_ZN15QLinearGradientC2ERK7QPointFS2_
/*void* qm2858924355(const QPointF & start, const QPointF & finalStop)*/{
  const QPointF & start = *(const QPointF *)this_; const QPointF & finalStop = *(const QPointF *)this_;
  this_ =  new QLinearGradient(start, finalStop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:441
// [-2] void QLinearGradient(qreal, qreal, qreal, qreal) 
// (12)qm2465875218 (27)_ZN15QLinearGradientC2Edddd
/*void* qm2465875218(double xStart, double yStart, double xFinalStop, double yFinalStop)*/{
  double xStart = *(double*)this_; double yStart = *(double*)this_; double xFinalStop = *(double*)this_; double yFinalStop = *(double*)this_;
  this_ =  new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:446
// [-2] void setStart(qreal, qreal) 
// (12)qm3357847726 (32)_ZN15QLinearGradient8setStartEdd
//static
/*void qm3357847726(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QLinearGradient*)this_)->setStart(x, y);
   auto xptr = (void (QLinearGradient::*)(double, double) ) &QLinearGradient::setStart;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:450
// [-2] void setFinalStop(qreal, qreal) 
// (12)qm3335903427 (37)_ZN15QLinearGradient12setFinalStopEdd
//static
/*void qm3335903427(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QLinearGradient*)this_)->setFinalStop(x, y);
   auto xptr = (void (QLinearGradient::*)(double, double) ) &QLinearGradient::setFinalStop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QLinearGradientD2Ev(void *this_)*/ {
  delete (QLinearGradient*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlineargradient
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
