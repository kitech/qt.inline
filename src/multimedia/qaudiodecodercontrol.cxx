//  header block begin
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h
#ifndef protected
#define protected public
#endif
#include <qaudiodecodercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDecoderControl is pure virtual: true
// QAudioDecoderControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioDecoderControl : public QAudioDecoderControl {
public:
  virtual ~MyQAudioDecoderControl() {}
// void QAudioDecoderControl(QObject *)
MyQAudioDecoderControl(QObject * parent) : QAudioDecoderControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAudioDecoderControl10metaObjectEv(void *this_) {
  return (void*)((QAudioDecoderControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:58
// [-2] void ~QAudioDecoderControl()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControlD2Ev(void *this_) {
  delete (QAudioDecoderControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:60
// [4] QAudioDecoder::State state()
extern "C" Q_DECL_EXPORT
QAudioDecoder::State C_ZNK20QAudioDecoderControl5stateEv(void *this_) {
  return (QAudioDecoder::State)((QAudioDecoderControl*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:62
// [8] QString sourceFilename()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAudioDecoderControl14sourceFilenameEv(void *this_) {
  auto rv = ((QAudioDecoderControl*)this_)->sourceFilename();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:63
// [-2] void setSourceFilename(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl17setSourceFilenameERK7QString(void *this_, QString* fileName) {
  ((QAudioDecoderControl*)this_)->setSourceFilename(*fileName);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:65
// [8] QIODevice * sourceDevice()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAudioDecoderControl12sourceDeviceEv(void *this_) {
  return (void*)((QAudioDecoderControl*)this_)->sourceDevice();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:66
// [-2] void setSourceDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl15setSourceDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QAudioDecoderControl*)this_)->setSourceDevice(device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:68
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl5startEv(void *this_) {
  ((QAudioDecoderControl*)this_)->start();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:69
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl4stopEv(void *this_) {
  ((QAudioDecoderControl*)this_)->stop();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:71
// [8] QAudioFormat audioFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAudioDecoderControl11audioFormatEv(void *this_) {
  auto rv = ((QAudioDecoderControl*)this_)->audioFormat();
return new QAudioFormat(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:72
// [-2] void setAudioFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl14setAudioFormatERK12QAudioFormat(void *this_, QAudioFormat* format) {
  ((QAudioDecoderControl*)this_)->setAudioFormat(*format);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:74
// [8] QAudioBuffer read()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAudioDecoderControl4readEv(void *this_) {
  auto rv = ((QAudioDecoderControl*)this_)->read();
return new QAudioBuffer(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:75
// [1] bool bufferAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QAudioDecoderControl15bufferAvailableEv(void *this_) {
  return (bool)((QAudioDecoderControl*)this_)->bufferAvailable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:77
// [8] qint64 position()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK20QAudioDecoderControl8positionEv(void *this_) {
  return (qint64)((QAudioDecoderControl*)this_)->position();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:78
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK20QAudioDecoderControl8durationEv(void *this_) {
  return (qint64)((QAudioDecoderControl*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:81
// [-2] void stateChanged(QAudioDecoder::State)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl12stateChangedEN13QAudioDecoder5StateE(void *this_, QAudioDecoder::State newState) {
  ((QAudioDecoderControl*)this_)->stateChanged(newState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:82
// [-2] void formatChanged(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl13formatChangedERK12QAudioFormat(void *this_, QAudioFormat* format) {
  ((QAudioDecoderControl*)this_)->formatChanged(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:83
// [-2] void sourceChanged()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl13sourceChangedEv(void *this_) {
  ((QAudioDecoderControl*)this_)->sourceChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:85
// [-2] void error(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl5errorEiRK7QString(void *this_, int error, QString* errorString) {
  ((QAudioDecoderControl*)this_)->error(error, *errorString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:87
// [-2] void bufferReady()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl11bufferReadyEv(void *this_) {
  ((QAudioDecoderControl*)this_)->bufferReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:88
// [-2] void bufferAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl22bufferAvailableChangedEb(void *this_, bool available) {
  ((QAudioDecoderControl*)this_)->bufferAvailableChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:89
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl8finishedEv(void *this_) {
  ((QAudioDecoderControl*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:91
// [-2] void positionChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl15positionChangedEx(void *this_, qint64 position) {
  ((QAudioDecoderControl*)this_)->positionChanged(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:92
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN20QAudioDecoderControl15durationChangedEx(void *this_, qint64 duration) {
  ((QAudioDecoderControl*)this_)->durationChanged(duration);
}

//  main block end
