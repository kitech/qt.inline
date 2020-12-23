//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QWhatsThisClickedEvent is pure virtual: false false
// QWhatsThisClickedEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwhatsthisclickedevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:755
// [-2] void QWhatsThisClickedEvent(const QString &) 
// (12)qm3474865231 (40)_ZN22QWhatsThisClickedEventC2ERK7QString
/*void* qm3474865231(const QString & href)*/{
  const QString & href = *(const QString *)this_;
  this_ =  new QWhatsThisClickedEvent(href);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:758
// [8] QString href() const
// (12)qm2420370814 (35)_ZNK22QWhatsThisClickedEvent4hrefEv
//static
/*void qm2420370814()*/ {
  ;
  (void) ((QWhatsThisClickedEvent*)this_)->href();
   auto xptr = (QString (QWhatsThisClickedEvent::*)() const ) &QWhatsThisClickedEvent::href;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QWhatsThisClickedEventD2Ev(void *this_)*/ {
  delete (QWhatsThisClickedEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwhatsthisclickedevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
