//  header block begin

// /usr/include/qt/QtGui/qaccessibleobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessibleobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleApplication is pure virtual: false false
// QAccessibleApplication has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleapplication(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:78
// [-2] void QAccessibleApplication() 
// (11)qm778521494 (31)_ZN22QAccessibleApplicationC2Ev
/*void* qm778521494()*/{
  ;
  this_ =  new QAccessibleApplication();
}


/*void C_ZN22QAccessibleApplicationD2Ev(void *this_)*/ {
  delete (QAccessibleApplication*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleapplication
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
