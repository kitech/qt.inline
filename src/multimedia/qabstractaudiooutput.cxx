//  header block begin
// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioOutput is pure virtual: true
// QAbstractAudioOutput has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractAudioOutput : public QAbstractAudioOutput {
public:
  virtual ~MyQAbstractAudioOutput() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAbstractAudioOutput10metaObjectEv(void *this_) {
  return (void*)((QAbstractAudioOutput*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractAudioOutput11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractAudioOutput*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QAbstractAudioOutput11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractAudioOutput*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractAudioOutput2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioOutput::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractAudioOutput6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioOutput::trUtf8(s, c, n);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:78
// [-2] void start(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput5startEP9QIODevice(void *this_, QIODevice * device) {
  ((QAbstractAudioOutput*)this_)->start(device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:79
// [8] QIODevice * start()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractAudioOutput5startEv(void *this_) {
  return (void*)((QAbstractAudioOutput*)this_)->start();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:80
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput4stopEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->stop();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:81
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput5resetEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->reset();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:82
// [-2] void suspend()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput7suspendEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->suspend();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:83
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput6resumeEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->resume();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:84
// [4] int bytesFree()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAbstractAudioOutput9bytesFreeEv(void *this_) {
  return (int)((QAbstractAudioOutput*)this_)->bytesFree();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:85
// [4] int periodSize()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAbstractAudioOutput10periodSizeEv(void *this_) {
  return (int)((QAbstractAudioOutput*)this_)->periodSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:86
// [-2] void setBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput13setBufferSizeEi(void *this_, int value) {
  ((QAbstractAudioOutput*)this_)->setBufferSize(value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:87
// [4] int bufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAbstractAudioOutput10bufferSizeEv(void *this_) {
  return (int)((QAbstractAudioOutput*)this_)->bufferSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:88
// [-2] void setNotifyInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput17setNotifyIntervalEi(void *this_, int milliSeconds) {
  ((QAbstractAudioOutput*)this_)->setNotifyInterval(milliSeconds);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:89
// [4] int notifyInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAbstractAudioOutput14notifyIntervalEv(void *this_) {
  return (int)((QAbstractAudioOutput*)this_)->notifyInterval();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:90
// [8] qint64 processedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK20QAbstractAudioOutput14processedUSecsEv(void *this_) {
  return (qint64)((QAbstractAudioOutput*)this_)->processedUSecs();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:91
// [8] qint64 elapsedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK20QAbstractAudioOutput12elapsedUSecsEv(void *this_) {
  return (qint64)((QAbstractAudioOutput*)this_)->elapsedUSecs();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:92
// [4] QAudio::Error error()
extern "C" Q_DECL_EXPORT
QAudio::Error C_ZNK20QAbstractAudioOutput5errorEv(void *this_) {
  return (QAudio::Error)((QAbstractAudioOutput*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:93
// [4] QAudio::State state()
extern "C" Q_DECL_EXPORT
QAudio::State C_ZNK20QAbstractAudioOutput5stateEv(void *this_) {
  return (QAudio::State)((QAbstractAudioOutput*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:94
// [-2] void setFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput9setFormatERK12QAudioFormat(void *this_, QAudioFormat* fmt_) {
  ((QAbstractAudioOutput*)this_)->setFormat(*fmt_);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:95
// [8] QAudioFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAbstractAudioOutput6formatEv(void *this_) {
  auto rv = ((QAbstractAudioOutput*)this_)->format();
return new QAudioFormat(rv);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:96
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput9setVolumeEd(void *this_, qreal arg0) {
  ((QAbstractAudioOutput*)this_)->setVolume(arg0);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:97
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QAbstractAudioOutput6volumeEv(void *this_) {
  return (qreal)((QAbstractAudioOutput*)this_)->volume();
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:98
// [8] QString category()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAbstractAudioOutput8categoryEv(void *this_) {
  auto rv = ((QAbstractAudioOutput*)this_)->category();
return new QString(rv);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:99
// [-2] void setCategory(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput11setCategoryERK7QString(void *this_, QString* arg0) {
  ((QAbstractAudioOutput*)this_)->setCategory(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:102
// [-2] void errorChanged(QAudio::Error)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput12errorChangedEN6QAudio5ErrorE(void *this_, QAudio::Error arg0) {
  ((QAbstractAudioOutput*)this_)->errorChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:103
// [-2] void stateChanged(QAudio::State)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput12stateChangedEN6QAudio5StateE(void *this_, QAudio::State arg0) {
  ((QAbstractAudioOutput*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:104
// [-2] void notify()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput6notifyEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->notify();
}


extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutputD2Ev(void *this_) {
  delete (QAbstractAudioOutput*)(this_);
}
//  main block end
