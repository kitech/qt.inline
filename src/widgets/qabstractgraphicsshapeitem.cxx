//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractGraphicsShapeItem is pure virtual: true true
// QAbstractGraphicsShapeItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractgraphicsshapeitem(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN26QAbstractGraphicsShapeItemD2Ev(void *this_)*/ {
  delete (QAbstractGraphicsShapeItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractgraphicsshapeitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
