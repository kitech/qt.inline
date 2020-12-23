//  header block begin

// /usr/include/qt/QtMultimedia/qaudiobuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// StereoFrameDefault is pure virtual: false false
// StereoFrameDefault has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_stereoframedefault(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN18StereoFrameDefaultD2Ev(void *this_)*/ {
  delete (QAudioBuffer::StereoFrameDefault<unsigned short>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_stereoframedefault
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
