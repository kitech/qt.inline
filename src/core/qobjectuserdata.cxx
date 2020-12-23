//  header block begin

// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QObjectUserData is pure virtual: false false
// QObjectUserData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qobjectuserdata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:492
// [-2] void QObjectUserData() 
// (11)qm858108183 (24)_ZN15QObjectUserDataC2Ev
/*void* qm858108183()*/{
  ;
  this_ =  new QObjectUserData();
}


/*void C_ZN15QObjectUserDataD2Ev(void *this_)*/ {
  delete (QObjectUserData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qobjectuserdata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
