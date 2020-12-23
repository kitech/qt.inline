//  header block begin

// /usr/include/qt/QtCore/qcryptographichash.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcryptographichash.h>
#include <QtCore>
#include "callback_inherit.h"

// QCryptographicHash is pure virtual: false false
// QCryptographicHash has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcryptographichash(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:92
// [-2] void QCryptographicHash(QCryptographicHash::Algorithm) 
// (9)qm6962514 (40)_ZN18QCryptographicHashC2ENS_9AlgorithmE
/*void* qm6962514(QCryptographicHash::Algorithm method)*/{
  QCryptographicHash::Algorithm method = *(QCryptographicHash::Algorithm*)this_;
  this_ =  new QCryptographicHash(method);
}


/*void C_ZN18QCryptographicHashD2Ev(void *this_)*/ {
  delete (QCryptographicHash*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcryptographichash
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
