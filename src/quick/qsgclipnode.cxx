//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGClipNode is pure virtual: false false
// QSGClipNode has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgclipnode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:259
// [-2] void QSGClipNode() 
// (12)qm2990784943 (20)_ZN11QSGClipNodeC2Ev
/*void* qm2990784943()*/{
  ;
  this_ =  new QSGClipNode();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:263
// [1] bool isRectangular() const
// (12)qm2527517363 (34)_ZNK11QSGClipNode13isRectangularEv
//static
/*void qm2527517363()*/ {
  ;
  (void) ((QSGClipNode*)this_)->isRectangular();
   auto xptr = (bool (QSGClipNode::*)() const ) &QSGClipNode::isRectangular;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:266
// [32] QRectF clipRect() const
// (12)qm3628172090 (28)_ZNK11QSGClipNode8clipRectEv
//static
/*void qm3628172090()*/ {
  ;
  (void) ((QSGClipNode*)this_)->clipRect();
   auto xptr = (QRectF (QSGClipNode::*)() const ) &QSGClipNode::clipRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QSGClipNodeD2Ev(void *this_)*/ {
  delete (QSGClipNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgclipnode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
