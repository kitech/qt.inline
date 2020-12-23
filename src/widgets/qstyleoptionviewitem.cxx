//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionViewItem is pure virtual: false false
// QStyleOptionViewItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionviewitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:461
// [-2] void QStyleOptionViewItem() 
// (11)qm318510781 (29)_ZN20QStyleOptionViewItemC2Ev
/*void* qm318510781()*/{
  ;
  this_ =  new QStyleOptionViewItem();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:462
// [-2] void QStyleOptionViewItem(const QStyleOptionViewItem &) 
// (12)qm2743707417 (32)_ZN20QStyleOptionViewItemC2ERKS_
/*void* qm2743707417(const QStyleOptionViewItem & other)*/{
  const QStyleOptionViewItem & other = *(const QStyleOptionViewItem *)this_;
  this_ =  new QStyleOptionViewItem(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:463
// [192] QStyleOptionViewItem & operator=(const QStyleOptionViewItem &) 
// (11)qm939742035 (32)_ZN20QStyleOptionViewItemaSERKS_
//static
/*void qm939742035(const QStyleOptionViewItem & arg0)*/ {
  const QStyleOptionViewItem & arg0 = *(const QStyleOptionViewItem *)this_;
  (void) ((QStyleOptionViewItem*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionViewItem & (QStyleOptionViewItem::*)(QStyleOptionViewItem const&) ) &QStyleOptionViewItem::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QStyleOptionViewItemD2Ev(void *this_)*/ {
  delete (QStyleOptionViewItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionviewitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
