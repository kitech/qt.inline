//  header block begin

// /usr/include/qt/QtMultimedia/qaudiorecorder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiorecorder.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioRecorder is pure virtual: false false
// QAudioRecorder has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiorecorder(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:62
// [8] QString tr(const char *, const char *, int) 
// (12)qm1887194231 (30)_ZN14QAudioRecorder2trEPKcS1_i
//static
/*void qm1887194231(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioRecorder::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioRecorder::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:65
// [-2] void QAudioRecorder(QObject *) 
// (12)qm2627828741 (31)_ZN14QAudioRecorderC2EP7QObject
/*void* qm2627828741(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QAudioRecorder(parent);
}


/*void C_ZN14QAudioRecorderD2Ev(void *this_)*/ {
  delete (QAudioRecorder*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiorecorder
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
