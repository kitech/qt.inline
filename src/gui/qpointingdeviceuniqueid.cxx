//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPointingDeviceUniqueId is pure virtual: false false
// QPointingDeviceUniqueId has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpointingdeviceuniqueid(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:851
// [-2] void QPointingDeviceUniqueId() 
// (12)qm1592284260 (32)_ZN23QPointingDeviceUniqueIdC2Ev
/*void* qm1592284260()*/{
  ;
  this_ =  new QPointingDeviceUniqueId();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:857
// [1] bool isValid() const
// (10)qm42999240 (39)_ZNK23QPointingDeviceUniqueId7isValidEv
//static
/*void qm42999240()*/ {
  ;
  (void) ((QPointingDeviceUniqueId*)this_)->isValid();
   auto xptr = (bool (QPointingDeviceUniqueId::*)() const ) &QPointingDeviceUniqueId::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QPointingDeviceUniqueIdD2Ev(void *this_)*/ {
  delete (QPointingDeviceUniqueId*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpointingdeviceuniqueid
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
