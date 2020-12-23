//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(itemviews)
// /usr/include/qt/QtWidgets/qitemeditorfactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemeditorfactory.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemEditorCreatorBase is pure virtual: true true
// QItemEditorCreatorBase has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qitemeditorcreatorbase(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN22QItemEditorCreatorBaseD2Ev(void *this_)*/ {
  delete (QItemEditorCreatorBase*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qitemeditorcreatorbase
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemviews)
#endif // #ifndef QT_MINIMAL
//  footer block end
