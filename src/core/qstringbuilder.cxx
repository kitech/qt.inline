//  header block begin

// /usr/include/qt/QtCore/qstringbuilder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringBuilder is pure virtual: false false
// QStringBuilder has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstringbuilder(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN14QStringBuilderD2Ev(void *this_)*/ {
  delete (QStringBuilder<QByteArray, QByteArray>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstringbuilder
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
