//  header block begin

// /usr/include/qt/QtCore/qlogging.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlogging.h>
#include <QtCore>
#include "callback_inherit.h"

// QMessageLogContext is pure virtual: false false
// QMessageLogContext has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmessagelogcontext(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:66
// [-2] void QMessageLogContext() 
// (12)qm3610397043 (27)_ZN18QMessageLogContextC2Ev
/*void* qm3610397043()*/{
  ;
  this_ =  new QMessageLogContext();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:67
// [-2] void QMessageLogContext(const char *, int, const char *, const char *) 
// (12)qm2713371922 (36)_ZN18QMessageLogContextC2EPKciS1_S1_
/*void* qm2713371922(const char * fileName, int lineNumber, const char * functionName, const char * categoryName)*/{
  const char * fileName = *(const char **)this_; int lineNumber = *(int*)this_; const char * functionName = *(const char **)this_; const char * categoryName = *(const char **)this_;
  this_ =  new QMessageLogContext(fileName, lineNumber, functionName, categoryName);
}


/*void C_ZN18QMessageLogContextD2Ev(void *this_)*/ {
  delete (QMessageLogContext*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmessagelogcontext
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
