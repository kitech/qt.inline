//  header block begin

// /usr/include/qt/QtSvg/qgraphicssvgitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicssvgitem.h>
#include <QtSvg>
#include "callback_inherit.h"

// QGraphicsSvgItem is pure virtual: false false
// QGraphicsSvgItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicssvgitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm3064999166 (32)_ZN16QGraphicsSvgItem2trEPKcS1_i
//static
/*void qm3064999166(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGraphicsSvgItem::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGraphicsSvgItem::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:64
// [-2] void QGraphicsSvgItem(QGraphicsItem *) 
// (12)qm1546926536 (40)_ZN16QGraphicsSvgItemC2EP13QGraphicsItem
/*void* qm1546926536(QGraphicsItem * parentItem)*/{
  QGraphicsItem * parentItem = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsSvgItem(parentItem);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:65
// [-2] void QGraphicsSvgItem(const QString &, QGraphicsItem *) 
// (11)qm714323720 (50)_ZN16QGraphicsSvgItemC2ERK7QStringP13QGraphicsItem
/*void* qm714323720(const QString & fileName, QGraphicsItem * parentItem)*/{
  const QString & fileName = *(const QString *)this_; QGraphicsItem * parentItem = *(QGraphicsItem **)this_;
  this_ =  new QGraphicsSvgItem(fileName, parentItem);
}


/*void C_ZN16QGraphicsSvgItemD2Ev(void *this_)*/ {
  delete (QGraphicsSvgItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicssvgitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
