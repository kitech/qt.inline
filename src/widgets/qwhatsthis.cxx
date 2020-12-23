//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(whatsthis)
// /usr/include/qt/QtWidgets/qwhatsthis.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwhatsthis.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWhatsThis is pure virtual: false false
// QWhatsThis has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwhatsthis(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN10QWhatsThisD2Ev(void *this_)*/ {
  delete (QWhatsThis*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwhatsthis
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(whatsthis)
#endif // #ifndef QT_MINIMAL
//  footer block end
