//  header block begin

// /usr/include/qt/QtWidgets/qcolormap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolormap.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QColormap is pure virtual: false false
// QColormap has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcolormap(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:65
// [-2] void QColormap(const QColormap &) 
// (12)qm1768561548 (20)_ZN9QColormapC2ERKS_
/*void* qm1768561548(const QColormap & colormap)*/{
  const QColormap & colormap = *(const QColormap *)this_;
  this_ =  new QColormap(colormap);
}


/*void C_ZN9QColormapD2Ev(void *this_)*/ {
  delete (QColormap*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcolormap
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
