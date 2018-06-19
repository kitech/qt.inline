//  header block begin
// /usr/include/qt/QtMultimedia/qaudiodecoder.h
#ifndef protected
#define protected public
#endif
#include <qaudiodecoder.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDecoder is pure virtual: false
// QAudioDecoder has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioDecoder : public QAudioDecoder {
public:
  virtual ~MyQAudioDecoder() {}
// void QAudioDecoder(QObject *)
MyQAudioDecoder(QObject * parent) : QAudioDecoder(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder10metaObjectEv(void *this_) {
  return (void*)((QAudioDecoder*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:78
// [-2] void QAudioDecoder(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QAudioDecoderC2EP7QObject(QObject * parent) {
  return  new QAudioDecoder(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:79
// [-2] void ~QAudioDecoder()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoderD2Ev(void *this_) {
  delete (QAudioDecoder*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:81
// [4] QMultimedia::SupportEstimate hasSupport(const QString &, const QStringList &)
extern "C" Q_DECL_EXPORT
QMultimedia::SupportEstimate C_ZN13QAudioDecoder10hasSupportERK7QStringRK11QStringList(QString* mimeType, QStringList* codecs) {
  return (QMultimedia::SupportEstimate)QAudioDecoder::hasSupport(*mimeType, *codecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:83
// [4] QAudioDecoder::State state()
extern "C" Q_DECL_EXPORT
QAudioDecoder::State C_ZNK13QAudioDecoder5stateEv(void *this_) {
  return (QAudioDecoder::State)((QAudioDecoder*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:85
// [8] QString sourceFilename()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder14sourceFilenameEv(void *this_) {
  auto rv = ((QAudioDecoder*)this_)->sourceFilename();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:86
// [-2] void setSourceFilename(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder17setSourceFilenameERK7QString(void *this_, QString* fileName) {
  ((QAudioDecoder*)this_)->setSourceFilename(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:88
// [8] QIODevice * sourceDevice()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder12sourceDeviceEv(void *this_) {
  return (void*)((QAudioDecoder*)this_)->sourceDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:89
// [-2] void setSourceDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder15setSourceDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QAudioDecoder*)this_)->setSourceDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:91
// [8] QAudioFormat audioFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder11audioFormatEv(void *this_) {
  auto rv = ((QAudioDecoder*)this_)->audioFormat();
return new QAudioFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:92
// [-2] void setAudioFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder14setAudioFormatERK12QAudioFormat(void *this_, QAudioFormat* format) {
  ((QAudioDecoder*)this_)->setAudioFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:94
// [4] QAudioDecoder::Error error()
extern "C" Q_DECL_EXPORT
QAudioDecoder::Error C_ZNK13QAudioDecoder5errorEv(void *this_) {
  return (QAudioDecoder::Error)((QAudioDecoder*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:95
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder11errorStringEv(void *this_) {
  auto rv = ((QAudioDecoder*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:97
// [8] QAudioBuffer read()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder4readEv(void *this_) {
  auto rv = ((QAudioDecoder*)this_)->read();
return new QAudioBuffer(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:98
// [1] bool bufferAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QAudioDecoder15bufferAvailableEv(void *this_) {
  return (bool)((QAudioDecoder*)this_)->bufferAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:100
// [8] qint64 position()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QAudioDecoder8positionEv(void *this_) {
  return (qint64)((QAudioDecoder*)this_)->position();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:101
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QAudioDecoder8durationEv(void *this_) {
  return (qint64)((QAudioDecoder*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:104
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder5startEv(void *this_) {
  ((QAudioDecoder*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:105
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder4stopEv(void *this_) {
  ((QAudioDecoder*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:108
// [-2] void bufferAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder22bufferAvailableChangedEb(void *this_, bool arg0) {
  ((QAudioDecoder*)this_)->bufferAvailableChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:109
// [-2] void bufferReady()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder11bufferReadyEv(void *this_) {
  ((QAudioDecoder*)this_)->bufferReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:110
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder8finishedEv(void *this_) {
  ((QAudioDecoder*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:112
// [-2] void stateChanged(QAudioDecoder::State)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder12stateChangedENS_5StateE(void *this_, QAudioDecoder::State newState) {
  ((QAudioDecoder*)this_)->stateChanged(newState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:113
// [-2] void formatChanged(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder13formatChangedERK12QAudioFormat(void *this_, QAudioFormat* format) {
  ((QAudioDecoder*)this_)->formatChanged(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:115
// [-2] void error(QAudioDecoder::Error)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder5errorENS_5ErrorE(void *this_, QAudioDecoder::Error error) {
  ((QAudioDecoder*)this_)->error(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:117
// [-2] void sourceChanged()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder13sourceChangedEv(void *this_) {
  ((QAudioDecoder*)this_)->sourceChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:119
// [-2] void positionChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder15positionChangedEx(void *this_, qint64 position) {
  ((QAudioDecoder*)this_)->positionChanged(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:120
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder15durationChangedEx(void *this_, qint64 duration) {
  ((QAudioDecoder*)this_)->durationChanged(duration);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:123
// [1] bool bind(QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QAudioDecoder4bindEP7QObject(void *this_, QObject * arg0) {
  return (bool)((QAudioDecoder*)this_)->bind(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:124
// [-2] void unbind(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder6unbindEP7QObject(void *this_, QObject * arg0) {
  ((QAudioDecoder*)this_)->unbind(arg0);
}

//  main block end
