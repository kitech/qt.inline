//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionMenuItem is pure virtual: false false
// QStyleOptionMenuItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionmenuitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:389
// [-2] void QStyleOptionMenuItem() 
// (12)qm3011124985 (29)_ZN20QStyleOptionMenuItemC2Ev
/*void* qm3011124985()*/{
  ;
  this_ =  new QStyleOptionMenuItem();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:390
// [-2] void QStyleOptionMenuItem(const QStyleOptionMenuItem &) 
// (11)qm404238009 (32)_ZN20QStyleOptionMenuItemC2ERKS_
/*void* qm404238009(const QStyleOptionMenuItem & other)*/{
  const QStyleOptionMenuItem & other = *(const QStyleOptionMenuItem *)this_;
  this_ =  new QStyleOptionMenuItem(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:391
// [136] QStyleOptionMenuItem & operator=(const QStyleOptionMenuItem &) 
// (12)qm2207439603 (32)_ZN20QStyleOptionMenuItemaSERKS_
//static
/*void qm2207439603(const QStyleOptionMenuItem & arg0)*/ {
  const QStyleOptionMenuItem & arg0 = *(const QStyleOptionMenuItem *)this_;
  (void) ((QStyleOptionMenuItem*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionMenuItem & (QStyleOptionMenuItem::*)(QStyleOptionMenuItem const&) ) &QStyleOptionMenuItem::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QStyleOptionMenuItemD2Ev(void *this_)*/ {
  delete (QStyleOptionMenuItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionmenuitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
