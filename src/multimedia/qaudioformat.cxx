//  header block begin
// /usr/include/qt/QtMultimedia/qaudioformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioformat.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioFormat is pure virtual: false
// QAudioFormat has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAudioFormat_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioFormat_t qt_meta_stringdata_MyQAudioFormat = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQAudioFormat"
  },
  "MyQAudioFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioFormat[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQAudioFormat : public QAudioFormat {
public:
  virtual ~MyQAudioFormat() {}
// void QAudioFormat()
MyQAudioFormat() : QAudioFormat() {}
// void QAudioFormat(const QAudioFormat &)
MyQAudioFormat(const QAudioFormat & other) : QAudioFormat(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:60
// [-2] void QAudioFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioFormatC2Ev() {
  return  new QAudioFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:61
// [-2] void QAudioFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioFormatC2ERKS_(QAudioFormat* other) {
  return  new QAudioFormat(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:62
// [-2] void ~QAudioFormat()
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioFormatD2Ev(void *this_) {
  delete (QAudioFormat*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:64
// [8] QAudioFormat & operator=(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QAudioFormataSERKS_(void *this_, QAudioFormat* other) {
  auto& rv = ((QAudioFormat*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:65
// [1] bool operator==(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QAudioFormateqERKS_(void *this_, QAudioFormat* other) {
  return (bool)((QAudioFormat*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:66
// [1] bool operator!=(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QAudioFormatneERKS_(void *this_, QAudioFormat* other) {
  return (bool)((QAudioFormat*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:68
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QAudioFormat7isValidEv(void *this_) {
  return (bool)((QAudioFormat*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:70
// [-2] void setSampleRate(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioFormat13setSampleRateEi(void *this_, int sampleRate) {
  ((QAudioFormat*)this_)->setSampleRate(sampleRate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:71
// [4] int sampleRate()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioFormat10sampleRateEv(void *this_) {
  return (int)((QAudioFormat*)this_)->sampleRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:73
// [-2] void setChannelCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioFormat15setChannelCountEi(void *this_, int channelCount) {
  ((QAudioFormat*)this_)->setChannelCount(channelCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:74
// [4] int channelCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioFormat12channelCountEv(void *this_) {
  return (int)((QAudioFormat*)this_)->channelCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:76
// [-2] void setSampleSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioFormat13setSampleSizeEi(void *this_, int sampleSize) {
  ((QAudioFormat*)this_)->setSampleSize(sampleSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:77
// [4] int sampleSize()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioFormat10sampleSizeEv(void *this_) {
  return (int)((QAudioFormat*)this_)->sampleSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:79
// [-2] void setCodec(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioFormat8setCodecERK7QString(void *this_, QString* codec) {
  ((QAudioFormat*)this_)->setCodec(*codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:80
// [8] QString codec()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QAudioFormat5codecEv(void *this_) {
  auto rv = ((QAudioFormat*)this_)->codec();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:82
// [-2] void setByteOrder(QAudioFormat::Endian)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioFormat12setByteOrderENS_6EndianE(void *this_, QAudioFormat::Endian byteOrder) {
  ((QAudioFormat*)this_)->setByteOrder(byteOrder);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:83
// [4] QAudioFormat::Endian byteOrder()
extern "C" Q_DECL_EXPORT
QAudioFormat::Endian C_ZNK12QAudioFormat9byteOrderEv(void *this_) {
  return (QAudioFormat::Endian)((QAudioFormat*)this_)->byteOrder();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:85
// [-2] void setSampleType(QAudioFormat::SampleType)
extern "C" Q_DECL_EXPORT
void C_ZN12QAudioFormat13setSampleTypeENS_10SampleTypeE(void *this_, QAudioFormat::SampleType sampleType) {
  ((QAudioFormat*)this_)->setSampleType(sampleType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:86
// [4] QAudioFormat::SampleType sampleType()
extern "C" Q_DECL_EXPORT
QAudioFormat::SampleType C_ZNK12QAudioFormat10sampleTypeEv(void *this_) {
  return (QAudioFormat::SampleType)((QAudioFormat*)this_)->sampleType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:89
// [4] qint32 bytesForDuration(qint64)
extern "C" Q_DECL_EXPORT
qint32 C_ZNK12QAudioFormat16bytesForDurationEx(void *this_, qint64 duration) {
  return (qint32)((QAudioFormat*)this_)->bytesForDuration(duration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:90
// [8] qint64 durationForBytes(qint32)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QAudioFormat16durationForBytesEi(void *this_, qint32 byteCount) {
  return (qint64)((QAudioFormat*)this_)->durationForBytes(byteCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:92
// [4] qint32 bytesForFrames(qint32)
extern "C" Q_DECL_EXPORT
qint32 C_ZNK12QAudioFormat14bytesForFramesEi(void *this_, qint32 frameCount) {
  return (qint32)((QAudioFormat*)this_)->bytesForFrames(frameCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:93
// [4] qint32 framesForBytes(qint32)
extern "C" Q_DECL_EXPORT
qint32 C_ZNK12QAudioFormat14framesForBytesEi(void *this_, qint32 byteCount) {
  return (qint32)((QAudioFormat*)this_)->framesForBytes(byteCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:95
// [4] qint32 framesForDuration(qint64)
extern "C" Q_DECL_EXPORT
qint32 C_ZNK12QAudioFormat17framesForDurationEx(void *this_, qint64 duration) {
  return (qint32)((QAudioFormat*)this_)->framesForDuration(duration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:96
// [8] qint64 durationForFrames(qint32)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QAudioFormat17durationForFramesEi(void *this_, qint32 frameCount) {
  return (qint64)((QAudioFormat*)this_)->durationForFrames(frameCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:98
// [4] int bytesPerFrame()
extern "C" Q_DECL_EXPORT
int C_ZNK12QAudioFormat13bytesPerFrameEv(void *this_) {
  return (int)((QAudioFormat*)this_)->bytesPerFrame();
}

//  main block end
