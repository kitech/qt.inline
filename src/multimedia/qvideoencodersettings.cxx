//  header block begin
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoEncoderSettings is pure virtual: false
// QVideoEncoderSettings has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoEncoderSettings : public QVideoEncoderSettings {
public:
  virtual ~MyQVideoEncoderSettings() {}
// void QVideoEncoderSettings()
MyQVideoEncoderSettings() : QVideoEncoderSettings() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:100
// [-2] void QVideoEncoderSettings()
extern "C" Q_DECL_EXPORT
void* C_ZN21QVideoEncoderSettingsC2Ev() {
  return  new QVideoEncoderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:103
// [-2] void ~QVideoEncoderSettings()
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoEncoderSettingsD2Ev(void *this_) {
  delete (QVideoEncoderSettings*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:105
// [8] QVideoEncoderSettings & operator=(const QVideoEncoderSettings &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QVideoEncoderSettingsaSERKS_(void *this_, QVideoEncoderSettings* other) {
  auto& rv = ((QVideoEncoderSettings*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:106
// [1] bool operator==(const QVideoEncoderSettings &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QVideoEncoderSettingseqERKS_(void *this_, QVideoEncoderSettings* other) {
  return (bool)((QVideoEncoderSettings*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:107
// [1] bool operator!=(const QVideoEncoderSettings &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QVideoEncoderSettingsneERKS_(void *this_, QVideoEncoderSettings* other) {
  return (bool)((QVideoEncoderSettings*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:109
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QVideoEncoderSettings6isNullEv(void *this_) {
  return (bool)((QVideoEncoderSettings*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:111
// [4] QMultimedia::EncodingMode encodingMode()
extern "C" Q_DECL_EXPORT
QMultimedia::EncodingMode C_ZNK21QVideoEncoderSettings12encodingModeEv(void *this_) {
  return (QMultimedia::EncodingMode)((QVideoEncoderSettings*)this_)->encodingMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:112
// [-2] void setEncodingMode(QMultimedia::EncodingMode)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoEncoderSettings15setEncodingModeEN11QMultimedia12EncodingModeE(void *this_, QMultimedia::EncodingMode arg0) {
  ((QVideoEncoderSettings*)this_)->setEncodingMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:114
// [8] QString codec()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QVideoEncoderSettings5codecEv(void *this_) {
  auto rv = ((QVideoEncoderSettings*)this_)->codec();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:115
// [-2] void setCodec(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoEncoderSettings8setCodecERK7QString(void *this_, QString* arg0) {
  ((QVideoEncoderSettings*)this_)->setCodec(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:117
// [8] QSize resolution()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QVideoEncoderSettings10resolutionEv(void *this_) {
  auto rv = ((QVideoEncoderSettings*)this_)->resolution();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:118
// [-2] void setResolution(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoEncoderSettings13setResolutionERK5QSize(void *this_, QSize* arg0) {
  ((QVideoEncoderSettings*)this_)->setResolution(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:119
// [-2] void setResolution(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoEncoderSettings13setResolutionEii(void *this_, int width, int height) {
  ((QVideoEncoderSettings*)this_)->setResolution(width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:121
// [8] qreal frameRate()
extern "C" Q_DECL_EXPORT
qreal C_ZNK21QVideoEncoderSettings9frameRateEv(void *this_) {
  return (qreal)((QVideoEncoderSettings*)this_)->frameRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:122
// [-2] void setFrameRate(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoEncoderSettings12setFrameRateEd(void *this_, qreal rate) {
  ((QVideoEncoderSettings*)this_)->setFrameRate(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:124
// [4] int bitRate()
extern "C" Q_DECL_EXPORT
int C_ZNK21QVideoEncoderSettings7bitRateEv(void *this_) {
  return (int)((QVideoEncoderSettings*)this_)->bitRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:125
// [-2] void setBitRate(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoEncoderSettings10setBitRateEi(void *this_, int bitrate) {
  ((QVideoEncoderSettings*)this_)->setBitRate(bitrate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:127
// [4] QMultimedia::EncodingQuality quality()
extern "C" Q_DECL_EXPORT
QMultimedia::EncodingQuality C_ZNK21QVideoEncoderSettings7qualityEv(void *this_) {
  return (QMultimedia::EncodingQuality)((QVideoEncoderSettings*)this_)->quality();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:128
// [-2] void setQuality(QMultimedia::EncodingQuality)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoEncoderSettings10setQualityEN11QMultimedia15EncodingQualityE(void *this_, QMultimedia::EncodingQuality quality) {
  ((QVideoEncoderSettings*)this_)->setQuality(quality);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:130
// [16] QVariant encodingOption(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QVideoEncoderSettings14encodingOptionERK7QString(void *this_, QString* option) {
  auto rv = ((QVideoEncoderSettings*)this_)->encodingOption(*option);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:132
// [-2] void setEncodingOption(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoEncoderSettings17setEncodingOptionERK7QStringRK8QVariant(void *this_, QString* option, QVariant* value) {
  ((QVideoEncoderSettings*)this_)->setEncodingOption(*option, *value);
}

//  main block end
