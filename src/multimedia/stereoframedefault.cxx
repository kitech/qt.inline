//  header block begin
// /usr/include/qt/QtMultimedia/qaudiobuffer.h
#ifndef protected
#define protected public
#endif
#include <qaudiobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// StereoFrameDefault is pure virtual: false
// StereoFrameDefault has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyStereoFrameDefault : public QAudioBuffer::StereoFrameDefault<unsigned short> {
public:
  virtual ~MyStereoFrameDefault() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN18StereoFrameDefaultD2Ev(void *this_) {
  delete (QAudioBuffer::StereoFrameDefault<unsigned short>*)(this_);
}
//  main block end
