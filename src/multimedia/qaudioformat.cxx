//  header block begin

// /usr/include/qt/QtMultimedia/qaudioformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioformat.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioFormat is pure virtual: false false
// QAudioFormat has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudioformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:60
// [-2] void QAudioFormat() 
// (11)qm451230891 (21)_ZN12QAudioFormatC2Ev
/*void* qm451230891()*/{
  ;
  this_ =  new QAudioFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:61
// [-2] void QAudioFormat(const QAudioFormat &) 
// (12)qm2955025467 (24)_ZN12QAudioFormatC2ERKS_
/*void* qm2955025467(const QAudioFormat & other)*/{
  const QAudioFormat & other = *(const QAudioFormat *)this_;
  this_ =  new QAudioFormat(other);
}


/*void C_ZN12QAudioFormatD2Ev(void *this_)*/ {
  delete (QAudioFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudioformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
