//  header block begin

// /usr/include/qt/QtQuick/qsgsimpletexturenode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgsimpletexturenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGSimpleTextureNode is pure virtual: false false
// QSGSimpleTextureNode has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgsimpletexturenode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:54
// [-2] void QSGSimpleTextureNode() 
// (12)qm1145788240 (29)_ZN20QSGSimpleTextureNodeC2Ev
/*void* qm1145788240()*/{
  ;
  this_ =  new QSGSimpleTextureNode();
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:58
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (12)qm2216326506 (38)_ZN20QSGSimpleTextureNode7setRectEdddd
//static
/*void qm2216326506(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGSimpleTextureNode*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QSGSimpleTextureNode::*)(double, double, double, double) ) &QSGSimpleTextureNode::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:62
// [-2] void setSourceRect(qreal, qreal, qreal, qreal) 
// (12)qm3093220488 (45)_ZN20QSGSimpleTextureNode13setSourceRectEdddd
//static
/*void qm3093220488(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGSimpleTextureNode*)this_)->setSourceRect(x, y, w, h);
   auto xptr = (void (QSGSimpleTextureNode::*)(double, double, double, double) ) &QSGSimpleTextureNode::setSourceRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QSGSimpleTextureNodeD2Ev(void *this_)*/ {
  delete (QSGSimpleTextureNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgsimpletexturenode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
