//  header block begin
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioEncoderSettings is pure virtual: false
// QAudioEncoderSettings has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioEncoderSettings : public QAudioEncoderSettings {
public:
  virtual ~MyQAudioEncoderSettings() {}
// void QAudioEncoderSettings()
MyQAudioEncoderSettings() : QAudioEncoderSettings() {}
// void QAudioEncoderSettings(const QAudioEncoderSettings &)
MyQAudioEncoderSettings(const QAudioEncoderSettings & other) : QAudioEncoderSettings(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:58
// [-2] void QAudioEncoderSettings()
extern "C" Q_DECL_EXPORT
void* C_ZN21QAudioEncoderSettingsC2Ev() {
  return  new QAudioEncoderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:59
// [-2] void QAudioEncoderSettings(const QAudioEncoderSettings &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAudioEncoderSettingsC2ERKS_(QAudioEncoderSettings* other) {
  return  new QAudioEncoderSettings(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:61
// [-2] void ~QAudioEncoderSettings()
extern "C" Q_DECL_EXPORT
void C_ZN21QAudioEncoderSettingsD2Ev(void *this_) {
  delete (QAudioEncoderSettings*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:63
// [8] QAudioEncoderSettings & operator=(const QAudioEncoderSettings &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAudioEncoderSettingsaSERKS_(void *this_, QAudioEncoderSettings* other) {
  auto& rv = ((QAudioEncoderSettings*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:64
// [1] bool operator==(const QAudioEncoderSettings &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QAudioEncoderSettingseqERKS_(void *this_, QAudioEncoderSettings* other) {
  return (bool)((QAudioEncoderSettings*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:65
// [1] bool operator!=(const QAudioEncoderSettings &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QAudioEncoderSettingsneERKS_(void *this_, QAudioEncoderSettings* other) {
  return (bool)((QAudioEncoderSettings*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:67
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QAudioEncoderSettings6isNullEv(void *this_) {
  return (bool)((QAudioEncoderSettings*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:69
// [4] QMultimedia::EncodingMode encodingMode()
extern "C" Q_DECL_EXPORT
QMultimedia::EncodingMode C_ZNK21QAudioEncoderSettings12encodingModeEv(void *this_) {
  return (QMultimedia::EncodingMode)((QAudioEncoderSettings*)this_)->encodingMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:70
// [-2] void setEncodingMode(QMultimedia::EncodingMode)
extern "C" Q_DECL_EXPORT
void C_ZN21QAudioEncoderSettings15setEncodingModeEN11QMultimedia12EncodingModeE(void *this_, QMultimedia::EncodingMode arg0) {
  ((QAudioEncoderSettings*)this_)->setEncodingMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:72
// [8] QString codec()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAudioEncoderSettings5codecEv(void *this_) {
  auto rv = ((QAudioEncoderSettings*)this_)->codec();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:73
// [-2] void setCodec(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAudioEncoderSettings8setCodecERK7QString(void *this_, QString* codec) {
  ((QAudioEncoderSettings*)this_)->setCodec(*codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:75
// [4] int bitRate()
extern "C" Q_DECL_EXPORT
int C_ZNK21QAudioEncoderSettings7bitRateEv(void *this_) {
  return (int)((QAudioEncoderSettings*)this_)->bitRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:76
// [-2] void setBitRate(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QAudioEncoderSettings10setBitRateEi(void *this_, int bitrate) {
  ((QAudioEncoderSettings*)this_)->setBitRate(bitrate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:78
// [4] int channelCount()
extern "C" Q_DECL_EXPORT
int C_ZNK21QAudioEncoderSettings12channelCountEv(void *this_) {
  return (int)((QAudioEncoderSettings*)this_)->channelCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:79
// [-2] void setChannelCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QAudioEncoderSettings15setChannelCountEi(void *this_, int channels) {
  ((QAudioEncoderSettings*)this_)->setChannelCount(channels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:81
// [4] int sampleRate()
extern "C" Q_DECL_EXPORT
int C_ZNK21QAudioEncoderSettings10sampleRateEv(void *this_) {
  return (int)((QAudioEncoderSettings*)this_)->sampleRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:82
// [-2] void setSampleRate(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QAudioEncoderSettings13setSampleRateEi(void *this_, int rate) {
  ((QAudioEncoderSettings*)this_)->setSampleRate(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:84
// [4] QMultimedia::EncodingQuality quality()
extern "C" Q_DECL_EXPORT
QMultimedia::EncodingQuality C_ZNK21QAudioEncoderSettings7qualityEv(void *this_) {
  return (QMultimedia::EncodingQuality)((QAudioEncoderSettings*)this_)->quality();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:85
// [-2] void setQuality(QMultimedia::EncodingQuality)
extern "C" Q_DECL_EXPORT
void C_ZN21QAudioEncoderSettings10setQualityEN11QMultimedia15EncodingQualityE(void *this_, QMultimedia::EncodingQuality quality) {
  ((QAudioEncoderSettings*)this_)->setQuality(quality);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:87
// [16] QVariant encodingOption(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAudioEncoderSettings14encodingOptionERK7QString(void *this_, QString* option) {
  auto rv = ((QAudioEncoderSettings*)this_)->encodingOption(*option);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:88
// [8] QVariantMap encodingOptions()
extern "C" Q_DECL_EXPORT
QVariantMap* C_ZNK21QAudioEncoderSettings15encodingOptionsEv(void *this_) {
  auto rv = ((QAudioEncoderSettings*)this_)->encodingOptions();
return new QVariantMap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:89
// [-2] void setEncodingOption(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAudioEncoderSettings17setEncodingOptionERK7QStringRK8QVariant(void *this_, QString* option, QVariant* value) {
  ((QAudioEncoderSettings*)this_)->setEncodingOption(*option, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:90
// [-2] void setEncodingOptions(const QVariantMap &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAudioEncoderSettings18setEncodingOptionsERK4QMapI7QString8QVariantE(void *this_, const QVariantMap & options) {
  ((QAudioEncoderSettings*)this_)->setEncodingOptions(options);
}

//  main block end
