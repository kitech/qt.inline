//  header block begin

// /usr/include/qt/QtMultimedia/qcamerafocus.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafocus.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFocusZone is pure virtual: false false
// QCameraFocusZone has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamerafocuszone(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:69
// [-2] void QCameraFocusZone() 
// (12)qm2463538115 (25)_ZN16QCameraFocusZoneC2Ev
/*void* qm2463538115()*/{
  ;
  this_ =  new QCameraFocusZone();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:70
// [-2] void QCameraFocusZone(const QRectF &, QCameraFocusZone::FocusZoneStatus) 
// (12)qm1434167064 (54)_ZN16QCameraFocusZoneC2ERK6QRectFNS_15FocusZoneStatusE
/*void* qm1434167064(const QRectF & area, QCameraFocusZone::FocusZoneStatus status)*/{
  const QRectF & area = *(const QRectF *)this_; QCameraFocusZone::FocusZoneStatus status = *(QCameraFocusZone::FocusZoneStatus*)this_;
  this_ =  new QCameraFocusZone(area, status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:71
// [-2] void QCameraFocusZone(const QCameraFocusZone &) 
// (12)qm2825964819 (28)_ZN16QCameraFocusZoneC2ERKS_
/*void* qm2825964819(const QCameraFocusZone & other)*/{
  const QCameraFocusZone & other = *(const QCameraFocusZone *)this_;
  this_ =  new QCameraFocusZone(other);
}


/*void C_ZN16QCameraFocusZoneD2Ev(void *this_)*/ {
  delete (QCameraFocusZone*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamerafocuszone
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
