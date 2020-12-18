//  header block begin

// /usr/include/qt/QtGui/qopenglpaintdevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglpaintdevice.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLPaintDevice is pure virtual: false false
// QOpenGLPaintDevice has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglpaintdevice(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:64
// [4] int devType() const
// (12)qm2727299333 (34)_ZNK18QOpenGLPaintDevice7devTypeEv
//static
/*void qm2727299333()*/ {
  ;
  (void) ((QOpenGLPaintDevice*)this_)->devType();
   auto xptr = (int (QOpenGLPaintDevice::*)() const ) &QOpenGLPaintDevice::devType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qopenglpaintdevice
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
