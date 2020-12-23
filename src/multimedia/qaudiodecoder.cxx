//  header block begin

// /usr/include/qt/QtMultimedia/qaudiodecoder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiodecoder.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDecoder is pure virtual: false false
// QAudioDecoder has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiodecoder(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm1463771678 (29)_ZN13QAudioDecoder2trEPKcS1_i
//static
/*void qm1463771678(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioDecoder::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioDecoder::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:78
// [-2] void QAudioDecoder(QObject *) 
// (12)qm2833835735 (30)_ZN13QAudioDecoderC2EP7QObject
/*void* qm2833835735(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QAudioDecoder(parent);
}


/*void C_ZN13QAudioDecoderD2Ev(void *this_)*/ {
  delete (QAudioDecoder*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiodecoder
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
