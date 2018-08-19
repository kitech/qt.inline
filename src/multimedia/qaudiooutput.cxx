//  header block begin
// /usr/include/qt/QtMultimedia/qaudiooutput.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiooutput.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioOutput is pure virtual: false
// QAudioOutput has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioOutput : public QAudioOutput {
public:
  virtual ~MyQAudioOutput() {}
// void QAudioOutput(const QAudioFormat &, QObject *)
MyQAudioOutput(const QAudioFormat & format, QObject * parent) : QAudioOutput(format, parent) {}
// void QAudioOutput(const QAudioDeviceInfo &, const QAudioFormat &, QObject *)
MyQAudioOutput(const QAudioDeviceInfo & audioDeviceInfo, const QAudioFormat & format, QObject * parent) : QAudioOutput(audioDeviceInfo, format, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QAudioOutput10metaObjectEv(void *this_) {
  return (void*)((QAudioOutput*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioOutput11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioOutput*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QAudioOutput11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioOutput*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioOutput2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioOutput::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioOutput6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioOutput::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:65
// [-2] void QAudioOutput(const QAudioFormat &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioOutputC2ERK12QAudioFormatP7QObject(QAudioFormat* format, QObject * parent) {
  return  new QAudioOutput(*format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:66
// [-2] void QAudioOutput(const QAudioDeviceInfo &, const QAudioFormat &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioOutputC2ERK16QAudioDeviceInfoRK12QAudioFormatP7QObject(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject * parent) {
  return  new QAudioOutput(*audioDeviceInfo, *format, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:67
// [-2] void ~QAudioOutput()
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutputD2Ev(void *this_) {
  delete (QAudioOutput*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:69
// [8] QAudioFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QAudioOutput6formatEv(void *this_) {
  auto rv = ((QAudioOutput*)this_)->format();
return new QAudioFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:71
// [-2] void start(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput5startEP9QIODevice(void *this_, QIODevice * device) {
  ((QAudioOutput*)this_)->start(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:72
// [8] QIODevice * start()
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioOutput5startEv(void *this_) {
  return (void*)((QAudioOutput*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:74
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput4stopEv(void *this_) {
  ((QAudioOutput*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:75
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput5resetEv(void *this_) {
  ((QAudioOutput*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:76
// [-2] void suspend()
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput7suspendEv(void *this_) {
  ((QAudioOutput*)this_)->suspend();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:77
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput6resumeEv(void *this_) {
  ((QAudioOutput*)this_)->resume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:79
// [-2] void setBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput13setBufferSizeEi(void *this_, int bytes) {
  ((QAudioOutput*)this_)->setBufferSize(bytes);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:80
// [4] int bufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioOutput10bufferSizeEv(void *this_) {
  return (int)((QAudioOutput*)this_)->bufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:82
// [4] int bytesFree()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioOutput9bytesFreeEv(void *this_) {
  return (int)((QAudioOutput*)this_)->bytesFree();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:83
// [4] int periodSize()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioOutput10periodSizeEv(void *this_) {
  return (int)((QAudioOutput*)this_)->periodSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:85
// [-2] void setNotifyInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput17setNotifyIntervalEi(void *this_, int milliSeconds) {
  ((QAudioOutput*)this_)->setNotifyInterval(milliSeconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:86
// [4] int notifyInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioOutput14notifyIntervalEv(void *this_) {
  return (int)((QAudioOutput*)this_)->notifyInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:88
// [8] qint64 processedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QAudioOutput14processedUSecsEv(void *this_) {
  return (qint64)((QAudioOutput*)this_)->processedUSecs();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:89
// [8] qint64 elapsedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QAudioOutput12elapsedUSecsEv(void *this_) {
  return (qint64)((QAudioOutput*)this_)->elapsedUSecs();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:91
// [4] QAudio::Error error()
extern "C" Q_DECL_EXPORT
QAudio::Error C_ZNK12QAudioOutput5errorEv(void *this_) {
  return (QAudio::Error)((QAudioOutput*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:92
// [4] QAudio::State state()
extern "C" Q_DECL_EXPORT
QAudio::State C_ZNK12QAudioOutput5stateEv(void *this_) {
  return (QAudio::State)((QAudioOutput*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:94
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput9setVolumeEd(void *this_, qreal arg0) {
  ((QAudioOutput*)this_)->setVolume(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:95
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QAudioOutput6volumeEv(void *this_) {
  return (qreal)((QAudioOutput*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:97
// [8] QString category()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QAudioOutput8categoryEv(void *this_) {
  auto rv = ((QAudioOutput*)this_)->category();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:98
// [-2] void setCategory(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput11setCategoryERK7QString(void *this_, QString* category) {
  ((QAudioOutput*)this_)->setCategory(*category);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:101
// [-2] void stateChanged(QAudio::State)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput12stateChangedEN6QAudio5StateE(void *this_, QAudio::State arg0) {
  ((QAudioOutput*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutput.h:102
// [-2] void notify()
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioOutput6notifyEv(void *this_) {
  ((QAudioOutput*)this_)->notify();
}

//  main block end
