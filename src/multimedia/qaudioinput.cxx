//  header block begin
// /usr/include/qt/QtMultimedia/qaudioinput.h
#ifndef protected
#define protected public
#endif
#include <qaudioinput.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioInput is pure virtual: false
// QAudioInput has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioInput : public QAudioInput {
public:
  virtual ~MyQAudioInput() {}
// void QAudioInput(const QAudioFormat &, QObject *)
MyQAudioInput(const QAudioFormat & format, QObject * parent) : QAudioInput(format, parent) {}
// void QAudioInput(const QAudioDeviceInfo &, const QAudioFormat &, QObject *)
MyQAudioInput(const QAudioDeviceInfo & audioDeviceInfo, const QAudioFormat & format, QObject * parent) : QAudioInput(audioDeviceInfo, format, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QAudioInput10metaObjectEv(void *this_) {
  return (void*)((QAudioInput*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioInput11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioInput*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QAudioInput11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioInput*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioInput2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioInput::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioInput6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioInput::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:65
// [-2] void QAudioInput(const QAudioFormat &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioInputC2ERK12QAudioFormatP7QObject(QAudioFormat* format, QObject * parent) {
  return  new QAudioInput(*format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:66
// [-2] void QAudioInput(const QAudioDeviceInfo &, const QAudioFormat &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioInputC2ERK16QAudioDeviceInfoRK12QAudioFormatP7QObject(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject * parent) {
  return  new QAudioInput(*audioDeviceInfo, *format, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:67
// [-2] void ~QAudioInput()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInputD2Ev(void *this_) {
  delete (QAudioInput*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:69
// [8] QAudioFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QAudioInput6formatEv(void *this_) {
  auto rv = ((QAudioInput*)this_)->format();
return new QAudioFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:71
// [-2] void start(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput5startEP9QIODevice(void *this_, QIODevice * device) {
  ((QAudioInput*)this_)->start(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:72
// [8] QIODevice * start()
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioInput5startEv(void *this_) {
  return (void*)((QAudioInput*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:74
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput4stopEv(void *this_) {
  ((QAudioInput*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:75
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput5resetEv(void *this_) {
  ((QAudioInput*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:76
// [-2] void suspend()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput7suspendEv(void *this_) {
  ((QAudioInput*)this_)->suspend();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:77
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput6resumeEv(void *this_) {
  ((QAudioInput*)this_)->resume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:79
// [-2] void setBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput13setBufferSizeEi(void *this_, int bytes) {
  ((QAudioInput*)this_)->setBufferSize(bytes);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:80
// [4] int bufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK11QAudioInput10bufferSizeEv(void *this_) {
  return (int)((QAudioInput*)this_)->bufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:82
// [4] int bytesReady()
extern "C" Q_DECL_EXPORT
int C_ZNK11QAudioInput10bytesReadyEv(void *this_) {
  return (int)((QAudioInput*)this_)->bytesReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:83
// [4] int periodSize()
extern "C" Q_DECL_EXPORT
int C_ZNK11QAudioInput10periodSizeEv(void *this_) {
  return (int)((QAudioInput*)this_)->periodSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:85
// [-2] void setNotifyInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput17setNotifyIntervalEi(void *this_, int milliSeconds) {
  ((QAudioInput*)this_)->setNotifyInterval(milliSeconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:86
// [4] int notifyInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK11QAudioInput14notifyIntervalEv(void *this_) {
  return (int)((QAudioInput*)this_)->notifyInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:88
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput9setVolumeEd(void *this_, qreal volume) {
  ((QAudioInput*)this_)->setVolume(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:89
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QAudioInput6volumeEv(void *this_) {
  return (qreal)((QAudioInput*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:91
// [8] qint64 processedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK11QAudioInput14processedUSecsEv(void *this_) {
  return (qint64)((QAudioInput*)this_)->processedUSecs();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:92
// [8] qint64 elapsedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK11QAudioInput12elapsedUSecsEv(void *this_) {
  return (qint64)((QAudioInput*)this_)->elapsedUSecs();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:94
// [4] QAudio::Error error()
extern "C" Q_DECL_EXPORT
QAudio::Error C_ZNK11QAudioInput5errorEv(void *this_) {
  return (QAudio::Error)((QAudioInput*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:95
// [4] QAudio::State state()
extern "C" Q_DECL_EXPORT
QAudio::State C_ZNK11QAudioInput5stateEv(void *this_) {
  return (QAudio::State)((QAudioInput*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:98
// [-2] void stateChanged(QAudio::State)
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput12stateChangedEN6QAudio5StateE(void *this_, QAudio::State arg0) {
  ((QAudioInput*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinput.h:99
// [-2] void notify()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioInput6notifyEv(void *this_) {
  ((QAudioInput*)this_)->notify();
}

//  main block end
