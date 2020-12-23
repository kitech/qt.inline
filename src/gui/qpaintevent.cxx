//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintEvent is pure virtual: false false
// QPaintEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpaintevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:447
// [-2] void QPaintEvent(const QRegion &) 
// (12)qm4093668022 (29)_ZN11QPaintEventC2ERK7QRegion
/*void* qm4093668022(const QRegion & paintRegion)*/{
  const QRegion & paintRegion = *(const QRegion *)this_;
  this_ =  new QPaintEvent(paintRegion);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:448
// [-2] void QPaintEvent(const QRect &) 
// (12)qm1268183221 (27)_ZN11QPaintEventC2ERK5QRect
/*void* qm1268183221(const QRect & paintRect)*/{
  const QRect & paintRect = *(const QRect *)this_;
  this_ =  new QPaintEvent(paintRect);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:451
// [16] const QRect & rect() const
// (12)qm3108784968 (24)_ZNK11QPaintEvent4rectEv
//static
/*void qm3108784968()*/ {
  ;
  (void) ((QPaintEvent*)this_)->rect();
   auto xptr = (const QRect & (QPaintEvent::*)() const ) &QPaintEvent::rect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:452
// [8] const QRegion & region() const
// (12)qm1555176926 (26)_ZNK11QPaintEvent6regionEv
//static
/*void qm1555176926()*/ {
  ;
  (void) ((QPaintEvent*)this_)->region();
   auto xptr = (const QRegion & (QPaintEvent::*)() const ) &QPaintEvent::region;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QPaintEventD2Ev(void *this_)*/ {
  delete (QPaintEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpaintevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
