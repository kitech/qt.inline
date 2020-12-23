//  header block begin

// /usr/include/qt/QtCore/qjsondocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsondocument.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonParseError is pure virtual: false false
// QJsonParseError has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsonparseerror(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN15QJsonParseErrorD2Ev(void *this_)*/ {
  delete (QJsonParseError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsonparseerror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
