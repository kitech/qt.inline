//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QExposeEvent is pure virtual: false false
// QExposeEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qexposeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:476
// [-2] void QExposeEvent(const QRegion &) 
// (12)qm1410408316 (30)_ZN12QExposeEventC2ERK7QRegion
/*void* qm1410408316(const QRegion & rgn)*/{
  const QRegion & rgn = *(const QRegion *)this_;
  this_ =  new QExposeEvent(rgn);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:479
// [8] const QRegion & region() const
// (12)qm3350744969 (27)_ZNK12QExposeEvent6regionEv
//static
/*void qm3350744969()*/ {
  ;
  (void) ((QExposeEvent*)this_)->region();
   auto xptr = (const QRegion & (QExposeEvent::*)() const ) &QExposeEvent::region;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QExposeEventD2Ev(void *this_)*/ {
  delete (QExposeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qexposeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
