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

// QGraphicsItemGroup is pure virtual: false false
// QGraphicsItemGroup has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsitemgroup(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1014
// [-2] void QGraphicsItemGroup(QGraphicsItem *) 
// (12)qm1055641902 (42)_ZN18QGraphicsItemGroupC2EP13QGraphicsItem
/*void* qm1055641902(QGraphicsItem * parent)*/{
  QGraphicsItem * parent = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsItemGroup(parent);
}


/*void C_ZN18QGraphicsItemGroupD2Ev(void *this_)*/ {
  delete (QGraphicsItemGroup*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsitemgroup
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
