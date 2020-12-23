//  header block begin

// /usr/include/qt/QtMultimedia/qaudioprobe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioprobe.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioProbe is pure virtual: false false
// QAudioProbe has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudioprobe(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm1353033262 (27)_ZN11QAudioProbe2trEPKcS1_i
//static
/*void qm1353033262(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioProbe::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioProbe::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:56
// [-2] void QAudioProbe(QObject *) 
// (12)qm2385923263 (28)_ZN11QAudioProbeC2EP7QObject
/*void* qm2385923263(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QAudioProbe(parent);
}


/*void C_ZN11QAudioProbeD2Ev(void *this_)*/ {
  delete (QAudioProbe*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudioprobe
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
