//  header block begin

// /usr/include/qt/QtCore/qcborvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborParserError is pure virtual: false false
// QCborParserError has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcborparsererror(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:81
// [8] QString errorString() const
// (12)qm4041995573 (37)_ZNK16QCborParserError11errorStringEv
//static
/*void qm4041995573()*/ {
  ;
  (void) ((QCborParserError*)this_)->errorString();
   auto xptr = (QString (QCborParserError::*)() const ) &QCborParserError::errorString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QCborParserErrorD2Ev(void *this_)*/ {
  delete (QCborParserError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcborparsererror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
