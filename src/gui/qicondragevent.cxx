//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QIconDragEvent is pure virtual: false false
// QIconDragEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qicondragevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:527
// [-2] void QIconDragEvent() 
// (10)qm41990026 (23)_ZN14QIconDragEventC2Ev
/*void* qm41990026()*/{
  ;
  this_ =  new QIconDragEvent();
}


/*void C_ZN14QIconDragEventD2Ev(void *this_)*/ {
  delete (QIconDragEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qicondragevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
