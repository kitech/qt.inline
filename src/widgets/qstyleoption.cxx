//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOption is pure virtual: false false
// QStyleOption has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoption(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:102
// [-2] void QStyleOption(int, int) 
// (12)qm1020180947 (22)_ZN12QStyleOptionC2Eii
/*void* qm1020180947(int version, int type_)*/{
  int version = *(int*)this_; int type_ = *(int*)this_;
  this_ =  new QStyleOption(version, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:103
// [-2] void QStyleOption(const QStyleOption &) 
// (11)qm802167833 (24)_ZN12QStyleOptionC2ERKS_
/*void* qm802167833(const QStyleOption & other)*/{
  const QStyleOption & other = *(const QStyleOption *)this_;
  this_ =  new QStyleOption(other);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:107
// [-2] void initFrom(const QWidget *) 
// (11)qm924829608 (37)_ZN12QStyleOption8initFromEPK7QWidget
//static
/*void qm924829608(const QWidget * w)*/ {
  const QWidget * w = *(const QWidget **)this_;
  (void) ((QStyleOption*)this_)->initFrom(w);
   auto xptr = (void (QStyleOption::*)(QWidget const*) ) &QStyleOption::initFrom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QStyleOptionD2Ev(void *this_)*/ {
  delete (QStyleOption*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoption
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
