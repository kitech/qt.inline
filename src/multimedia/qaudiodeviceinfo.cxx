//  header block begin
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiodeviceinfo.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDeviceInfo is pure virtual: false
// QAudioDeviceInfo has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAudioDeviceInfo_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioDeviceInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioDeviceInfo_t qt_meta_stringdata_MyQAudioDeviceInfo = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQAudioDeviceInfo"
  },
  "MyQAudioDeviceInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioDeviceInfo[] = {
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
class Q_DECL_EXPORT MyQAudioDeviceInfo : public QAudioDeviceInfo {
public:
  virtual ~MyQAudioDeviceInfo() {}
// void QAudioDeviceInfo()
MyQAudioDeviceInfo() : QAudioDeviceInfo() {}
// void QAudioDeviceInfo(const QAudioDeviceInfo &)
MyQAudioDeviceInfo(const QAudioDeviceInfo & other) : QAudioDeviceInfo(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:67
// [-2] void QAudioDeviceInfo()
extern "C" Q_DECL_EXPORT
void* C_ZN16QAudioDeviceInfoC2Ev() {
  return  new QAudioDeviceInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:68
// [-2] void QAudioDeviceInfo(const QAudioDeviceInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAudioDeviceInfoC2ERKS_(QAudioDeviceInfo* other) {
  return  new QAudioDeviceInfo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:69
// [-2] void ~QAudioDeviceInfo()
extern "C" Q_DECL_EXPORT
void C_ZN16QAudioDeviceInfoD2Ev(void *this_) {
  delete (QAudioDeviceInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:71
// [8] QAudioDeviceInfo & operator=(const QAudioDeviceInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAudioDeviceInfoaSERKS_(void *this_, QAudioDeviceInfo* other) {
  auto& rv = ((QAudioDeviceInfo*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:73
// [1] bool operator==(const QAudioDeviceInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAudioDeviceInfoeqERKS_(void *this_, QAudioDeviceInfo* other) {
  return (bool)((QAudioDeviceInfo*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:74
// [1] bool operator!=(const QAudioDeviceInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAudioDeviceInfoneERKS_(void *this_, QAudioDeviceInfo* other) {
  return (bool)((QAudioDeviceInfo*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:76
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAudioDeviceInfo6isNullEv(void *this_) {
  return (bool)((QAudioDeviceInfo*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:78
// [8] QString deviceName()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAudioDeviceInfo10deviceNameEv(void *this_) {
  auto rv = ((QAudioDeviceInfo*)this_)->deviceName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:80
// [1] bool isFormatSupported(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAudioDeviceInfo17isFormatSupportedERK12QAudioFormat(void *this_, QAudioFormat* format) {
  return (bool)((QAudioDeviceInfo*)this_)->isFormatSupported(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:81
// [8] QAudioFormat preferredFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAudioDeviceInfo15preferredFormatEv(void *this_) {
  auto rv = ((QAudioDeviceInfo*)this_)->preferredFormat();
return new QAudioFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:82
// [8] QAudioFormat nearestFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAudioDeviceInfo13nearestFormatERK12QAudioFormat(void *this_, QAudioFormat* format) {
  auto rv = ((QAudioDeviceInfo*)this_)->nearestFormat(*format);
return new QAudioFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:84
// [8] QStringList supportedCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAudioDeviceInfo15supportedCodecsEv(void *this_) {
  auto rv = ((QAudioDeviceInfo*)this_)->supportedCodecs();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:85
// [-2] QList<int> supportedSampleRates()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK16QAudioDeviceInfo20supportedSampleRatesEv(void *this_) {
  auto rv = ((QAudioDeviceInfo*)this_)->supportedSampleRates();
return new QList<int>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:86
// [-2] QList<int> supportedChannelCounts()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK16QAudioDeviceInfo22supportedChannelCountsEv(void *this_) {
  auto rv = ((QAudioDeviceInfo*)this_)->supportedChannelCounts();
return new QList<int>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:87
// [-2] QList<int> supportedSampleSizes()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK16QAudioDeviceInfo20supportedSampleSizesEv(void *this_) {
  auto rv = ((QAudioDeviceInfo*)this_)->supportedSampleSizes();
return new QList<int>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:88
// [-2] QList<QAudioFormat::Endian> supportedByteOrders()
extern "C" Q_DECL_EXPORT
QList<QAudioFormat::Endian>* C_ZNK16QAudioDeviceInfo19supportedByteOrdersEv(void *this_) {
  auto rv = ((QAudioDeviceInfo*)this_)->supportedByteOrders();
return new QList<QAudioFormat::Endian>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:89
// [-2] QList<QAudioFormat::SampleType> supportedSampleTypes()
extern "C" Q_DECL_EXPORT
QList<QAudioFormat::SampleType>* C_ZNK16QAudioDeviceInfo20supportedSampleTypesEv(void *this_) {
  auto rv = ((QAudioDeviceInfo*)this_)->supportedSampleTypes();
return new QList<QAudioFormat::SampleType>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:91
// [8] QAudioDeviceInfo defaultInputDevice()
extern "C" Q_DECL_EXPORT
void* C_ZN16QAudioDeviceInfo18defaultInputDeviceEv() {
  auto rv = QAudioDeviceInfo::defaultInputDevice();
return new QAudioDeviceInfo(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:92
// [8] QAudioDeviceInfo defaultOutputDevice()
extern "C" Q_DECL_EXPORT
void* C_ZN16QAudioDeviceInfo19defaultOutputDeviceEv() {
  auto rv = QAudioDeviceInfo::defaultOutputDevice();
return new QAudioDeviceInfo(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:94
// [-2] QList<QAudioDeviceInfo> availableDevices(QAudio::Mode)
extern "C" Q_DECL_EXPORT
QList<QAudioDeviceInfo>* C_ZN16QAudioDeviceInfo16availableDevicesEN6QAudio4ModeE(QAudio::Mode mode) {
  auto rv = QAudioDeviceInfo::availableDevices(mode);
return new QList<QAudioDeviceInfo>(rv);
}

//  main block end
