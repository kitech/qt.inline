//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleHintReturn is pure virtual: false false
// QStyleHintReturn has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstylehintreturn(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:741
// [-2] void QStyleHintReturn(int, int) 
// (12)qm2467530938 (26)_ZN16QStyleHintReturnC2Eii
/*void* qm2467530938(int version, int type_)*/{
  int version = *(int*)this_; int type_ = *(int*)this_;
  this_ =  new QStyleHintReturn(version, type_);
}


/*void C_ZN16QStyleHintReturnD2Ev(void *this_)*/ {
  delete (QStyleHintReturn*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstylehintreturn
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
