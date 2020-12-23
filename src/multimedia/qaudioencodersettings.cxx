//  header block begin

// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioEncoderSettings is pure virtual: false false
// QAudioEncoderSettings has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudioencodersettings(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:58
// [-2] void QAudioEncoderSettings() 
// (11)qm273898256 (30)_ZN21QAudioEncoderSettingsC2Ev
/*void* qm273898256()*/{
  ;
  this_ =  new QAudioEncoderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:59
// [-2] void QAudioEncoderSettings(const QAudioEncoderSettings &) 
// (12)qm1905780249 (33)_ZN21QAudioEncoderSettingsC2ERKS_
/*void* qm1905780249(const QAudioEncoderSettings & other)*/{
  const QAudioEncoderSettings & other = *(const QAudioEncoderSettings *)this_;
  this_ =  new QAudioEncoderSettings(other);
}


/*void C_ZN21QAudioEncoderSettingsD2Ev(void *this_)*/ {
  delete (QAudioEncoderSettings*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudioencodersettings
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
