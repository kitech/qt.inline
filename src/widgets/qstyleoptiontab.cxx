//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTab is pure virtual: false false
// QStyleOptionTab has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontab(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:291
// [-2] void QStyleOptionTab() 
// (12)qm2025447193 (24)_ZN15QStyleOptionTabC2Ev
/*void* qm2025447193()*/{
  ;
  this_ =  new QStyleOptionTab();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:292
// [-2] void QStyleOptionTab(const QStyleOptionTab &) 
// (12)qm1635158999 (27)_ZN15QStyleOptionTabC2ERKS_
/*void* qm1635158999(const QStyleOptionTab & other)*/{
  const QStyleOptionTab & other = *(const QStyleOptionTab *)this_;
  this_ =  new QStyleOptionTab(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:293
// [136] QStyleOptionTab & operator=(const QStyleOptionTab &) 
// (12)qm4210851741 (27)_ZN15QStyleOptionTabaSERKS_
//static
/*void qm4210851741(const QStyleOptionTab & arg0)*/ {
  const QStyleOptionTab & arg0 = *(const QStyleOptionTab *)this_;
  (void) ((QStyleOptionTab*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionTab & (QStyleOptionTab::*)(QStyleOptionTab const&) ) &QStyleOptionTab::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QStyleOptionTabD2Ev(void *this_)*/ {
  delete (QStyleOptionTab*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontab
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
