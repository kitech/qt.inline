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

// QGraphicsSceneEvent is pure virtual: false false
// QGraphicsSceneEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicssceneevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:67
// [-2] void QGraphicsSceneEvent(QEvent::Type) 
// (12)qm2472058346 (41)_ZN19QGraphicsSceneEventC2EN6QEvent4TypeE
/*void* qm2472058346(QEvent::Type type_)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_;
  this_ =  new QGraphicsSceneEvent(type_);
}


/*void C_ZN19QGraphicsSceneEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicssceneevent
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
