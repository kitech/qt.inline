//  header block begin

// /usr/include/qt/QtWidgets/qfileiconprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfileiconprovider.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFileIconProvider is pure virtual: false false
// QFileIconProvider has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfileiconprovider(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:56
// [-2] void QFileIconProvider() 
// (12)qm2516064825 (26)_ZN17QFileIconProviderC2Ev
/*void* qm2516064825()*/{
  ;
  this_ =  new QFileIconProvider();
}


/*void C_ZN17QFileIconProviderD2Ev(void *this_)*/ {
  delete (QFileIconProvider*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfileiconprovider
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
