//  header block begin

// /usr/include/qt/QtCore/qobjectdefs.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobjectdefs.h>
#include <QtCore>
#include "callback_inherit.h"

// QGenericReturnArgument is pure virtual: false false
// QGenericReturnArgument has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgenericreturnargument(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:305
// [-2] void QGenericReturnArgument(const char *, void *) 
// (11)qm685887590 (35)_ZN22QGenericReturnArgumentC2EPKcPv
/*void* qm685887590(const char * aName, void * aData)*/{
  const char * aName = *(const char **)this_; void * aData = *(void **)this_;
  this_ =  new QGenericReturnArgument(aName, aData);
}


/*void C_ZN22QGenericReturnArgumentD2Ev(void *this_)*/ {
  delete (QGenericReturnArgument*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgenericreturnargument
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
