//  header block begin

// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoEncoderSettings is pure virtual: false false
// QVideoEncoderSettings has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideoencodersettings(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:100
// [-2] void QVideoEncoderSettings() 
// (12)qm1757182574 (30)_ZN21QVideoEncoderSettingsC2Ev
/*void* qm1757182574()*/{
  ;
  this_ =  new QVideoEncoderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:101
// [-2] void QVideoEncoderSettings(const QVideoEncoderSettings &) 
// (12)qm2480032049 (33)_ZN21QVideoEncoderSettingsC2ERKS_
/*void* qm2480032049(const QVideoEncoderSettings & other)*/{
  const QVideoEncoderSettings & other = *(const QVideoEncoderSettings *)this_;
  this_ =  new QVideoEncoderSettings(other);
}


/*void C_ZN21QVideoEncoderSettingsD2Ev(void *this_)*/ {
  delete (QVideoEncoderSettings*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideoencodersettings
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
