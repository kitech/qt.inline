//  header block begin

// /usr/include/qt/QtGui/qtextlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextInlineObject is pure virtual: false false
// QTextInlineObject has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextinlineobject(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:71
// [-2] void QTextInlineObject(int, QTextEngine *) 
// (12)qm1890895892 (40)_ZN17QTextInlineObjectC2EiP11QTextEngine
/*void* qm1890895892(int i, QTextEngine * e)*/{
  int i = *(int*)this_; QTextEngine * e = *(QTextEngine **)this_;
  this_ =  new QTextInlineObject(i, e);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:72
// [-2] void QTextInlineObject() 
// (12)qm2728157517 (26)_ZN17QTextInlineObjectC2Ev
/*void* qm2728157517()*/{
  ;
  this_ =  new QTextInlineObject();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:73
// [1] bool isValid() const
// (12)qm3043826042 (33)_ZNK17QTextInlineObject7isValidEv
//static
/*void qm3043826042()*/ {
  ;
  (void) ((QTextInlineObject*)this_)->isValid();
   auto xptr = (bool (QTextInlineObject::*)() const ) &QTextInlineObject::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QTextInlineObjectD2Ev(void *this_)*/ {
  delete (QTextInlineObject*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextinlineobject
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
