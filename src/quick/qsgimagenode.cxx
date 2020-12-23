//  header block begin

// /usr/include/qt/QtQuick/qsgimagenode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgimagenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGImageNode is pure virtual: true true
// QSGImageNode has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgimagenode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:51
// [-2] void ~QSGImageNode() 
// (12)qm4182576077 (21)_ZN12QSGImageNodeD2Ev
/*void qm4182576077 (void *this_)*/ {
  delete (QSGImageNode*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:54
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (10)qm96339267 (30)_ZN12QSGImageNode7setRectEdddd
//static
/*void qm96339267(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGImageNode*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QSGImageNode::*)(double, double, double, double) ) &QSGImageNode::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:58
// [-2] void setSourceRect(qreal, qreal, qreal, qreal) 
// (11)qm958092558 (37)_ZN12QSGImageNode13setSourceRectEdddd
//static
/*void qm958092558(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGImageNode*)this_)->setSourceRect(x, y, w, h);
   auto xptr = (void (QSGImageNode::*)(double, double, double, double) ) &QSGImageNode::setSourceRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qsgimagenode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
