//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleActionInterface is pure virtual: true true
// QAccessibleActionInterface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleactioninterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:629
// [8] QString tr(const char *, const char *, int) 
// (12)qm1689132216 (42)_ZN26QAccessibleActionInterface2trEPKcS1_i
//static
/*void qm1689132216(const char * sourceText, const char * disambiguation, int n)*/ {
  const char * sourceText = *(const char **)this_; const char * disambiguation = *(const char **)this_; int n = *(int*)this_;
  (void) QAccessibleActionInterface::tr(sourceText, disambiguation, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAccessibleActionInterface::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QAccessibleActionInterfaceD2Ev(void *this_)*/ {
  delete (QAccessibleActionInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleactioninterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
