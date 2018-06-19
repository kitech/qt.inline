//  header block begin
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h
#ifndef protected
#define protected public
#endif
#include <qaudiodeviceinfo.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDeviceInfo is pure virtual: false
// QAudioDeviceInfo has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioDeviceInfo : public QAudioDeviceInfo {
public:
  virtual ~MyQAudioDeviceInfo() {}
// void QAudioDeviceInfo()
MyQAudioDeviceInfo() : QAudioDeviceInfo() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:67
// [-2] void QAudioDeviceInfo()
extern "C" Q_DECL_EXPORT
void* C_ZN16QAudioDeviceInfoC2Ev() {
  return  new QAudioDeviceInfo();
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

//  main block end
