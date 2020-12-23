//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGOpacityNode is pure virtual: false false
// QSGOpacityNode has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgopacitynode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:314
// [-2] void QSGOpacityNode() 
// (12)qm1223666409 (23)_ZN14QSGOpacityNodeC2Ev
/*void* qm1223666409()*/{
  ;
  this_ =  new QSGOpacityNode();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:318
// [8] qreal opacity() const
// (9)qm3315315 (30)_ZNK14QSGOpacityNode7opacityEv
//static
/*void qm3315315()*/ {
  ;
  (void) ((QSGOpacityNode*)this_)->opacity();
   auto xptr = (double (QSGOpacityNode::*)() const ) &QSGOpacityNode::opacity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:321
// [8] qreal combinedOpacity() const
// (11)qm465597130 (39)_ZNK14QSGOpacityNode15combinedOpacityEv
//static
/*void qm465597130()*/ {
  ;
  (void) ((QSGOpacityNode*)this_)->combinedOpacity();
   auto xptr = (double (QSGOpacityNode::*)() const ) &QSGOpacityNode::combinedOpacity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QSGOpacityNodeD2Ev(void *this_)*/ {
  delete (QSGOpacityNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgopacitynode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
