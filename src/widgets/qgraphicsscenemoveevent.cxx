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

// QGraphicsSceneMoveEvent is pure virtual: false false
// QGraphicsSceneMoveEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsscenemoveevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:313
// [-2] void QGraphicsSceneMoveEvent() 
// (12)qm1658177220 (32)_ZN23QGraphicsSceneMoveEventC2Ev
/*void* qm1658177220()*/{
  ;
  this_ =  new QGraphicsSceneMoveEvent();
}


/*void C_ZN23QGraphicsSceneMoveEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneMoveEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsscenemoveevent
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
