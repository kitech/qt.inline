//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneResizeEvent is pure virtual: false false
// QGraphicsSceneResizeEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicssceneresizeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:297
// [-2] void QGraphicsSceneResizeEvent() 
// (12)qm1592665072 (34)_ZN25QGraphicsSceneResizeEventC2Ev
/*void* qm1592665072()*/{
  ;
  this_ =  new QGraphicsSceneResizeEvent();
}


/*void C_ZN25QGraphicsSceneResizeEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneResizeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicssceneresizeevent
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
