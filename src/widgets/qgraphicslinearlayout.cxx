//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicslinearlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLinearLayout is pure virtual: false false
// QGraphicsLinearLayout has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicslinearlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:56
// [-2] void QGraphicsLinearLayout(QGraphicsLayoutItem *) 
// (11)qm308529578 (51)_ZN21QGraphicsLinearLayoutC2EP19QGraphicsLayoutItem
/*void* qm308529578(QGraphicsLayoutItem * parent)*/{
  QGraphicsLayoutItem * parent = *(QGraphicsLayoutItem **)this_;
  this_ =  new QGraphicsLinearLayout(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:57
// [-2] void QGraphicsLinearLayout(Qt::Orientation, QGraphicsLayoutItem *) 
// (11)qm215033946 (69)_ZN21QGraphicsLinearLayoutC2EN2Qt11OrientationEP19QGraphicsLayoutItem
/*void* qm215033946(Qt::Orientation orientation, QGraphicsLayoutItem * parent)*/{
  Qt::Orientation orientation = *(Qt::Orientation*)this_; QGraphicsLayoutItem * parent = *(QGraphicsLayoutItem **)this_;
  this_ =  new QGraphicsLinearLayout(orientation, parent);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:63
// [-2] void addItem(QGraphicsLayoutItem *) 
// (12)qm4267096040 (57)_ZN21QGraphicsLinearLayout7addItemEP19QGraphicsLayoutItem
//static
/*void qm4267096040(QGraphicsLayoutItem * item)*/ {
  QGraphicsLayoutItem * item = *(QGraphicsLayoutItem **)this_;
  (void) ((QGraphicsLinearLayout*)this_)->addItem(item);
   auto xptr = (void (QGraphicsLinearLayout::*)(QGraphicsLayoutItem*) ) &QGraphicsLinearLayout::addItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:64
// [-2] void addStretch(int) 
// (11)qm148868135 (40)_ZN21QGraphicsLinearLayout10addStretchEi
//static
/*void qm148868135(int stretch)*/ {
  int stretch = *(int*)this_;
  (void) ((QGraphicsLinearLayout*)this_)->addStretch(stretch);
   auto xptr = (void (QGraphicsLinearLayout::*)(int) ) &QGraphicsLinearLayout::addStretch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QGraphicsLinearLayoutD2Ev(void *this_)*/ {
  delete (QGraphicsLinearLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicslinearlayout
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
