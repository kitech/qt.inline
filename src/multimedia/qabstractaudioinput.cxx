//  header block begin
// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioInput is pure virtual: true
// QAbstractAudioInput has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractAudioInput : public QAbstractAudioInput {
public:
  virtual ~MyQAbstractAudioInput() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractAudioInput10metaObjectEv(void *this_) {
  return (void*)((QAbstractAudioInput*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractAudioInput11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractAudioInput*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QAbstractAudioInput11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractAudioInput*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractAudioInput2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioInput::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractAudioInput6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioInput::trUtf8(s, c, n);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:112
// [-2] void start(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput5startEP9QIODevice(void *this_, QIODevice * device) {
  ((QAbstractAudioInput*)this_)->start(device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:113
// [8] QIODevice * start()
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractAudioInput5startEv(void *this_) {
  return (void*)((QAbstractAudioInput*)this_)->start();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:114
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput4stopEv(void *this_) {
  ((QAbstractAudioInput*)this_)->stop();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:115
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput5resetEv(void *this_) {
  ((QAbstractAudioInput*)this_)->reset();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:116
// [-2] void suspend()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput7suspendEv(void *this_) {
  ((QAbstractAudioInput*)this_)->suspend();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:117
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput6resumeEv(void *this_) {
  ((QAbstractAudioInput*)this_)->resume();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:118
// [4] int bytesReady()
extern "C" Q_DECL_EXPORT
int C_ZNK19QAbstractAudioInput10bytesReadyEv(void *this_) {
  return (int)((QAbstractAudioInput*)this_)->bytesReady();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:119
// [4] int periodSize()
extern "C" Q_DECL_EXPORT
int C_ZNK19QAbstractAudioInput10periodSizeEv(void *this_) {
  return (int)((QAbstractAudioInput*)this_)->periodSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:120
// [-2] void setBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput13setBufferSizeEi(void *this_, int value) {
  ((QAbstractAudioInput*)this_)->setBufferSize(value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:121
// [4] int bufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK19QAbstractAudioInput10bufferSizeEv(void *this_) {
  return (int)((QAbstractAudioInput*)this_)->bufferSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:122
// [-2] void setNotifyInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput17setNotifyIntervalEi(void *this_, int milliSeconds) {
  ((QAbstractAudioInput*)this_)->setNotifyInterval(milliSeconds);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:123
// [4] int notifyInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK19QAbstractAudioInput14notifyIntervalEv(void *this_) {
  return (int)((QAbstractAudioInput*)this_)->notifyInterval();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:124
// [8] qint64 processedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK19QAbstractAudioInput14processedUSecsEv(void *this_) {
  return (qint64)((QAbstractAudioInput*)this_)->processedUSecs();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:125
// [8] qint64 elapsedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK19QAbstractAudioInput12elapsedUSecsEv(void *this_) {
  return (qint64)((QAbstractAudioInput*)this_)->elapsedUSecs();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:126
// [4] QAudio::Error error()
extern "C" Q_DECL_EXPORT
QAudio::Error C_ZNK19QAbstractAudioInput5errorEv(void *this_) {
  return (QAudio::Error)((QAbstractAudioInput*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:127
// [4] QAudio::State state()
extern "C" Q_DECL_EXPORT
QAudio::State C_ZNK19QAbstractAudioInput5stateEv(void *this_) {
  return (QAudio::State)((QAbstractAudioInput*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:128
// [-2] void setFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput9setFormatERK12QAudioFormat(void *this_, QAudioFormat* fmt_) {
  ((QAbstractAudioInput*)this_)->setFormat(*fmt_);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:129
// [8] QAudioFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractAudioInput6formatEv(void *this_) {
  auto rv = ((QAbstractAudioInput*)this_)->format();
return new QAudioFormat(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:130
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput9setVolumeEd(void *this_, qreal arg0) {
  ((QAbstractAudioInput*)this_)->setVolume(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:131
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QAbstractAudioInput6volumeEv(void *this_) {
  return (qreal)((QAbstractAudioInput*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:134
// [-2] void errorChanged(QAudio::Error)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput12errorChangedEN6QAudio5ErrorE(void *this_, QAudio::Error arg0) {
  ((QAbstractAudioInput*)this_)->errorChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:135
// [-2] void stateChanged(QAudio::State)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput12stateChangedEN6QAudio5StateE(void *this_, QAudio::State arg0) {
  ((QAbstractAudioInput*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:136
// [-2] void notify()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput6notifyEv(void *this_) {
  ((QAbstractAudioInput*)this_)->notify();
}


extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInputD2Ev(void *this_) {
  delete (QAbstractAudioInput*)(this_);
}
//  main block end
