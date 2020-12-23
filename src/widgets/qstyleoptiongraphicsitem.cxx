//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionGraphicsItem is pure virtual: false false
// QStyleOptionGraphicsItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiongraphicsitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:699
// [-2] void QStyleOptionGraphicsItem() 
// (12)qm3479475705 (33)_ZN24QStyleOptionGraphicsItemC2Ev
/*void* qm3479475705()*/{
  ;
  this_ =  new QStyleOptionGraphicsItem();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:700
// [-2] void QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem &) 
// (11)qm979391014 (36)_ZN24QStyleOptionGraphicsItemC2ERKS_
/*void* qm979391014(const QStyleOptionGraphicsItem & other)*/{
  const QStyleOptionGraphicsItem & other = *(const QStyleOptionGraphicsItem *)this_;
  this_ =  new QStyleOptionGraphicsItem(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:701
// [152] QStyleOptionGraphicsItem & operator=(const QStyleOptionGraphicsItem &) 
// (12)qm2716509804 (36)_ZN24QStyleOptionGraphicsItemaSERKS_
//static
/*void qm2716509804(const QStyleOptionGraphicsItem & arg0)*/ {
  const QStyleOptionGraphicsItem & arg0 = *(const QStyleOptionGraphicsItem *)this_;
  (void) ((QStyleOptionGraphicsItem*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionGraphicsItem & (QStyleOptionGraphicsItem::*)(QStyleOptionGraphicsItem const&) ) &QStyleOptionGraphicsItem::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QStyleOptionGraphicsItemD2Ev(void *this_)*/ {
  delete (QStyleOptionGraphicsItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiongraphicsitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
