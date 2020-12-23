//  header block begin

// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QImageEncoderSettings is pure virtual: false false
// QImageEncoderSettings has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qimageencodersettings(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:143
// [-2] void QImageEncoderSettings() 
// (11)qm214366602 (30)_ZN21QImageEncoderSettingsC2Ev
/*void* qm214366602()*/{
  ;
  this_ =  new QImageEncoderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:144
// [-2] void QImageEncoderSettings(const QImageEncoderSettings &) 
// (12)qm2638701187 (33)_ZN21QImageEncoderSettingsC2ERKS_
/*void* qm2638701187(const QImageEncoderSettings & other)*/{
  const QImageEncoderSettings & other = *(const QImageEncoderSettings *)this_;
  this_ =  new QImageEncoderSettings(other);
}


/*void C_ZN21QImageEncoderSettingsD2Ev(void *this_)*/ {
  delete (QImageEncoderSettings*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qimageencodersettings
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
