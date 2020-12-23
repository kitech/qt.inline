//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsgridlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsGridLayout is pure virtual: false false
// QGraphicsGridLayout has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsgridlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:56
// [-2] void QGraphicsGridLayout(QGraphicsLayoutItem *) 
// (12)qm2203593157 (49)_ZN19QGraphicsGridLayoutC2EP19QGraphicsLayoutItem
/*void* qm2203593157(QGraphicsLayoutItem * parent)*/{
  QGraphicsLayoutItem * parent = *(QGraphicsLayoutItem **)this_;
  this_ =  new QGraphicsGridLayout(parent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:61
// [-2] void addItem(QGraphicsLayoutItem *, int, int, Qt::Alignment) 
// (12)qm4003840846 (86)_ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemii6QFlagsIN2Qt13AlignmentFlagEE
//static
/*void qm4003840846(QGraphicsLayoutItem * item, int row, int column, QFlags<Qt::AlignmentFlag> alignment)*/ {
  QGraphicsLayoutItem * item = *(QGraphicsLayoutItem **)this_; int row = *(int*)this_; int column = *(int*)this_; QFlags<Qt::AlignmentFlag> alignment = *(QFlags<Qt::AlignmentFlag>*)this_;
  (void) ((QGraphicsGridLayout*)this_)->addItem(item, row, column, alignment);
   auto xptr = (void (QGraphicsGridLayout::*)(QGraphicsLayoutItem*, int, int, QFlags<Qt::AlignmentFlag>) ) &QGraphicsGridLayout::addItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QGraphicsGridLayoutD2Ev(void *this_)*/ {
  delete (QGraphicsGridLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsgridlayout
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
