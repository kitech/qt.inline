//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGTransformNode is pure virtual: false false
// QSGTransformNode has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgtransformnode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:279
// [-2] void QSGTransformNode() 
// (12)qm3236848714 (25)_ZN16QSGTransformNodeC2Ev
/*void* qm3236848714()*/{
  ;
  this_ =  new QSGTransformNode();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:283
// [68] const QMatrix4x4 & matrix() const
// (11)qm802752843 (31)_ZNK16QSGTransformNode6matrixEv
//static
/*void qm802752843()*/ {
  ;
  (void) ((QSGTransformNode*)this_)->matrix();
   auto xptr = (const QMatrix4x4 & (QSGTransformNode::*)() const ) &QSGTransformNode::matrix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:286
// [68] const QMatrix4x4 & combinedMatrix() const
// (11)qm909966223 (40)_ZNK16QSGTransformNode14combinedMatrixEv
//static
/*void qm909966223()*/ {
  ;
  (void) ((QSGTransformNode*)this_)->combinedMatrix();
   auto xptr = (const QMatrix4x4 & (QSGTransformNode::*)() const ) &QSGTransformNode::combinedMatrix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QSGTransformNodeD2Ev(void *this_)*/ {
  delete (QSGTransformNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgtransformnode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
