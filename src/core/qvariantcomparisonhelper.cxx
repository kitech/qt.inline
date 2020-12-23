//  header block begin

// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QVariantComparisonHelper is pure virtual: false false
// QVariantComparisonHelper has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvariantcomparisonhelper(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:604
// [-2] void QVariantComparisonHelper(const QVariant &) 
// (12)qm2450469610 (43)_ZN24QVariantComparisonHelperC2ERK8QVariant
/*void* qm2450469610(const QVariant & var_)*/{
  const QVariant & var_ = *(const QVariant *)this_;
  this_ =  new QVariantComparisonHelper(var_);
}


/*void C_ZN24QVariantComparisonHelperD2Ev(void *this_)*/ {
  delete (QVariantComparisonHelper*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvariantcomparisonhelper
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
