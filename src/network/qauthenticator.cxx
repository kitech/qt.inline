//  header block begin

// /usr/include/qt/QtNetwork/qauthenticator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qauthenticator.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QAuthenticator is pure virtual: false false
// QAuthenticator has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qauthenticator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:56
// [-2] void QAuthenticator() 
// (12)qm2545993018 (23)_ZN14QAuthenticatorC2Ev
/*void* qm2545993018()*/{
  ;
  this_ =  new QAuthenticator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:59
// [-2] void QAuthenticator(const QAuthenticator &) 
// (12)qm3263774914 (26)_ZN14QAuthenticatorC2ERKS_
/*void* qm3263774914(const QAuthenticator & other)*/{
  const QAuthenticator & other = *(const QAuthenticator *)this_;
  this_ =  new QAuthenticator(other);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:63
// [1] bool operator!=(const QAuthenticator &) const
// (12)qm2726230712 (27)_ZNK14QAuthenticatorneERKS_
//static
/*void qm2726230712(const QAuthenticator & other)*/ {
  const QAuthenticator & other = *(const QAuthenticator *)this_;
  (void) ((QAuthenticator*)this_)->operator!=(other);
  // auto xptr = (bool (QAuthenticator::*)(QAuthenticator const&) const ) &QAuthenticator::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QAuthenticatorD2Ev(void *this_)*/ {
  delete (QAuthenticator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qauthenticator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
