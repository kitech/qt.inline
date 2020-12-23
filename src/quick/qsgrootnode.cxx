//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRootNode is pure virtual: false false
// QSGRootNode has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgrootnode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:297
// [-2] void QSGRootNode() 
// (12)qm3975030646 (20)_ZN11QSGRootNodeC2Ev
/*void* qm3975030646()*/{
  ;
  this_ =  new QSGRootNode();
}


/*void C_ZN11QSGRootNodeD2Ev(void *this_)*/ {
  delete (QSGRootNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgrootnode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
