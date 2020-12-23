//  header block begin

// /usr/include/qt/QtQml/qqmlmoduleregistration.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlmoduleregistration.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlModuleRegistration is pure virtual: false false
// QQmlModuleRegistration has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlmoduleregistration(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlmoduleregistration.h:52
// [-2] void QQmlModuleRegistration(const char *, int, void (*)()) 
// (12)qm1709075850 (39)_ZN22QQmlModuleRegistrationC2EPKciPFvvE
/*void* qm1709075850(const char * uri, int majorVersion, void (*)() registerFunction)*/{
  const char * uri = *(const char **)this_; int majorVersion = *(int*)this_; void (*registerFunction)() = (void (*)())this_;
  this_ =  new QQmlModuleRegistration(uri, majorVersion, registerFunction);
}


/*void C_ZN22QQmlModuleRegistrationD2Ev(void *this_)*/ {
  delete (QQmlModuleRegistration*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlmoduleregistration
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
