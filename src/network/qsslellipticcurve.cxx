//  header block begin

// /usr/include/qt/QtNetwork/qsslellipticcurve.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslellipticcurve.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslEllipticCurve is pure virtual: false false
// QSslEllipticCurve has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslellipticcurve(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:59
// [-2] void QSslEllipticCurve() 
// (10)qm24086401 (26)_ZN17QSslEllipticCurveC2Ev
/*void* qm24086401()*/{
  ;
  this_ =  new QSslEllipticCurve();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:70
// [1] bool isValid() const
// (11)qm993963962 (33)_ZNK17QSslEllipticCurve7isValidEv
//static
/*void qm993963962()*/ {
  ;
  (void) ((QSslEllipticCurve*)this_)->isValid();
   auto xptr = (bool (QSslEllipticCurve::*)() const ) &QSslEllipticCurve::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QSslEllipticCurveD2Ev(void *this_)*/ {
  delete (QSslEllipticCurve*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslellipticcurve
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
