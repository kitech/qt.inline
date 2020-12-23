//  header block begin

// /usr/include/qt/QtCore/qplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qplugin.h>
#include <QtCore>
#include "callback_inherit.h"

// QStaticPlugin is pure virtual: false false
// QStaticPlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstaticplugin(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN13QStaticPluginD2Ev(void *this_)*/ {
  delete (QStaticPlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstaticplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
