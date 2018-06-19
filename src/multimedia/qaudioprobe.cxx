//  header block begin
// /usr/include/qt/QtMultimedia/qaudioprobe.h
#ifndef protected
#define protected public
#endif
#include <qaudioprobe.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioProbe is pure virtual: false
// QAudioProbe has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioProbe : public QAudioProbe {
public:
  virtual ~MyQAudioProbe() {}
// void QAudioProbe(QObject *)
MyQAudioProbe(QObject * parent) : QAudioProbe(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QAudioProbe10metaObjectEv(void *this_) {
  return (void*)((QAudioProbe*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:56
// [-2] void QAudioProbe(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioProbeC2EP7QObject(QObject * parent) {
  return  new QAudioProbe(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:57
// [-2] void ~QAudioProbe()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioProbeD2Ev(void *this_) {
  delete (QAudioProbe*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:59
// [1] bool setSource(QMediaObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QAudioProbe9setSourceEP12QMediaObject(void *this_, QMediaObject * source) {
  return (bool)((QAudioProbe*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:60
// [1] bool setSource(QMediaRecorder *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QAudioProbe9setSourceEP14QMediaRecorder(void *this_, QMediaRecorder * source) {
  return (bool)((QAudioProbe*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:62
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QAudioProbe8isActiveEv(void *this_) {
  return (bool)((QAudioProbe*)this_)->isActive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:65
// [-2] void audioBufferProbed(const QAudioBuffer &)
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioProbe17audioBufferProbedERK12QAudioBuffer(void *this_, QAudioBuffer* audioBuffer) {
  ((QAudioProbe*)this_)->audioBufferProbed(*audioBuffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:66
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioProbe5flushEv(void *this_) {
  ((QAudioProbe*)this_)->flush();
}

//  main block end
