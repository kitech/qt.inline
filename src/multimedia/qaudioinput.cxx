//  header block begin

// /usr/include/qt/QtMultimedia/qaudioinput.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioinput.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioInput is pure virtual: false false
// QAudioInput has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudioinput(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:62
// [8] QString tr(const char *, const char *, int) 
// (10)qm75573582 (27)_ZN11QAudioInput2trEPKcS1_i
//static
/*void qm75573582(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioInput::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioInput::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:65
// [-2] void QAudioInput(const QAudioFormat &, QObject *) 
// (12)qm3746252687 (44)_ZN11QAudioInputC2ERK12QAudioFormatP7QObject
/*void* qm3746252687(const QAudioFormat & format, QObject * parent)*/{
  const QAudioFormat & format = *(const QAudioFormat *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QAudioInput(format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:66
// [-2] void QAudioInput(const QAudioDeviceInfo &, const QAudioFormat &, QObject *) 
// (12)qm4109156442 (64)_ZN11QAudioInputC2ERK16QAudioDeviceInfoRK12QAudioFormatP7QObject
/*void* qm4109156442(const QAudioDeviceInfo & audioDeviceInfo, const QAudioFormat & format, QObject * parent)*/{
  const QAudioDeviceInfo & audioDeviceInfo = *(const QAudioDeviceInfo *)this_; const QAudioFormat & format = *(const QAudioFormat *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QAudioInput(audioDeviceInfo, format, parent);
}


/*void C_ZN11QAudioInputD2Ev(void *this_)*/ {
  delete (QAudioInput*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudioinput
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
