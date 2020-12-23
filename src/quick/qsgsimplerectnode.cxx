//  header block begin

// /usr/include/qt/QtQuick/qsgsimplerectnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgsimplerectnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGSimpleRectNode is pure virtual: false false
// QSGSimpleRectNode has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgsimplerectnode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:51
// [-2] void QSGSimpleRectNode(const QRectF &, const QColor &) 
// (12)qm3229304132 (43)_ZN17QSGSimpleRectNodeC2ERK6QRectFRK6QColor
/*void* qm3229304132(const QRectF & rect, const QColor & color)*/{
  const QRectF & rect = *(const QRectF *)this_; const QColor & color = *(const QColor *)this_;
  this_ =  new QSGSimpleRectNode(rect, color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:52
// [-2] void QSGSimpleRectNode() 
// (12)qm1180848505 (26)_ZN17QSGSimpleRectNodeC2Ev
/*void* qm1180848505()*/{
  ;
  this_ =  new QSGSimpleRectNode();
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:55
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (12)qm2076874065 (35)_ZN17QSGSimpleRectNode7setRectEdddd
//static
/*void qm2076874065(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGSimpleRectNode*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QSGSimpleRectNode::*)(double, double, double, double) ) &QSGSimpleRectNode::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QSGSimpleRectNodeD2Ev(void *this_)*/ {
  delete (QSGSimpleRectNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgsimplerectnode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
