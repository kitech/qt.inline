//  header block begin

// /usr/include/qt/QtQuick/qsgmaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgmaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGMaterial is pure virtual: true true
// QSGMaterial has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgmaterial(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:74
// [4] QSGMaterial::Flags flags() const
// (11)qm803861947 (25)_ZNK11QSGMaterial5flagsEv
//static
/*void qm803861947()*/ {
  ;
  (void) ((QSGMaterial*)this_)->flags();
   auto xptr = (QFlags<QSGMaterial::Flag> (QSGMaterial::*)() const ) &QSGMaterial::flags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QSGMaterialD2Ev(void *this_)*/ {
  delete (QSGMaterial*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgmaterial
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
