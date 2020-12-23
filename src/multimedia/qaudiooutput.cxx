//  header block begin

// /usr/include/qt/QtMultimedia/qaudiooutput.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiooutput.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioOutput is pure virtual: false false
// QAudioOutput has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiooutput(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:62
// [8] QString tr(const char *, const char *, int) 
// (9)qm5807830 (28)_ZN12QAudioOutput2trEPKcS1_i
//static
/*void qm5807830(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioOutput::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioOutput::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:65
// [-2] void QAudioOutput(const QAudioFormat &, QObject *) 
// (12)qm1801094683 (45)_ZN12QAudioOutputC2ERK12QAudioFormatP7QObject
/*void* qm1801094683(const QAudioFormat & format, QObject * parent)*/{
  const QAudioFormat & format = *(const QAudioFormat *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QAudioOutput(format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:66
// [-2] void QAudioOutput(const QAudioDeviceInfo &, const QAudioFormat &, QObject *) 
// (9)qm4905331 (65)_ZN12QAudioOutputC2ERK16QAudioDeviceInfoRK12QAudioFormatP7QObject
/*void* qm4905331(const QAudioDeviceInfo & audioDeviceInfo, const QAudioFormat & format, QObject * parent)*/{
  const QAudioDeviceInfo & audioDeviceInfo = *(const QAudioDeviceInfo *)this_; const QAudioFormat & format = *(const QAudioFormat *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QAudioOutput(audioDeviceInfo, format, parent);
}


/*void C_ZN12QAudioOutputD2Ev(void *this_)*/ {
  delete (QAudioOutput*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiooutput
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
