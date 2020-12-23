//  header block begin

// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiodeviceinfo.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDeviceInfo is pure virtual: false false
// QAudioDeviceInfo has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiodeviceinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:67
// [-2] void QAudioDeviceInfo() 
// (12)qm2385936377 (25)_ZN16QAudioDeviceInfoC2Ev
/*void* qm2385936377()*/{
  ;
  this_ =  new QAudioDeviceInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:68
// [-2] void QAudioDeviceInfo(const QAudioDeviceInfo &) 
// (11)qm462715353 (28)_ZN16QAudioDeviceInfoC2ERKS_
/*void* qm462715353(const QAudioDeviceInfo & other)*/{
  const QAudioDeviceInfo & other = *(const QAudioDeviceInfo *)this_;
  this_ =  new QAudioDeviceInfo(other);
}


/*void C_ZN16QAudioDeviceInfoD2Ev(void *this_)*/ {
  delete (QAudioDeviceInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiodeviceinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
