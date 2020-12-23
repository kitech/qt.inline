//  header block begin

// /usr/include/qt/QtGui/qpainterpath.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpainterpath.h>
#include <QtGui>
#include "callback_inherit.h"

// QPainterPathStroker is pure virtual: false false
// QPainterPathStroker has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpainterpathstroker(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:265
// [-2] void QPainterPathStroker() 
// (12)qm3534780829 (28)_ZN19QPainterPathStrokerC2Ev
/*void* qm3534780829()*/{
  ;
  this_ =  new QPainterPathStroker();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:266
// [-2] void QPainterPathStroker(const QPen &) 
// (12)qm3502695912 (34)_ZN19QPainterPathStrokerC2ERK4QPen
/*void* qm3502695912(const QPen & pen)*/{
  const QPen & pen = *(const QPen *)this_;
  this_ =  new QPainterPathStroker(pen);
}


/*void C_ZN19QPainterPathStrokerD2Ev(void *this_)*/ {
  delete (QPainterPathStroker*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpainterpathstroker
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
