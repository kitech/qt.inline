//  header block begin

// /usr/include/qt/QtQuick/qsgrectanglenode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgrectanglenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRectangleNode is pure virtual: true true
// QSGRectangleNode has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgrectanglenode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:50
// [-2] void ~QSGRectangleNode() 
// (11)qm402386207 (25)_ZN16QSGRectangleNodeD2Ev
/*void qm402386207 (void *this_)*/ {
  delete (QSGRectangleNode*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:53
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (11)qm354107506 (34)_ZN16QSGRectangleNode7setRectEdddd
//static
/*void qm354107506(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGRectangleNode*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QSGRectangleNode::*)(double, double, double, double) ) &QSGRectangleNode::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qsgrectanglenode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
