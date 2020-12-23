//  header block begin

// /usr/include/qt/QtCore/qmessageauthenticationcode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmessageauthenticationcode.h>
#include <QtCore>
#include "callback_inherit.h"

// QMessageAuthenticationCode is pure virtual: false false
// QMessageAuthenticationCode has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmessageauthenticationcode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:54
// [-2] void QMessageAuthenticationCode(QCryptographicHash::Algorithm, const QByteArray &) 
// (12)qm1253799329 (80)_ZN26QMessageAuthenticationCodeC2EN18QCryptographicHash9AlgorithmERK10QByteArray
/*void* qm1253799329(QCryptographicHash::Algorithm method, const QByteArray & key)*/{
  QCryptographicHash::Algorithm method = *(QCryptographicHash::Algorithm*)this_; const QByteArray & key = *(const QByteArray *)this_;
  this_ =  new QMessageAuthenticationCode(method, key);
}


/*void C_ZN26QMessageAuthenticationCodeD2Ev(void *this_)*/ {
  delete (QMessageAuthenticationCode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmessageauthenticationcode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
