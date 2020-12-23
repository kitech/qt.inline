//  header block begin

// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraviewfindersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraViewfinderSettings is pure virtual: false false
// QCameraViewfinderSettings has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraviewfindersettings(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:56
// [-2] void QCameraViewfinderSettings() 
// (12)qm2132849231 (34)_ZN25QCameraViewfinderSettingsC2Ev
/*void* qm2132849231()*/{
  ;
  this_ =  new QCameraViewfinderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:57
// [-2] void QCameraViewfinderSettings(const QCameraViewfinderSettings &) 
// (12)qm1355278296 (37)_ZN25QCameraViewfinderSettingsC2ERKS_
/*void* qm1355278296(const QCameraViewfinderSettings & other)*/{
  const QCameraViewfinderSettings & other = *(const QCameraViewfinderSettings *)this_;
  this_ =  new QCameraViewfinderSettings(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:63
// [8] QCameraViewfinderSettings & operator=(QCameraViewfinderSettings &&) 
// (12)qm3164179096 (36)_ZN25QCameraViewfinderSettingsaSEOS_
//static
/*void qm3164179096(QCameraViewfinderSettings && other)*/ {
  QCameraViewfinderSettings && other =  static_cast<QCameraViewfinderSettings &&>(*(QCameraViewfinderSettings *)this_);
  (void) ((QCameraViewfinderSettings*)this_)->operator=(other);
  // auto xptr = (QCameraViewfinderSettings & (QCameraViewfinderSettings::*)(QCameraViewfinderSettings&&) ) &QCameraViewfinderSettings::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:67
// [-2] void swap(QCameraViewfinderSettings &) 
// (12)qm1000900502 (39)_ZN25QCameraViewfinderSettings4swapERS_
//static
/*void qm1000900502(QCameraViewfinderSettings & other)*/ {
  QCameraViewfinderSettings & other = *(QCameraViewfinderSettings *)this_;
  (void) ((QCameraViewfinderSettings*)this_)->swap(other);
   auto xptr = (void (QCameraViewfinderSettings::*)(QCameraViewfinderSettings&) ) &QCameraViewfinderSettings::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:74
// [-2] void setResolution(int, int) 
// (12)qm4208359631 (48)_ZN25QCameraViewfinderSettings13setResolutionEii
//static
/*void qm4208359631(int width, int height)*/ {
  int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QCameraViewfinderSettings*)this_)->setResolution(width, height);
   auto xptr = (void (QCameraViewfinderSettings::*)(int, int) ) &QCameraViewfinderSettings::setResolution;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:88
// [-2] void setPixelAspectRatio(int, int) 
// (12)qm3990229113 (54)_ZN25QCameraViewfinderSettings19setPixelAspectRatioEii
//static
/*void qm3990229113(int horizontal, int vertical)*/ {
  int horizontal = *(int*)this_; int vertical = *(int*)this_;
  (void) ((QCameraViewfinderSettings*)this_)->setPixelAspectRatio(horizontal, vertical);
   auto xptr = (void (QCameraViewfinderSettings::*)(int, int) ) &QCameraViewfinderSettings::setPixelAspectRatio;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN25QCameraViewfinderSettingsD2Ev(void *this_)*/ {
  delete (QCameraViewfinderSettings*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameraviewfindersettings
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
