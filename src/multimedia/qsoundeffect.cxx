//  header block begin

// /usr/include/qt/QtMultimedia/qsoundeffect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsoundeffect.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QSoundEffect is pure virtual: false false
// QSoundEffect has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsoundeffect(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm3635494747 (28)_ZN12QSoundEffect2trEPKcS1_i
//static
/*void qm3635494747(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSoundEffect::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSoundEffect::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:84
// [-2] void QSoundEffect(QObject *) 
// (12)qm2932989333 (29)_ZN12QSoundEffectC2EP7QObject
/*void* qm2932989333(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QSoundEffect(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:85
// [-2] void QSoundEffect(const QAudioDeviceInfo &, QObject *) 
// (12)qm1069588072 (49)_ZN12QSoundEffectC2ERK16QAudioDeviceInfoP7QObject
/*void* qm1069588072(const QAudioDeviceInfo & audioDevice, QObject * parent)*/{
  const QAudioDeviceInfo & audioDevice = *(const QAudioDeviceInfo *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSoundEffect(audioDevice, parent);
}


/*void C_ZN12QSoundEffectD2Ev(void *this_)*/ {
  delete (QSoundEffect*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsoundeffect
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
