//  header block begin

// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceCameraInfoInterface is pure virtual: true true
// QMediaServiceCameraInfoInterface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaservicecamerainfointerface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:166
// [-2] void ~QMediaServiceCameraInfoInterface() 
// (12)qm3960060885 (41)_ZN32QMediaServiceCameraInfoInterfaceD2Ev
/*void qm3960060885 (void *this_)*/ {
  delete (QMediaServiceCameraInfoInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaservicecamerainfointerface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
