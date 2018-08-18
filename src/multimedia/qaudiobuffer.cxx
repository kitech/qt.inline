//  header block begin
// /usr/include/qt/QtMultimedia/qaudiobuffer.h
#ifndef protected
#define protected public
#endif
#include <qaudiobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioBuffer is pure virtual: false
// QAudioBuffer has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioBuffer : public QAudioBuffer {
public:
  virtual ~MyQAudioBuffer() {}
// void QAudioBuffer()
MyQAudioBuffer() : QAudioBuffer() {}
// void QAudioBuffer(QAbstractAudioBuffer *)
MyQAudioBuffer(QAbstractAudioBuffer * provider) : QAudioBuffer(provider) {}
// void QAudioBuffer(const QAudioBuffer &)
MyQAudioBuffer(const QAudioBuffer & other) : QAudioBuffer(other) {}
// void QAudioBuffer(const QByteArray &, const QAudioFormat &, qint64)
MyQAudioBuffer(const QByteArray & data, const QAudioFormat & format, qint64 startTime) : QAudioBuffer(data, format, startTime) {}
// void QAudioBuffer(int, const QAudioFormat &, qint64)
MyQAudioBuffer(int numFrames, const QAudioFormat & format, qint64 startTime) : QAudioBuffer(numFrames, format, startTime) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:58
// [-2] void QAudioBuffer()
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioBufferC2Ev() {
  return  new QAudioBuffer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:59
// [-2] void QAudioBuffer(QAbstractAudioBuffer *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioBufferC2EP20QAbstractAudioBuffer(QAbstractAudioBuffer * provider) {
  return  new QAudioBuffer(provider);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:60
// [-2] void QAudioBuffer(const QAudioBuffer &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioBufferC2ERKS_(QAudioBuffer* other) {
  return  new QAudioBuffer(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:61
// [-2] void QAudioBuffer(const QByteArray &, const QAudioFormat &, qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioBufferC2ERK10QByteArrayRK12QAudioFormatx(QByteArray* data, QAudioFormat* format, qint64 startTime) {
  return  new QAudioBuffer(*data, *format, startTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:62
// [-2] void QAudioBuffer(int, const QAudioFormat &, qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioBufferC2EiRK12QAudioFormatx(int numFrames, QAudioFormat* format, qint64 startTime) {
  return  new QAudioBuffer(numFrames, *format, startTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:64
// [8] QAudioBuffer & operator=(const QAudioBuffer &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioBufferaSERKS_(void *this_, QAudioBuffer* other) {
  auto& rv = ((QAudioBuffer*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:66
// [-2] void ~QAudioBuffer()
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioBufferD2Ev(void *this_) {
  delete (QAudioBuffer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:68
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QAudioBuffer7isValidEv(void *this_) {
  return (bool)((QAudioBuffer*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:70
// [8] QAudioFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QAudioBuffer6formatEv(void *this_) {
  auto rv = ((QAudioBuffer*)this_)->format();
return new QAudioFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:72
// [4] int frameCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioBuffer10frameCountEv(void *this_) {
  return (int)((QAudioBuffer*)this_)->frameCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:73
// [4] int sampleCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioBuffer11sampleCountEv(void *this_) {
  return (int)((QAudioBuffer*)this_)->sampleCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:74
// [4] int byteCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioBuffer9byteCountEv(void *this_) {
  return (int)((QAudioBuffer*)this_)->byteCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:76
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QAudioBuffer8durationEv(void *this_) {
  return (qint64)((QAudioBuffer*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:77
// [8] qint64 startTime()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QAudioBuffer9startTimeEv(void *this_) {
  return (qint64)((QAudioBuffer*)this_)->startTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:86
// [8] const void * constData()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QAudioBuffer9constDataEv(void *this_) {
  return (void*)((QAudioBuffer*)this_)->constData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:87
// [8] const void * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QAudioBuffer4dataEv(void *this_) {
  return (void*)((QAudioBuffer*)this_)->data();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:88
// [8] void * data()
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioBuffer4dataEv(void *this_) {
  return (void*)((QAudioBuffer*)this_)->data();
}

//  main block end
