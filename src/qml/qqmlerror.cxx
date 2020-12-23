//  header block begin

// /usr/include/qt/QtQml/qqmlerror.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlerror.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlError is pure virtual: false false
// QQmlError has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlerror(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:56
// [-2] void QQmlError() 
// (12)qm2580604384 (17)_ZN9QQmlErrorC2Ev
/*void* qm2580604384()*/{
  ;
  this_ =  new QQmlError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:57
// [-2] void QQmlError(const QQmlError &) 
// (12)qm3399795948 (20)_ZN9QQmlErrorC2ERKS_
/*void* qm3399795948(const QQmlError & arg0)*/{
  const QQmlError & arg0 = *(const QQmlError *)this_;
  this_ =  new QQmlError(arg0);
}


/*void C_ZN9QQmlErrorD2Ev(void *this_)*/ {
  delete (QQmlError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlerror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
