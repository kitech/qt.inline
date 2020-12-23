//  header block begin

// /usr/include/qt/QtGui/qtouchdevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtouchdevice.h>
#include <QtGui>
#include "callback_inherit.h"

// QTouchDevice is pure virtual: false false
// QTouchDevice has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtouchdevice(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:73
// [-2] void QTouchDevice() 
// (12)qm2190349910 (21)_ZN12QTouchDeviceC2Ev
/*void* qm2190349910()*/{
  ;
  this_ =  new QTouchDevice();
}


/*void C_ZN12QTouchDeviceD2Ev(void *this_)*/ {
  delete (QTouchDevice*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtouchdevice
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
