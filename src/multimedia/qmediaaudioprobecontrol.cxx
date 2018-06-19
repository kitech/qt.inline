//  header block begin
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h
#ifndef protected
#define protected public
#endif
#include <qmediaaudioprobecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaAudioProbeControl is pure virtual: false
// QMediaAudioProbeControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaAudioProbeControl : public QMediaAudioProbeControl {
public:
  virtual ~MyQMediaAudioProbeControl() {}
// void QMediaAudioProbeControl(QObject *)
MyQMediaAudioProbeControl(QObject * parent) : QMediaAudioProbeControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QMediaAudioProbeControl10metaObjectEv(void *this_) {
  return (void*)((QMediaAudioProbeControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:52
// [-2] void ~QMediaAudioProbeControl()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaAudioProbeControlD2Ev(void *this_) {
  delete (QMediaAudioProbeControl*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:55
// [-2] void audioBufferProbed(const QAudioBuffer &)
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaAudioProbeControl17audioBufferProbedERK12QAudioBuffer(void *this_, QAudioBuffer* buffer) {
  ((QMediaAudioProbeControl*)this_)->audioBufferProbed(*buffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:56
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaAudioProbeControl5flushEv(void *this_) {
  ((QMediaAudioProbeControl*)this_)->flush();
}

//  main block end
