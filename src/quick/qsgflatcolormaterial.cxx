//  header block begin

// /usr/include/qt/QtQuick/qsgflatcolormaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgflatcolormaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGFlatColorMaterial is pure virtual: false false
// QSGFlatColorMaterial has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgflatcolormaterial(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:51
// [-2] void QSGFlatColorMaterial() 
// (12)qm3278763102 (29)_ZN20QSGFlatColorMaterialC2Ev
/*void* qm3278763102()*/{
  ;
  this_ =  new QSGFlatColorMaterial();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:56
// [16] const QColor & color() const
// (11)qm903602358 (34)_ZNK20QSGFlatColorMaterial5colorEv
//static
/*void qm903602358()*/ {
  ;
  (void) ((QSGFlatColorMaterial*)this_)->color();
   auto xptr = (const QColor & (QSGFlatColorMaterial::*)() const ) &QSGFlatColorMaterial::color;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QSGFlatColorMaterialD2Ev(void *this_)*/ {
  delete (QSGFlatColorMaterial*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgflatcolormaterial
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
